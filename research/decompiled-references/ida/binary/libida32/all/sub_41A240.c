__int64 __fastcall sub_41A240(__int64 *a1, __int64 a2, int *a3, int **a4)
{
  int *v4; // rbx
  int *v5; // rax
  __int64 v6; // rbp
  int v7; // r13d
  __int64 *v8; // r12
  int *v9; // r14
  unsigned int v10; // esi
  __int64 v11; // rax
  int v12; // r8d
  char v13; // r15
  char *v14; // rsi
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
  __int64 v26; // r10
  __int64 *v27; // rdi
  __int64 v28; // rax
  char *v29; // rdx
  __int64 v30; // rcx
  bool v31; // cf
  __int64 v32; // rax
  __int64 v33; // r14
  __m128i *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int32 v37; // ecx
  __int64 v38; // rcx
  __m128i v39; // xmm0
  int v40; // [rsp+4h] [rbp-6Ch]
  __int64 v41; // [rsp+8h] [rbp-68h]
  __int64 v42; // [rsp+8h] [rbp-68h]
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __int128 v44; // [rsp+20h] [rbp-50h]
  unsigned __int64 v45; // [rsp+30h] [rbp-40h]

  v4 = *a4;
  v5 = a4[1];
  v45 = __readfsqword(0x28u);
  v6 = *a1;
  v7 = *a3;
  v8 = *(__int64 **)(a2 + 1480);
  ptr = nullptr;
  v9 = &v4[2 * (_QWORD)v5];
  v44 = 0;
  if ( v4 != v9 )
  {
    do
    {
      v10 = *v4;
      if ( (unsigned int)*v4 >= *(_DWORD *)(v6 + 8)
        && v10 < *(_DWORD *)(v6 + 12)
        && (unsigned int)sub_41A0E0(v8, *(_DWORD *)(v6 + 16) + v10) != 7 )
      {
        v11 = v44;
        v12 = *v4;
        v13 = *((_BYTE *)v4 + 4);
        if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)(v44 + 1) )
        {
          v41 = *((_QWORD *)&v44 + 1);
          v40 = *v4;
          v14 = (char *)qvector_reserve(&ptr, 0, v44 + 1, 8);
          v26 = *((_QWORD *)&v44 + 1);
          v27 = (__int64 *)ptr;
          v28 = v44 - 1;
          *((_QWORD *)&v44 + 1) = v41;
          if ( (__int64)v44 - 1 >= 0 )
          {
            v29 = v14;
            do
            {
              v30 = *v27;
              v29 += 8;
              ++v27;
              *((_QWORD *)v29 - 1) = v30;
              v31 = v28-- == 0;
            }
            while ( !v31 );
            v27 = (__int64 *)ptr;
          }
          v42 = v26;
          qfree(v27);
          v11 = v44;
          v12 = v40;
          ptr = v14;
          *((_QWORD *)&v44 + 1) = v42;
        }
        else
        {
          v14 = (char *)ptr;
        }
        v15 = &v14[8 * v11];
        *(_DWORD *)v15 = v12;
        v15[4] = v13;
        *(_QWORD *)&v44 = v44 + 1;
      }
      v4 += 2;
    }
    while ( v9 != v4 );
    if ( (_QWORD)v44 )
    {
      v18 = *(__int64 **)v6;
      v19 = v18[1];
      v20 = v18[2];
      if ( v20 < v19 + 1 )
      {
        v21 = qvector_reserve(v18, 0, v19 + 1, 32);
        v32 = v18[1];
        v33 = v18[2];
        v18[2] = v20;
        v34 = (__m128i *)*v18;
        v35 = v32 - 1;
        if ( v35 >= 0 )
        {
          v36 = v21;
          do
          {
            v37 = v34->m128i_i32[0];
            v36 += 32;
            v34 += 2;
            *(_DWORD *)(v36 - 32) = v37;
            v38 = v34[-2].m128i_i64[1];
            v39 = _mm_loadu_si128(v34 - 1);
            v34[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v36 - 24) = v38;
            *(__m128i *)(v36 - 16) = v39;
            v34[-1].m128i_i64[1] = 0;
            v31 = v35-- == 0;
          }
          while ( !v31 );
          v34 = (__m128i *)*v18;
        }
        qfree(v34);
        *v18 = v21;
        v19 = v18[1];
        v18[2] = v33;
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
      *(_DWORD *)v22 = v7;
      v23 = ptr;
      v24 = *(_QWORD *)(v22 + 24);
      ptr = v16;
      *(_QWORD *)(v22 + 8) = v23;
      *(_QWORD *)(v22 + 16) = v44;
      v25 = *((_QWORD *)&v44 + 1);
      *((_QWORD *)&v44 + 1) = v24;
      *(_QWORD *)(v22 + 24) = v25;
    }
    else
    {
      v16 = ptr;
    }
    if ( v16 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v16);
    }
  }
  return 0;
}

