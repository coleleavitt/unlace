__int64 __fastcall sub_18D3CC0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 *v27; // rcx
  __int64 **v28; // rax
  __int64 *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  _QWORD *v43; // rbp
  __int64 v44; // r13
  unsigned __int64 v45; // r12
  __int64 v46; // rbp
  unsigned __int8 v47; // al
  unsigned int v48[16]; // [rsp+8h] [rbp-40h] BYREF

  v10 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v11 = sub_F63600(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, (__int64)a3, a4, a5, a6);
  if ( !v11 )
    return 18;
  v16 = v11;
  v17 = sub_F60F10(v11, a2, v12, v13, v14, v15);
  if ( (*((_BYTE *)v17 + 29) & 1) == 0 )
    return 18;
  v23 = sub_B8C3D0((__int64)v17, a2, v18, v19, v20, v21);
  v26 = *v23;
  v27 = (__int64 *)(*v23 + 8LL * *((unsigned int *)v23 + 2));
  if ( *v23 < (unsigned __int64)v27 )
  {
    v29 = (__int64 *)*v23;
    while ( 1 )
    {
      v26 = *v29;
      if ( *(_WORD *)(*v29 + 36) == 380 )
        break;
      if ( v27 == ++v29 )
        return 18;
    }
    if ( v27 == v29 )
      return 18;
  }
  else
  {
    if ( (__int64 *)v26 == v27 )
      return 18;
    if ( *(_WORD *)(*v27 + 36) != 380 )
    {
      v28 = (__int64 **)(v27 + 1);
      while ( (__int64 **)v26 != v28 )
      {
        v27 = *v28++;
        if ( *((_WORD *)v27 + 18) == 380 )
          goto LABEL_15;
      }
      return 18;
    }
  }
LABEL_15:
  v30 = sub_F60F10(v16, a2, v26, (__int64)v27, v24, v25);
  v36 = sub_B7E900((__int64)v30, a2, v31, v32, v33, v34);
  if ( !v36 )
    return 18;
  v37 = v10 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_17:
  v38 = *(_QWORD *)(v36 + 48);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
  {
    v39 = *(_QWORD *)v37;
    v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v40 + 16) == 42 )
    {
      if ( *(_BYTE *)(v39 + 16) != 42 )
        v39 = sub_F63050(v39, v38, v40, v35);
      v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v41 + 16) == 13 && ((*(_WORD *)(v41 + 18) >> 3) & 0x1FF) == 0x1B3 )
      {
        *a3 = sub_160A600(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v36 + 48), 1u, 0, 0, a7, a8, 0);
        goto LABEL_30;
      }
    }
    if ( (unsigned int)sub_BFE6E0(*a3 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(a1 + 248), 1, a7) )
    {
      *a3 = sub_160A600(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v36 + 48), 0xDu, 0, 0, a7, a8, 0);
      goto LABEL_30;
    }
    v38 = *(_QWORD *)(v36 + 48);
  }
  if ( (unsigned int)sub_18D2070(a1, v38, a3, v48, 1, a7, a8) )
  {
    while ( 1 )
    {
      v42 = *(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v36 = v42;
      if ( !v42 )
        return 18;
      if ( (*(_BYTE *)(v42 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_17;
    }
  }
  *a3 = sub_160A600(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v36 + 48), v48[0], 0, 0, a7, a8, 0);
LABEL_30:
  v43 = *(_QWORD **)(a1 + 248);
  *(_QWORD *)v48 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  v44 = sub_EEE9A0(64, v43, 8u);
  sub_C0B340(v44, v43, 0, (__int64)v48, 1, 0);
  *(_QWORD *)(v44 + 8) = a2;
  *(_QWORD *)(v44 + 56) = v36 | 2;
  v45 = (unsigned __int64)sub_A81910(v43, a2, 0);
  v46 = sub_EEE9A0(48, v43, 8u);
  *(_WORD *)v46 = *(_WORD *)v46 & 0xFE00 | 0x4C;
  if ( unk_2CD7484 )
    sub_EE9B50(76);
  *(_WORD *)(v46 + 1) &= 0xF801u;
  *(_QWORD *)(v46 + 8) = a2;
  *(_QWORD *)(v46 + 24) = v45 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v46 + 32) = v44;
  *(_DWORD *)(v46 + 16) = 0;
  *(_QWORD *)(v46 + 40) = 0;
  v47 = sub_B629B0(v46);
  *(_BYTE *)(v46 + 1) = (v47 << 6) | *(_BYTE *)(v46 + 1) & 0x3F;
  *(_BYTE *)(v46 + 2) = *(_BYTE *)(v46 + 2) & 0xF8 | (v47 >> 2) & 7;
  *a3 = v46;
  return 0;
}
