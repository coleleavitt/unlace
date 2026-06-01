__int64 __fastcall sub_1CD3170(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int8 a6,
        double a7,
        int a8,
        unsigned int a9)
{
  char v11; // dl
  char v12; // al
  __int64 *v13; // rbx
  unsigned int v14; // ecx
  char v17; // r14
  __int64 *v18; // rbx
  unsigned int v19; // ecx
  __int64 v20; // r12
  char v21; // al
  __int64 v22; // r15
  char v23; // al
  unsigned __int64 v24; // rax
  __int64 *v25; // rbx
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  char v33; // cl
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  char v36; // al
  __int64 *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r14
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  _QWORD *v51; // rax
  unsigned __int64 v52; // [rsp+8h] [rbp-F0h]
  __int64 v53; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v55; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v56; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v57[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 *v58; // [rsp+40h] [rbp-B8h]
  __int64 *v59; // [rsp+48h] [rbp-B0h]
  unsigned __int8 *v60[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v61; // [rsp+A8h] [rbp-50h]
  unsigned int v62; // [rsp+B0h] [rbp-48h]
  char v63; // [rsp+B4h] [rbp-44h]

  v11 = *(_BYTE *)(a4 + 28);
  v12 = *(_BYTE *)(a2 + 28);
  v54 = a2;
  v53 = a4;
  if ( (v11 & 0x7F) != (v12 & 0x7F) )
  {
    if ( !a6 )
      return 0;
    v13 = (__int64 *)(a1 + 8);
    v14 = 5143;
    if ( a9 )
    {
      sub_168B9F0((__int64)v57, v13, a9, 0x13F8u, 0);
      sub_15F7200(v57);
      a2 = v54;
      v14 = 6400;
    }
    sub_168B9F0((__int64)v57, v13, *(_DWORD *)(a2 + 24), v14, 0);
    LOBYTE(v56) = a8 != 0;
    sub_1588420((__int64)v57, (unsigned __int8 *)&v56);
    sub_15F7200(v57);
    sub_168B9F0((__int64)v57, v13, *(_DWORD *)(v53 + 24), 0x1908u, 0);
    LOBYTE(v56) = a8 != 0;
LABEL_6:
    sub_1588420((__int64)v57, (unsigned __int8 *)&v56);
    sub_15F7200(v57);
    return 0;
  }
  v17 = sub_B8BE90(a4);
  if ( v17 != (unsigned __int8)sub_B8BE90(v54) )
  {
    if ( !a6 )
      return 0;
    v18 = (__int64 *)(a1 + 8);
    v19 = 5151;
    if ( a9 )
    {
      sub_168B9F0((__int64)v57, v18, a9, 0x13F8u, 0);
      sub_15F7200(v57);
      v19 = 6407;
    }
    v20 = 0;
    v21 = *(_BYTE *)(v54 + 28) & 0x7F;
    if ( v21 != 67 )
      v20 = (v21 != 47) + 1LL;
    sub_168B9F0((__int64)v57, v18, *(_DWORD *)(v54 + 24), v19, 0);
    if ( v61 )
    {
      sub_AE9DF0(v60, v20, 3u);
    }
    else if ( v63 )
    {
      v42 = sub_168B9E0(v57);
      v43 = (__int64)v58;
      if ( v58 )
        v43 = (*(__int64 (__fastcall **)(__int64 *))(*v58 + 32))(v58);
      v56 = v43;
      v44 = sub_1587BC0(v42, (__int64 *)&v56, v38, v39, v40, v41);
      sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v62 + 8), v20, 3u);
    }
    LOBYTE(v56) = sub_B8BED0(v54);
    sub_1588420((__int64)v57, (unsigned __int8 *)&v56);
    sub_15F7200(v57);
    sub_168B9F0((__int64)v57, v18, *(_DWORD *)(v53 + 24), 0x1906u, 0);
    if ( v61 )
    {
      sub_AE9DF0(v60, v20, 3u);
    }
    else if ( v63 )
    {
      v47 = sub_168B9E0(v57);
      v50 = (__int64)v58;
      if ( v58 )
        v50 = (*(__int64 (__fastcall **)(__int64 *))(*v58 + 32))(v58);
      v56 = v50;
      v51 = sub_1587BC0(v47, (__int64 *)&v56, v45, v46, v48, v49);
      sub_AE9DF0((unsigned __int8 **)(*v51 + 32LL * v62 + 8), v20, 3u);
    }
    LOBYTE(v56) = sub_B8BED0(v53);
    goto LABEL_6;
  }
  v22 = v53;
  v23 = *(_BYTE *)(v53 + 28) & 0x7F;
  if ( v23 == 47 )
  {
    v52 = sub_AB5860(*(_QWORD *)(a1 + 248), *(_QWORD *)(v53 + 48));
    v24 = sub_AB5860(*(_QWORD *)(a1 + 248), *(_QWORD *)(v54 + 48));
    if ( (*(_QWORD *)&byte_8[v52 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v52 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v52) & 7) != (*(_QWORD *)&byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v24) & 7) )
    {
      if ( a6 )
      {
        v25 = (__int64 *)(a1 + 8);
        if ( a9 )
        {
          sub_168B9F0((__int64)v57, v25, a9, 0x13F8u, 0);
          sub_15F7200(v57);
          v26 = 6397;
        }
        else
        {
          v26 = 5134;
        }
        sub_168B9F0((__int64)v57, v25, *(_DWORD *)(v54 + 24), v26, 0);
        v56 = *(_QWORD *)(v54 + 48);
        v27 = sub_162B6D0((__int64)v57, (__int64 *)&v56);
        LOBYTE(v55) = a8 != 0;
        sub_1588420(v27, (unsigned __int8 *)&v55);
        sub_15F7200(v57);
        sub_168B9F0((__int64)v57, v25, *(_DWORD *)(v53 + 24), 0x18FEu, 0);
        v56 = *(_QWORD *)(v53 + 48);
        sub_162B6D0((__int64)v57, (__int64 *)&v56);
        sub_15F7200(v57);
      }
      return 0;
    }
    goto LABEL_28;
  }
  if ( v23 != 68 )
  {
    if ( a8 == 2 )
      return 1;
    goto LABEL_32;
  }
  v28 = *(_QWORD *)(v53 + 56);
  v29 = *(_QWORD *)(v54 + 56);
  if ( a8 )
  {
    if ( !(unsigned __int8)sub_1CD38B0(a1, (_DWORD)a3, v29, (_DWORD)a5, v28, a6, a8, a9) )
      return 0;
LABEL_28:
    if ( a8 == 2 )
      return 1;
    goto LABEL_29;
  }
  if ( !(unsigned __int8)sub_1CD38B0(a1, (_DWORD)a3, v29, (_DWORD)a5, v28, a6, 1, a9) )
    return 0;
LABEL_29:
  v22 = v53;
  if ( (*(_BYTE *)(v53 + 28) & 0x7F) == 0x44 )
    return 1;
LABEL_32:
  v55 = 0;
  v56 = 0;
  if ( (*(_BYTE *)(v54 + 28) & 0x7F) == 0x43 )
  {
    v36 = (*(_BYTE *)(v54 + 60) & 4) != 0;
    if ( (*(_BYTE *)(v54 + 60) & 4) == 0 || v54 == -80 )
    {
      v33 = (*(_BYTE *)(v22 + 60) & 4) != 0;
      if ( (*(_BYTE *)(v22 + 60) & 4) == 0 )
        return 1;
      v32 = 0;
      if ( v22 == -80 )
        return 1;
    }
    else
    {
      v32 = *(_QWORD *)(v54 + 80);
      v55 = v32;
      v33 = v32 == 0;
      v35 = 0;
      if ( (*(_BYTE *)(v22 + 60) & 4) == 0 )
        goto LABEL_43;
      v36 = 1;
      v35 = v22 + 80;
      if ( v22 == -80 )
        goto LABEL_43;
    }
    v56 = *(_QWORD *)(v22 + 80);
    v35 = v56;
    v36 = v56 == 0;
    goto LABEL_43;
  }
  v30 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v54 + 48) & 0xFFFFFFFFFFFFFFF0LL));
  if ( v30
    && *(_BYTE *)(v30 + 16) == 16
    && *(_QWORD *)(v30 + 32)
    && *(_QWORD *)(v54 + 16LL * *(unsigned int *)(v54 + 84) + 88) )
  {
    v55 = *(_QWORD *)(v54 + 16LL * *(unsigned int *)(v54 + 84) + 88);
  }
  v31 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v53 + 48) & 0xFFFFFFFFFFFFFFF0LL));
  if ( v31 )
  {
    v32 = v55;
    v33 = v55 == 0;
    if ( *(_BYTE *)(v31 + 16) == 16
      && *(_QWORD *)(v31 + 32)
      && (v34 = 16LL * *(unsigned int *)(v53 + 84), (v35 = *(_QWORD *)(v53 + v34 + 88)) != 0) )
    {
      v56 = *(_QWORD *)(v53 + v34 + 88);
      v36 = 0;
    }
    else
    {
      v35 = v56;
      v36 = v56 == 0;
    }
  }
  else
  {
    v35 = v56;
    v32 = v55;
    v36 = v56 == 0;
    v33 = v55 == 0;
  }
LABEL_43:
  v57[0] = a1;
  v57[1] = &v55;
  v58 = &v54;
  v59 = (__int64 *)&v56;
  v37 = &v53;
  v60[0] = (unsigned __int8 *)&v53;
  if ( v36 != v33 || v32 && (v37 = a5, !(unsigned __int8)sub_1743870(a1, a5, v35, a3, v32)) )
  {
    if ( a6 )
      sub_1CC5450((__int64)v57, (__int64)v37, a7);
    return 0;
  }
  return 1;
}
