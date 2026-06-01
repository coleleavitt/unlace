void __fastcall sub_DB8D00(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // r12
  __int64 *v8; // r12
  __int64 v9; // r14
  __int64 i; // rbx
  __int64 *v11; // r13
  __int64 *v12; // rbp
  __int64 *v13; // r13
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rbx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __m128i v22; // xmm0
  unsigned __int64 v23; // rdx
  __int64 *v24; // rdi
  __int64 *v25; // rdx
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 *v29; // r9
  __int64 v30; // r11
  __int64 *v31; // r14
  __int64 v32; // rdx
  __int64 *v33; // rdi
  __int64 v34; // rsi
  char *v35; // rbx
  __int64 v36; // rdx
  __m128i v37; // xmm0
  unsigned __int64 v38; // rdx
  __int64 *v39; // rcx
  __int64 *v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rbp
  __int64 v43; // rbx
  __int64 v44; // rsi
  __int64 *v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // r10
  __int64 j; // rdx
  __int64 v50; // rsi
  __int64 v51; // rbx
  __int64 v52; // r14
  __int64 *v53; // rbp
  __int64 *v54; // r12
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __m128i v58; // xmm0
  unsigned __int64 v59; // rax
  __int64 *v60; // rdx
  __int64 *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r14
  __int64 v64; // rcx
  signed __int64 v65; // rdx
  __int64 v66; // r14
  __int64 *v67; // rdx
  __int64 *v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // [rsp+8h] [rbp-90h]
  __int64 v73; // [rsp+18h] [rbp-80h]
  __int64 v75; // [rsp+28h] [rbp-70h]
  __int64 *v76; // [rsp+28h] [rbp-70h]
  __int64 dest; // [rsp+30h] [rbp-68h]
  __int64 v79; // [rsp+40h] [rbp-58h]
  __int64 v80; // [rsp+40h] [rbp-58h]
  _QWORD *v81; // [rsp+48h] [rbp-50h] BYREF
  _QWORD *v82[8]; // [rsp+58h] [rbp-40h] BYREF

  v73 = a4;
  v81 = a6;
  if ( a5 && a4 )
  {
    v6 = a5;
    if ( a5 + a4 == 2 )
    {
LABEL_44:
      v42 = *a2;
      v43 = *a1;
      v44 = *a2;
      v81 = a6;
      if ( sub_DB0E50(&v81, v44, v43) )
      {
        *a1 = v42;
        *a2 = v43;
      }
    }
    else
    {
      while ( 1 )
      {
        if ( v73 <= v6 )
        {
          v80 = v6;
          dest = v6 / 2;
          v51 = a2 - a1;
          v76 = &a2[v6 / 2];
          v52 = *v76;
          v53 = a1;
          v82[0] = a6;
          while ( v51 > 0 )
          {
            while ( 1 )
            {
              v54 = &v53[v51 >> 1];
              if ( sub_DB0E50(v82, v52, *v54) )
                break;
              v53 = v54 + 1;
              v51 = v51 - (v51 >> 1) - 1;
              if ( v51 <= 0 )
                goto LABEL_58;
            }
            v51 >>= 1;
          }
LABEL_58:
          v13 = v53;
          v12 = v76;
          v14 = v80;
          v75 = v13 - a1;
        }
        else
        {
          v79 = v6;
          v8 = a2;
          v75 = v73 / 2;
          v9 = a1[v73 / 2];
          v82[0] = a6;
          for ( i = (a3 - (__int64)a2) >> 3; i > 0; i >>= 1 )
          {
            while ( 1 )
            {
              v11 = &v8[i >> 1];
              if ( !sub_DB0E50(v82, *v11, v9) )
                break;
              v8 = v11 + 1;
              i = i - (i >> 1) - 1;
              if ( i <= 0 )
                goto LABEL_9;
            }
          }
LABEL_9:
          v12 = v8;
          v13 = &a1[v73 / 2];
          v14 = v79;
          dest = v12 - a2;
        }
        if ( a2 == v13 )
        {
          a2 = v12;
        }
        else if ( a2 == v12 )
        {
          a2 = v13;
        }
        else
        {
          v15 = v12 - v13;
          v16 = a2 - v13;
          if ( v16 == v15 - v16 )
          {
            v55 = (char *)(a2 - 1) - (char *)v13;
            if ( v55 <= 8 || (unsigned __int64)((char *)a2 + 15 - (char *)v13) <= 0x1E )
            {
              v67 = a2;
              v68 = v13;
              do
              {
                v69 = *v67;
                v70 = *v68++;
                ++v67;
                *(v68 - 1) = v69;
                *(v67 - 1) = v70;
              }
              while ( a2 != v68 );
            }
            else
            {
              v56 = 0;
              v57 = (v55 >> 3) + 1;
              do
              {
                v58 = _mm_loadu_si128((const __m128i *)&v13[v56]);
                *(__m128i *)&v13[v56] = _mm_loadu_si128((const __m128i *)&a2[v56]);
                *(__m128i *)&a2[v56] = v58;
                v56 += 2;
              }
              while ( v56 != 2 * (v57 >> 1) );
              if ( (v57 & 1) != 0 )
              {
                v59 = v57 & 0xFFFFFFFFFFFFFFFELL;
                v60 = &a2[v59];
                v61 = &v13[v59];
                v62 = *v61;
                *v61 = *v60;
                *v60 = v62;
              }
            }
          }
          else
          {
            v17 = v13;
            a2 = (__int64 *)((char *)v13 + (char *)v12 - (char *)a2);
            while ( 1 )
            {
              v18 = v15 - v16;
              if ( v16 < (__int64)(v15 - v16) )
                break;
LABEL_27:
              v28 = 8 * v15;
              v29 = &v17[v15];
              if ( v18 == 1 )
              {
                v66 = v17[(unsigned __int64)v28 / 8 - 1];
                if ( v28 - 8 <= 8 )
                {
                  if ( v28 == 16 )
                    *(v29 - 1) = *v17;
                }
                else
                {
                  memmove(v17 + 1, v17, v28 - 8);
                }
                *v17 = v66;
                goto LABEL_41;
              }
              v30 = 8 * v16;
              v31 = &v17[v16];
              if ( v16 <= 0 )
              {
                v17 += v16;
              }
              else
              {
                if ( (unsigned __int64)(v16 - 1) <= 1 || (v32 = v28 - 16, v28 > v30 - 16) && v30 > v32 )
                {
                  v45 = &v17[v16];
                  v46 = 0;
                  do
                  {
                    v47 = *(v45 - 1);
                    v48 = *(v29 - 1);
                    ++v46;
                    --v45;
                    --v29;
                    *v45 = v48;
                    *v29 = v47;
                  }
                  while ( v16 != v46 );
                }
                else
                {
                  v33 = &v17[(unsigned __int64)v30 / 8 - 2];
                  v34 = 0;
                  v35 = (char *)v17 + v32;
                  v36 = 0;
                  do
                  {
                    v37 = _mm_loadu_si128((const __m128i *)&v33[v36]);
                    ++v34;
                    *(__m128i *)&v33[v36] = _mm_loadu_si128((const __m128i *)&v35[v36 * 8]);
                    *(__m128i *)&v35[v36 * 8] = v37;
                    v36 -= 2;
                  }
                  while ( v34 != (unsigned __int64)v16 >> 1 );
                  if ( (v16 & 1) != 0 )
                  {
                    v38 = -8LL * (v16 & 0xFFFFFFFFFFFFFFFELL) - 8;
                    v39 = (__int64 *)((char *)v31 + v38);
                    v40 = (__int64 *)((char *)v29 + v38);
                    v41 = *v39;
                    *v39 = *v40;
                    *v40 = v41;
                  }
                }
                v17 = &v31[v30 / 0xFFFFFFFFFFFFFFF8LL];
              }
              v16 = v15 % v18;
              if ( !(v15 % v18) )
                goto LABEL_41;
              v15 = v18;
            }
            while ( v16 != 1 )
            {
              v19 = (unsigned __int64)&v17[v16];
              if ( (__int64)v18 > 0 )
              {
                if ( v18 - 1 <= 1 || 8 * v16 + 16 > 0 && v19 < (unsigned __int64)(v17 + 2) )
                {
                  for ( j = 0; j != v18; ++j )
                  {
                    v50 = v17[j];
                    v17[j] = *(_QWORD *)(v19 + 8 * j);
                    *(_QWORD *)(v19 + 8 * j) = v50;
                  }
                }
                else
                {
                  v20 = 0;
                  v21 = 0;
                  do
                  {
                    v22 = _mm_loadu_si128((const __m128i *)&v17[v20]);
                    ++v21;
                    *(__m128i *)&v17[v20] = _mm_loadu_si128((const __m128i *)(v19 + v20 * 8));
                    *(__m128i *)(v19 + v20 * 8) = v22;
                    v20 += 2;
                  }
                  while ( v21 != v18 >> 1 );
                  if ( (v18 & 1) != 0 )
                  {
                    v23 = v18 & 0xFFFFFFFFFFFFFFFELL;
                    v24 = (__int64 *)(v23 * 8 + v19);
                    v25 = &v17[v23];
                    v26 = *v25;
                    *v25 = *v24;
                    *v24 = v26;
                  }
                }
                v17 += v18;
              }
              v27 = v15 % v16;
              if ( !(v15 % v16) )
                goto LABEL_41;
              v15 = v16;
              v16 -= v27;
              v18 = v15 - v16;
              if ( v16 >= (__int64)(v15 - v16) )
                goto LABEL_27;
            }
            v63 = v15;
            v64 = *v17;
            v65 = 8 * v15 - 8;
            if ( v65 <= 8 )
            {
              if ( 8 * v15 == 16 )
                *v17 = v17[1];
            }
            else
            {
              v71 = *v17;
              memmove(v17, v17 + 1, v65);
              v64 = v71;
            }
            v17[v63 - 1] = v64;
          }
        }
LABEL_41:
        v81 = a6;
        v6 = v14 - dest;
        sub_DB8D00(a1, v13, a2, v75, dest, a6);
        v73 -= v75;
        if ( !v73 || !v6 )
          break;
        a1 = a2;
        a2 = v12;
        if ( v6 + v73 == 2 )
          goto LABEL_44;
      }
    }
  }
}

