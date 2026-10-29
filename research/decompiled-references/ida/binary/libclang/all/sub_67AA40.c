void __fastcall sub_67AA40(__m128i **a1)
{
  __m128i **v2; // rdi
  __m128i *v3; // r12
  __m128i **v4; // rbp
  bool v5; // zf
  __m128i **v6; // rdi
  __m128i *v7; // rbx
  __m128i **v8; // r14
  __m128i **v9; // rdi
  __m128i *v10; // r15
  __m128i *v11; // r13
  __int64 v12; // rdi
  __m128i **v13; // rdi
  __m128i *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // r14
  _QWORD *v22; // rax
  __m128i **v23; // rdi
  __m128i *v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rbx
  _QWORD *v31; // r15
  __m128i **v32; // rdi
  __m128i *v33; // rbp
  __int64 v34; // rbx
  __int64 v35; // r12
  __int64 v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rbx
  _QWORD *v40; // r13
  int v41; // [rsp+0h] [rbp-58h]
  __m128i *v42; // [rsp+0h] [rbp-58h]
  _QWORD *v44; // [rsp+10h] [rbp-48h]
  __m128i *v45; // [rsp+18h] [rbp-40h]

  if ( a1 )
  {
    v41 = *((_DWORD *)a1 + 178);
    *((_DWORD *)a1 + 178) = v41 - 1;
    if ( v41 == 1 )
    {
      v2 = (__m128i **)a1[85];
      if ( v2 != a1 + 87 )
        free(v2);
      v45 = a1[21];
      v3 = (__m128i *)((char *)v45 + 248 * *((unsigned int *)a1 + 44));
      if ( v45 != v3 )
      {
        do
        {
          v4 = (__m128i **)v3[-5].m128i_i64[0];
          v3 = (__m128i *)((char *)v3 - 248);
          if ( v4 )
          {
            v5 = (*((_DWORD *)v4 + 178))-- == 1;
            if ( v5 )
            {
              v6 = (__m128i **)v4[85];
              if ( v6 != v4 + 87 )
                free(v6);
              v42 = v4[21];
              v7 = (__m128i *)((char *)v42 + 248 * *((unsigned int *)v4 + 44));
              if ( v42 != v7 )
              {
                do
                {
                  while ( 1 )
                  {
                    v8 = (__m128i **)v7[-5].m128i_i64[0];
                    v7 = (__m128i *)((char *)v7 - 248);
                    if ( v8 )
                    {
                      v5 = (*((_DWORD *)v8 + 178))-- == 1;
                      if ( v5 )
                      {
                        v9 = (__m128i **)v8[85];
                        if ( v9 != v8 + 87 )
                          free(v9);
                        v10 = v8[21];
                        v11 = (__m128i *)((char *)v10 + 248 * *((unsigned int *)v8 + 44));
                        if ( v10 != v11 )
                        {
                          do
                          {
                            v12 = v11[-5].m128i_i64[0];
                            v11 = (__m128i *)((char *)v11 - 248);
                            sub_67AA40(v12);
                          }
                          while ( v10 != v11 );
                          v11 = v8[21];
                        }
                        if ( v11 != (__m128i *)(v8 + 23) )
                          free(v11);
                        v13 = (__m128i **)v8[1];
                        if ( v13 != v8 + 3 )
                          free(v13);
                        --(*v8)[15].m128i_i32[0];
                        v14 = *v8;
                        if ( !(*v8)[15].m128i_i32[0] )
                        {
                          v15 = 16LL * v14[13].m128i_u32[2];
                          v16 = v14[13].m128i_i64[0];
                          v17 = v16 + v15;
                          while ( v17 != v16 )
                          {
                            v16 += 16;
                            operator delete();
                          }
                          v18 = v14[10].m128i_u32[2];
                          v14[13].m128i_i32[2] = 0;
                          if ( (_DWORD)v18 )
                            break;
                        }
                      }
                    }
                    if ( v42 == v7 )
                      goto LABEL_34;
                  }
                  v19 = (_QWORD *)v14[10].m128i_i64[0];
                  v14[14].m128i_i64[0] = 0;
                  v20 = 8 * v18;
                  v21 = &v19[v18];
                  v22 = v19 + 1;
                  v14[9] = _mm_unpacklo_epi64(
                             (__m128i)(unsigned __int64)*v19,
                             (__m128i)(unsigned __int64)(*v19 + 4096LL));
                  if ( v20 != 8 )
                  {
                    do
                    {
                      v44 = v22;
                      operator delete();
                      v22 = v44 + 1;
                    }
                    while ( v21 != v44 + 1 );
                  }
                  v14[10].m128i_i32[2] = 1;
                }
                while ( v42 != v7 );
LABEL_34:
                v7 = v4[21];
              }
              if ( v7 != (__m128i *)(v4 + 23) )
                free(v7);
              v23 = (__m128i **)v4[1];
              if ( v23 != v4 + 3 )
                free(v23);
              --(*v4)[15].m128i_i32[0];
              v24 = *v4;
              if ( !v24[15].m128i_i32[0] )
              {
                v25 = v24[13].m128i_i64[0];
                v26 = v25 + 16LL * v24[13].m128i_u32[2];
                while ( v26 != v25 )
                {
                  v25 += 16;
                  operator delete();
                }
                v24[13].m128i_i32[2] = 0;
                v27 = v24[10].m128i_u32[2];
                if ( (_DWORD)v27 )
                {
                  v28 = (_QWORD *)v24[10].m128i_i64[0];
                  v29 = v27;
                  v24[14].m128i_i64[0] = 0;
                  v30 = &v28[v29];
                  v31 = v28 + 1;
                  v24[9] = _mm_unpacklo_epi64(
                             (__m128i)(unsigned __int64)*v28,
                             (__m128i)(unsigned __int64)(*v28 + 4096LL));
                  if ( v29 != 1 )
                  {
                    do
                    {
                      ++v31;
                      operator delete();
                    }
                    while ( v30 != v31 );
                  }
                  v24[10].m128i_i32[2] = 1;
                }
              }
            }
          }
        }
        while ( v45 != v3 );
        v3 = a1[21];
      }
      if ( v3 != (__m128i *)(a1 + 23) )
        free(v3);
      v32 = (__m128i **)a1[1];
      if ( v32 != a1 + 3 )
        free(v32);
      --(*a1)[15].m128i_i32[0];
      v33 = *a1;
      if ( !(*a1)[15].m128i_i32[0] )
      {
        v34 = v33[13].m128i_i64[0];
        v35 = v34 + 16LL * v33[13].m128i_u32[2];
        while ( v35 != v34 )
        {
          v34 += 16;
          operator delete();
        }
        v33[13].m128i_i32[2] = 0;
        v36 = v33[10].m128i_u32[2];
        if ( (_DWORD)v36 )
        {
          v37 = (_QWORD *)v33[10].m128i_i64[0];
          v38 = v36;
          v33[14].m128i_i64[0] = 0;
          v39 = &v37[v38];
          v40 = v37 + 1;
          v33[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v37, (__m128i)(unsigned __int64)(*v37 + 4096LL));
          if ( v38 != 1 )
          {
            do
            {
              ++v40;
              operator delete();
            }
            while ( v39 != v40 );
          }
          v33[10].m128i_i32[2] = 1;
        }
      }
    }
  }
}

