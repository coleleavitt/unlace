__int64 __fastcall sub_A05C90(
        __int64 *a1,
        __int64 a2,
        const void *a3,
        size_t a4,
        char a5,
        _BYTE *a6,
        void *a7,
        __int64 a8)
{
  unsigned __int64 v10; // rax
  int v11; // ecx
  char v12; // r8
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // r11
  int v18; // eax
  int v19; // r10d
  unsigned int v20; // eax
  int i; // edi
  __int64 v22; // r14
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rbp
  __int64 v27; // rax
  char v28; // al
  char v29; // al
  char v30; // cl
  bool v31; // al
  bool v32; // zf
  char v33; // cl
  unsigned __int8 v34; // al
  char v35; // cl
  bool v36; // al
  char v37; // al
  char v38; // cl
  char v39; // al
  char v41; // al
  int v42; // eax
  char v43; // al
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  _DWORD *v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  int v51; // [rsp+8h] [rbp-2E0h]
  char v52; // [rsp+10h] [rbp-2D8h]
  int v53; // [rsp+10h] [rbp-2D8h]
  unsigned __int64 v54; // [rsp+18h] [rbp-2D0h]
  __int64 v55; // [rsp+18h] [rbp-2D0h]
  int v56; // [rsp+18h] [rbp-2D0h]
  int v57; // [rsp+18h] [rbp-2D0h]
  __int64 v58; // [rsp+20h] [rbp-2C8h]
  unsigned int v59; // [rsp+20h] [rbp-2C8h]
  int v60; // [rsp+20h] [rbp-2C8h]
  int v62; // [rsp+2Ch] [rbp-2BCh]
  int v63; // [rsp+34h] [rbp-2B4h] BYREF
  __int64 v64; // [rsp+38h] [rbp-2B0h] BYREF
  char *v65[2]; // [rsp+40h] [rbp-2A8h] BYREF
  char v66; // [rsp+50h] [rbp-298h] BYREF
  int v67; // [rsp+100h] [rbp-1E8h]
  char *v68[2]; // [rsp+108h] [rbp-1E0h] BYREF
  __int64 v69; // [rsp+118h] [rbp-1D0h] BYREF
  void *v70; // [rsp+1D0h] [rbp-118h] BYREF
  __int64 v71; // [rsp+1D8h] [rbp-110h]
  int v72; // [rsp+1E0h] [rbp-108h] BYREF
  char *v73; // [rsp+1E8h] [rbp-100h] BYREF
  __int64 v74; // [rsp+1F0h] [rbp-F8h]
  _BYTE v75[240]; // [rsp+1F8h] [rbp-F0h] BYREF

  v10 = sub_A00840(*a1, a3, a4);
  v11 = -1;
  v12 = a5;
  if ( BYTE4(a2) )
    v11 = a2;
  v13 = *a1;
  v14 = v10 >> 33;
  v15 = v14;
  v62 = v14;
  v16 = *(unsigned int *)(*a1 + 608);
  v17 = *(_QWORD *)(*a1 + 592);
  if ( (_DWORD)v16 )
  {
    v58 = *(_QWORD *)(v13 + 592);
    BYTE4(v70) = a5;
    v52 = a5;
    LODWORD(v71) = v11;
    v51 = v11;
    LODWORD(v70) = v14;
    v54 = v14;
    v18 = sub_9FDE00(v11, (__int8 *)&v70 + 4, (int *)&v70);
    v19 = v16 - 1;
    v11 = v51;
    v12 = v52;
    v15 = v54;
    v20 = (v16 - 1) & v18;
    for ( i = 1; ; ++i )
    {
      v22 = v58 + 216LL * v20;
      if ( v51 == *(_DWORD *)v22 && a5 == *(_BYTE *)(v22 + 4) && v62 == *(_DWORD *)(v22 + 8) )
      {
        v13 = *a1;
        v24 = *(unsigned int *)(*a1 + 608);
        v25 = *(_QWORD *)(*a1 + 592);
        goto LABEL_13;
      }
      if ( *(_DWORD *)v22 == -1 && *(_BYTE *)(v22 + 4) == 0xFF && *(_DWORD *)(v22 + 8) == -1 )
        break;
      v23 = i + v20;
      v20 = v19 & v23;
    }
    v17 = *(_QWORD *)(v13 + 592);
    v16 = *(unsigned int *)(v13 + 608);
    v13 = *a1;
    v25 = *(_QWORD *)(*a1 + 592);
    v24 = *(unsigned int *)(*a1 + 608);
  }
  else
  {
    v24 = 0;
    v25 = *(_QWORD *)(v13 + 592);
  }
  v22 = v17 + 216 * v16;
LABEL_13:
  if ( v22 == v25 + 216 * v24 )
  {
    v42 = *(_DWORD *)(v13 + 600);
    v65[0] = &v66;
    v59 = v11;
    v63 = v42 + 1;
    v67 = v42 + 1;
    v68[0] = (char *)&v69;
    v72 = v42 + 1;
    LODWORD(v70) = v11;
    LODWORD(v71) = v15;
    v55 = v15;
    v65[1] = (char *)0x100000000LL;
    v68[1] = (char *)0x100000000LL;
    BYTE4(v70) = v12;
    v73 = v75;
    v74 = 0x100000000LL;
    v43 = sub_9FE290((__int64 *)(v13 + 592), (__int64)&v70, &v64);
    v45 = v55;
    v46 = v59;
    if ( v43 )
    {
      v22 = v64;
    }
    else
    {
      v60 = v55;
      v57 = v46;
      v49 = sub_A05BF0(v13 + 592, (__int64)&v70, v64, v46, v44, v45);
      LODWORD(v46) = v57;
      v22 = v49;
      LODWORD(v45) = v60;
      *(_QWORD *)v49 = v70;
      *(_DWORD *)(v49 + 8) = v71;
      LODWORD(v49) = v72;
      *(_QWORD *)(v22 + 32) = 0x100000000LL;
      *(_DWORD *)(v22 + 16) = v49;
      *(_QWORD *)(v22 + 24) = v22 + 40;
      if ( (_DWORD)v74 )
      {
        sub_9F0D60((__int64 *)(v22 + 24), (__int64 *)&v73);
        LODWORD(v45) = v60;
        LODWORD(v46) = v57;
      }
    }
    v53 = v46;
    v56 = v45;
    sub_9FCFE0(&v73);
    sub_9FCFE0(v68);
    v47 = sub_A021A0(*a1 + 640, &v63);
    v48 = *a1;
    *v47 = v56;
    *sub_A021A0(v48 + 616, &v63) = v53;
    sub_9FCFE0(v65);
  }
  v26 = *(_QWORD *)(v22 + 24);
  v27 = v26 + 176LL * *(unsigned int *)(v22 + 32);
  if ( v26 == v27 )
  {
LABEL_52:
    v70 = a7;
    v71 = a8;
    sub_9FD0E0((__int64)&v72, (__int64)a6);
    v75[128] = a6[152];
    sub_A013A0(v22 + 24, (unsigned __int64)&v70);
    sub_9E5F30((__int64)&v72);
  }
  else
  {
    while ( *(_DWORD *)v26 != (_DWORD)a7
         || ((HIDWORD(a7) ^ *(_DWORD *)(v26 + 4)) & 0x7FFFFFFF) != 0
         || (((unsigned int)a8 ^ *(_DWORD *)(v26 + 8)) & 0x7FFFFFFF) != 0
         || ((HIDWORD(a8) ^ *(_DWORD *)(v26 + 12)) & 0x7FFFFFFF) != 0 )
    {
      v26 += 176;
      if ( v27 == v26 )
        goto LABEL_52;
    }
    v28 = a6[32];
    if ( (v28 & 1) != 0 )
    {
      *(_BYTE *)(v26 + 48) |= 1u;
      if ( !*(_QWORD *)(v26 + 24) )
        sub_9CAB60(v26 + 16, (__int64)a6);
      v28 = a6[32];
    }
    if ( (v28 & 2) != 0 )
    {
      *(_BYTE *)(v26 + 48) |= 2u;
      if ( !*(_QWORD *)(v26 + 24) )
        sub_9CAB60(v26 + 16, (__int64)a6);
    }
    if ( (*(_BYTE *)(v26 + 48) & 4) == 0 )
    {
      v29 = a6[32];
      if ( (v29 & 4) != 0 )
      {
        v30 = 1;
        v31 = (v29 & 8) != 0;
      }
      else
      {
        v30 = 0;
        v31 = 0;
      }
      *(_BYTE *)(v26 + 48) = (4 * v30) | *(_BYTE *)(v26 + 48) & 0xF3 | (8 * v31);
    }
    if ( !*(_QWORD *)(v26 + 64) )
      sub_9CAB60(v26 + 56, (__int64)(a6 + 40));
    if ( !*(_BYTE *)(v26 + 120) )
    {
      v32 = a6[104] == 0;
      LOBYTE(v74) = 0;
      if ( !v32 )
        sub_9FB050((__int64)&v70, (__int64)(a6 + 72));
      sub_9FDD90(v26 + 88, (__int64)&v70);
      if ( (_BYTE)v74 && v70 != &v72 )
        operator delete(v70);
    }
    if ( !*(_BYTE *)(v26 + 160) )
      sub_9FDD90(v26 + 128, (__int64)(a6 + 112));
    v33 = *(_BYTE *)(v26 + 168);
    v34 = a6[152];
    if ( (v33 & 1) == 0 && (v34 & 1) != 0 )
    {
      v41 = v33 & 0xF8 | 1 | v34 & 6;
      *(_BYTE *)(v26 + 168) = v41;
      v33 = v41;
      v34 = a6[152];
    }
    if ( (v33 & 0x10) == 0 )
    {
      if ( (v34 & 0x10) != 0 )
      {
        v35 = 1;
        v36 = (v34 & 0x20) != 0;
      }
      else
      {
        v35 = 0;
        v36 = 0;
      }
      v37 = (16 * v35) | *(_BYTE *)(v26 + 168) & 0xCF | (32 * v36);
      *(_BYTE *)(v26 + 168) = v37;
      v33 = v37;
      v34 = a6[152];
    }
    if ( (v33 & 0x40) == 0 )
    {
      if ( (v34 & 0x40) != 0 )
      {
        v39 = v34 >> 7;
        v38 = 1;
      }
      else
      {
        v38 = 0;
        v39 = 0;
      }
      *(_BYTE *)(v26 + 168) = (v38 << 6) | *(_BYTE *)(v26 + 168) & 0x3F | (v39 << 7);
      v34 = a6[152];
    }
    *(_BYTE *)(v26 + 168) = *(_BYTE *)(v26 + 168) & 0xF7 | (*(_BYTE *)(v26 + 168) | v34) & 8;
  }
  return *(unsigned int *)(v22 + 16);
}

