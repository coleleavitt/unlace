unsigned __int64 __fastcall sub_69E9F0(__m128i *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __m128i v12; // xmm0
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rbp
  void *v20; // rdi
  char *v21; // rbx
  char v22; // al
  char *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 i; // r14
  void *v27; // rdi
  void *v29; // rdi
  void *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __m128i v33; // [rsp+0h] [rbp-88h] BYREF
  __m128i v34; // [rsp+10h] [rbp-78h] BYREF
  __m128i v35; // [rsp+20h] [rbp-68h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v37; // [rsp+38h] [rbp-50h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  sub_69A9F0(a1, a2, a3);
  v7 = a1[1].m128i_i64[1];
  if ( v7 && a2 < *(_QWORD *)(a1[1].m128i_i64[0] + 16 * v7 - 8) )
    return v38 - __readfsqword(0x28u);
  v34.m128i_i64[0] = a3;
  v34.m128i_i64[1] = a4 + a3;
  v37 = 0;
  ptr = nullptr;
  v8 = sub_69D7A0(a1, (__int64 *)&ptr, a2, &v34);
  v9 = ptr;
  if ( !v8 )
    goto LABEL_17;
  if ( (_QWORD)v37 )
  {
    if ( *((_BYTE *)ptr + 97) == 1 && *((_QWORD *)ptr + 1) == 1 && !*((_QWORD *)ptr + 9) )
    {
      v10 = **(_QWORD **)ptr;
      if ( v10 != -1 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)ptr + 8LL);
        v12 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)v11);
        if ( v10 != v11 && v11 != -1 )
        {
          v13 = a1[1].m128i_i64[1];
          v14 = a1[1].m128i_u64[0];
          v15 = a1[2].m128i_u64[0];
          v35 = v12;
          v16 = v13 + 1;
          if ( (unsigned __int64)&v35 < v14 || (unsigned __int64)&v35 >= v14 + 16 * v15 )
          {
            if ( v15 < v16 )
            {
              v31 = qvector_reserve(&a1[1], v14, v13 + 1, 16);
              a1[1].m128i_i64[0] = v31;
              v13 = a1[1].m128i_i64[1];
              v14 = v31;
            }
            *(__m128i *)(v14 + 16 * v13) = _mm_load_si128(&v35);
          }
          else
          {
            if ( v15 < v16 )
            {
              v33 = v12;
              v32 = qvector_reserve(&a1[1], v14, v13 + 1, 16);
              v13 = a1[1].m128i_i64[1];
              v12 = _mm_load_si128(&v33);
              a1[1].m128i_i64[0] = v32;
              v14 = v32;
            }
            *(__m128i *)(v14 + 16 * v13) = v12;
          }
          ++a1[1].m128i_i64[1];
          v9 = ptr;
        }
      }
    }
LABEL_17:
    if ( v9 )
    {
      v17 = v37;
      if ( (_QWORD)v37 )
      {
        v18 = 0;
        v19 = 0;
        do
        {
          v21 = &v9[v18];
          v22 = v9[v18 + 97];
          if ( v22 == 2 )
          {
            v23 = *((char **)v21 + 3);
            if ( v23 )
            {
              v24 = *((_QWORD *)v21 + 4);
              if ( v24 )
              {
                v25 = 0;
                for ( i = 0; i != v24; ++i )
                {
                  v27 = *(void **)&v23[v25];
                  if ( v27 )
                  {
                    *(_QWORD *)&v23[v25 + 8] = 0;
                    v33.m128i_i64[0] = v24;
                    qfree(v27);
                    v23 = *((char **)v21 + 3);
                    v24 = v33.m128i_i64[0];
                  }
                  v25 += 56;
                }
              }
              *((_QWORD *)v21 + 4) = 0;
              qfree(v23);
            }
          }
          else if ( v22 == 1 )
          {
            v29 = *((void **)v21 + 8);
            if ( v29 )
            {
              *((_QWORD *)v21 + 9) = 0;
              qfree(v29);
            }
            v30 = *((void **)v21 + 3);
            if ( v30 )
            {
              *((_QWORD *)v21 + 4) = 0;
              qfree(v30);
            }
          }
          v20 = *(void **)v21;
          v21[97] = 0;
          if ( v20 )
          {
            *((_QWORD *)v21 + 1) = 0;
            qfree(v20);
          }
          ++v19;
          v9 = ptr;
          v18 += 104;
        }
        while ( v17 != v19 );
      }
      goto LABEL_33;
    }
    return v38 - __readfsqword(0x28u);
  }
  if ( ptr )
  {
LABEL_33:
    *(_QWORD *)&v37 = 0;
    qfree(v9);
  }
  return v38 - __readfsqword(0x28u);
}
