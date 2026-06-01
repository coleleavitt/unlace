unsigned __int64 __fastcall sub_206C6F0(char *src, __int64 a2, char *a3, char *a4)
{
  signed __int64 v5; // rsi
  signed __int64 v8; // r13
  char *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  char *v12; // rdi
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // r9
  char *v16; // rcx
  char *v17; // rdi
  char v18; // dl
  char v19; // dl
  char v20; // dl
  char v21; // dl
  char v22; // dl
  char v23; // dl
  char v24; // dl
  char v25; // dl
  char v26; // dl
  char v27; // dl
  char v28; // dl
  char v29; // dl
  char v30; // dl
  char v31; // dl
  char v32; // dl
  __int64 v33; // rdx
  char *v34; // rcx
  char *v35; // rdx
  char v36; // si
  unsigned __int64 v37; // rdi
  __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  char v40; // r8
  char v41; // dl
  __int64 v42; // rax
  __m128i v43; // xmm0
  char *v44; // rax
  char *v45; // rcx
  char v46; // si
  char v47; // si
  char v48; // si
  char v49; // si
  char v50; // si
  char v51; // si
  char v52; // si
  char v53; // si
  char v54; // si
  char v55; // si
  char v56; // si
  char v57; // si
  char v58; // si
  char v59; // si
  char v60; // dl
  size_t v61; // rax
  char v62; // r15
  size_t v63; // r14
  char v64; // r14
  char *v65; // rcx
  char *v66; // rax
  char v67; // di
  char v68; // si

  v5 = a3 - src;
  if ( !a2 )
    return sub_2012F20(src, v5, *((_QWORD *)src + 15));
  v8 = a3 - src;
  if ( a3 != a4 && a3 != src )
  {
    v9 = src;
    v10 = a4 - src;
    if ( v5 == a4 - a3 )
    {
      if ( (a3 >= src + 16 || src >= a3 + 16) && (unsigned __int64)(a3 - 1 - src) > 0xE )
      {
        v42 = 0;
        do
        {
          v43 = _mm_loadu_si128((const __m128i *)&src[v42]);
          *(__m128i *)&src[v42] = _mm_loadu_si128((const __m128i *)&a3[v42]);
          *(__m128i *)&a3[v42] = v43;
          v42 += 16;
        }
        while ( v42 != (v5 & 0xFFFFFFFFFFFFFFF0LL) );
        v44 = &src[v5 & 0xFFFFFFFFFFFFFFF0LL];
        v45 = &a3[v5 & 0xFFFFFFFFFFFFFFF0LL];
        if ( v5 != (v5 & 0xFFFFFFFFFFFFFFF0LL) )
        {
          v46 = *v44;
          *v44 = *v45;
          *v45 = v46;
          if ( a3 != v44 + 1 )
          {
            v47 = v44[1];
            v44[1] = v45[1];
            v45[1] = v47;
            if ( a3 != v44 + 2 )
            {
              v48 = v44[2];
              v44[2] = v45[2];
              v45[2] = v48;
              if ( a3 != v44 + 3 )
              {
                v49 = v44[3];
                v44[3] = v45[3];
                v45[3] = v49;
                if ( a3 != v44 + 4 )
                {
                  v50 = v44[4];
                  v44[4] = v45[4];
                  v45[4] = v50;
                  if ( a3 != v44 + 5 )
                  {
                    v51 = v44[5];
                    v44[5] = v45[5];
                    v45[5] = v51;
                    if ( a3 != v44 + 6 )
                    {
                      v52 = v44[6];
                      v44[6] = v45[6];
                      v45[6] = v52;
                      if ( a3 != v44 + 7 )
                      {
                        v53 = v44[7];
                        v44[7] = v45[7];
                        v45[7] = v53;
                        if ( a3 != v44 + 8 )
                        {
                          v54 = v44[8];
                          v44[8] = v45[8];
                          v45[8] = v54;
                          if ( a3 != v44 + 9 )
                          {
                            v55 = v44[9];
                            v44[9] = v45[9];
                            v45[9] = v55;
                            if ( a3 != v44 + 10 )
                            {
                              v56 = v44[10];
                              v44[10] = v45[10];
                              v45[10] = v56;
                              if ( a3 != v44 + 11 )
                              {
                                v57 = v44[11];
                                v44[11] = v45[11];
                                v45[11] = v57;
                                if ( a3 != v44 + 12 )
                                {
                                  v58 = v44[12];
                                  v44[12] = v45[12];
                                  v45[12] = v58;
                                  if ( a3 != v44 + 13 )
                                  {
                                    v59 = v44[13];
                                    v44[13] = v45[13];
                                    v45[13] = v59;
                                    if ( a3 != v44 + 14 )
                                    {
                                      v60 = v44[14];
                                      v44[14] = v45[14];
                                      v45[14] = v60;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v65 = a3;
        v66 = src;
        do
        {
          v67 = *v65;
          v68 = *v66++;
          ++v65;
          *(v66 - 1) = v67;
          *(v65 - 1) = v68;
        }
        while ( a3 != v66 );
      }
    }
    else
    {
      v11 = v10 - v5;
      if ( v5 >= v10 - v5 )
        goto LABEL_34;
      while ( v5 != 1 )
      {
        v12 = &v9[v5];
        if ( v11 > 0 )
        {
          if ( (v12 >= v9 + 16 || v5 + 16 <= 0) && (unsigned __int64)(v11 - 1) > 0xE )
          {
            v13 = 0;
            do
            {
              v14 = _mm_loadu_si128((const __m128i *)&v9[v13]);
              *(__m128i *)&v9[v13] = _mm_loadu_si128((const __m128i *)&v12[v13]);
              *(__m128i *)&v12[v13] = v14;
              v13 += 16;
            }
            while ( v13 != (v11 & 0xFFFFFFFFFFFFFFF0LL) );
            v15 = v11 & 0x7FFFFFFFFFFFFFF0LL;
            v16 = &v9[v11 & 0xFFFFFFFFFFFFFFF0LL];
            v17 = &v12[v11 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v11 != (v11 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v18 = *v16;
              *v16 = *v17;
              *v17 = v18;
              if ( v11 > v15 + 1 )
              {
                v19 = v16[1];
                v16[1] = v17[1];
                v17[1] = v19;
                if ( v11 > v15 + 2 )
                {
                  v20 = v16[2];
                  v16[2] = v17[2];
                  v17[2] = v20;
                  if ( v11 > v15 + 3 )
                  {
                    v21 = v16[3];
                    v16[3] = v17[3];
                    v17[3] = v21;
                    if ( v11 > v15 + 4 )
                    {
                      v22 = v16[4];
                      v16[4] = v17[4];
                      v17[4] = v22;
                      if ( v11 > v15 + 5 )
                      {
                        v23 = v16[5];
                        v16[5] = v17[5];
                        v17[5] = v23;
                        if ( v11 > v15 + 6 )
                        {
                          v24 = v16[6];
                          v16[6] = v17[6];
                          v17[6] = v24;
                          if ( v11 > v15 + 7 )
                          {
                            v25 = v16[7];
                            v16[7] = v17[7];
                            v17[7] = v25;
                            if ( v11 > v15 + 8 )
                            {
                              v26 = v16[8];
                              v16[8] = v17[8];
                              v17[8] = v26;
                              if ( v11 > v15 + 9 )
                              {
                                v27 = v16[9];
                                v16[9] = v17[9];
                                v17[9] = v27;
                                if ( v11 > v15 + 10 )
                                {
                                  v28 = v16[10];
                                  v16[10] = v17[10];
                                  v17[10] = v28;
                                  if ( v11 > v15 + 11 )
                                  {
                                    v29 = v16[11];
                                    v16[11] = v17[11];
                                    v17[11] = v29;
                                    if ( v11 > v15 + 12 )
                                    {
                                      v30 = v16[12];
                                      v16[12] = v17[12];
                                      v17[12] = v30;
                                      if ( v11 > v15 + 13 )
                                      {
                                        v31 = v16[13];
                                        v16[13] = v17[13];
                                        v17[13] = v31;
                                        if ( v11 > v15 + 14 )
                                        {
                                          v32 = v16[14];
                                          v16[14] = v17[14];
                                          v17[14] = v32;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              v16 = &v9[v11];
            }
          }
          else
          {
            v16 = &v9[v11];
            do
            {
              v40 = *v12;
              v41 = *v9++;
              ++v12;
              *(v9 - 1) = v40;
              *(v12 - 1) = v41;
            }
            while ( v9 != v16 );
          }
          v9 = v16;
        }
        if ( !(v10 % v5) )
          goto LABEL_39;
        v11 = v5;
        v33 = v5 - v10 % v5;
        while ( 1 )
        {
          v10 = v11;
          v5 = v33;
          v11 -= v33;
          if ( v33 < v11 )
            break;
LABEL_34:
          if ( v11 == 1 )
          {
            v64 = v9[v10 - 1];
            if ( v10 != 1 )
              memmove(v9 + 1, v9, v10 - 1);
            *v9 = v64;
            goto LABEL_39;
          }
          v34 = &v9[v10];
          v35 = &v9[v10 - v11];
          v9 = v35;
          if ( v5 > 0 )
          {
            v9 = &v35[-v5];
            do
            {
              --v35;
              --v34;
              v36 = *v35;
              *v35 = *v34;
              *v34 = v36;
            }
            while ( v35 != v9 );
          }
          v33 = v10 % v11;
          if ( !(v10 % v11) )
            goto LABEL_39;
        }
      }
      v61 = v10 - 1;
      v62 = *v9;
      v63 = v61;
      if ( v61 )
        memmove(v9, v9 + 1, v61);
      v9[v63] = v62;
    }
  }
LABEL_39:
  sub_9B6F20((unsigned __int64 *)src + 8, src);
  v37 = 0xB492B66FBE98F273LL * (((unsigned __int64)(v8 + a2) >> 47) ^ (v8 + a2))
      + *((_QWORD *)src + 8)
      - 0x622015F714C7D297LL
      * (((0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)src + 14) ^ *((_QWORD *)src + 12)))
          ^ *((_QWORD *)src + 14)
          ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)src + 14) ^ *((_QWORD *)src + 12))) >> 47))) >> 47)
       ^ (0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)src + 14) ^ *((_QWORD *)src + 12)))
         ^ *((_QWORD *)src + 14)
         ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)src + 14) ^ *((_QWORD *)src + 12))) >> 47))));
  v38 = *((_QWORD *)src + 10) - 0x4B6D499041670D8DLL * (*((_QWORD *)src + 9) ^ (*((_QWORD *)src + 9) >> 47));
  v39 = 0x9DDFEA08EB382D69LL
      * (v37
       ^ (0x9DDFEA08EB382D69LL
        * (v37
         ^ (v38
          - 0x622015F714C7D297LL
          * ((0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)src + 13) ^ *((_QWORD *)src + 11)))
             ^ *((_QWORD *)src + 13)
             ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)src + 13) ^ *((_QWORD *)src + 11))) >> 47)))
           ^ ((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)src + 13) ^ *((_QWORD *)src + 11)))
              ^ *((_QWORD *)src + 13)
              ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)src + 13) ^ *((_QWORD *)src + 11))) >> 47))) >> 47)))))
       ^ ((0x9DDFEA08EB382D69LL
         * (v37
          ^ (v38
           - 0x622015F714C7D297LL
           * ((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)src + 13) ^ *((_QWORD *)src + 11)))
              ^ *((_QWORD *)src + 13)
              ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)src + 13) ^ *((_QWORD *)src + 11))) >> 47)))
            ^ ((0x9DDFEA08EB382D69LL
              * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)src + 13) ^ *((_QWORD *)src + 11)))
               ^ *((_QWORD *)src + 13)
               ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)src + 13) ^ *((_QWORD *)src + 11))) >> 47))) >> 47))))) >> 47));
  return 0x9DDFEA08EB382D69LL * (v39 ^ (v39 >> 47));
}
