__int64 __fastcall sub_11390B0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // r15
  __int64 *v6; // rbx
  __m128 v7; // xmm1
  __int64 v8; // r12
  void **v9; // r14
  __int64 v10; // rsi
  __m128i v11; // xmm1
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 *v14; // r15
  __int64 v15; // r14
  void **v16; // rcx
  __int64 v17; // rsi
  __int64 result; // rax
  const char **v19; // rax
  const char *v20; // rbx
  unsigned __int8 *v21; // rbx
  _BYTE *v22; // rsi
  void *v23; // r13
  _QWORD *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  char *v27; // r12
  _BYTE *v28; // rdi
  _BYTE *v29; // rdx
  __int64 v30; // rax
  void **v31; // rbp
  _QWORD *v32; // rax
  __int64 v33; // r12
  __int64 v34; // rbx
  void *v35; // rdi
  void **v36; // rdi
  void **v37; // rdi
  void **v38; // rbx
  void **v39; // r12
  size_t v40; // rdx
  __int64 v41; // rdx
  _QWORD *v42; // rdx
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // r15
  __int64 v47; // r12
  void *v48; // rdi
  __m128i v49; // [rsp+8h] [rbp-E0h] BYREF
  __int64 *v50; // [rsp+18h] [rbp-D0h]
  void *v51[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+30h] [rbp-B8h] BYREF
  size_t n[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v54[2]; // [rsp+50h] [rbp-98h] BYREF
  void *v55[2]; // [rsp+60h] [rbp-88h] BYREF
  __int128 v56; // [rsp+70h] [rbp-78h] BYREF
  void *v57; // [rsp+80h] [rbp-68h]
  __int64 v58; // [rsp+90h] [rbp-58h] BYREF
  __int16 v59; // [rsp+A0h] [rbp-48h]

  v50 = a1;
  *(__m128i *)v55 = _mm_load_si128((const __m128i *)&xmmword_2385980);
  LODWORD(v56) = 2371;
  v3 = sub_2193060(a2, v55, 5);
  v4 = *(_QWORD *)(a2 + 8);
  LODWORD(v54[0]) = 2371;
  LODWORD(v57) = 2371;
  v5 = (__int64 *)(v4 + 8LL * (unsigned int)v3);
  v6 = (__int64 *)(v4 + 8 * HIDWORD(v3));
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_2385980);
  v49.m128i_i64[0] = (__int64)v6;
  v56 = *(_OWORD *)n;
  v7 = _mm_loadh_ps((const double *)v49.m128i_i64);
  *(__m128 *)v55 = v7;
  if ( v5 != v6 )
  {
    v49.m128i_i64[0] = (__int64)&v56 + 4;
    do
    {
      v8 = *v5;
      v9 = v55;
      if ( *v5 )
      {
        do
        {
          v10 = *((unsigned int *)v9 + 4);
          if ( !(_DWORD)v10 )
            break;
          if ( (unsigned __int8)sub_2195AD0(v8, v10) )
          {
            v49.m128i_i64[0] = (__int64)v6;
            *(__m128 *)v55 = _mm_loadh_ps((const double *)v49.m128i_i64);
            if ( v6 != v5 )
              goto LABEL_10;
            return 2;
          }
          v9 = (void **)((char *)v9 + 4);
        }
        while ( v9 != (void **)v49.m128i_i64[0] );
      }
      v55[0] = ++v5;
    }
    while ( v6 != v5 );
    v49.m128i_i64[0] = (__int64)v6;
    v11 = _mm_loadl_epi64(&v49);
    v7 = (__m128)_mm_unpacklo_epi64(v11, v11);
  }
  *(__m128 *)v55 = v7;
  if ( v6 == v5 )
    return 2;
LABEL_10:
  v49.m128i_i64[1] = (__int64)&v56 + 4;
LABEL_11:
  v12 = *v5;
  v13 = *(_QWORD *)(*v5 + 16);
  if ( !v13 )
    v13 = *v5;
  v14 = v5 + 1;
  *(_BYTE *)(v13 + 44) |= 1u;
  for ( v55[0] = v14; v6 != v14; v55[0] = v14 )
  {
    v15 = *v14;
    v16 = v55;
    if ( *v14 )
    {
      do
      {
        v17 = *((unsigned int *)v16 + 4);
        v49.m128i_i64[0] = (__int64)v16;
        if ( !(_DWORD)v17 )
          break;
        if ( (unsigned __int8)sub_2195AD0(v15, v17) )
        {
          v5 = (__int64 *)v55[0];
          if ( v55[0] != v6 )
            goto LABEL_11;
          goto LABEL_19;
        }
        v16 = (void **)(v49.m128i_i64[0] + 4);
      }
      while ( v49.m128i_i64[0] + 4 != v49.m128i_i64[1] );
    }
    ++v14;
  }
LABEL_19:
  if ( (unsigned __int8)sub_2195AD0(v12, 2874) || (unsigned __int8)sub_2195AD0(v12, 2603) )
    return 1;
  if ( (unsigned __int8)sub_2195AD0(v12, 2402) )
    return 2;
  if ( (unsigned __int8)sub_2195AD0(v12, 2383) )
    return 2;
  v19 = *(const char ***)(v12 + 48);
  v20 = *v19;
  if ( !*v19 )
    return 2;
  if ( strlen(*v19) != 4 )
  {
LABEL_30:
    if ( strlen(v20) )
    {
      sub_FA3370((__int64)v55, *v50, 0, 385);
      sub_21922B0(v51, v12, a2);
      v21 = (unsigned __int8 *)v55[0];
      v22 = v51[0];
      v23 = v51[1];
      if ( !v55[0] )
      {
        v42 = v55[1];
        v43 = *((_DWORD *)v55[1] + 3744);
        if ( v43 )
        {
          v44 = (unsigned int)(v43 - 1);
          *((_DWORD *)v55[1] + 3744) = v44;
          v21 = (unsigned __int8 *)v42[v44 + 1856];
          v45 = *((unsigned int *)v21 + 134);
          *v21 = 0;
          v46 = *((_QWORD *)v21 + 66);
          *((_DWORD *)v21 + 106) = 0;
          v47 = v46 + (v45 << 6);
          while ( v46 != v47 )
          {
            while ( 1 )
            {
              v47 -= 64;
              v48 = *(void **)(v47 + 24);
              if ( v48 == (void *)(v47 + 40) )
                break;
              v49.m128i_i64[0] = (__int64)v22;
              operator delete(v48);
              v22 = (_BYTE *)v49.m128i_i64[0];
              if ( v46 == v47 )
                goto LABEL_80;
            }
          }
LABEL_80:
          *((_DWORD *)v21 + 134) = 0;
        }
        else
        {
          v49.m128i_i64[0] = (__int64)v51[0];
          v21 = (unsigned __int8 *)operator new(0x3A0u);
          *v21 = 0;
          *((_QWORD *)v21 + 12) = v21 + 112;
          *((_QWORD *)v21 + 16) = v21 + 144;
          *((_QWORD *)v21 + 20) = v21 + 176;
          *((_QWORD *)v21 + 24) = v21 + 208;
          *((_QWORD *)v21 + 28) = v21 + 240;
          *((_QWORD *)v21 + 32) = v21 + 272;
          *((_QWORD *)v21 + 36) = v21 + 304;
          *((_QWORD *)v21 + 40) = v21 + 336;
          *((_QWORD *)v21 + 44) = v21 + 368;
          *((_QWORD *)v21 + 48) = v21 + 400;
          *((_QWORD *)v21 + 52) = v21 + 432;
          v21[112] = 0;
          *((_QWORD *)v21 + 13) = 0;
          *((_QWORD *)v21 + 17) = 0;
          v21[144] = 0;
          *((_QWORD *)v21 + 21) = 0;
          v21[176] = 0;
          *((_QWORD *)v21 + 25) = 0;
          v21[208] = 0;
          *((_QWORD *)v21 + 29) = 0;
          v21[240] = 0;
          *((_QWORD *)v21 + 33) = 0;
          v21[272] = 0;
          *((_QWORD *)v21 + 37) = 0;
          v21[304] = 0;
          *((_QWORD *)v21 + 41) = 0;
          v21[336] = 0;
          *((_QWORD *)v21 + 45) = 0;
          v21[368] = 0;
          *((_QWORD *)v21 + 49) = 0;
          v21[400] = 0;
          *((_QWORD *)v21 + 53) = 0x800000000LL;
          v22 = (_BYTE *)v49.m128i_i64[0];
          *((_QWORD *)v21 + 66) = v21 + 544;
          *((_QWORD *)v21 + 67) = 0x600000000LL;
        }
        v55[0] = v21;
      }
      v21[*v21 + 1] = 0;
      n[0] = (size_t)v54;
      sub_1138810(n, v22, (__int64)v23 + (_QWORD)v22);
      v24 = v55[0];
      v25 = *(unsigned __int8 *)v55[0];
      *(_BYTE *)v55[0] = v25 + 1;
      v26 = 4 * (v25 + 3);
      v27 = (char *)&v24[v26];
      v28 = (_BYTE *)v24[v26];
      v29 = v28;
      if ( (_QWORD *)n[0] == v54 )
      {
        v40 = n[1];
        if ( n[1] )
        {
          if ( n[1] == 1 )
            *v28 = v54[0];
          else
            memcpy(v28, (const void *)n[0], n[1]);
          v28 = *(_BYTE **)v27;
          v40 = n[1];
        }
        *((_QWORD *)v27 + 1) = v40;
        v28[v40] = 0;
        v29 = (_BYTE *)n[0];
      }
      else
      {
        if ( v28 == (_BYTE *)&v24[v26 + 2] )
        {
          *(_QWORD *)v27 = n[0];
          *((_QWORD *)v27 + 1) = n[1];
          *((_QWORD *)v27 + 2) = v54[0];
        }
        else
        {
          v30 = v24[4 * (int)v25 + 14];
          *(_QWORD *)v27 = n[0];
          *((_QWORD *)v27 + 1) = n[1];
          *((_QWORD *)v27 + 2) = v54[0];
          if ( v28 )
          {
            n[0] = (size_t)v28;
            v54[0] = v30;
            goto LABEL_36;
          }
        }
        v29 = v54;
        n[0] = (size_t)v54;
      }
LABEL_36:
      n[1] = 0;
      *v29 = 0;
      if ( (_QWORD *)n[0] != v54 )
        operator delete((void *)n[0]);
      if ( v51[0] != &v52 )
        operator delete(v51[0]);
      if ( (_BYTE)v59 )
      {
        sub_FA3A50(v56, (__int64)v55, SHIBYTE(v59));
        *(_QWORD *)&v56 = 0;
        v59 = 0;
      }
      if ( v57 != &v58 )
        operator delete(v57);
      v31 = (void **)v55[0];
      if ( v55[0] )
      {
        v32 = v55[1];
        if ( v55[1] )
        {
          if ( v55[0] < v55[1] || v55[0] > (char *)v55[1] + 14848 )
          {
            v33 = *((_QWORD *)v55[0] + 66);
            v34 = v33 + ((unsigned __int64)*((unsigned int *)v55[0] + 134) << 6);
            while ( v33 != v34 )
            {
              while ( 1 )
              {
                v34 -= 64;
                v35 = *(void **)(v34 + 24);
                if ( v35 == (void *)(v34 + 40) )
                  break;
                operator delete(v35);
                if ( v33 == v34 )
                  goto LABEL_51;
              }
            }
LABEL_51:
            v36 = (void **)v31[66];
            if ( v36 != v31 + 68 )
              free(v36);
            v37 = (void **)v31[52];
            if ( v37 != v31 + 54 )
              free(v37);
            v38 = v31 + 48;
            v39 = v31 + 8;
            do
            {
              while ( *v38 != v38 + 2 )
              {
                operator delete(*v38);
                v38 -= 4;
                if ( v38 == v39 )
                  goto LABEL_58;
              }
              v38 -= 4;
            }
            while ( v38 != v39 );
LABEL_58:
            operator delete(v31, 0x3A0u);
          }
          else
          {
            v41 = *((unsigned int *)v55[1] + 3744);
            *((_DWORD *)v55[1] + 3744) = v41 + 1;
            v32[v41 + 1856] = v31;
          }
        }
      }
    }
    return 2;
  }
  if ( *(_DWORD *)v20 == 1952870259 )
    return 1;
  result = 2;
  if ( *(_DWORD *)v20 != 1685217640 )
    goto LABEL_30;
  return result;
}

