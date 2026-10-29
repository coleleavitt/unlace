__int64 __fastcall sub_987A10(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  double v6; // xmm0_8
  int v7; // eax
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r15
  char v13; // al
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  int v32; // eax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r10
  int v41; // r15d
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  __int64 v46; // r15
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  __int64 v53; // r8
  int v54; // eax
  __int64 v55; // [rsp+8h] [rbp-80h]
  int v56; // [rsp+10h] [rbp-78h]
  __int64 v57; // [rsp+18h] [rbp-70h] BYREF
  __int64 v58; // [rsp+20h] [rbp-68h]
  __int64 v59; // [rsp+28h] [rbp-60h]
  _QWORD *v60; // [rsp+38h] [rbp-50h] BYREF
  void *v61[2]; // [rsp+40h] [rbp-48h] BYREF

  v6 = sub_B76070(a2);
  if ( v7 != 2 )
    return 0;
  v8 = **(_QWORD **)(a2 + 120);
  v9 = *(_QWORD *)(v8 + 48);
  v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) != 42 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v15 + 16) != 42 )
      return 0;
    v10 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v15, v4, v5);
    if ( !v10 )
      return 0;
  }
  v11 = *(_QWORD *)(v10 + 32);
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_BYTE *)(v12 + 16);
  switch ( v13 )
  {
    case 13:
      if ( (((*(_WORD *)(v12 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        return 0;
      break;
    case 47:
      v16 = sub_F60F10(v12, a2, v3, v4, v5);
      if ( (*(_BYTE *)(v16 + 74) & 1) == 0 && (*(_QWORD *)(v16 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0
        || *(char *)(sub_F60F10(v12, a2, v17, v18, v19) + 76) < 0 )
      {
        return 0;
      }
      break;
    case 10:
      break;
    default:
      return 0;
  }
  v20 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL);
  if ( !sub_987200(*(_QWORD *)(v20 + 48), a2, v3, v4, v5) )
    return 0;
  v23 = a1[2329];
  v24 = *(_QWORD *)(v20 + 48);
  v60 = a1;
  v56 = v23;
  v25 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v25 + 16) - 43 <= 1
    || (v30 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v30 <= 1)
    && (v31 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL),
        v57 = v24,
        v25 = sub_F63050(v31, a2, v30, v21, v22),
        v24 = v57,
        v25) )
  {
    while ( 1 )
    {
      v26 = *(_QWORD *)(v25 + 32);
      if ( (*(_BYTE *)(v25 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v27 = v26 & 0xFFFFFFFFFFFFFFF0LL;
        v25 = *(_QWORD *)v27;
        v28 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v27 + 16LL) - 43;
        if ( (unsigned int)v28 <= 1 )
          break;
        v29 = sub_F63050(v25, v27, v28, v21, v22);
        v26 = *(_QWORD *)(v29 + 32);
        if ( (*(_BYTE *)(v29 + 18) & 0x10) == 0 )
          goto LABEL_18;
      }
    }
LABEL_18:
    v24 = v26;
  }
  v57 = v24;
  v32 = sub_9872C0(&v60, v20, 0, v21, v22);
  v33 = sub_C0A3E0((_DWORD)v60, v57, 4, v32, 0, 0, 0);
  v34 = sub_C0BFD0((_DWORD)a1, v33, 0, 0, v56, 0, 0, 0, 0, 0);
  v35 = a1[2341];
  v57 = v34;
  LODWORD(v61[1]) = sub_A97D20(v60, *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL));
  if ( LODWORD(v61[1]) > 0x40 )
    sub_2205470(v61, 0, 0);
  else
    v61[0] = nullptr;
  v36 = sub_C0C5D0(v60, v61, v35, 0, v6);
  if ( LODWORD(v61[1]) > 0x40 && v61[0] )
  {
    v58 = v36;
    operator delete[](v61[0]);
    LODWORD(v36) = v58;
  }
  v37 = sub_C09D40((_DWORD)a1, v36, 8, v35, 0, 0, 0, 0, 0);
  v40 = v37;
  v41 = v37;
  if ( v11 != *(_QWORD *)(v37 + 8) )
  {
    v58 = v37;
    v42 = sub_C0A3E0((_DWORD)v60, v11, 27, v37, 0, 0, 0);
    v39 = v55;
    v40 = v58;
    v41 = v42;
  }
  v59 = v40;
  v43 = sub_9872C0(&v60, v8, 0, v38, v39);
  v44 = sub_C0A3E0((_DWORD)v60, v9, 4, v43, 0, 0, 0);
  v45 = sub_C09D40((_DWORD)v60, v44, 5, v11, 1, 0, 0, 0, 0);
  v58 = sub_C09F10((_DWORD)v60, v45, v41, 21, v11, 0, 0, 0, 0);
  *(__m128 *)v61 = _mm_loadh_ps((const double *)&v57);
  v46 = sub_EEF560(v60, v61, 2, 0, 0, 0);
  v49 = sub_9872C0(&v60, v8, 0, v47, v48);
  v50 = sub_C0A3E0((_DWORD)v60, v9, 4, v49, 0, 0, 0);
  v51 = sub_C09D40((_DWORD)v60, v50, 5, v11, 1, 0, 0, 0, 0);
  v52 = sub_C0A3E0((_DWORD)v60, v11, 4, v51, 0, 0, 0);
  if ( (*(_BYTE *)(v60[290] + 1LL) & 8) != 0 )
    v53 = v60[2330];
  else
    v53 = v60[2340];
  v54 = sub_C09F10((_DWORD)v60, v52, v59, 15, v53, 0, 0, 0, 0);
  return sub_EEFAF0((_DWORD)a1, 0, 0, 0, 0, v54, 0, 0, v46, 0, 0);
}
