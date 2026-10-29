__int64 __fastcall sub_110B1B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  __m128i *v4; // rbx
  _QWORD *v6; // rbp
  const __m128i *v7; // rcx
  __m128i *v8; // rbp
  const __m128i *v9; // rdx
  const __m128i *v10; // rax
  __m128i *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  const __m128i *v16; // rdx
  _QWORD *v17; // rdx
  _QWORD *v18; // r14
  void **v19; // rdi
  void **v20; // r15
  void **v21; // rbx
  const __m128i *v22; // r14
  const __m128i *v23; // rbp
  void **v24; // rdi
  void **v25; // r15
  void **v26; // rbx
  _QWORD *v28; // r14
  void **v29; // rdi
  void **v30; // r15
  void **v31; // rbx
  _QWORD *v32; // r14
  void **v33; // rdi
  void **v34; // r15
  void **v35; // rbx
  __m128i *v36; // r14
  void **v37; // rdi
  void **v38; // r15
  void **v39; // rbp
  _QWORD *v40; // r14
  void **v41; // rsi
  void **v42; // rcx
  void **v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  void **v48; // rsi
  void **v49; // r15
  void **v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int64 v55; // [rsp+8h] [rbp-60h]
  void **v56; // [rsp+8h] [rbp-60h]
  unsigned __int64 v57; // [rsp+10h] [rbp-58h]
  unsigned int v58; // [rsp+1Ch] [rbp-4Ch]
  __m128i *v59; // [rsp+20h] [rbp-48h]
  __m128i *v60; // [rsp+20h] [rbp-48h]

  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a1 + 8);
    v4 = *(__m128i **)a2;
    v6 = *(_QWORD **)a1;
    v55 = v3;
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v58 = *(_DWORD *)(a2 + 8);
      v57 = v58;
      if ( v58 > v3 )
      {
        if ( v58 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          v32 = &v6[7 * v3];
          while ( v32 != v6 )
          {
            while ( 1 )
            {
              v32 -= 7;
              v33 = (void **)v32[4];
              v34 = (void **)v32[5];
              v35 = v33;
              if ( v34 != v33 )
              {
                do
                {
                  while ( *v35 != v35 + 2 )
                  {
                    operator delete(*v35);
                    v35 += 4;
                    if ( v34 == v35 )
                      goto LABEL_56;
                  }
                  v35 += 4;
                }
                while ( v34 != v35 );
LABEL_56:
                v33 = (void **)v32[4];
              }
              if ( v33 )
                operator delete(v33);
              if ( (_QWORD *)*v32 == v32 + 2 )
                break;
              operator delete((void *)*v32);
              if ( v32 == v6 )
                goto LABEL_61;
            }
          }
LABEL_61:
          *(_DWORD *)(a1 + 8) = 0;
          sub_110AFC0(a1, v58);
          v4 = *(__m128i **)a2;
          v55 = 0;
          v6 = *(_QWORD **)a1;
          v57 = *(unsigned int *)(a2 + 8);
          v7 = *(const __m128i **)a2;
          goto LABEL_6;
        }
        v7 = *(const __m128i **)a2;
        if ( !*(_DWORD *)(a1 + 8) )
        {
LABEL_6:
          v8 = (__m128i *)((char *)v6 + v55);
          v9 = (__m128i *)((char *)v4 + 56 * v57);
          if ( v9 != v7 )
          {
            v10 = v7 + 1;
            v11 = (__m128i *)((char *)v8
                            + 56
                            * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)((char *)v9 - (char *)v7 - 56) >> 3))
                             & 0x1FFFFFFFFFFFFFFFLL)
                            + 56);
            do
            {
              v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
              v16 = (const __m128i *)v10[-1].m128i_i64[0];
              if ( v10 == v16 )
              {
                v8[1] = _mm_loadu_si128(v10);
              }
              else
              {
                v8->m128i_i64[0] = (__int64)v16;
                v8[1].m128i_i64[0] = v10->m128i_i64[0];
              }
              v8 = (__m128i *)((char *)v8 + 56);
              v8[-3].m128i_i64[0] = v10[-1].m128i_i64[1];
              v10->m128i_i8[0] = 0;
              v10[-1].m128i_i64[0] = (__int64)v10;
              v10 = (const __m128i *)((char *)v10 + 56);
              v10[-4].m128i_i64[0] = 0;
              *(__m128i *)((char *)&v8[-2] + 8) = 0;
              v8[-1].m128i_i64[1] = 0;
              v8[-2].m128i_i64[1] = v10[-3].m128i_i64[1];
              v12 = v10[-2].m128i_i64[0];
              v10[-3].m128i_i64[1] = 0;
              v13 = v8[-1].m128i_i64[0];
              v8[-1].m128i_i64[0] = v12;
              v14 = v10[-2].m128i_i64[1];
              v10[-2].m128i_i64[0] = v13;
              v15 = v8[-1].m128i_i64[1];
              v8[-1].m128i_i64[1] = v14;
              v10[-2].m128i_i64[1] = v15;
            }
            while ( v11 != v8 );
            v4 = *(__m128i **)a2;
          }
          *(_DWORD *)(a1 + 8) = v58;
          v36 = (__m128i *)((char *)v4 + 56 * *(unsigned int *)(a2 + 8));
          while ( v36 != v4 )
          {
            while ( 1 )
            {
              v36 = (__m128i *)((char *)v36 - 56);
              v37 = (void **)v36[2].m128i_i64[0];
              v38 = (void **)v36[2].m128i_i64[1];
              v39 = v37;
              if ( v38 != v37 )
              {
                do
                {
                  while ( *v39 != v39 + 2 )
                  {
                    operator delete(*v39);
                    v39 += 4;
                    if ( v39 == v38 )
                      goto LABEL_76;
                  }
                  v39 += 4;
                }
                while ( v38 != v39 );
LABEL_76:
                v37 = (void **)v36[2].m128i_i64[0];
              }
              if ( v37 )
                operator delete(v37);
              if ( (__m128i *)v36->m128i_i64[0] == &v36[1] )
                break;
              operator delete((void *)v36->m128i_i64[0]);
              if ( v36 == v4 )
                goto LABEL_32;
            }
          }
LABEL_32:
          *(_DWORD *)(a2 + 8) = 0;
          return a1;
        }
        v55 *= 56LL;
        v60 = (__m128i *)((char *)v4 + v55);
        while ( 1 )
        {
          sub_A0AAD0((__int64)v6, v4);
          v48 = (void **)v6[4];
          v6[6] = 0;
          v49 = (void **)v6[5];
          *((_OWORD *)v6 + 2) = 0;
          v50 = v48;
          v6[4] = v4[2].m128i_i64[0];
          v51 = v4[2].m128i_i64[1];
          v4[2].m128i_i64[0] = 0;
          v52 = v6[5];
          v6[5] = v51;
          v53 = v4[3].m128i_i64[0];
          v4[2].m128i_i64[1] = v52;
          v54 = v6[6];
          v6[6] = v53;
          v4[3].m128i_i64[0] = v54;
          if ( v48 == v49 )
          {
LABEL_99:
            if ( v48 )
              goto LABEL_100;
LABEL_104:
            v4 = (__m128i *)((char *)v4 + 56);
            v6 += 7;
            if ( v60 == v4 )
            {
LABEL_101:
              v4 = *(__m128i **)a2;
              v6 = *(_QWORD **)a1;
              v57 = *(unsigned int *)(a2 + 8);
              v7 = (const __m128i *)(*(_QWORD *)a2 + v55);
              goto LABEL_6;
            }
          }
          else
          {
            do
            {
              while ( *v50 != v50 + 2 )
              {
                operator delete(*v50);
                v50 += 4;
                if ( v49 == v50 )
                  goto LABEL_99;
              }
              v50 += 4;
            }
            while ( v49 != v50 );
            if ( !v48 )
              goto LABEL_104;
LABEL_100:
            v4 = (__m128i *)((char *)v4 + 56);
            v6 += 7;
            operator delete(v48);
            if ( v60 == v4 )
              goto LABEL_101;
          }
        }
      }
      v17 = *(_QWORD **)a1;
      if ( !v58 )
      {
LABEL_13:
        v18 = &v17[7 * v55];
        while ( v6 != v18 )
        {
          while ( 1 )
          {
            v18 -= 7;
            v19 = (void **)v18[4];
            v20 = (void **)v18[5];
            v21 = v19;
            if ( v20 != v19 )
            {
              do
              {
                while ( *v21 != v21 + 2 )
                {
                  operator delete(*v21);
                  v21 += 4;
                  if ( v21 == v20 )
                    goto LABEL_18;
                }
                v21 += 4;
              }
              while ( v20 != v21 );
LABEL_18:
              v19 = (void **)v18[4];
            }
            if ( v19 )
              operator delete(v19);
            if ( (_QWORD *)*v18 == v18 + 2 )
              break;
            operator delete((void *)*v18);
            if ( v6 == v18 )
              goto LABEL_23;
          }
        }
LABEL_23:
        v22 = *(const __m128i **)a2;
        *(_DWORD *)(a1 + 8) = v58;
        v23 = (const __m128i *)((char *)v22 + 56 * *(unsigned int *)(a2 + 8));
        while ( v22 != v23 )
        {
          while ( 1 )
          {
            v23 = (const __m128i *)((char *)v23 - 56);
            v24 = (void **)v23[2].m128i_i64[0];
            v25 = (void **)v23[2].m128i_i64[1];
            v26 = v24;
            if ( v25 != v24 )
            {
              do
              {
                while ( *v26 != v26 + 2 )
                {
                  operator delete(*v26);
                  v26 += 4;
                  if ( v25 == v26 )
                    goto LABEL_27;
                }
                v26 += 4;
              }
              while ( v25 != v26 );
LABEL_27:
              v24 = (void **)v23[2].m128i_i64[0];
            }
            if ( v24 )
              operator delete(v24);
            if ( (const __m128i *)v23->m128i_i64[0] == &v23[1] )
              break;
            operator delete((void *)v23->m128i_i64[0]);
            if ( v22 == v23 )
              goto LABEL_32;
          }
        }
        goto LABEL_32;
      }
      v40 = *(_QWORD **)a1;
      v59 = (__m128i *)((char *)v4 + 56 * v58);
      while ( 1 )
      {
        sub_A0AAD0((__int64)v40, v4);
        v41 = (void **)v40[4];
        v40[6] = 0;
        v42 = (void **)v40[5];
        *((_OWORD *)v40 + 2) = 0;
        v43 = v41;
        v40[4] = v4[2].m128i_i64[0];
        v44 = v4[2].m128i_i64[1];
        v4[2].m128i_i64[0] = 0;
        v45 = v40[5];
        v40[5] = v44;
        v46 = v4[3].m128i_i64[0];
        v4[2].m128i_i64[1] = v45;
        v47 = v40[6];
        v56 = v42;
        v40[6] = v46;
        v4[3].m128i_i64[0] = v47;
        if ( v41 == v42 )
        {
LABEL_88:
          if ( v41 )
            goto LABEL_89;
LABEL_93:
          v4 = (__m128i *)((char *)v4 + 56);
          v40 += 7;
          if ( v4 == v59 )
          {
LABEL_90:
            v6 += 7 * v58;
            v17 = *(_QWORD **)a1;
            v55 = *(unsigned int *)(a1 + 8);
            goto LABEL_13;
          }
        }
        else
        {
          do
          {
            while ( *v43 != v43 + 2 )
            {
              operator delete(*v43);
              v43 += 4;
              if ( v56 == v43 )
                goto LABEL_88;
            }
            v43 += 4;
          }
          while ( v56 != v43 );
          if ( !v41 )
            goto LABEL_93;
LABEL_89:
          v4 = (__m128i *)((char *)v4 + 56);
          v40 += 7;
          operator delete(v41);
          if ( v4 == v59 )
            goto LABEL_90;
        }
      }
    }
    v28 = &v6[7 * v3];
    if ( v28 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v28 -= 7;
          v29 = (void **)v28[4];
          v30 = (void **)v28[5];
          v31 = v29;
          if ( v30 != v29 )
          {
            do
            {
              while ( *v31 != v31 + 2 )
              {
                operator delete(*v31);
                v31 += 4;
                if ( v30 == v31 )
                  goto LABEL_38;
              }
              v31 += 4;
            }
            while ( v30 != v31 );
LABEL_38:
            v29 = (void **)v28[4];
          }
          if ( v29 )
            operator delete(v29);
          if ( (_QWORD *)*v28 == v28 + 2 )
            break;
          operator delete((void *)*v28);
          if ( v28 == v6 )
            goto LABEL_43;
        }
      }
      while ( v28 != v6 );
LABEL_43:
      v6 = *(_QWORD **)a1;
    }
    if ( v6 != (_QWORD *)(a1 + 16) )
      free(v6);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)a2 = a2 + 16;
  }
  return a1;
}
