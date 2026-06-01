__int64 __fastcall sub_42DEC0(__int64 ***a1, __int64 a2, __int64 *a3, __int64 **a4)
{
  __int64 *v4; // r14
  __int64 *v5; // rbx
  __int64 **v6; // rbp
  __int64 v7; // r13
  __int64 *v8; // r12
  __int64 *v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r8
  char v13; // r15
  char *v14; // rcx
  char *v15; // rax
  void *v16; // rdi
  __int64 *v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rax
  void *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __m128i *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __m128i v31; // xmm0
  bool v32; // cf
  __int64 v33; // rax
  __int64 v34; // r14
  __m128i *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __m128i v40; // xmm0
  __int64 v41; // [rsp+0h] [rbp-70h]
  __int64 v42; // [rsp+8h] [rbp-68h]
  char *v43; // [rsp+10h] [rbp-60h]
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __int128 v45; // [rsp+20h] [rbp-50h]
  unsigned __int64 v46; // [rsp+30h] [rbp-40h]

  v4 = a4[1];
  v5 = *a4;
  v46 = __readfsqword(0x28u);
  v6 = *a1;
  v7 = *a3;
  v8 = *(__int64 **)(a2 + 1672);
  ptr = nullptr;
  v45 = 0;
  v9 = &v5[2 * (_QWORD)v4];
  if ( v5 != v9 )
  {
    do
    {
      v10 = *v5;
      if ( *v5 >= (unsigned __int64)v6[1]
        && v10 < (unsigned __int64)v6[2]
        && (unsigned int)sub_42DD50(v8, (unsigned __int64)v6[3] + v10) != 7 )
      {
        v11 = v45;
        v12 = *v5;
        v13 = *((_BYTE *)v5 + 8);
        if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
        {
          v42 = *((_QWORD *)&v45 + 1);
          v41 = *v5;
          v26 = qvector_reserve(&ptr, 0, v45 + 1, 16);
          v27 = *((_QWORD *)&v45 + 1);
          v28 = (__m128i *)ptr;
          v29 = v45 - 1;
          *((_QWORD *)&v45 + 1) = v42;
          if ( (__int64)v45 - 1 >= 0 )
          {
            v30 = v26;
            do
            {
              v31 = _mm_loadu_si128(v28);
              v30 += 16;
              ++v28;
              *(__m128i *)(v30 - 16) = v31;
              v32 = v29-- == 0;
            }
            while ( !v32 );
            v28 = (__m128i *)ptr;
          }
          v43 = (char *)v26;
          qfree(v28);
          v14 = v43;
          v11 = v45;
          v12 = v41;
          ptr = v43;
          *((_QWORD *)&v45 + 1) = v27;
        }
        else
        {
          v14 = (char *)ptr;
        }
        v15 = &v14[16 * v11];
        *(_QWORD *)v15 = v12;
        v15[8] = v13;
        *(_QWORD *)&v45 = v45 + 1;
      }
      v5 += 2;
    }
    while ( v9 != v5 );
    if ( (_QWORD)v45 )
    {
      v18 = *v6;
      v19 = v18[1];
      v20 = v18[2];
      if ( v20 < v19 + 1 )
      {
        v21 = qvector_reserve(v18, 0, v19 + 1, 32);
        v33 = v18[1];
        v34 = v18[2];
        v18[2] = v20;
        v35 = (__m128i *)*v18;
        v36 = v33 - 1;
        if ( v36 >= 0 )
        {
          v37 = v21;
          do
          {
            v38 = v35->m128i_i64[0];
            v37 += 32;
            v35 += 2;
            *(_QWORD *)(v37 - 32) = v38;
            v39 = v35[-2].m128i_i64[1];
            v40 = _mm_loadu_si128(v35 - 1);
            v35[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v37 - 24) = v39;
            *(__m128i *)(v37 - 16) = v40;
            v35[-1].m128i_i64[1] = 0;
            v32 = v36-- == 0;
          }
          while ( !v32 );
          v35 = (__m128i *)*v18;
        }
        qfree(v35);
        *v18 = v21;
        v19 = v18[1];
        v18[2] = v34;
      }
      else
      {
        v21 = *v18;
      }
      v22 = v21 + 32 * v19;
      *(_QWORD *)(v22 + 8) = 0;
      *(_OWORD *)(v22 + 16) = 0;
      ++v18[1];
      v16 = *(void **)(v22 + 8);
      *(_QWORD *)v22 = v7;
      v23 = ptr;
      v24 = *(_QWORD *)(v22 + 24);
      ptr = v16;
      *(_QWORD *)(v22 + 8) = v23;
      *(_QWORD *)(v22 + 16) = v45;
      v25 = *((_QWORD *)&v45 + 1);
      *((_QWORD *)&v45 + 1) = v24;
      *(_QWORD *)(v22 + 24) = v25;
    }
    else
    {
      v16 = ptr;
    }
    if ( v16 )
    {
      *(_QWORD *)&v45 = 0;
      qfree(v16);
    }
  }
  return 0;
}
