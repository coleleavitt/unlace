__int64 __fastcall sub_1929BB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9)
{
  __int64 v10; // r9
  unsigned int v14; // r13d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int16 v18; // ax
  bool v19; // al
  bool v20; // al
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 *v27; // r12
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned int v30; // edx
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  char v38; // al
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rdi
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  bool v46; // al
  unsigned int v47; // eax
  __int64 v48; // r14
  unsigned __int64 v49; // r14
  unsigned __int64 v50; // rax
  bool v51; // al
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  bool v54; // al
  bool v55; // al
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r12
  __int64 v62; // rax
  _QWORD *v63; // rax
  unsigned int v64; // [rsp+0h] [rbp-E8h]
  unsigned int v65; // [rsp+0h] [rbp-E8h]
  unsigned int v66; // [rsp+0h] [rbp-E8h]
  char v67; // [rsp+0h] [rbp-E8h]
  char v68; // [rsp+0h] [rbp-E8h]
  unsigned int v69; // [rsp+0h] [rbp-E8h]
  __int64 v70; // [rsp+0h] [rbp-E8h]
  char v71; // [rsp+0h] [rbp-E8h]
  unsigned int v72; // [rsp+Ch] [rbp-DCh]
  __int16 v73; // [rsp+Ch] [rbp-DCh]
  __int64 v74; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v75[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v76; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v77; // [rsp+40h] [rbp-A8h] BYREF
  char v78; // [rsp+98h] [rbp-50h]
  unsigned int v79; // [rsp+A0h] [rbp-48h]
  char v80; // [rsp+A4h] [rbp-44h]

  v10 = a9;
  if ( !a5 || !a6 )
    return 1;
  v14 = a3;
  v15 = a5;
  v16 = *(_QWORD *)(a5 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_QWORD *)v16;
  if ( *(_BYTE *)(*(_QWORD *)v16 + 16LL) != 13 )
    goto LABEL_47;
  v18 = (*(_WORD *)(v17 + 18) >> 3) & 0x1FF;
  if ( v18 <= 0x1F1u )
    goto LABEL_47;
  if ( v18 == 501 )
  {
    if ( a4 - 21 <= 0xA )
      return sub_1C214B0(*(_QWORD *)(a1 + 776), a2, a3, a4, a5, a6);
  }
  else
  {
    a3 = *(_QWORD *)(a1 + 232);
    if ( (*(_BYTE *)(a3 + 1) & 8) != 0 && v18 == 498 )
    {
      v70 = v17;
      v52 = sub_1907C70(a1, a6, (__m128i)a7, a8, a3, v17, a5, a9);
      if ( v52 == 1 )
        return 1;
      v53 = v52 & 0xFFFFFFFFFFFFFFFELL;
      a6 = (_QWORD *)v53;
      if ( (*(_DWORD *)v53 & 0x10000) != 0 )
        return sub_18E0620(a1, a2, v14, a4, v15, (unsigned __int64)a6, *(double *)a7.m128_u64);
      v54 = sub_1741750(*(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      v17 = v70;
      v10 = a9;
      if ( v54 )
        return sub_18E0620(a1, a2, v14, a4, v15, (unsigned __int64)a6, *(double *)a7.m128_u64);
    }
  }
  if ( a4 != 10 )
    goto LABEL_45;
  if ( *(_DWORD *)(a1 + 12596) >= *(_DWORD *)(a1 + 11320) )
    goto LABEL_45;
  if ( ((*(_WORD *)(v17 + 18) >> 3) & 0x1FFu) - 498 > 1 )
    goto LABEL_45;
  a3 = *(_WORD *)v15 & 0x1FF;
  v64 = *(_WORD *)v15 & 0x1FF;
  if ( (unsigned int)(unsigned __int16)a3 - 23 > 1 )
    goto LABEL_45;
  v72 = v10;
  v19 = sub_18C0AA0(v15);
  v10 = v72;
  a3 = v64;
  if ( v19 )
    goto LABEL_45;
  v65 = v72;
  v73 = a3;
  v20 = sub_18C0AE0(v15);
  v10 = v65;
  if ( v20 )
    goto LABEL_45;
  v17 = v15 + 64;
  if ( v73 != 24 )
    v17 = v15 + 80;
  v21 = 8LL * *(unsigned int *)(v15 + 4);
  a5 = v17 + v21;
  v22 = v21 >> 5;
  if ( v21 >> 5 )
  {
    a3 = *(_BYTE *)((*(_QWORD *)v17 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
    if ( (_BYTE)a3 != 71 )
    {
      a3 = *(_BYTE *)((*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
      if ( (_BYTE)a3 == 71 )
      {
        v17 += 8;
      }
      else
      {
        v23 = v17 + 16;
        a3 = *(_BYTE *)((*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
        if ( (_BYTE)a3 == 71 )
        {
LABEL_100:
          v17 = v23;
        }
        else
        {
          a3 = v17 + 32;
          v24 = v17 + 32 * v22;
          while ( 1 )
          {
            v17 = a3 - 8;
            if ( (*(_BYTE *)((*(_QWORD *)(a3 - 8) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) == 0x47 )
              break;
            v17 = a3;
            if ( v24 == a3 )
              goto LABEL_41;
            if ( (*(_BYTE *)((*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) == 0x47 )
              break;
            v17 = a3 + 8;
            if ( (*(_BYTE *)((*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) == 0x47 )
              break;
            v23 = a3 + 16;
            v25 = *(_QWORD *)(a3 + 16);
            a3 += 32;
            if ( (*(_BYTE *)((v25 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) == 0x47 )
              goto LABEL_100;
          }
        }
      }
    }
LABEL_26:
    if ( a5 != v17 )
    {
      v26 = *(_QWORD *)(v15 + 40);
      v27 = (__int64 *)(a1 + 8);
      if ( v26 )
      {
        v28 = *(_QWORD *)(v15 + 48);
        v75[0] = *(_QWORD *)(v15 + 40);
        v75[1] = v28;
        v29 = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v29 )
        {
          v75[0] = v29;
          while ( (*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v20 = 1;
            v29 = *(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v20 )
            v75[0] = v29;
        }
        v30 = sub_E90530(v75);
      }
      else
      {
        v30 = *(_DWORD *)(v15 + 24);
      }
      sub_168B9F0((__int64)v75, v27, v30, 0x1404u, 0);
      v31 = *(_QWORD *)(v15 + 16);
      v32 = v31 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v31 & 7) != 0 )
        v32 = 0;
      if ( v78 )
      {
        sub_AE9DF0(&v77, v32, 5u);
      }
      else if ( v80 )
      {
        v61 = sub_168B9E0(v75);
        v62 = v76;
        if ( v76 )
          v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v76 + 32LL))(v76);
        v74 = v62;
        v63 = sub_1587BC0(v61, &v74, v57, v58, v59, v60);
        sub_AE9DF0((unsigned __int8 **)(*v63 + 32LL * v79 + 8), v32, 5u);
      }
      sub_15F7200(v75);
      return 1;
    }
    goto LABEL_45;
  }
LABEL_41:
  v34 = (a5 - v17) >> 3;
  if ( v34 != 2 )
  {
    if ( v34 != 3 )
    {
      a3 = v34 - 1;
      if ( a3 )
        goto LABEL_45;
      goto LABEL_44;
    }
    a3 = *(_BYTE *)((*(_QWORD *)v17 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
    if ( (_BYTE)a3 == 71 )
      goto LABEL_26;
    v17 += 8;
  }
  a3 = *(_BYTE *)((*(_QWORD *)v17 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
  if ( (_BYTE)a3 == 71 )
    goto LABEL_26;
  v17 += 8;
LABEL_44:
  a3 = *(_BYTE *)((*(_QWORD *)v17 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
  if ( (_BYTE)a3 == 71 )
    goto LABEL_26;
LABEL_45:
  v66 = v10;
  v35 = sub_1907C70(a1, (_QWORD *)v15, (__m128i)a7, a8, a3, v17, a5, v10);
  if ( v35 == 1 )
    return 1;
  v10 = v66;
  v15 = v35 & 0xFFFFFFFFFFFFFFFELL;
LABEL_47:
  v36 = *(_QWORD *)(a1 + 232);
  v37 = *(_QWORD *)(a6[1] & 0xFFFFFFFFFFFFFFF0LL);
  v38 = *(_BYTE *)(v36 + 1) & 8;
  if ( *(_BYTE *)(v37 + 16) == 13 )
  {
    v39 = *(unsigned __int16 *)(v37 + 18);
    LOWORD(v39) = ((unsigned __int16)v39 >> 3) & 0x1FF;
    if ( (unsigned __int16)v39 > 0x1F1u )
    {
      LOBYTE(v39) = (_WORD)v39 == 498;
      if ( a4 == 21 && (_BYTE)v39 )
      {
        if ( v38
          && ((*(_DWORD *)v15 & 0x10000) != 0
           || (v71 = v10, (*(_DWORD *)a6 & 0x10000) != 0)
           || (v55 = sub_1741750(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL)), LOBYTE(v10) = v71, v55)) )
        {
          return sub_18E0620(a1, a2, v14, 0x15u, v15, (unsigned __int64)a6, *(double *)a7.m128_u64);
        }
        else
        {
          return sub_1928110(a1, v14, 0x15u, v15, (unsigned __int64)a6, v10, a7, a8);
        }
      }
      if ( v38 )
      {
        if ( (_BYTE)v39 )
        {
          v69 = v10;
          v51 = sub_1741750(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL));
          v10 = v69;
          if ( v51 )
            return sub_18E0620(a1, a2, v14, a4, v15, (unsigned __int64)a6, *(double *)a7.m128_u64);
        }
      }
      v67 = v10;
      v40 = sub_1907C70(a1, a6, (__m128i)a7, a8, v39, v36, a5, v10);
      LOBYTE(v10) = v67;
      if ( v40 > 1 )
      {
        v36 = *(_QWORD *)(a1 + 232);
        a6 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFELL);
        v38 = *(_BYTE *)(v36 + 1) & 8;
        goto LABEL_55;
      }
      return 1;
    }
  }
LABEL_55:
  if ( v38 )
  {
    if ( (*(_DWORD *)v15 & 0x10000) != 0 )
      return sub_18E0620(a1, a2, v14, a4, v15, (unsigned __int64)a6, *(double *)a7.m128_u64);
    v68 = v10;
    if ( (*(_DWORD *)a6 & 0x10000) != 0 )
      return sub_18E0620(a1, a2, v14, a4, v15, (unsigned __int64)a6, *(double *)a7.m128_u64);
    if ( sub_1741750(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
      return sub_18E0620(a1, a2, v14, a4, v15, (unsigned __int64)a6, *(double *)a7.m128_u64);
    v46 = sub_1741750(*(_QWORD *)(a6[1] & 0xFFFFFFFFFFFFFFF0LL));
    LOBYTE(v10) = v68;
    if ( v46 )
      return sub_18E0620(a1, a2, v14, a4, v15, (unsigned __int64)a6, *(double *)a7.m128_u64);
    return sub_1928110(a1, v14, a4, v15, (unsigned __int64)a6, v10, a7, a8);
  }
  if ( (*(_BYTE *)(v36 + 20) & 4) == 0 || (*(_DWORD *)v15 & 0x10000) == 0 && (*(_DWORD *)a6 & 0x10000) == 0 )
    return sub_1928110(a1, v14, a4, v15, (unsigned __int64)a6, v10, a7, a8);
  if ( a4 - 22 > 9 )
  {
    if ( a4 <= 0x20 )
    {
      v41 = 1LL << a4;
      if ( ((1LL << a4) & 0x18FC00) != 0 )
      {
        v42 = *(_QWORD **)(a1 + 248);
        v43 = v42[2340];
        goto LABEL_68;
      }
      if ( (v41 & 0x100000000LL) != 0 )
      {
        v43 = a6[1];
        v42 = *(_QWORD **)(a1 + 248);
        goto LABEL_68;
      }
      if ( (v41 & 0x200000) != 0 )
      {
        v75[0] = *(_QWORD *)(v15 + 8);
        v56 = sub_6D5440(v75);
        v42 = *(_QWORD **)(a1 + 248);
        v43 = v56;
        goto LABEL_68;
      }
    }
    v42 = *(_QWORD **)(a1 + 248);
    v43 = v42[2384];
LABEL_68:
    v44 = *(unsigned int *)(a1 + 1952);
    v45 = *(unsigned int *)(a1 + 1956);
    if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v45, v44) )
    {
      v45 = 0;
      v44 = 0;
    }
    return sub_C09F10(v42, v15, (unsigned __int64)a6, a4, v43, 0, 0, v14, (v45 << 32) | v44);
  }
  v47 = *(_DWORD *)(a1 + 1952);
  v48 = *(unsigned int *)(a1 + 1956);
  if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v48, v47) )
  {
    v48 = 0;
    v47 = 0;
  }
  v75[0] = *(_QWORD *)(v15 + 8);
  v49 = (v48 << 32) | v47;
  v50 = sub_6D5440(v75);
  return sub_C0BCA0(*(_QWORD **)(a1 + 248), v15, (__int64)a6, a4, v50, 0, 0, v14, v49, 0, 0);
}
