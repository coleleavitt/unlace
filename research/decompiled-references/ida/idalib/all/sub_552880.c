__int64 __fastcall sub_552880(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // r10d
  char v10; // dl
  unsigned int v11; // r15d
  char v12; // al
  unsigned int v13; // r14d
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  char v18; // al
  int v19; // edx
  int v20; // eax
  unsigned int v21; // r15d
  unsigned __int64 v22; // rax
  int v23; // r15d
  char tinfo_property; // al
  int v25; // r10d
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  char v29; // al
  unsigned __int64 v30; // r15
  __int64 v31; // r14
  char v32; // dl
  int v33; // eax
  _DWORD *v34; // rdi
  _DWORD *v35; // rsi
  int v36; // esi
  int v37; // eax
  unsigned int v38; // r14d
  char v39; // dl
  int v40; // eax
  int v41; // eax
  char v42; // al
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned int v47; // eax
  unsigned int v48; // eax
  char v49; // al
  unsigned int v50; // eax
  unsigned int v51; // eax
  char v52; // al
  char v53; // [rsp+0h] [rbp-48h]
  int v55; // [rsp+0h] [rbp-48h]
  int v56; // [rsp+4h] [rbp-44h]
  int v57; // [rsp+4h] [rbp-44h]
  char v58; // [rsp+4h] [rbp-44h]
  unsigned __int8 v59; // [rsp+4h] [rbp-44h]
  int v60; // [rsp+4h] [rbp-44h]
  int v61; // [rsp+4h] [rbp-44h]
  int v62; // [rsp+4h] [rbp-44h]
  int v63; // [rsp+4h] [rbp-44h]
  int v64; // [rsp+4h] [rbp-44h]
  int v65; // [rsp+4h] [rbp-44h]
  int v66; // [rsp+8h] [rbp-40h]
  int v67; // [rsp+8h] [rbp-40h]
  int v68; // [rsp+Ch] [rbp-3Ch]

  v5 = a5;
  v10 = *(_BYTE *)(a3 + 88);
  v11 = v10 & 0xF0;
  if ( (v10 & 0xF0) == 0xC0 )
    v11 = *(_DWORD *)(a3 + 28);
  v12 = *(_BYTE *)(a4 + 88);
  v13 = v12 & 0xF0;
  if ( (v12 & 0xF0) == 0xC0 )
    v13 = *(_DWORD *)(a4 + 28);
  if ( (a5 & 0xA) == 0 )
  {
    if ( v10 == v12 && v11 == v13 )
      goto LABEL_56;
    if ( v11 <= 0x10 )
    {
      v47 = getinf(99);
      v5 = a5;
      v11 = v47;
      if ( v13 > 0x10 )
      {
LABEL_76:
        if ( !v11 || !v13 )
          return 0;
        goto LABEL_10;
      }
    }
    else if ( v13 > 0x10 )
    {
LABEL_10:
      if ( v11 != v13
        && (*(_QWORD *)(a3 + 8)
         || (v11 & 0xFFFFFFEF) != 0x20 && (v11 & 0xFFFFFFDF) != 0x50 && v11 != 144 && v11 != 96
         || *(_QWORD *)(a4 + 8)
         || (v13 & 0xFFFFFFEF) != 0x20 && (v13 & 0xFFFFFFDF) != 0x50 && v13 != 144 && v13 != 96) )
      {
        return 0;
      }
LABEL_56:
      v36 = *(_DWORD *)(a3 + 24);
      v53 = v5 & 0xFD;
      v37 = *(_DWORD *)(a4 + 24);
      v16 = v36 & 0xC0;
      v17 = v37 & 0xC0;
      if ( v17 == v16 )
      {
LABEL_57:
        v38 = (v36 ^ v37) & 0xFFFFFEFF;
        if ( v38 )
        {
          if ( (v5 & 0xC) == 0 )
            return 0;
          v38 = 0;
        }
        v23 = -1;
        goto LABEL_61;
      }
LABEL_23:
      v68 = v17;
      v66 = v16;
      v56 = v5;
      if ( (v5 & 0xC) == 0 )
        return 0;
      v18 = getinf(58);
      v5 = v56;
      v19 = v68;
      v20 = (v18 & 4) == 0 ? 64 : 128;
      if ( v66 )
      {
        if ( v68 )
          return 0;
        v19 = v20;
        v20 = v66;
      }
      else if ( !v68 )
      {
LABEL_26:
        v15 = v56 & 8;
        goto LABEL_27;
      }
      if ( v19 != v20 )
        return 0;
      goto LABEL_26;
    }
    v55 = v5;
    v48 = getinf(99);
    v5 = v55;
    v13 = v48;
    goto LABEL_76;
  }
  v15 = a5 & 8;
  if ( (a5 & 8) == 0 && v11 != v13 )
    return 0;
  v16 = *(_DWORD *)(a3 + 24) & 0xC0;
  v17 = *(_DWORD *)(a4 + 24) & 0xC0;
  v53 = a5 & 0xFD;
  if ( v16 != v17 )
    goto LABEL_23;
LABEL_27:
  if ( !v15 )
  {
    v37 = *(_DWORD *)(a4 + 24);
    v36 = *(_DWORD *)(a3 + 24);
    goto LABEL_57;
  }
  if ( v13 == v11 )
    goto LABEL_34;
  if ( v11 <= 0x10 )
  {
    v63 = v5;
    v50 = getinf(99);
    v5 = v63;
    v11 = v50;
    if ( v13 > 0x10 )
      goto LABEL_92;
    goto LABEL_91;
  }
  if ( v13 <= 0x10 )
  {
LABEL_91:
    v64 = v5;
    v51 = getinf(99);
    v5 = v64;
    v13 = v51;
LABEL_92:
    if ( v13 == v11 )
      goto LABEL_34;
  }
  v21 = v11 & 0xFFFFFFF0;
  v22 = *(_QWORD *)(a3 + 8);
  if ( v21 == 64 || v21 == 208 )
  {
    if ( *(_QWORD *)(a4 + 8) < v22 )
      return 0;
    v23 = *(_QWORD *)(a3 + 8);
LABEL_36:
    v57 = v5;
    tinfo_property = get_tinfo_property(*(_QWORD *)(a4 + 32), 2);
    v25 = v57;
    if ( (tinfo_property & 0x3F) == 1 )
      goto LABEL_37;
    goto LABEL_95;
  }
  if ( v22 )
    return 0;
LABEL_34:
  if ( ((*(_DWORD *)(a3 + 24) ^ *(_DWORD *)(a4 + 24)) & 0xFFFFFEFF) != 0 )
  {
    v23 = -1;
    goto LABEL_36;
  }
  v62 = v5;
  v49 = get_tinfo_property(*(_QWORD *)(a4 + 32), 2);
  v25 = v62;
  if ( (v49 & 0x3F) == 1 )
  {
LABEL_85:
    v23 = *(_QWORD *)(a3 + 8);
    if ( v23 == *(_QWORD *)(a4 + 8) )
      goto LABEL_38;
    return 0;
  }
  v23 = -1;
LABEL_95:
  v65 = v25;
  if ( (get_tinfo_property(*(_QWORD *)(a3 + 32), 2) & 0x3F) == 1 )
    return 0;
  v5 = v65;
  v38 = 8;
LABEL_61:
  v39 = *(_BYTE *)(a3 + 88);
  v40 = v39 & 0xF0;
  if ( (v39 & 0xF0) == 0xC0 )
    v40 = *(_DWORD *)(a3 + 28);
  if ( (unsigned int)(v40 - 208) <= 0x2F )
  {
    v60 = v5;
    v41 = compare_arglocs(a3 + 40, a4 + 40);
    v5 = v60;
    if ( v41 )
      return 0;
  }
  v61 = v5;
  v42 = sub_5527D0(a1, a2, (unsigned __int64 *)(a3 + 32), (unsigned __int64 *)(a4 + 32), v53);
  v25 = v61;
  if ( !v42 )
    return 0;
  if ( !v38 )
  {
    v43 = *(_QWORD *)(a3 + 72);
    if ( v43 != *(_QWORD *)(a4 + 72) )
      return 0;
    if ( v43 )
    {
      v44 = *(_QWORD *)(a3 + 64);
      v45 = *(_QWORD *)(a4 + 64);
      v46 = 0;
      while ( *(_DWORD *)(v44 + 8 * v46) == *(_DWORD *)(v45 + 8 * v46)
           && *(_DWORD *)(v44 + 8 * v46 + 4) == *(_DWORD *)(v45 + 8 * v46 + 4) )
      {
        if ( v43 == ++v46 )
          goto LABEL_37;
      }
      return 0;
    }
  }
LABEL_37:
  if ( v23 == -1 )
    goto LABEL_85;
LABEL_38:
  v27 = v25;
  v26 = *(_DWORD *)(a3 + 24);
  LOBYTE(v27) = (unsigned __int8)v25 >> 7;
  v28 = (unsigned __int8)v25 >> 7;
  if ( (v26 & 0x100) != 0 && (*(_BYTE *)(a4 + 25) & 1) != 0 )
    goto LABEL_43;
  if ( (v26 & 0x200) != 0 || (v58 = 0, (*(_BYTE *)(a4 + 25) & 2) != 0) )
  {
    v67 = (unsigned __int8)v25 >> 7;
    v59 = (unsigned __int8)v25 >> 7;
    v29 = sub_6A8D20(a3);
    v27 = v59;
    v28 = v67;
    if ( v29 )
    {
LABEL_43:
      v58 = 1;
      goto LABEL_44;
    }
    v52 = sub_6A8D20(a4);
    v28 = v67;
    v27 = v59;
    v58 = v52;
  }
LABEL_44:
  if ( v23 > v28 )
  {
    v30 = 80 * ((unsigned __int8)v27 + (unsigned __int64)(unsigned int)(v23 - v28));
    v31 = (v27 << 31 >> 31) & 0x50;
    while ( sub_5527D0(
              a1,
              a2,
              (unsigned __int64 *)(v31 + *(_QWORD *)a3 + 64),
              (unsigned __int64 *)(v31 + *(_QWORD *)a4 + 64),
              v53) )
    {
      v32 = *(_BYTE *)(a3 + 88);
      v33 = v32 & 0xF0;
      if ( (v32 & 0xF0) == 0xC0 )
        v33 = *(_DWORD *)(a3 + 28);
      if ( (unsigned int)(v33 - 208) <= 0x2F )
      {
        v34 = (_DWORD *)(v31 + *(_QWORD *)a3);
        v35 = (_DWORD *)(v31 + *(_QWORD *)a4);
        if ( v58 || *v34 != 1 && *v35 != 1 )
        {
          if ( (unsigned int)compare_arglocs(v34, v35) )
            break;
        }
      }
      v31 += 80;
      if ( v30 == v31 )
        return 1;
    }
    return 0;
  }
  return 1;
}
