void *__fastcall sub_8395A0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int8 **v9; // r12
  __int64 v10; // rax
  char v11; // r8
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rdi
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdx
  const void *v26; // rax
  __int16 *v27; // rdx
  __int16 v28; // ax
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // rbx
  unsigned __int8 **v32; // r12
  char v33; // al
  char v34; // cl
  __int64 v35; // r13
  __int64 v36; // rsi
  __int64 v37; // r14
  __int64 v38; // r8
  __int64 v39; // r9
  char v40; // al
  __int64 v41; // rsi
  __int64 v42; // r13
  unsigned __int8 **v43; // rax
  unsigned __int8 **v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // r14
  __int64 v48; // rsi
  __int64 v49; // rdx
  const void *v50; // r8
  const void *v51; // [rsp+0h] [rbp-118h]
  const void *v52; // [rsp+0h] [rbp-118h]
  __int64 v53; // [rsp+10h] [rbp-108h]
  char v54; // [rsp+10h] [rbp-108h]
  char v55; // [rsp+18h] [rbp-100h]
  __int64 v56; // [rsp+18h] [rbp-100h]
  __int64 v57; // [rsp+18h] [rbp-100h]
  char v58; // [rsp+2Bh] [rbp-EDh]
  char v59; // [rsp+2Bh] [rbp-EDh]
  char v60; // [rsp+2Ch] [rbp-ECh]
  __m128i v61; // [rsp+40h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+50h] [rbp-C8h]
  unsigned int v63; // [rsp+60h] [rbp-B8h] BYREF
  char v64; // [rsp+64h] [rbp-B4h]
  void *v65[2]; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD v66[13]; // [rsp+B0h] [rbp-68h] BYREF

  v6 = *(_QWORD *)a3;
  if ( !v6 || (~(_BYTE)v6 & 3) != 0 || (v16 = v6 >> 3, !(_DWORD)v16) )
  {
    v7 = sub_A2E130(a1, a2, 2198, 0);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = (unsigned __int8 **)v7;
    v10 = *(_QWORD *)(v8 + 18896);
    v11 = *(_BYTE *)(a3 + 128) & 1;
    v64 &= ~1u;
    v63 = 0;
    v53 = v10;
    if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
    {
      v12 = *(_QWORD *)a3;
      v13 = *(_QWORD *)(a3 + 8);
      v55 = v11;
      BYTE4(v65[0]) &= ~1u;
      LODWORD(v65[0]) = 0;
      sub_6A37F0((__int64)v65);
      sub_6A3550((__int64)v65, v12, v13, (_QWORD *)(a3 + 16), v55);
      sub_6A01B0((__int64)&v63, (__int64)v65);
      if ( LODWORD(v65[0]) <= 1 )
      {
LABEL_4:
        if ( *(_BYTE *)(a3 + 129) )
          v64 |= 1u;
        sub_6A3290((__int64)v65, (__int64)&v63, v8, v53, v14, v15);
        if ( v63 > 1 )
          sub_69F740((__int64)&v63);
        if ( v9 )
          sub_838D50(v9, (_BYTE *)v65[0], (size_t)v65[1]);
        if ( v65[0] != v66 )
          operator delete(v65[0], v66[0] + 1LL);
        if ( sub_69F610((_QWORD *)a3) )
          sub_8219E0(a1, *(_QWORD *)a3, *(_QWORD *)(a3 + 8));
        goto LABEL_24;
      }
    }
    else
    {
      v23 = *(unsigned int *)(a3 + 56);
      v24 = *(_QWORD *)a3;
      v58 = *(_BYTE *)(a3 + 24);
      v25 = *(_QWORD *)(a3 + 8);
      v26 = *(const void **)(a3 + 48);
      v60 = v11;
      BYTE4(v65[0]) &= ~1u;
      v56 = v25;
      v51 = v26;
      LODWORD(v65[0]) = 0;
      sub_6A37F0((__int64)v65);
      sub_6A3690((__int64)v65, v24, v56, (_QWORD *)(a3 + 16), v51, v23, (v58 & 2) != 0, v60);
      sub_6A01B0((__int64)&v63, (__int64)v65);
      if ( LODWORD(v65[0]) <= 1 )
        goto LABEL_4;
    }
    sub_69F740((__int64)v65);
    goto LABEL_4;
  }
  v17 = *(_QWORD *)(a1 + 912);
  v18 = a1 + 904;
  *(_DWORD *)((char *)&v65[1] + 1) = 0;
  HIDWORD(v65[1]) = 0;
  if ( !v17 )
    goto LABEL_23;
  v20 = v16 - 1;
  v21 = v18;
  do
  {
    while ( *(_DWORD *)(v17 + 32) - 1 >= v20 )
    {
      if ( !*(_QWORD *)(v17 + 16) )
        goto LABEL_21;
      v21 = v17;
      v17 = *(_QWORD *)(v17 + 16);
    }
    v17 = *(_QWORD *)(v17 + 24);
  }
  while ( v17 );
  v17 = v21;
LABEL_21:
  if ( v18 == v17 || v20 < *(_DWORD *)(v17 + 32) - 1 )
  {
LABEL_23:
    sub_A2E130(a1, a2, 2203, 0);
LABEL_24:
    LOBYTE(v65[1]) = 0;
    return v65[0];
  }
  LOBYTE(v65[1]) = 1;
  v65[0] = (void *)(v17 + 40);
  v27 = *(__int16 **)(v17 + 96);
  v28 = *v27;
  si128 = _mm_load_si128((const __m128i *)v65);
  v61 = si128;
  if ( (v28 & 0x1FF) != 0x6B )
  {
    if ( a4 != 2 )
      goto LABEL_50;
    goto LABEL_56;
  }
  if ( (v27[1] & 0x10) != 0 )
  {
    if ( a4 != 1 )
      goto LABEL_50;
LABEL_56:
    if ( *(_DWORD *)(a3 + 56) != 1 || **(_QWORD **)(a3 + 48) )
      goto LABEL_38;
    goto LABEL_58;
  }
  if ( !a4 )
  {
    if ( *(_DWORD *)(a3 + 24) > 0xFu
      || (v29 = *(_BYTE *)(a3 + 24), (v29 & 2) != 0)
      || (*(_DWORD *)(a3 + 56) != 1 || (v29 & 4) == 0)
      && (v29 & 8) != 0
      && *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * ((*(_DWORD *)(a3 + 24) >> 4) - 1)) == *(_QWORD *)(a3 + 32) )
    {
LABEL_38:
      v30 = sub_A2E130(a1, a2, 2199, 0);
      v31 = *(_QWORD *)(a1 + 16);
      v32 = (unsigned __int8 **)v30;
      v33 = *(_BYTE *)(a3 + 24);
      v34 = *(_BYTE *)(a3 + 128);
      v35 = *(_QWORD *)(v31 + 18896);
      v64 &= ~1u;
      v63 = 0;
      v54 = v34 & 1;
      if ( (v33 & 1) != 0 )
      {
        v36 = *(_QWORD *)a3;
        v37 = *(_QWORD *)(a3 + 8);
        LODWORD(v65[0]) = 0;
        BYTE4(v65[0]) &= ~1u;
        sub_6A37F0((__int64)v65);
        sub_6A3550((__int64)v65, v36, v37, (_QWORD *)(a3 + 16), v54);
        sub_6A01B0((__int64)&v63, (__int64)v65);
        if ( LODWORD(v65[0]) <= 1 )
          goto LABEL_40;
      }
      else
      {
        v47 = *(unsigned int *)(a3 + 56);
        v48 = *(_QWORD *)a3;
        v59 = v33;
        v49 = *(_QWORD *)(a3 + 8);
        v50 = *(const void **)(a3 + 48);
        LODWORD(v65[0]) = 0;
        BYTE4(v65[0]) &= ~1u;
        v57 = v49;
        v52 = v50;
        sub_6A37F0((__int64)v65);
        sub_6A3690((__int64)v65, v48, v57, (_QWORD *)(a3 + 16), v52, v47, (v59 & 2) != 0, v54);
        sub_6A01B0((__int64)&v63, (__int64)v65);
        if ( LODWORD(v65[0]) <= 1 )
          goto LABEL_40;
      }
      sub_69F740((__int64)v65);
LABEL_40:
      if ( *(_BYTE *)(a3 + 129) )
        v64 |= 1u;
      sub_6A3290((__int64)v65, (__int64)&v63, v31, v35, v38, v39);
      if ( v63 > 1 )
        sub_69F740((__int64)&v63);
      if ( v32 )
      {
        sub_838D50(v32, (_BYTE *)v65[0], (size_t)v65[1]);
        v40 = *(_BYTE *)(a3 + 24);
        if ( (v40 & 2) != 0 )
        {
          v41 = 1;
          goto LABEL_67;
        }
        if ( *(_DWORD *)(a3 + 56) != 1 )
        {
          if ( (v40 & 8) == 0 )
          {
LABEL_48:
            LOBYTE(v41) = 0;
LABEL_66:
            v41 = (unsigned __int8)v41;
LABEL_67:
            sub_823450(v32, v41);
            goto LABEL_68;
          }
          goto LABEL_64;
        }
        if ( (v40 & 4) != 0 )
          goto LABEL_48;
      }
      else
      {
        v40 = *(_BYTE *)(a3 + 24);
        if ( (v40 & 2) != 0 )
          goto LABEL_68;
        if ( *(_DWORD *)(a3 + 56) != 1 )
        {
          if ( (v40 & 8) == 0 )
            goto LABEL_68;
          goto LABEL_64;
        }
        if ( (v40 & 4) != 0 )
        {
LABEL_68:
          if ( v65[0] != v66 )
            operator delete(v65[0], v66[0] + 1LL);
          goto LABEL_24;
        }
      }
      LOBYTE(v41) = 0;
      if ( (v40 & 8) == 0 )
      {
LABEL_65:
        if ( !v32 )
          goto LABEL_68;
        goto LABEL_66;
      }
LABEL_64:
      LOBYTE(v41) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * ((*(_DWORD *)(a3 + 24) >> 4) - 1)) == *(_QWORD *)(a3 + 32);
      goto LABEL_65;
    }
LABEL_58:
    *(__m128i *)v65 = _mm_load_si128(&v61);
    return v65[0];
  }
LABEL_50:
  v42 = sub_69F420(a3);
  v43 = (unsigned __int8 **)sub_A2E130(a1, a2, 2244, 0);
  v44 = v43;
  if ( v43 )
  {
    sub_823450(v43, a4);
    v45 = *(_QWORD *)(v17 + 96);
    v46 = 2;
    if ( (*(_WORD *)v45 & 0x1FF) == 0x6B )
      v46 = (*(_BYTE *)(v45 + 2) & 0x10) != 0;
    sub_823450(v44, v46);
    sub_8356A0(v44, v42, 8u);
  }
  sub_8219E0(a1, *(_QWORD *)a3, *(_QWORD *)(a3 + 8));
  LOBYTE(v65[1]) = 0;
  return v65[0];
}

