char *__fastcall std::_V2::__rotate<int *>(unsigned __int64 dest, char *a2, char *a3)
{
  char *v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  _DWORD *v9; // r9
  __int64 v10; // rdx
  int v11; // esi
  unsigned __int64 v12; // r11
  int v13; // esi
  int v14; // r10d
  int v15; // esi
  __int64 v16; // r14
  __int64 v17; // r15
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  __m128i v24; // xmm0
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // r14
  int *v27; // r11
  int *v28; // r9
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // rdx
  int *v37; // r8
  __int64 v38; // r14
  __int64 v39; // r10
  __int64 v40; // rsi
  unsigned int v41; // esi
  int v42; // r11d
  __int64 v43; // r9
  int v44; // r11d
  int v45; // r12d
  int v46; // r11d
  __int64 v47; // r12
  __int64 v48; // rdx
  unsigned __int64 v49; // r13
  unsigned __int64 v50; // rsi
  __int64 v51; // r14
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r14
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // r14
  unsigned __int64 v56; // rbx
  __int64 v57; // rdx
  __m128i v58; // xmm0
  unsigned __int64 v59; // r12
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // r9
  int *v62; // r8
  int v63; // edx
  int v64; // edx
  int v65; // edx
  int v66; // edx
  int v67; // edx
  int v68; // edx
  char *v69; // rbp
  char *v70; // r11
  unsigned __int64 v71; // rdx
  __int64 v72; // rax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // r10
  char *v75; // rdi
  char *v76; // rdx
  __int64 v77; // rax
  __m128i si128; // xmm0
  unsigned __int64 v79; // rdx
  char *v80; // rax
  char *v81; // rdx
  int v82; // ecx
  int v83; // ecx
  int v84; // ecx
  int v85; // ecx
  int v86; // ecx
  int v87; // ecx
  __int64 j; // rdx
  int v90; // esi
  int *v91; // rdx
  __int64 i; // rsi
  int v93; // r9d
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // r9
  __int64 v96; // rax
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  size_t v100; // rdx
  int v101; // r12d
  __int64 v102; // r12
  int v103; // r13d
  char *v104; // rdx
  char *v105; // rax
  int v106; // edi
  int v107; // ecx

  v3 = a3;
  if ( (char *)dest != a2 )
  {
    v4 = dest;
    v3 = (char *)dest;
    if ( a2 != a3 )
    {
      v3 = (char *)(dest + a3 - a2);
      v5 = (__int64)&a3[-dest] >> 2;
      v6 = (__int64)&a2[-dest] >> 2;
      if ( v6 == v5 - v6 )
      {
        v70 = (char *)(dest + 4);
        v94 = (unsigned __int64)&a2[-dest - 4] >> 2;
        v95 = v94 + 1;
        if ( ((unsigned __int64)a2 >= dest + 16 || dest >= (unsigned __int64)(a2 + 16)) && v95 > 8 )
        {
          v96 = -(int)(dest >> 2) & 3;
          if ( (-(int)(dest >> 2) & 3) != 0 )
          {
            v97 = *(_DWORD *)dest;
            v69 = a2 + 4;
            *(_DWORD *)dest = *(_DWORD *)a2;
            *(_DWORD *)a2 = v97;
            if ( v96 != 1 )
            {
              v98 = *(_DWORD *)(dest + 4);
              v70 = (char *)(dest + 8);
              v69 = a2 + 8;
              *(_DWORD *)(dest + 4) = *((_DWORD *)a2 + 1);
              *((_DWORD *)a2 + 1) = v98;
              if ( v96 != 2 )
              {
                v99 = *(_DWORD *)(dest + 8);
                v70 = (char *)(dest + 12);
                v69 = a2 + 12;
                *(_DWORD *)(dest + 8) = *((_DWORD *)a2 + 2);
                *((_DWORD *)a2 + 2) = v99;
              }
            }
          }
          else
          {
            v69 = a2;
            v70 = (char *)dest;
          }
          v71 = v94 - v96;
          v72 = 4 * v96;
          v73 = 0;
          v74 = v71 + 1;
          v75 = (char *)(dest + v72);
          v76 = &a2[v72];
          v77 = 0;
          do
          {
            si128 = _mm_load_si128((const __m128i *)&v75[v77]);
            ++v73;
            *(__m128i *)&v75[v77] = _mm_loadu_si128((const __m128i *)&v76[v77]);
            *(__m128i *)&v76[v77] = si128;
            v77 += 16;
          }
          while ( v74 >> 2 > v73 );
          v79 = 4 * (v74 & 0xFFFFFFFFFFFFFFFCLL);
          v80 = &v70[v79];
          v81 = &v69[v79];
          if ( v74 != (v74 & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v82 = *(_DWORD *)v80;
            *(_DWORD *)v80 = *(_DWORD *)v81;
            *(_DWORD *)v81 = v82;
            if ( a2 != v80 + 4 )
            {
              v83 = *((_DWORD *)v80 + 1);
              *((_DWORD *)v80 + 1) = *((_DWORD *)v81 + 1);
              *((_DWORD *)v81 + 1) = v83;
              if ( a2 != v80 + 8 )
              {
                v84 = *((_DWORD *)v80 + 2);
                *((_DWORD *)v80 + 2) = *((_DWORD *)v81 + 2);
                *((_DWORD *)v81 + 2) = v84;
                if ( a2 != v80 + 12 )
                {
                  v85 = *((_DWORD *)v80 + 3);
                  *((_DWORD *)v80 + 3) = *((_DWORD *)v81 + 3);
                  *((_DWORD *)v81 + 3) = v85;
                  if ( a2 != v80 + 16 )
                  {
                    v86 = *((_DWORD *)v80 + 4);
                    *((_DWORD *)v80 + 4) = *((_DWORD *)v81 + 4);
                    *((_DWORD *)v81 + 4) = v86;
                    if ( a2 != v80 + 20 )
                    {
                      v87 = *((_DWORD *)v80 + 5);
                      *((_DWORD *)v80 + 5) = *((_DWORD *)v81 + 5);
                      *((_DWORD *)v81 + 5) = v87;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v104 = a2;
          v105 = (char *)dest;
          do
          {
            v106 = *(_DWORD *)v104;
            v107 = *(_DWORD *)v105;
            v105 += 4;
            v104 += 4;
            *((_DWORD *)v105 - 1) = v106;
            *((_DWORD *)v104 - 1) = v107;
          }
          while ( a2 != v105 );
        }
        return (char *)(v4 + 4 * v95);
      }
      else
      {
        while ( 1 )
        {
          v7 = v5 - v6;
          if ( v5 - v6 > v6 )
            break;
LABEL_25:
          v36 = 4 * v5;
          if ( v7 == 1 )
          {
            v100 = v36 - 4;
            v101 = *(_DWORD *)(v4 + v100);
            if ( v4 + v100 != v4 )
              memmove((void *)(v4 + 4), (const void *)v4, v100);
            *(_DWORD *)v4 = v101;
            return v3;
          }
          v37 = (int *)(v4 + v36);
          v38 = 4 * v7;
          v39 = v4 + v36 - 4 * v7;
          if ( v6 <= 0 )
          {
            v4 = v4 + v36 - 4 * v7;
          }
          else
          {
            v40 = v36 - 16 - v38;
            if ( (v36 <= v40 || v36 - v38 <= v36 - 16) && (unsigned __int64)v6 > 8 )
            {
              v41 = ((v4 + v40) >> 2) & 3;
              if ( v41 )
              {
                v42 = *(_DWORD *)(v39 - 4);
                v43 = v39 - 4;
                *(_DWORD *)(v39 - 4) = *(v37 - 1);
                *(v37 - 1) = v42;
                if ( v41 == 1 )
                {
                  --v37;
                  v47 = 1;
                }
                else
                {
                  v44 = *(_DWORD *)(v39 - 8);
                  v43 = v39 - 8;
                  *(_DWORD *)(v39 - 8) = *(v37 - 2);
                  *(v37 - 2) = v44;
                  if ( v41 == 2 )
                  {
                    v37 -= 2;
                    v47 = 2;
                  }
                  else
                  {
                    v45 = *(v37 - 3);
                    v46 = *(_DWORD *)(v39 - 12);
                    v43 = v39 - 12;
                    v37 -= 3;
                    *(_DWORD *)(v39 - 12) = v45;
                    *v37 = v46;
                    v47 = 3;
                  }
                }
              }
              else
              {
                v43 = v4 + v36 - 4 * v7;
                v47 = 0;
              }
              v48 = v36 - 12;
              v49 = v6 - v41;
              v50 = 4 * ~(unsigned __int64)v41;
              v51 = v48 - v38;
              v52 = v50 + v48;
              v53 = v50 + v51;
              v54 = 0;
              v55 = v4 + v53;
              v56 = v52 + v4;
              v57 = 0;
              do
              {
                v58 = _mm_load_si128((const __m128i *)(v55 + v57));
                ++v54;
                *(__m128i *)(v55 + v57) = _mm_loadu_si128((const __m128i *)(v56 + v57));
                *(__m128i *)(v56 + v57) = v58;
                v57 -= 16;
              }
              while ( v54 < v49 >> 2 );
              v59 = (v49 & 0xFFFFFFFFFFFFFFFCLL) + v47;
              v60 = 0x3FFFFFFFFFFFFFFFLL * (v49 & 0xFFFFFFFFFFFFFFFCLL);
              v61 = v60 * 4 + v43;
              v62 = &v37[v60];
              if ( v49 != (v49 & 0xFFFFFFFFFFFFFFFCLL) )
              {
                v63 = *(_DWORD *)(v61 - 4);
                *(_DWORD *)(v61 - 4) = *(v62 - 1);
                *(v62 - 1) = v63;
                if ( v6 > (__int64)(v59 + 1) )
                {
                  v64 = *(_DWORD *)(v61 - 8);
                  *(_DWORD *)(v61 - 8) = *(v62 - 2);
                  *(v62 - 2) = v64;
                  if ( v6 > (__int64)(v59 + 2) )
                  {
                    v65 = *(_DWORD *)(v61 - 12);
                    *(_DWORD *)(v61 - 12) = *(v62 - 3);
                    *(v62 - 3) = v65;
                    if ( v6 > (__int64)(v59 + 3) )
                    {
                      v66 = *(_DWORD *)(v61 - 16);
                      *(_DWORD *)(v61 - 16) = *(v62 - 4);
                      *(v62 - 4) = v66;
                      if ( v6 > (__int64)(v59 + 4) )
                      {
                        v67 = *(_DWORD *)(v61 - 20);
                        *(_DWORD *)(v61 - 20) = *(v62 - 5);
                        *(v62 - 5) = v67;
                        if ( v6 > (__int64)(v59 + 5) )
                        {
                          v68 = *(_DWORD *)(v61 - 24);
                          *(_DWORD *)(v61 - 24) = *(v62 - 6);
                          *(v62 - 6) = v68;
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v91 = (int *)(v4 + v36 - 4 * v7);
              for ( i = 0; i != v6; ++i )
              {
                --v91;
                --v37;
                v93 = *v91;
                *v91 = *v37;
                *v37 = v93;
              }
            }
            v4 = v39 - 4 * v6;
          }
          v6 = v5 % v7;
          if ( !(v5 % v7) )
            return v3;
          v5 = v7;
        }
        while ( v6 != 1 )
        {
          v8 = 4 * v6;
          v9 = (_DWORD *)(v4 + 4 * v6);
          if ( v7 > 0 )
          {
            if ( ((unsigned __int64)v9 >= v4 + 16 || v8 + 16 <= 0) && (unsigned __int64)v7 > 8 )
            {
              v10 = -(int)(v4 >> 2) & 3;
              if ( (-(int)(v4 >> 2) & 3) != 0 )
              {
                v11 = *(_DWORD *)v4;
                v12 = v4 + 4;
                *(_DWORD *)v4 = *v9;
                *v9 = v11;
                if ( v10 == 1 )
                {
                  ++v9;
                  v16 = 1;
                }
                else
                {
                  v13 = *(_DWORD *)(v4 + 4);
                  v12 = v4 + 8;
                  *(_DWORD *)(v4 + 4) = v9[1];
                  v9[1] = v13;
                  if ( v10 == 2 )
                  {
                    v9 += 2;
                    v16 = 2;
                  }
                  else
                  {
                    v14 = v9[2];
                    v15 = *(_DWORD *)(v4 + 8);
                    v12 = v4 + 12;
                    v9 += 3;
                    v16 = 3;
                    *(_DWORD *)(v4 + 8) = v14;
                    *(v9 - 1) = v15;
                  }
                }
              }
              else
              {
                v12 = v4;
                v16 = 0;
              }
              v17 = v7 - v10;
              v18 = v4 + 4 * v10;
              v19 = v4 + 4 * (v6 + v10);
              v20 = (unsigned __int64)(v7 - v10) >> 2;
              v21 = v4 + 4 * v10 + v8;
              v22 = 0;
              v23 = 0;
              do
              {
                v24 = _mm_load_si128((const __m128i *)(v18 + v22));
                ++v23;
                *(__m128i *)(v18 + v22) = _mm_loadu_si128((const __m128i *)(v19 + v22));
                *(__m128i *)(v21 + v22) = v24;
                v22 += 16;
              }
              while ( v23 < v20 );
              v25 = v17 & 0xFFFFFFFFFFFFFFFCLL;
              v26 = (v17 & 0xFFFFFFFFFFFFFFFCLL) + v16;
              v27 = (int *)(v25 * 4 + v12);
              v28 = &v9[v25];
              if ( v17 != (v17 & 0xFFFFFFFFFFFFFFFCLL) )
              {
                v29 = *v27;
                *v27 = *v28;
                *v28 = v29;
                if ( v7 > (__int64)(v26 + 1) )
                {
                  v30 = v27[1];
                  v27[1] = v28[1];
                  v28[1] = v30;
                  if ( v7 > (__int64)(v26 + 2) )
                  {
                    v31 = v27[2];
                    v27[2] = v28[2];
                    v28[2] = v31;
                    if ( v7 > (__int64)(v26 + 3) )
                    {
                      v32 = v27[3];
                      v27[3] = v28[3];
                      v28[3] = v32;
                      if ( v7 > (__int64)(v26 + 4) )
                      {
                        v33 = v27[4];
                        v27[4] = v28[4];
                        v28[4] = v33;
                        if ( v7 > (__int64)(v26 + 5) )
                        {
                          v34 = v27[5];
                          v27[5] = v28[5];
                          v28[5] = v34;
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              for ( j = 0; j != v7; ++j )
              {
                v90 = *(_DWORD *)(v4 + 4 * j);
                *(_DWORD *)(v4 + 4 * j) = v9[j];
                v9[j] = v90;
              }
            }
            v4 += 4 * v7;
          }
          v35 = v5 % v6;
          if ( !(v5 % v6) )
            return v3;
          v5 = v6;
          v6 -= v35;
          v7 = v5 - v6;
          if ( v5 - v6 <= v6 )
            goto LABEL_25;
        }
        v102 = 4 * v5;
        v103 = *(_DWORD *)v4;
        if ( v4 + 4 != v4 + 4 * v5 )
          memmove((void *)v4, (const void *)(v4 + 4), 4 * v5 - 4);
        *(_DWORD *)(v4 + v102 - 4) = v103;
      }
    }
  }
  return v3;
}

