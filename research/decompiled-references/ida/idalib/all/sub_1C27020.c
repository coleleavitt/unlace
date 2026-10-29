void __fastcall sub_1C27020(__int64 a1, unsigned __int8 *a2, __int64 a3, char a4)
{
  unsigned __int8 *v4; // r14
  char *v5; // rsi
  __int64 v6; // rcx
  unsigned __int8 v7; // bl
  unsigned __int8 v8; // al
  unsigned __int8 *v9; // r12
  int v10; // r9d
  unsigned int v11; // r15d
  unsigned int j; // r14d
  int v13; // edx
  __int64 v14; // rbx
  char *v15; // r13
  __int64 v16; // rbx
  int v17; // r9d
  char *v18; // r13
  __int64 v19; // rbx
  int v20; // r9d
  __int16 *v21; // rcx
  __m128i v22; // xmm1
  __int64 v23; // r13
  __int64 v24; // rdx
  char *v25; // rax
  __int64 v26; // rsi
  _BYTE *v27; // rdi
  __int64 v28; // rdx
  char *v29; // r8
  __int16 v30; // r9
  __int64 v31; // rdx
  char *v32; // rax
  __int16 v33; // si
  void *v34; // [rsp+0h] [rbp-318h]
  __int64 v35; // [rsp+8h] [rbp-310h]
  int i; // [rsp+14h] [rbp-304h]
  __int64 v38; // [rsp+40h] [rbp-2D8h]
  char *v39; // [rsp+48h] [rbp-2D0h]
  char *v40; // [rsp+60h] [rbp-2B8h]
  char *v41; // [rsp+70h] [rbp-2A8h]
  int v42; // [rsp+88h] [rbp-290h]
  __int64 v43; // [rsp+A0h] [rbp-278h]
  __int64 v44; // [rsp+A8h] [rbp-270h]
  char *v45; // [rsp+B0h] [rbp-268h]
  char *v46; // [rsp+B8h] [rbp-260h]
  unsigned __int8 *v47; // [rsp+F0h] [rbp-228h]
  unsigned int v48; // [rsp+F8h] [rbp-220h]
  bool v49; // [rsp+FCh] [rbp-21Ch]
  unsigned __int8 v50; // [rsp+FDh] [rbp-21Bh]
  bool v51; // [rsp+FEh] [rbp-21Ah]
  void *v53[3]; // [rsp+100h] [rbp-218h] BYREF
  char v54; // [rsp+118h] [rbp-200h]
  void *v55; // [rsp+120h] [rbp-1F8h] BYREF
  __int64 v56; // [rsp+128h] [rbp-1F0h]
  __int64 v57; // [rsp+130h] [rbp-1E8h] BYREF
  void *v58; // [rsp+140h] [rbp-1D8h] BYREF
  __int64 v59; // [rsp+148h] [rbp-1D0h]
  char v60; // [rsp+150h] [rbp-1C8h] BYREF
  void *v61[3]; // [rsp+160h] [rbp-1B8h] BYREF
  char v62; // [rsp+178h] [rbp-1A0h]
  void *v63[3]; // [rsp+180h] [rbp-198h] BYREF
  char v64; // [rsp+198h] [rbp-180h]
  void *v65[3]; // [rsp+1A0h] [rbp-178h] BYREF
  __int64 v66; // [rsp+1B8h] [rbp-160h] BYREF
  void *dest; // [rsp+1E0h] [rbp-138h] BYREF
  __m128i si128; // [rsp+1E8h] [rbp-130h]
  _BYTE v69[40]; // [rsp+1F8h] [rbp-120h] BYREF
  void *v70; // [rsp+220h] [rbp-F8h] BYREF
  unsigned int v71; // [rsp+228h] [rbp-F0h]
  __int64 v72; // [rsp+230h] [rbp-E8h] BYREF
  void *v73; // [rsp+260h] [rbp-B8h] BYREF
  unsigned int v74; // [rsp+268h] [rbp-B0h]
  __int64 v75; // [rsp+270h] [rbp-A8h] BYREF
  void *ptr; // [rsp+2A0h] [rbp-78h] BYREF
  __m128i v77; // [rsp+2A8h] [rbp-70h] BYREF
  _BYTE v78[96]; // [rsp+2B8h] [rbp-60h] BYREF

  v47 = &a2[40 * a3];
  if ( v47 != a2 )
  {
    v4 = a2;
    while ( 1 )
    {
      v5 = (char *)&unk_2661AC0;
      v38 = v4[30];
      v6 = 3LL * *((unsigned __int16 *)v4 + 12);
      v43 = v4[32];
      v44 = v4[31];
      if ( a4 != 1 )
      {
        v5 = (char *)&unk_2661CE0;
        if ( a4 == 2 )
          v5 = (char *)&unk_2661A40;
      }
      v39 = &v5[v6];
      v46 = &v5[3 * *((unsigned __int16 *)v4 + 13)];
      v45 = &v5[3 * *((unsigned __int16 *)v4 + 14)];
      v7 = v4[37] & 3;
      v50 = (v4[37] >> 2) & 3;
      v48 = v7;
      sub_1FE4BC0(v65, &v5[v6], v38, 0, 0, (v4[36] & 2) != 0, v4[35], v7, 0x100000001LL, (v4[36] & 0x40) != 0, v34, v35);
      v8 = v4[36];
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AAB30);
      dest = v69;
      if ( (v8 & 1) != 0 )
      {
        sub_1FE4BC0(
          &ptr,
          v39,
          v38,
          1,
          (v8 & 4) != 0,
          (v8 & 2) != 0,
          v4[35],
          v50,
          0x100000001LL,
          (v8 & 0x40) != 0,
          v34,
          v35);
        v21 = (__int16 *)ptr;
        if ( ptr != v78 )
        {
          if ( dest != v69 )
          {
            free(dest);
            v21 = (__int16 *)ptr;
          }
          v22 = _mm_loadu_si128(&v77);
          dest = v21;
          si128 = v22;
          goto LABEL_7;
        }
        v23 = v77.m128i_i64[0];
        v24 = si128.m128i_i64[0];
        if ( v77.m128i_i64[0] > (unsigned __int64)si128.m128i_i64[0] )
        {
          if ( v77.m128i_i64[0] > (unsigned __int64)si128.m128i_i64[1] )
          {
            si128.m128i_i64[0] = 0;
            sub_2236E10(&dest, v69, v77.m128i_i64[0], 3);
            v25 = (char *)dest;
            v27 = ptr;
            v28 = 3 * v77.m128i_i64[0];
            if ( 3 * v77.m128i_i64[0] )
            {
              v26 = 0;
              goto LABEL_67;
            }
          }
          else
          {
            v25 = (char *)dest;
            if ( si128.m128i_i64[0] )
            {
              v26 = 3 * si128.m128i_i64[0];
              v29 = (char *)dest + 3 * si128.m128i_i64[0];
              v27 = (char *)ptr + 3 * si128.m128i_i64[0];
              if ( 3 * si128.m128i_i64[0] > 0 )
              {
                do
                {
                  v30 = *v21;
                  v25 += 3;
                  v21 = (__int16 *)((char *)v21 + 3);
                  *(_WORD *)(v25 - 3) = v30;
                  *(v25 - 1) = *((_BYTE *)v21 - 1);
                  --v24;
                }
                while ( v24 );
              }
              v25 = v29;
            }
            else
            {
              v26 = 0;
              v27 = ptr;
            }
            v28 = 3 * v23;
            if ( v27 == &v78[3 * v23] )
            {
LABEL_75:
              si128.m128i_i64[0] = v23;
              goto LABEL_7;
            }
LABEL_67:
            memcpy(v25, v27, v28 - v26);
            v27 = ptr;
          }
          si128.m128i_i64[0] = v23;
          v77.m128i_i64[0] = 0;
          if ( v27 != v78 )
            free(v27);
          goto LABEL_7;
        }
        if ( !v77.m128i_i64[0] )
          goto LABEL_75;
        v31 = v77.m128i_i64[0];
        if ( 3 * v77.m128i_i64[0] <= 0 )
          goto LABEL_75;
        v32 = (char *)dest;
        do
        {
          v33 = *v21;
          v32 += 3;
          v21 = (__int16 *)((char *)v21 + 3);
          *(_WORD *)(v32 - 3) = v33;
          *(v32 - 1) = *((_BYTE *)v21 - 1);
          --v31;
        }
        while ( v31 );
        si128.m128i_i64[0] = v23;
      }
LABEL_7:
      v9 = v4;
      v49 = v7 != 0;
      v51 = v50 != 0;
      sub_1FE6EE0(&v70);
      sub_1FE6F10(&v73, (v4[36] & 8) != 0, (v4[36] & 0x10) != 0);
      for ( i = 0; i != 8; ++i )
      {
        if ( ((1 << i) & v9[33]) == 1 << i )
        {
          v11 = (1 << i) & v9[33];
          for ( j = -3; j != 4; ++j )
          {
            v13 = v9[34];
            if ( _bittest(&v13, j + 3) )
            {
              v14 = a1 + 16;
              sub_1FEC910((unsigned int)v53, a1 + 16, v11, j, v9[35], v10, (__int64)v65[0], (__int64)v65[1]);
              if ( v54 )
              {
                sub_1FEC3A0(&v55, v14, v11, j, v46, v44);
                sub_1FEC3A0(&v58, v14, v11, j, v45, v43);
                sub_1C260B0(a1, (__int64)v9, v55, v56, (__int64)v58, v59, 0, (__int64)v53, v49, 1);
                if ( (v9[37] & 3) != 0 )
                {
                  v41 = (char *)v70 + 8 * v71;
                  if ( v70 != v41 )
                  {
                    v15 = (char *)v70;
                    do
                    {
                      while ( 1 )
                      {
                        v16 = *(_QWORD *)v15;
                        sub_1FE4BC0(
                          &ptr,
                          v39,
                          v38,
                          0,
                          0,
                          (v9[36] & 2) != 0,
                          v9[35],
                          v48,
                          *(_QWORD *)v15,
                          (v9[36] & 0x40) != 0,
                          v34,
                          v35);
                        v34 = ptr;
                        v35 = v77.m128i_i64[0];
                        sub_1FEC910((unsigned int)v63, a1 + 16, v11, j, v9[35], v17, (__int64)ptr, v77.m128i_i64[0]);
                        sub_1C260B0(a1, (__int64)v9, v55, v56, (__int64)v58, v59, 0, (__int64)v63, v49, v16);
                        if ( v64 && v63[0] )
                          operator delete(v63[0]);
                        if ( ptr == v78 )
                          break;
                        free(ptr);
                        v15 += 8;
                        if ( v41 == v15 )
                        {
                          LODWORD(v14) = a1 + 16;
                          goto LABEL_11;
                        }
                      }
                      v15 += 8;
                    }
                    while ( v41 != v15 );
                    LODWORD(v14) = a1 + 16;
                  }
                }
LABEL_11:
                if ( (v9[36] & 1) != 0 )
                {
                  sub_1FEC910((unsigned int)v61, v14, v11, j, v9[35], v10, (__int64)dest, si128.m128i_i64[0]);
                  sub_1C260B0(a1, (__int64)v9, v55, v56, (__int64)v58, v59, 1u, (__int64)v61, v51, 1);
                  if ( (v9[37] & 0xC) != 0 )
                  {
                    v40 = (char *)v73 + 8 * v74;
                    if ( v73 != v40 )
                    {
                      v18 = (char *)v73;
                      v42 = v14;
                      do
                      {
                        while ( 1 )
                        {
                          v19 = *(_QWORD *)v18;
                          sub_1FE4BC0(
                            &ptr,
                            v39,
                            v38,
                            1,
                            (v9[36] & 4) != 0,
                            (v9[36] & 2) != 0,
                            v9[35],
                            v50,
                            *(_QWORD *)v18,
                            (v9[36] & 0x40) != 0,
                            v34,
                            v35);
                          sub_1FEC910((unsigned int)v63, v42, v11, j, v9[35], v20, (__int64)ptr, v77.m128i_i64[0]);
                          sub_1C260B0(a1, (__int64)v9, v55, v56, (__int64)v58, v59, 1u, (__int64)v63, v51, v19);
                          if ( v64 && v63[0] )
                            operator delete(v63[0]);
                          if ( ptr == v78 )
                            break;
                          free(ptr);
                          v18 += 8;
                          if ( v40 == v18 )
                            goto LABEL_13;
                        }
                        v18 += 8;
                      }
                      while ( v40 != v18 );
                    }
                  }
LABEL_13:
                  if ( v62 && v61[0] )
                    operator delete(v61[0]);
                }
                if ( v58 != &v60 )
                  operator delete(v58);
                if ( v55 != &v57 )
                  operator delete(v55);
                if ( v54 && v53[0] )
                  operator delete(v53[0]);
              }
            }
          }
        }
      }
      if ( v73 != &v75 )
        free(v73);
      if ( v70 != &v72 )
        free(v70);
      if ( dest != v69 )
        free(dest);
      if ( v65[0] == &v66 )
      {
        v4 = v9 + 40;
        if ( v47 == v9 + 40 )
          return;
      }
      else
      {
        free(v65[0]);
        v4 = v9 + 40;
        if ( v47 == v9 + 40 )
          return;
      }
    }
  }
}
