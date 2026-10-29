__int64 __fastcall sub_18BF570(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // r10d
  unsigned int v17; // r12d
  __int64 v18; // rdx
  unsigned __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // esi
  int v23; // edx
  unsigned int v24; // r12d
  char v26; // al
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rsi
  __int64 v35; // rcx
  unsigned __int8 v36; // si
  __int64 v37; // rdx
  unsigned __int8 v38; // di
  char v39; // al
  unsigned __int64 v40; // rax
  int v41; // esi
  char v42; // al
  int v43; // ecx
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  char v55; // al
  __int64 v56; // rax
  __int64 v57; // rbp
  char v58; // dl
  __int64 v59; // rdx
  __int64 v60; // rbx
  unsigned __int64 v61; // rcx
  int v62; // r10d
  int v63; // r11d
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r8
  __int64 *v70; // [rsp+8h] [rbp-70h]
  __int64 v71; // [rsp+10h] [rbp-68h]
  unsigned int v72; // [rsp+10h] [rbp-68h]
  int v73; // [rsp+10h] [rbp-68h]
  unsigned __int64 v74; // [rsp+18h] [rbp-60h]
  unsigned __int64 v75; // [rsp+18h] [rbp-60h]
  __int64 v76; // [rsp+28h] [rbp-50h] BYREF
  char v77; // [rsp+3Eh] [rbp-3Ah] BYREF
  _BYTE v78[57]; // [rsp+3Fh] [rbp-39h] BYREF

  v70 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v76 = a3;
  v9 = *(_QWORD *)(v8 + 32);
  if ( (v9 & 8) != 0 )
  {
    v11 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL)) | *(_QWORD *)(v8 + 32) & 7LL;
    v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    v11 = *(_QWORD *)(v8 + 32) & 7LL;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL) + 32LL) & 7LL;
  v13 = *(_QWORD *)(*(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL) + 32LL) & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_QWORD *)(*(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL) + 32LL) & 8) != 0 )
  {
    v12 |= *(__int64 *)((char *)&qword_18
                      + (*(_QWORD *)(*(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL) + 32LL) & 0xFFFFFFFFFFFFFFF0LL));
    v13 = *(_QWORD *)v13;
  }
  v14 = (v12 >> 6) & 7;
  v15 = (v11 >> 6) & 7;
  if ( (_DWORD)v14 != 3
    && (_DWORD)v15 != (_DWORD)v14
    && (_DWORD)v15 != 3
    && (!(_DWORD)v15 || !(_DWORD)v14 || (v11 & 1) != 0) )
  {
    v11 &= 0xFFFFFFFFFFFFFE3FLL;
    v12 &= 0xFFFFFFFFFFFFFE3FLL;
  }
  v16 = (unsigned int)v12 >> 9;
  v17 = (unsigned int)v11 >> 9;
  if ( (unsigned int)v12 >> 9 != (unsigned int)v11 >> 9 )
  {
    v74 = v12;
    v72 = (unsigned int)v12 >> 9;
    v26 = sub_F56A30(v17, v16, a1[31]);
    v16 = v72;
    v12 = v74;
    if ( !v26 )
    {
      v18 = a1[31];
      goto LABEL_27;
    }
  }
  if ( (((v11 >> 4) & 3) == ((v12 >> 4) & 3) || (v11 & 0x30) == 0 || (v12 & 0x30) == 0)
    && HIDWORD(v12) == HIDWORD(v11)
    && ((v11 >> 6) & 7) == ((v12 >> 6) & 7)
    && ((unsigned __int8)v12 & (unsigned __int8)~(_BYTE)v11 & 7) == 0
    && ((v12 & 8) == 0 || (v11 & 8) != 0) )
  {
    v24 = 0;
    v20 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v22 = *(unsigned __int8 *)(v20 + 16);
    v23 = *(unsigned __int8 *)(v21 + 16);
    v71 = 1;
    goto LABEL_19;
  }
  v18 = a1[31];
  if ( v16 != v17 )
  {
LABEL_27:
    v75 = v12;
    v73 = v16;
    if ( !sub_F56A30(v17, v16, v18) )
      return 10;
    v27 = sub_F56A30(v17, v73, a1[31]);
    a5 = v75 & 0xFFFFFFFFFFFFFE0FLL;
    v12 = v75;
    v19 = v11 & 0xFFFFFFFFFFFFFE0FLL;
    if ( !v27 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v19 = v11 & 0xFFFFFFFFFFFFFE0FLL;
  a5 = v12 & 0xFFFFFFFFFFFFFE0FLL;
LABEL_16:
  if ( HIDWORD(a5) == HIDWORD(v19) && ((unsigned __int8)a5 & (unsigned __int8)~(_BYTE)v19 & 7) == 0 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v22 = *(unsigned __int8 *)(v20 + 16);
    v23 = *(unsigned __int8 *)(v21 + 16);
    if ( ((v12 & 8) == 0 || (v11 & 8) != 0)
      && ((_BYTE)v22 == 13 && ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) == 0x1B3
       || (_BYTE)v23 == 13 && ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) == 0x1B3) )
    {
      v71 = 1;
      v24 = 0;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
LABEL_17:
  v20 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v22 = *(unsigned __int8 *)(v20 + 16);
  v23 = *(unsigned __int8 *)(v21 + 16);
LABEL_18:
  v24 = 10;
  v71 = 0;
  if ( ((v12 >> 6) & 7) == ((v11 >> 6) & 7) )
  {
    a5 = HIDWORD(v11);
    v61 = HIDWORD(v12);
    v62 = HIDWORD(v11);
    v63 = v61;
    if ( v61 && (((unsigned __int16)v61 ^ 0xFFC0) & 0xFFC0) != 0 )
    {
      if ( a5 )
      {
        if ( ((WORD2(v11) ^ 0xFFC0) & 0xFFC0) == 0 )
          v62 = 0;
      }
      else
      {
        v62 = 0;
      }
    }
    else
    {
      if ( !a5 || (a5 = (WORD2(v11) ^ 0xFFC0) & 0xFFC0, ((WORD2(v11) ^ 0xFFC0) & 0xFFC0) == 0) )
      {
        v71 = 512;
        v24 = 9;
        goto LABEL_19;
      }
      v63 = 0;
    }
    a5 = 0;
    v64 = 512;
    if ( v62 != v63 )
      v64 = 0;
    v71 = v64;
    v24 = (v62 != v63) + 9;
  }
LABEL_19:
  if ( (_BYTE)v22 == 13 && ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    if ( (unsigned int)(v23 - 25) <= 1 )
      return 4;
    return v24;
  }
  if ( (_BYTE)v23 == 13 && ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    if ( (unsigned int)(v22 - 25) > 1 )
    {
      if ( !v24 )
        return ((*(_BYTE *)(a1[29] + 1LL) >> 3) ^ 1) & 1;
    }
    else
    {
      return 4;
    }
    return v24;
  }
  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(a1[33] + 32LL), 0x1D1Fu, a4, a1[33], a5, a6) != 1
    && sub_C1BF80(*(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL), 7455, v28, v29)
    && sub_C1BF80(*v70, 7455, v30, v31)
    && !(unsigned __int8)sub_1BE5E50(a1, v76, a2, &v76) )
  {
    return 7;
  }
  v32 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  v33 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  v34 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  if ( sub_AAC110(a1[31], v10 & 0xFFFFFFFFFFFFFFF0LL, v13 & 0xFFFFFFFFFFFFFFF0LL, 0) )
  {
    if ( (*(_BYTE *)(a1[29] + 1LL) & 8) == 0
      && (unsigned __int8)sub_1BE5710(a1, v10 & 0xFFFFFFFFFFFFFFF0LL, v13 & 0xFFFFFFFFFFFFFFF0LL, &v77, v78)
      && !v77
      && !v78[0] )
    {
      return 6;
    }
    v35 = *(_QWORD *)(*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    v36 = *(_BYTE *)(v35 + 16);
    v37 = *(_QWORD *)(*(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    v38 = *(_BYTE *)(v37 + 16);
    if ( (unsigned int)v36 - 25 <= 1
      && (unsigned int)v38 - 25 <= 1
      && *(__int16 *)(v35 + 20) < 0 != *(__int16 *)(v37 + 20) < 0 )
    {
      return 6;
    }
    if ( v36 == 26
      && (v39 = *(_BYTE *)(v35 + 19), (v39 & 0x40) != 0)
      && (v40 = (v35 + ((v39 >> 5) & 4) + 8LL * *(unsigned __int16 *)(v35 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL,
          (*(_BYTE *)(v40 + 1) & 4) != 0) )
    {
      v43 = 0;
      v41 = *(_WORD *)(v40 + 8) & 0x1FF;
      if ( v38 != 26 )
        goto LABEL_53;
    }
    else
    {
      v41 = 0;
      if ( v38 != 26 )
        return v24;
    }
    v42 = *(_BYTE *)(v37 + 19);
    v43 = 0;
    if ( (v42 & 0x40) != 0 )
    {
      v44 = (v37 + ((v42 >> 5) & 4) + 8LL * *(unsigned __int16 *)(v37 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v44 + 1) & 4) != 0 )
        v43 = *(_WORD *)(v44 + 8) & 0x1FF;
    }
LABEL_53:
    if ( v43 == v41 )
      return v24;
    return 6;
  }
  if ( (unsigned __int8)sub_F57EE0(v10) )
  {
    v32 = *(_QWORD *)(a1[31] + 18752LL);
  }
  else if ( sub_F65320(v10, v34, v45, v46, v47, v48) )
  {
    v34 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    v32 = sub_A70710((_QWORD *)a1[31], v10 & 0xFFFFFFFFFFFFFFF0LL, v65, v66, v67);
  }
  if ( (unsigned __int8)sub_F57EE0(v13) )
  {
    v33 = *(_QWORD *)(a1[31] + 18752LL);
  }
  else if ( sub_F65320(v13, v34, v49, v50, v51, v52) )
  {
    v34 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    v33 = sub_A70710((_QWORD *)a1[31], v13 & 0xFFFFFFFFFFFFFFF0LL, v49, v50, v68);
  }
  if ( v33 == v32 )
  {
    if ( v24 != 10 && v71 )
      return 8;
  }
  else if ( *(_BYTE *)(v10 + 16) == 42 && *(_BYTE *)(v13 + 16) == 42 )
  {
    do
    {
      v60 = *(_QWORD *)(v10 + 32);
      if ( (v60 & 8) != 0 )
      {
        v56 = v60 & 7 | *(__int64 *)((char *)&qword_18 + (v60 & 0xFFFFFFFFFFFFFFF0LL));
        v10 = *(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v55 = v60;
        v10 = v60 & 0xFFFFFFFFFFFFFFF0LL;
        LODWORD(v56) = v55 & 7;
      }
      v57 = *(_QWORD *)(v13 + 32);
      if ( (v57 & 8) != 0 )
      {
        v50 = v57 & 0xFFFFFFFFFFFFFFF0LL;
        v59 = v57 & 7 | *(__int64 *)((char *)&qword_18 + (v57 & 0xFFFFFFFFFFFFFFF0LL));
        v13 = *(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v58 = v57;
        v13 = v57 & 0xFFFFFFFFFFFFFFF0LL;
        LODWORD(v59) = v58 & 7;
      }
      v49 = (unsigned int)v59 >> 9;
      if ( (_DWORD)v49 != (unsigned int)v56 >> 9 )
        return 11;
    }
    while ( *(_BYTE *)(v10 + 16) == 42 && *(_BYTE *)(v13 + 16) == 42 );
    if ( v13 != v10 )
      goto LABEL_62;
    return 12;
  }
  else
  {
LABEL_62:
    if ( !sub_C1BF80(*(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL), v34, v49, v50) )
      return 5;
    v24 = 6;
    if ( !sub_C1BF80(*v70, v34, v53, v54) )
      return 5;
  }
  return v24;
}
