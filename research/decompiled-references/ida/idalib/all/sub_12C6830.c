void __fastcall sub_12C6830(_QWORD *a1, __int64 *a2, const __m128i *a3, _QWORD *a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r12
  _QWORD *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  const char **v11; // rax
  const char *v12; // r12
  size_t v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  const __m128i *v18; // r15
  const __m128i *v19; // rbx
  unsigned __int8 *v20; // rbx
  int v21; // edi
  unsigned int v22; // edi
  __int64 v23; // rax
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  const char *v26; // r12
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  void **v32; // rbp
  _BYTE *v33; // rdi
  __int64 v34; // rax
  void **v35; // rbp
  _QWORD *v36; // rax
  void **v37; // r12
  void **v38; // rbx
  void **v39; // rdi
  void **v40; // rdi
  void **v41; // rbx
  void **v42; // r12
  unsigned __int64 v43; // rax
  __int64 v44; // rsi
  const __m128i *v45; // r15
  const __m128i *v46; // rbx
  int v47; // eax
  const __m128i *v48; // rax
  const __m128i *v49; // r15
  __int64 v50; // r12
  const __m128i *v51; // rax
  const __m128i *v52; // r15
  __int64 v53; // r12
  size_t v54; // rdx
  __int64 v55; // rdx
  _QWORD *v56; // rdx
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rbp
  __int64 v60; // r13
  __int64 v61; // rbp
  void *v62; // rdi
  const __m128i *v63; // [rsp+8h] [rbp-C0h] BYREF
  size_t v64; // [rsp+10h] [rbp-B8h]
  __int64 *v65; // [rsp+18h] [rbp-B0h]
  void *src; // [rsp+20h] [rbp-A8h]
  size_t n; // [rsp+28h] [rbp-A0h]
  _QWORD v68[2]; // [rsp+30h] [rbp-98h] BYREF
  void *v69[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v70; // [rsp+50h] [rbp-78h]
  void *v71; // [rsp+60h] [rbp-68h]
  __int64 v72; // [rsp+70h] [rbp-58h] BYREF
  __int16 v73; // [rsp+80h] [rbp-48h]

  v65 = a2;
  v63 = a3;
  sub_1269780((__int64)a1, (__int64)a2, a3, a4);
  LODWORD(v69[0]) = 2222;
  *a1 = off_2C42140;
  v5 = sub_21B6DA0(a4, v69, 1);
  v6 = a4[1];
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 != v8 )
  {
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2222) )
    {
      if ( v8 == ++v7 )
        return;
    }
    if ( v8 != v7 )
    {
      do
      {
        v9 = *v7;
        v10 = *(_QWORD *)(*v7 + 16LL);
        if ( !v10 )
          v10 = *v7;
        ++v7;
        *(_BYTE *)(v10 + 44) |= 1u;
        if ( v7 == v8 )
          break;
        while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2222) )
        {
          if ( v8 == ++v7 )
            goto LABEL_13;
        }
      }
      while ( v8 != v7 );
LABEL_13:
      v11 = *(const char ***)(v9 + 48);
      v12 = *v11;
      if ( *v11 )
      {
        v13 = strlen(*v11);
        v64 = v13;
        if ( v13 == 14 )
        {
          if ( *(_QWORD *)v12 != 0x676E6F6C65656569LL
            || *((_DWORD *)v12 + 2) != 1651863396
            || *((_WORD *)v12 + 6) != 25964 )
          {
            return;
          }
          if ( (unsigned __int8)sub_22B7F00(v63, 2222, v14, v15) && (unsigned int)(v63[2].m128i_i32[0] - 23) <= 1 )
          {
            v69[0] = (void *)0xBEE00000BF0LL;
            v16 = sub_21B6DA0(a4, v69, 2);
            v17 = a4[1];
            v70 = 0xBEE00000BF0LL;
            v18 = (const __m128i *)(v17 + 8LL * (unsigned int)v16);
            v19 = (const __m128i *)(v17 + 8 * HIDWORD(v16));
            v63 = v19;
            *(__m128 *)v69 = _mm_loadh_ps((const double *)&v63);
            if ( v18 != v19 )
            {
              while ( 1 )
              {
                if ( v18->m128i_i64[0] )
                {
                  v63 = (const __m128i *)v18->m128i_i64[0];
                  if ( (unsigned __int8)sub_21B9810(v63, 3056) || (unsigned __int8)sub_21B9810(v63, 3054) )
                    break;
                }
                v18 = (const __m128i *)((char *)v18 + 8);
                v69[0] = (void *)v18;
                if ( v19 == v18 )
                  goto LABEL_25;
              }
              v63 = v19;
              v70 = 0xBEE00000BF0LL;
              *(__m128 *)v69 = _mm_loadh_ps((const double *)&v63);
              if ( v19 != v18 )
              {
                do
                {
                  v51 = *(const __m128i **)(v18->m128i_i64[0] + 16);
                  if ( !v51 )
                    v51 = (const __m128i *)v18->m128i_i64[0];
                  v52 = (const __m128i *)&v18->m128i_u64[1];
                  v51[2].m128i_i8[12] |= 1u;
                  v69[0] = (void *)v52;
                  if ( v52 == v19 )
                    break;
                  while ( 1 )
                  {
                    v53 = v52->m128i_i64[0];
                    if ( v52->m128i_i64[0] )
                    {
                      if ( (unsigned __int8)sub_21B9810(v52->m128i_i64[0], 3056)
                        || (unsigned __int8)sub_21B9810(v53, 3054) )
                      {
                        break;
                      }
                    }
                    v52 = (const __m128i *)((char *)v52 + 8);
                    v69[0] = (void *)v52;
                    if ( v19 == v52 )
                      return;
                  }
                  v18 = (const __m128i *)v69[0];
                }
                while ( v19 != v69[0] );
                return;
              }
            }
LABEL_25:
            if ( (unsigned __int8)sub_12C6300((__int64)a1, (__int64)v65, (__int64)a4) )
              return;
          }
LABEL_26:
          sub_FC70B0((__int64)v69, *v65, 0, 601);
          v20 = (unsigned __int8 *)v69[0];
          if ( !v69[0] )
          {
            v56 = v69[1];
            v57 = *((_DWORD *)v69[1] + 3744);
            if ( v57 )
            {
              v58 = (unsigned int)(v57 - 1);
              *((_DWORD *)v69[1] + 3744) = v58;
              v20 = (unsigned __int8 *)v56[v58 + 1856];
              v59 = *((unsigned int *)v20 + 134);
              *v20 = 0;
              v60 = *((_QWORD *)v20 + 66);
              *((_DWORD *)v20 + 106) = 0;
              v61 = v60 + (v59 << 6);
              while ( v60 != v61 )
              {
                while ( 1 )
                {
                  v61 -= 64;
                  v62 = *(void **)(v61 + 24);
                  if ( v62 == (void *)(v61 + 40) )
                    break;
                  operator delete(v62);
                  if ( v60 == v61 )
                    goto LABEL_117;
                }
              }
LABEL_117:
              *((_DWORD *)v20 + 134) = 0;
            }
            else
            {
              v20 = (unsigned __int8 *)operator new(0x3A0u);
              *v20 = 0;
              *((_QWORD *)v20 + 12) = v20 + 112;
              *((_QWORD *)v20 + 16) = v20 + 144;
              *((_QWORD *)v20 + 20) = v20 + 176;
              *((_QWORD *)v20 + 24) = v20 + 208;
              *((_QWORD *)v20 + 28) = v20 + 240;
              *((_QWORD *)v20 + 32) = v20 + 272;
              *((_QWORD *)v20 + 36) = v20 + 304;
              *((_QWORD *)v20 + 40) = v20 + 336;
              *((_QWORD *)v20 + 44) = v20 + 368;
              *((_QWORD *)v20 + 48) = v20 + 400;
              *((_QWORD *)v20 + 52) = v20 + 432;
              *((_QWORD *)v20 + 13) = 0;
              v20[112] = 0;
              *((_QWORD *)v20 + 17) = 0;
              v20[144] = 0;
              *((_QWORD *)v20 + 21) = 0;
              v20[176] = 0;
              *((_QWORD *)v20 + 25) = 0;
              v20[208] = 0;
              *((_QWORD *)v20 + 29) = 0;
              v20[240] = 0;
              *((_QWORD *)v20 + 33) = 0;
              v20[272] = 0;
              *((_QWORD *)v20 + 37) = 0;
              v20[304] = 0;
              *((_QWORD *)v20 + 41) = 0;
              v20[336] = 0;
              *((_QWORD *)v20 + 45) = 0;
              v20[368] = 0;
              *((_QWORD *)v20 + 49) = 0;
              v20[400] = 0;
              *((_QWORD *)v20 + 53) = 0x800000000LL;
              *((_QWORD *)v20 + 66) = v20 + 544;
              *((_QWORD *)v20 + 67) = 0x600000000LL;
            }
            v69[0] = v20;
          }
          v21 = v64;
          v20[*v20 + 1] = 0;
          v22 = v21 & 0xFFFFFFF8;
          LODWORD(v23) = 0;
          src = v68;
          do
          {
            v24 = (unsigned int)v23;
            v23 = (unsigned int)(v23 + 8);
            *(_QWORD *)((char *)v68 + v24) = *(_QWORD *)&v12[v24];
          }
          while ( (unsigned int)v23 < v22 );
          v25 = (_DWORD *)((char *)v68 + v23);
          v26 = &v12[v23];
          v27 = 0;
          if ( (v64 & 4) != 0 )
          {
            *v25 = *(_DWORD *)v26;
            v27 = 4;
          }
          if ( (v64 & 2) != 0 )
          {
            *(_WORD *)((char *)v25 + v27) = *(_WORD *)&v26[v27];
            v27 += 2;
          }
          if ( (v64 & 1) != 0 )
            *((_BYTE *)v25 + v27) = v26[v27];
          n = v64;
          *((_BYTE *)src + v64) = 0;
          v28 = v69[0];
          v29 = *(unsigned __int8 *)v69[0];
          *(_BYTE *)v69[0] = v29 + 1;
          v30 = (unsigned __int8)v29;
          v31 = 4 * (v29 + 3);
          v32 = (void **)&v28[v31];
          v33 = (_BYTE *)v28[v31];
          if ( src == v68 )
          {
            v54 = n;
            if ( n )
            {
              if ( n == 1 )
                *v33 = v68[0];
              else
                memcpy(v33, src, n);
              v54 = n;
              v33 = *v32;
            }
            v32[1] = (void *)v54;
            v33[v54] = 0;
            v33 = src;
          }
          else
          {
            if ( v33 == (_BYTE *)&v28[v31 + 2] )
            {
              *v32 = src;
              v32[1] = (void *)n;
              v32[2] = (void *)v68[0];
            }
            else
            {
              v34 = v28[4 * v30 + 14];
              *v32 = src;
              v32[1] = (void *)n;
              v32[2] = (void *)v68[0];
              if ( v33 )
              {
                src = v33;
                v68[0] = v34;
                goto LABEL_39;
              }
            }
            v33 = v68;
            src = v68;
          }
LABEL_39:
          n = 0;
          *v33 = 0;
          if ( src != v68 )
            operator delete(src);
          if ( (_BYTE)v73 )
          {
            sub_FC7790(v70, (__int64 *)v69, SHIBYTE(v73));
            v70 = 0;
            v73 = 0;
          }
          if ( v71 != &v72 )
            operator delete(v71);
          v35 = (void **)v69[0];
          if ( v69[0] )
          {
            v36 = v69[1];
            if ( v69[1] )
            {
              if ( v69[0] < v69[1] || v69[0] > (char *)v69[1] + 14848 )
              {
                v37 = *((void ***)v69[0] + 66);
                v38 = &v37[8 * (unsigned __int64)*((unsigned int *)v69[0] + 134)];
                if ( v37 != v38 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v38 -= 8;
                      v39 = (void **)v38[3];
                      if ( v39 == v38 + 5 )
                        break;
                      operator delete(v39);
                      if ( v37 == v38 )
                        goto LABEL_51;
                    }
                  }
                  while ( v37 != v38 );
LABEL_51:
                  v38 = (void **)v35[66];
                }
                if ( v38 != v35 + 68 )
                  free(v38);
                v40 = (void **)v35[52];
                v41 = v35 + 52;
                if ( v40 != v35 + 54 )
                  free(v40);
                v42 = v35 + 12;
                do
                {
                  while ( 1 )
                  {
                    v41 -= 4;
                    if ( *v41 == v41 + 2 )
                      break;
                    operator delete(*v41);
                    if ( v41 == v42 )
                      goto LABEL_59;
                  }
                }
                while ( v41 != v42 );
LABEL_59:
                operator delete(v35, 0x3A0u);
              }
              else
              {
                v55 = *((unsigned int *)v69[1] + 3744);
                *((_DWORD *)v69[1] + 3744) = v55 + 1;
                v36[v55 + 1856] = v35;
              }
            }
          }
          return;
        }
        if ( v13 != 13 || *(_QWORD *)v12 != 0x64676E6F6C6D6269LL || *((_DWORD *)v12 + 2) != 1818391919 || v12[12] != 101 )
          return;
        v69[0] = (void *)0xBEE00000BF0LL;
        v43 = sub_21B6DA0(a4, v69, 2);
        v44 = a4[1];
        v70 = 0xBEE00000BF0LL;
        v45 = (const __m128i *)(v44 + 8LL * (unsigned int)v43);
        v46 = (const __m128i *)(v44 + 8 * HIDWORD(v43));
        v63 = v46;
        *(__m128 *)v69 = _mm_loadh_ps((const double *)&v63);
        if ( v45 == v46 )
          goto LABEL_71;
        while ( 1 )
        {
          if ( v45->m128i_i64[0] )
          {
            v63 = (const __m128i *)v45->m128i_i64[0];
            if ( (unsigned __int8)sub_21B9810(v63, 3056) || (unsigned __int8)sub_21B9810(v63, 3054) )
              break;
          }
          v45 = (const __m128i *)((char *)v45 + 8);
          v69[0] = (void *)v45;
          if ( v46 == v45 )
            goto LABEL_71;
        }
        v63 = v46;
        v70 = 0xBEE00000BF0LL;
        *(__m128 *)v69 = _mm_loadh_ps((const double *)&v63);
        if ( v45 == v46 )
        {
LABEL_71:
          v47 = sub_1132360((__int64)a1, (__int64)a4);
          if ( v47 == 1 || !v47 && !(unsigned __int8)sub_112C5E0(a1) )
            return;
          goto LABEL_26;
        }
        do
        {
          v48 = *(const __m128i **)(v45->m128i_i64[0] + 16);
          if ( !v48 )
            v48 = (const __m128i *)v45->m128i_i64[0];
          v49 = (const __m128i *)&v45->m128i_u64[1];
          v48[2].m128i_i8[12] |= 1u;
          v69[0] = (void *)v49;
          if ( v49 == v46 )
            break;
          while ( 1 )
          {
            v50 = v49->m128i_i64[0];
            if ( v49->m128i_i64[0] )
            {
              if ( (unsigned __int8)sub_21B9810(v49->m128i_i64[0], 3056) || (unsigned __int8)sub_21B9810(v50, 3054) )
                break;
            }
            v49 = (const __m128i *)((char *)v49 + 8);
            v69[0] = (void *)v49;
            if ( v46 == v49 )
              return;
          }
          v45 = (const __m128i *)v69[0];
        }
        while ( v46 != v69[0] );
      }
    }
  }
}
