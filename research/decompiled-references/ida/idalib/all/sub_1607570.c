unsigned __int64 __fastcall sub_1607570(__int64 a1)
{
  __int64 v2; // rdi
  _BYTE **v3; // rbx
  _BYTE **v4; // r13
  __int64 v5; // r14
  bool v6; // r15
  unsigned __int8 *v7; // rax
  unsigned __int8 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // eax
  unsigned __int64 result; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD *v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  __m128i v31; // xmm0
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rcx
  void *v38; // rdi
  unsigned int v39; // eax
  __int64 v40; // rdx
  __m128i si128; // xmm0
  __m128i *v42; // rax
  unsigned __int64 v43; // rcx
  __int64 v44; // rbx
  int v45; // r12d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rcx
  __m128i *v52; // rdx
  unsigned __int64 v53; // rsi
  __m128i v54; // xmm0
  unsigned int v55; // edx
  unsigned __int64 v56; // rax
  __int64 v57; // [rsp+8h] [rbp-F0h]
  __int64 v58; // [rsp+8h] [rbp-F0h]
  unsigned __int8 *v59; // [rsp+8h] [rbp-F0h]
  __int64 v60; // [rsp+18h] [rbp-E0h]
  __int64 v61; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v62[16]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v64; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+58h] [rbp-A0h]
  char v66; // [rsp+A8h] [rbp-50h]
  unsigned int v67; // [rsp+B0h] [rbp-48h]
  char v68; // [rsp+B4h] [rbp-44h]

  v2 = *(_QWORD *)(a1 + 552);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 336LL))(v2, a1 + 2784);
  v3 = *(_BYTE ***)(a1 + 2808);
  v4 = &v3[*(unsigned int *)(a1 + 2816)];
  if ( v4 != v3 )
  {
    while ( 1 )
    {
      v5 = (__int64)*v3;
      if ( sub_B8C090(*v3) )
        goto LABEL_7;
      sub_168B9F0(v62, a1 + 8, *(unsigned int *)(v5 + 24), 7528, 0);
      v6 = (*(_BYTE *)(v5 + 28) & 0x7F) == 65;
      if ( v66 )
        break;
      if ( v68 )
      {
        v17 = sub_168B9E0(v62);
        v20 = v63;
        if ( v63 )
        {
          v57 = v17;
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 32LL))(v63);
          v17 = v57;
        }
        v61 = v20;
        v21 = sub_1587BC0(v17, &v61, v16, v17, v18, v19);
        sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v67 + 8), v6, 2u);
        v10 = *(_QWORD *)(v5 + 40);
        if ( !v66 )
          goto LABEL_21;
LABEL_12:
        sub_AE9DF0(&v64, v10, 9u);
      }
LABEL_6:
      sub_15F7200(v62);
LABEL_7:
      if ( v4 == ++v3 )
        goto LABEL_13;
    }
    v7 = v64;
    if ( !v64 )
    {
      v32 = v65;
      v33 = *(_DWORD *)(v65 + 14976);
      if ( v33 )
      {
        v34 = (unsigned int)(v33 - 1);
        *(_DWORD *)(v65 + 14976) = v34;
        v7 = *(unsigned __int8 **)(v32 + 8 * v34 + 14848);
        v35 = *((unsigned int *)v7 + 134);
        *v7 = 0;
        v36 = *((_QWORD *)v7 + 66);
        *((_DWORD *)v7 + 106) = 0;
        v37 = v36 + (v35 << 6);
        while ( v36 != v37 )
        {
          while ( 1 )
          {
            v37 -= 64;
            v38 = *(void **)(v37 + 24);
            if ( v38 == (void *)(v37 + 40) )
              break;
            v60 = v37;
            v59 = v7;
            operator delete(v38);
            v37 = v60;
            v7 = v59;
            if ( v36 == v60 )
              goto LABEL_41;
          }
        }
LABEL_41:
        *((_DWORD *)v7 + 134) = 0;
      }
      else
      {
        v7 = (unsigned __int8 *)operator new(0x3A0u);
        *v7 = 0;
        *((_QWORD *)v7 + 12) = v7 + 112;
        *((_QWORD *)v7 + 16) = v7 + 144;
        *((_QWORD *)v7 + 20) = v7 + 176;
        *((_QWORD *)v7 + 24) = v7 + 208;
        *((_QWORD *)v7 + 28) = v7 + 240;
        *((_QWORD *)v7 + 32) = v7 + 272;
        *((_QWORD *)v7 + 36) = v7 + 304;
        *((_QWORD *)v7 + 40) = v7 + 336;
        *((_QWORD *)v7 + 44) = v7 + 368;
        *((_QWORD *)v7 + 48) = v7 + 400;
        *((_QWORD *)v7 + 52) = v7 + 432;
        *((_QWORD *)v7 + 13) = 0;
        v7[112] = 0;
        *((_QWORD *)v7 + 17) = 0;
        v7[144] = 0;
        *((_QWORD *)v7 + 21) = 0;
        v7[176] = 0;
        *((_QWORD *)v7 + 25) = 0;
        v7[208] = 0;
        *((_QWORD *)v7 + 29) = 0;
        v7[240] = 0;
        *((_QWORD *)v7 + 33) = 0;
        v7[272] = 0;
        *((_QWORD *)v7 + 37) = 0;
        v7[304] = 0;
        *((_QWORD *)v7 + 41) = 0;
        v7[336] = 0;
        *((_QWORD *)v7 + 45) = 0;
        v7[368] = 0;
        *((_QWORD *)v7 + 49) = 0;
        v7[400] = 0;
        *((_QWORD *)v7 + 53) = 0x800000000LL;
        *((_QWORD *)v7 + 66) = v7 + 544;
        *((_QWORD *)v7 + 67) = 0x600000000LL;
      }
      v64 = v7;
    }
    v7[*v7 + 1] = 2;
    v8 = v64;
    v9 = *v64;
    *v64 = v9 + 1;
    *(_QWORD *)&v8[8 * v9 + 16] = v6;
    v10 = *(_QWORD *)(v5 + 40);
    if ( !v66 )
    {
LABEL_21:
      if ( v68 )
      {
        v22 = sub_168B9E0(v62);
        v26 = v63;
        if ( v63 )
        {
          v58 = v22;
          v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 32LL))(v63);
          v22 = v58;
        }
        v61 = v26;
        v27 = sub_1587BC0(v22, &v61, v22, v23, v24, v25);
        sub_AE9DF0((unsigned __int8 **)(*v27 + 32LL * v67 + 8), v10, 9u);
      }
      goto LABEL_6;
    }
    goto LABEL_12;
  }
LABEL_13:
  v11 = *(_DWORD *)(a1 + 2792);
  if ( !v11 )
  {
    result = *(unsigned int *)(a1 + 2796);
    if ( !(_DWORD)result )
      goto LABEL_17;
    v13 = *(_QWORD **)(a1 + 2784);
    v14 = *(unsigned int *)(a1 + 2800);
    v15 = v14;
    if ( (unsigned int)v14 > 0x40 )
    {
      result = operator delete(v13, v15 * 8, 8);
      *(_QWORD *)(a1 + 2784) = 0;
      *(_QWORD *)(a1 + 2792) = 0;
      *(_DWORD *)(a1 + 2800) = 0;
      goto LABEL_17;
    }
    goto LABEL_29;
  }
  v28 = 4 * v11;
  v29 = *(unsigned int *)(a1 + 2800);
  v13 = *(_QWORD **)(a1 + 2784);
  if ( (unsigned int)(4 * v11) < 0x40 )
    v28 = 64;
  if ( v28 < (unsigned int)v29 )
  {
    v39 = v11 - 1;
    if ( v39 )
    {
      _BitScanReverse(&v39, v39);
      v40 = (unsigned int)(1 << (33 - (v39 ^ 0x1F)));
      if ( (int)v40 < 64 )
        v40 = 64;
      if ( (_DWORD)v40 == (_DWORD)v29 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        v42 = *(__m128i **)(a1 + 2784);
        *(_QWORD *)(a1 + 2792) = 0;
        v43 = ((unsigned __int64)(8 * v40 - 8) >> 3) + 1;
        do
          *v42++ = si128;
        while ( v42 != (__m128i *)&v13[2 * (v43 >> 1)] );
        result = (unsigned __int64)&v13[v43 & 0xFFFFFFFFFFFFFFFELL];
        if ( v43 == (v43 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_17;
        goto LABEL_51;
      }
      v55 = 4 * (int)v40 / 3u;
      v56 = (((v55 + 1) | ((unsigned __int64)(v55 + 1) >> 1) | (((v55 + 1) | ((unsigned __int64)(v55 + 1) >> 1)) >> 2)) >> 4)
          | (v55 + 1)
          | ((unsigned __int64)(v55 + 1) >> 1)
          | (((v55 + 1) | ((unsigned __int64)(v55 + 1) >> 1)) >> 2)
          | (((((v55 + 1) | ((unsigned __int64)(v55 + 1) >> 1) | (((v55 + 1) | ((unsigned __int64)(v55 + 1) >> 1)) >> 2)) >> 4)
            | (v55 + 1)
            | ((unsigned __int64)(v55 + 1) >> 1)
            | (((v55 + 1) | ((unsigned __int64)(v55 + 1) >> 1)) >> 2)) >> 8);
      v45 = (v56 | (v56 >> 16)) + 1;
      v44 = 8 * ((v56 | (v56 >> 16)) + 1);
    }
    else
    {
      v44 = 1024;
      v45 = 128;
    }
    operator delete(v13, 8 * v29, 8);
    *(_DWORD *)(a1 + 2800) = v45;
    result = sub_22300B0(v44, 8, v46, v47, v48, v49);
    v50 = *(unsigned int *)(a1 + 2800);
    *(_QWORD *)(a1 + 2792) = 0;
    *(_QWORD *)(a1 + 2784) = result;
    v51 = 8 * v50;
    if ( result == result + v51 )
      goto LABEL_17;
    v52 = (__m128i *)result;
    v53 = ((unsigned __int64)(v51 - 8) >> 3) + 1;
    if ( v51 != 8 )
    {
      v54 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v52++ = v54;
      while ( (__m128i *)(result + 16 * (v53 >> 1)) != v52 );
      result += 8 * (v53 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v53 & 0xFFFFFFFFFFFFFFFELL) == v53 )
        goto LABEL_17;
    }
LABEL_51:
    *(_QWORD *)result = -4096;
    goto LABEL_17;
  }
  v15 = v29;
LABEL_29:
  result = (unsigned __int64)&v13[v15];
  if ( v13 != &v13[v15] )
  {
    result = (unsigned __int64)v13;
    v30 = ((unsigned __int64)(v15 * 8 - 8) >> 3) + 1;
    if ( v15 == 1 )
      goto LABEL_34;
    v31 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
    do
    {
      *(__m128i *)result = v31;
      result += 16LL;
    }
    while ( &v13[2 * (v30 >> 1)] != (_QWORD *)result );
    result = v30 & 0xFFFFFFFFFFFFFFFELL;
    v13 += v30 & 0xFFFFFFFFFFFFFFFELL;
    if ( v30 != (v30 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_34:
      *v13 = -4096;
  }
  *(_QWORD *)(a1 + 2792) = 0;
LABEL_17:
  *(_DWORD *)(a1 + 2816) = 0;
  return result;
}
