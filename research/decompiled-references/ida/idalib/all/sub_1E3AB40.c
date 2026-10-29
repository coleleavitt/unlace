void __fastcall sub_1E3AB40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128i a9,
        __int64 a10,
        char a11,
        __int64 a12)
{
  unsigned __int8 v16; // al
  bool v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // al
  bool v23; // dl
  char v24; // dl
  char v25; // al
  char v26; // dl
  char v27; // cl
  bool v28; // dl
  char v29; // al
  _BYTE *v30; // rax
  bool v31; // al
  bool v32; // dl
  bool v33; // cl
  int v34; // r8d
  __int64 v35; // rsi
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __m128i *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // rdi
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  _BYTE *v47; // rax
  unsigned __int8 v48; // al
  unsigned int v49; // eax
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned int v52; // eax
  __int64 v53; // r8
  __int64 v54; // r9
  _BYTE *v55; // rax
  unsigned __int8 v56; // cl
  __int64 v57; // rax
  unsigned __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // eax
  _QWORD *v63; // rdx
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rdi
  char v68; // al
  __int64 *v69; // rdi
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // r8
  unsigned int v74; // edx
  __int64 v75; // rcx
  __int64 v76; // rdx
  unsigned __int64 v77; // rax
  __int64 v78; // rcx
  unsigned __int64 v79; // rcx
  _QWORD *v80; // rdx
  bool v82; // [rsp+10h] [rbp-108h]
  unsigned __int8 v83; // [rsp+10h] [rbp-108h]
  __int64 v84; // [rsp+10h] [rbp-108h]
  __int64 v85; // [rsp+10h] [rbp-108h]
  __int64 v86; // [rsp+10h] [rbp-108h]
  __int64 v87; // [rsp+10h] [rbp-108h]
  int v88; // [rsp+18h] [rbp-100h]
  bool v89; // [rsp+1Dh] [rbp-FBh]
  bool v90; // [rsp+1Eh] [rbp-FAh]
  bool v91; // [rsp+1Fh] [rbp-F9h]
  __int64 v92; // [rsp+30h] [rbp-E8h] BYREF
  _OWORD *v93; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v94; // [rsp+40h] [rbp-D8h]
  _OWORD v95[5]; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v96; // [rsp+98h] [rbp-80h]
  __int64 v97; // [rsp+A0h] [rbp-78h]
  __int64 v98; // [rsp+A8h] [rbp-70h]
  int v99; // [rsp+B0h] [rbp-68h]
  _QWORD v100[2]; // [rsp+B8h] [rbp-60h] BYREF
  int v101; // [rsp+C8h] [rbp-50h]
  int v102; // [rsp+CCh] [rbp-4Ch]
  bool v103; // [rsp+D0h] [rbp-48h]
  bool v104; // [rsp+D1h] [rbp-47h]
  char v105; // [rsp+D2h] [rbp-46h]
  bool v106; // [rsp+D3h] [rbp-45h]
  bool v107; // [rsp+D4h] [rbp-44h]
  char v108; // [rsp+D5h] [rbp-43h]
  __int16 v109; // [rsp+D6h] [rbp-42h]

  v16 = *(_BYTE *)(a2 + 28) & 0x7F;
  v17 = v16 == 42;
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2A )
    v17 = 0;
  v91 = 0;
  if ( (unsigned int)v16 - 41 <= 1 )
  {
    v87 = a6;
    v77 = sub_B73BE0(a3);
    v91 = 1;
    a6 = v87;
    if ( !v77 )
      v91 = (*(_BYTE *)(a3 + 28) & 0x7F) == 42;
  }
  if ( (*(_BYTE *)(a3 + 31) & 8) != 0 )
  {
    v86 = a6;
    v72 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
    v74 = *(unsigned __int16 *)(a2 + 30);
    LOWORD(v74) = v74 & 0xC000;
    v75 = *(_WORD *)(a2 + 30) & 0x3FDF;
    v76 = *(_WORD *)(a2 + 30) & 0x37DF | 0x800 | v74;
    *(_WORD *)(a2 + 30) = v76;
    if ( v72 && (*(_BYTE *)(v72 + 30) & 0x20) != 0 )
    {
      LOWORD(v75) = v75 | 0x820;
      LOWORD(v76) = v76 & 0xC000;
      v76 = (unsigned int)v75 | (unsigned int)v76;
      *(_WORD *)(a2 + 30) = v76;
    }
    sub_B90130(a2, v86, v76, v75, v73, v86);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3) )
  {
    v58 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      sub_B90130(a2, *(_QWORD *)(v58 + 8), v18, v19, v20, v21);
    else
      sub_B90130(a2, v58, v18, v19, v20, v21);
  }
  v22 = *(_BYTE *)(a3 + 96) & 0x18 | *(_BYTE *)(a2 + 96) & 0xE7;
  *(_BYTE *)(a2 + 96) = v22;
  v23 = 0;
  *(_BYTE *)(a2 + 96) = *(_BYTE *)(a3 + 96) & 0x60 | v22 & 0x9F;
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2B )
    v23 = (*(_BYTE *)(a3 + 97) & 8) != 0;
  v24 = (8 * v23) | *(_BYTE *)(a2 + 97) & 0xF7;
  *(_BYTE *)(a2 + 97) = v24;
  v25 = v24 & 0xEF | *(_BYTE *)(a3 + 97) & 0x10;
  v26 = 0;
  *(_BYTE *)(a2 + 97) = v25;
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2B )
    v26 = *(_BYTE *)(a3 + 97) >> 7;
  v27 = 0;
  *(_BYTE *)(a2 + 97) = (v26 << 7) | v25 & 0x7F;
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2B )
    v27 = *(_BYTE *)(a3 + 98) & 1;
  v28 = 0;
  v29 = v27 | *(_BYTE *)(a2 + 98) & 0xFE;
  *(_BYTE *)(a2 + 98) = v29;
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2B )
    v28 = (*(_BYTE *)(a3 + 98) & 2) != 0;
  *(_BYTE *)(a2 + 98) = (2 * v28) | v29 & 0xFD;
  *(_BYTE *)(a2 + 29) = *(_BYTE *)(a3 + 29) & 0x60 | *(_BYTE *)(a2 + 29) & 0x9F;
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2B )
  {
    v30 = (_BYTE *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    {
      if ( ((*(_BYTE *)(*(_QWORD *)v30 + 8LL) + 70) & 0x7Fu) <= 3 )
        goto LABEL_20;
    }
    else if ( ((v30[8] + 70) & 0x7Fu) <= 3 )
    {
      goto LABEL_20;
    }
  }
  if ( sub_B8C400(a3, 0) )
  {
    v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    *(_BYTE *)(v57 + 29) |= 4u;
  }
  *(_BYTE *)(a2 + 29) = (8 * sub_B8C090((_BYTE *)a3)) | *(_BYTE *)(a2 + 29) & 0xF7;
LABEL_20:
  sub_1E40A90(a1, a4, a3, a2, a5, a10);
  if ( (*(_BYTE *)(a2 + 31) & 8) != 0 )
  {
    v31 = 0;
    v32 = 1;
    v33 = 1;
  }
  else
  {
    v62 = sub_1A3A250(a1);
    v33 = v62 != 0;
    v32 = v62 == 2;
    v31 = v62 == 0;
    if ( (*(_BYTE *)(a2 + 31) & 8) == 0 )
    {
      v34 = 0;
      goto LABEL_23;
    }
  }
  v34 = 9;
LABEL_23:
  v35 = *(_QWORD *)(a2 + 40);
  v90 = v31;
  v89 = v33;
  v99 = *(_DWORD *)(a2 + 24);
  v88 = v34;
  v82 = v32;
  v94 = 0x800000000LL;
  v92 = 0;
  v93 = v95;
  v95[4] = 0;
  v96 = 0;
  v97 = a1;
  v98 = v35;
  sub_B85890(v100, v35);
  v100[1] = 0;
  v106 = v90;
  v107 = v90;
  v101 = v88;
  v102 = 0;
  v103 = v89;
  v104 = v82;
  v105 = 1;
  v108 = 0;
  v109 = 0;
  sub_1A395A0((__int64)&v92);
  if ( (*(_BYTE *)(a2 + 31) & 8) != 0 )
  {
    v64 = *(_QWORD *)(a3 + 72);
    if ( (v64 & 1) == 0 && (v64 & 2) == 0 )
    {
      v65 = v64 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v65 )
      {
        v66 = *(_QWORD *)(v65 + 16);
        v67 = (_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v66 & 4) != 0 )
          v67 = (_QWORD *)*v67;
        v68 = sub_B8E180((unsigned __int64)v67);
        v69 = (__int64 *)(a3 + 72);
        if ( !v68 )
        {
          v70 = sub_AEADC0(v69);
LABEL_94:
          v71 = sub_1E38470(a1, *(_DWORD *)(a2 + 24), v70, a4, 0, (__m128)0LL, a8, a9);
          if ( v71 )
          {
            sub_1743080((__int64)&v93, v71 | (*(_BYTE *)(v71 + 29) >> 5) & 3);
            LODWORD(v92) = 2;
          }
          goto LABEL_29;
        }
        v70 = sub_AEADC0(v69);
        v78 = *(_QWORD *)(v70 + 16);
        if ( (v78 & 4) != 0 )
          v79 = *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v79 = v78 & 0xFFFFFFFFFFFFFFF8LL;
        v80 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
          v80 = (_QWORD *)*v80;
        if ( v80 == (_QWORD *)v79 )
          goto LABEL_94;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 41 > 1 && (unsigned __int8)sub_B843B0((_BYTE *)a3) )
  {
    v63 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v63 = (_QWORD *)*v63;
    sub_1A48440(a1, (__int64)&v92, (__int64)v63, 0);
  }
  else if ( a12 )
  {
    v36 = (unsigned int)v94;
    v37 = (unsigned int)v94 + 1LL;
    v83 = *(_BYTE *)(a12 + 29);
    v38 = a12 | (v83 >> 5) & 3;
    if ( v37 > HIDWORD(v94) )
    {
      sub_2237220(&v93, v95, v37, 8);
      v36 = (unsigned int)v94;
      v38 = a12 | (v83 >> 5) & 3;
    }
    *((_QWORD *)v93 + v36) = v38;
    LODWORD(v94) = v94 + 1;
    LODWORD(v92) = 2;
  }
LABEL_29:
  sub_17E53D0(a1, a2, (__int64)&v92, 0.0);
  if ( !a11 )
  {
    v39 = (__m128i *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v39 = (__m128i *)v39->m128i_i64[1];
    sub_B8EA00(v39, a2);
    if ( (*(_BYTE *)(a2 + 31) & 8) == 0
      || (v40 = *(_QWORD *)(a2 + 72), (((unsigned __int8)v40 | (unsigned __int8)(v40 >> 1)) & 1) != 0)
      || (v40 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v44 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v44 = (_QWORD *)*v44;
      sub_B94A80((__int64)v44, a2, v40, v41, v42, v43);
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL))(a3) )
  {
    v45 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v45 = *(_QWORD *)v45;
    v46 = *(_BYTE *)(v45 + 8) & 0x7F;
    if ( (unsigned __int8)v46 > 0x12u )
    {
      v46 = ((_BYTE)v46 + 94) & 0x7F;
      if ( (unsigned __int8)v46 > 5u )
        goto LABEL_41;
    }
    else if ( ((1LL << v46) & 0x40182) == 0 )
    {
      goto LABEL_41;
    }
    sub_1DC20B0(*(_QWORD *)(a1 + 11280), a3, a2, v46);
  }
LABEL_41:
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
  {
    v47 = (_BYTE *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      if ( ((*(_BYTE *)(*(_QWORD *)v47 + 8LL) + 70) & 0x7Fu) > 3 )
        goto LABEL_44;
    }
    else if ( ((v47[8] + 70) & 0x7Fu) > 3 )
    {
      goto LABEL_44;
    }
    if ( !v91 && !a11 )
      sub_B74500(a2, a3, 1);
  }
LABEL_44:
  v48 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( (unsigned int)v48 - 41 <= 1 && (*(_BYTE *)(a3 + 140) & 7) == 2 && v48 != 42 )
    *(_BYTE *)(a2 + 140) = *(_BYTE *)(a2 + 140) & 0xF8 | 2;
  v84 = *(_QWORD *)(a1 + 248);
  v49 = sub_A8BD70(v84, a3, 0);
  sub_AB9320(v84, a2, v49, v84, v50, v51);
  v85 = *(_QWORD *)(a1 + 248);
  v52 = sub_A86640(v85, a3);
  sub_AB39A0(v85, a2, v52, v85, v53, v54);
  if ( !v17 && !a11 )
  {
    if ( (v59 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL))) != 0
      && (*(_QWORD *)(v59 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
      && (*(_BYTE *)(v59 + 17) & 4) == 0
      || !v91
      && ((*(_BYTE *)(a3 + 28) & 0x7F) == 0x2B
       || (*(_BYTE *)(a3 + 97) & 0x20) == 0
       || (v60 = sub_B8C330(a3), !(unsigned int)sub_B74100(a3, v60))
       || (v61 = sub_B8C330(a2), (unsigned int)sub_B74100(a2, v61))) )
    {
      sub_1E046E0(a1, (__int64 *)a2, a3, a4, (__m128)0LL, a8);
    }
  }
  if ( *(char *)(a2 + 28) >= 0 )
  {
    v55 = (_BYTE *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      v56 = *(_BYTE *)(*(_QWORD *)v55 + 8LL) & 0x7F;
      if ( v56 <= 0x12u )
      {
LABEL_53:
        if ( ((1LL << v56) & 0x40182) == 0 )
          goto LABEL_54;
        goto LABEL_66;
      }
    }
    else
    {
      v56 = v55[8] & 0x7F;
      if ( v56 <= 0x12u )
        goto LABEL_53;
    }
    if ( ((v56 + 94) & 0x7Fu) > 5 )
      goto LABEL_54;
LABEL_66:
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      sub_17E24B0(a1, a2, (__m128i)0LL, *(double *)a8.m128_u64);
  }
LABEL_54:
  sub_169D230((__int64)&v92);
}
