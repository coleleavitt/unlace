// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_EB8510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 *v13; // rax
  int v14; // edx
  __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // r8
  unsigned __int64 v18; // r8
  __int64 v19; // r15
  char v20; // al
  __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rdx
  int v27; // esi
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 *v30; // rax
  __int64 v31; // r14
  unsigned __int64 v32; // rsi
  unsigned __int8 v33; // al
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r14
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned __int64 *v51; // rax
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  __int64 *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 *v60; // rsi
  __int64 *v61; // rax
  __int64 *v62; // rax
  __int64 v63; // rcx
  __int64 *v64; // rax
  unsigned __int64 *v65; // rax
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rax
  __int64 **v68; // rax
  _DWORD *v69; // rdi
  __int64 (*v70)(void); // rax
  unsigned __int64 *v71; // rax
  __int64 *v72; // rcx
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rax
  __int64 *v75; // rax
  __int64 v76; // rsi
  __int64 v77; // [rsp+8h] [rbp-80h]
  unsigned __int64 v78; // [rsp+10h] [rbp-78h]
  bool v79; // [rsp+1Fh] [rbp-69h]
  __int64 v80[2]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v81; // [rsp+38h] [rbp-50h]
  __int64 *v82; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v83[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = *(_QWORD *)(a1 + 17448);
  v80[0] = a2;
  if ( *(_DWORD *)(v6 + 340) > 9u )
    return 0;
  v7 = *(_QWORD *)(a2 + 128);
  if ( v7
    || (sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6),
        (v7 = *(_QWORD *)(a2 + 128)) != 0) )
  {
    v7 = *(_QWORD *)(v7 + 88);
  }
  v80[0] = v7;
  v9 = (unsigned __int8)sub_EB48C0((__int64 *)(a1 + 1168), v80, &v82) == 0;
  v13 = v82;
  if ( v9 )
  {
    v11 = *(unsigned int *)(a1 + 1184);
    v14 = *(_DWORD *)(a1 + 1176);
    v83[0] = v82;
    v15 = (unsigned int)(v14 + 1);
    v16 = 2 * v11;
    v17 = (unsigned int)(4 * v15);
    if ( (unsigned int)v17 < 3 * (int)v11 )
    {
      if ( (int)v11 - *(_DWORD *)(a1 + 1180) - (int)v15 > (unsigned int)v11 >> 3 )
      {
LABEL_7:
        v9 = *v13 == -4096;
        *(_DWORD *)(a1 + 1176) = v15;
        if ( !v9 )
          --*(_DWORD *)(a1 + 1180);
        v10 = v80[0];
        v13[1] = 0;
        *v13 = v10;
        goto LABEL_10;
      }
      v16 = v11;
    }
    sub_EB8320(a1 + 1168, v16, v15, v11, v17, v12);
    sub_EB48C0((__int64 *)(a1 + 1168), v80, v83);
    LODWORD(v15) = *(_DWORD *)(a1 + 1176) + 1;
    v13 = (__int64 *)v83[0];
    goto LABEL_7;
  }
LABEL_10:
  v18 = v13[1];
  v81 = v18;
  if ( (v18 & 1) != 0 )
  {
    v81 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(a1 + 18360) + 16LL))(
            *(_QWORD *)(a1 + 18360),
            v18 >> 1);
    v19 = v81;
    if ( (v81 & 1) != 0 )
      goto LABEL_14;
    goto LABEL_12;
  }
  v19 = v18;
  if ( v18 )
  {
LABEL_12:
    v20 = v19 != 0;
    goto LABEL_13;
  }
  v31 = v80[0];
  v32 = *(_QWORD *)(v80[0] + 104);
  v77 = v80[0];
  sub_6E4DB0((__int64 *)(v32 + 96), v32, v10, v11, 0, v12);
  if ( (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 1LL) & 4) == 0 )
    goto LABEL_37;
  v33 = sub_B5DE30(v31);
  if ( !v33 )
    goto LABEL_129;
  if ( v33 <= 3u )
    goto LABEL_12;
  if ( v33 > 6u )
  {
LABEL_129:
    qword_48 = 0;
    BUG();
  }
  v34 = sub_B73520(v77);
  if ( v34 == 1 || (unsigned int)(v34 - 3) <= 1 )
    goto LABEL_37;
  v79 = ((1LL << *(_DWORD *)(*(_QWORD *)(a1 + 17448) + 340LL)) & 0x665) != 0;
  v35 = sub_B6AC30(v77 + 64);
  v36 = v35;
  if ( !v35 )
    goto LABEL_37;
  if ( (*(_BYTE *)(v35 + 28) & 0x7Fu) - 35 > 3 )
  {
    do
    {
      v37 = *(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v36 = v37;
      if ( !v37 )
        goto LABEL_37;
    }
    while ( (*(_BYTE *)(v37 + 28) & 0x7Fu) - 35 > 3 );
  }
LABEL_42:
  v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
  v40 = *(_QWORD *)(v38 + 80) >> 16;
  if ( (*(_QWORD *)(v38 + 80) & 0x40000LL) == 0 )
  {
    v40 = (*(_QWORD *)(v38 + 80) >> 16) & 8LL;
    if ( !(_DWORD)v40 && !(unsigned int)sub_B747A0(v38) )
      goto LABEL_47;
  }
  if ( (*(_QWORD *)(v36 + 80) & 0x80000LL) != 0
    || (*(_BYTE *)(v36 + 29) & 2) != 0
    || (*(_QWORD *)(v36 + 80) & 0x20000LL) != 0
    || (*(_BYTE *)(v36 + 84) & 3) != 0
    || (unsigned __int8)sub_B74B80(v36, v32, v39, v40) )
  {
    goto LABEL_47;
  }
  v32 = 1;
  v44 = sub_B59840(v36, 1, v42, v43);
  if ( !v44 )
    v44 = v36;
  v78 = v44;
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v44 + 32LL))(v44) + 82) & 0x40) != 0 )
    goto LABEL_47;
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v78 + 32LL))(v78) + 83) & 2) != 0 )
    goto LABEL_47;
  if ( !v79 )
  {
    v32 = (unsigned __int64)v83;
    if ( (unsigned __int8)sub_B5B8B0((_QWORD *)v36, v83, v45, v46, v47, v48) )
    {
      if ( (*(_BYTE *)(v83[0] + 82LL) & 2) != 0 )
        goto LABEL_47;
    }
  }
  v49 = *(unsigned __int8 *)(v36 + 29);
  v50 = *(_QWORD *)(a1 + 2320);
  v32 = *(_BYTE *)(v36 + 29) & 1;
  if ( (*(_BYTE *)(v50 + 60) & 0x10) == 0 )
  {
LABEL_68:
    v54 = v49 & 1;
    if ( (_DWORD)v54 )
    {
      v55 = sub_B68690(v36, v32, v45, v54, v47, v48);
      v59 = *v55;
      v60 = (__int64 *)(*v55 + 8LL * *((unsigned int *)v55 + 2));
      if ( *v55 >= (unsigned __int64)v60 )
      {
        if ( (__int64 *)v59 == v60 )
          goto LABEL_73;
        if ( *(_WORD *)(*v60 + 36) != 197 )
        {
          v68 = (__int64 **)(v60 + 1);
          while ( (__int64 **)v59 != v68 )
          {
            v60 = *v68++;
            if ( *((_WORD *)v60 + 18) == 197 )
              goto LABEL_96;
          }
          goto LABEL_73;
        }
      }
      else
      {
        v61 = (__int64 *)*v55;
        while ( 1 )
        {
          v59 = *v61;
          if ( *(_WORD *)(*v61 + 36) == 197 )
            break;
          if ( v60 == ++v61 )
            goto LABEL_73;
        }
        if ( v60 == v61 )
          goto LABEL_73;
      }
LABEL_96:
      if ( (*(_BYTE *)(v77 + 29) & 1) == 0 )
        goto LABEL_97;
      v71 = sub_B68690(v77, (__int64)v60, v56, v59, v57, v58);
      v72 = (__int64 *)*v71;
      v73 = *v71 + 8LL * *((unsigned int *)v71 + 2);
      if ( *v71 >= v73 )
      {
        if ( v72 == (__int64 *)v73 )
          goto LABEL_97;
        v75 = (__int64 *)(v73 + 8);
        if ( *(_WORD *)(*(_QWORD *)v73 + 36LL) != 197 )
        {
          while ( v72 != v75 )
          {
            v76 = *v75++;
            if ( *(_WORD *)(v76 + 36) == 197 )
              goto LABEL_73;
          }
LABEL_97:
          v69 = *(_DWORD **)(a1 + 17448);
          v70 = *(__int64 (**)(void))(*(_QWORD *)v69 + 424LL);
          if ( (char *)v70 == (char *)sub_EB25B0 )
            v20 = sub_EB25B0(v69);
          else
            v20 = v70();
          if ( v20 )
          {
            v19 = v36;
            goto LABEL_13;
          }
LABEL_37:
          v20 = 0;
          goto LABEL_13;
        }
      }
      else
      {
        v74 = *v71;
        while ( *(_WORD *)(*(_QWORD *)v74 + 36LL) != 197 )
        {
          v74 += 8LL;
          if ( v73 == v74 )
            goto LABEL_97;
        }
        if ( v73 == v74 )
          goto LABEL_97;
      }
    }
LABEL_73:
    v19 = v36;
    v20 = 1;
    goto LABEL_13;
  }
  if ( (*(_BYTE *)(v50 + 89) & 4) == 0 )
  {
    if ( !(_BYTE)v32 )
      goto LABEL_73;
    v62 = sub_B68690(v36, v32, v45, v49, v47, v48);
    v63 = *v62;
    v32 = *v62 + 8LL * *((unsigned int *)v62 + 2);
    if ( *v62 >= v32 )
    {
      if ( v63 != v32 )
      {
        while ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 165 )
        {
          v32 += 8LL;
          if ( v63 == v32 )
            goto LABEL_79;
        }
        goto LABEL_67;
      }
    }
    else
    {
      v64 = (__int64 *)*v62;
      while ( 1 )
      {
        v63 = *v64;
        if ( *(_WORD *)(*v64 + 36) == 165 )
          break;
        if ( (__int64 *)v32 == ++v64 )
          goto LABEL_79;
      }
      if ( (__int64 *)v32 != v64 )
        goto LABEL_67;
    }
LABEL_79:
    if ( (*(_BYTE *)(v36 + 29) & 1) == 0 )
      goto LABEL_73;
    v65 = sub_B68690(v36, v32, v45, v63, v47, v48);
    v66 = *v65;
    v32 = *v65 + 8LL * *((unsigned int *)v65 + 2);
    if ( *v65 >= v32 )
    {
      for ( ; v66 != v32; v32 += 8LL )
      {
        if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) == 160 )
          goto LABEL_47;
      }
    }
    else
    {
      v67 = *v65;
      while ( *(_WORD *)(*(_QWORD *)v67 + 36LL) != 160 )
      {
        v67 += 8LL;
        if ( v32 == v67 )
          goto LABEL_67;
      }
      if ( v32 != v67 )
        goto LABEL_47;
    }
    goto LABEL_67;
  }
  if ( !(_BYTE)v32 )
    goto LABEL_47;
  v51 = sub_B68690(v36, v32, v45, v49, v47, v48);
  v52 = *v51;
  v32 = *v51 + 8LL * *((unsigned int *)v51 + 2);
  if ( *v51 >= v32 )
  {
    if ( v52 == v32 )
      goto LABEL_47;
    while ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 160 )
    {
      v32 += 8LL;
      if ( v52 == v32 )
        goto LABEL_47;
    }
    goto LABEL_67;
  }
  v53 = *v51;
  while ( *(_WORD *)(*(_QWORD *)v53 + 36LL) != 160 )
  {
    v53 += 8LL;
    if ( v32 == v53 )
      goto LABEL_47;
  }
  if ( v32 != v53 )
  {
LABEL_67:
    LOBYTE(v49) = *(_BYTE *)(v36 + 29);
    goto LABEL_68;
  }
LABEL_47:
  while ( 1 )
  {
    v41 = *(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v36 = v41;
    if ( !v41 )
      break;
    if ( (*(_BYTE *)(v41 + 28) & 0x7Fu) - 35 <= 3 )
      goto LABEL_42;
  }
  v20 = 0;
LABEL_13:
  if ( (v81 != 0) == v20 )
    return v19;
LABEL_14:
  v9 = (unsigned __int8)sub_EB48C0((__int64 *)(a1 + 1168), v80, &v82) == 0;
  v22 = v82;
  if ( !v9 )
  {
    v82[1] = v19;
    return v19;
  }
  v24 = *(unsigned int *)(a1 + 1184);
  v25 = *(_DWORD *)(a1 + 1176);
  v83[0] = v82;
  v26 = (unsigned int)(v25 + 1);
  v27 = 2 * v24;
  v28 = (unsigned int)(4 * v26);
  if ( (unsigned int)v28 >= 3 * (int)v24 )
    goto LABEL_41;
  if ( (int)v24 - *(_DWORD *)(a1 + 1180) - (int)v26 <= (unsigned int)v24 >> 3 )
  {
    v27 = v24;
LABEL_41:
    sub_EB8320(a1 + 1168, v27, v26, v24, v21, v28);
    sub_EB48C0((__int64 *)(a1 + 1168), v80, v83);
    LODWORD(v26) = *(_DWORD *)(a1 + 1176) + 1;
    v22 = (__int64 *)v83[0];
  }
  v9 = *v22 == -4096;
  *(_DWORD *)(a1 + 1176) = v26;
  if ( !v9 )
    --*(_DWORD *)(a1 + 1180);
  v29 = v80[0];
  v22[1] = 0;
  v30 = v22 + 1;
  *(v30 - 1) = v29;
  *v30 = v19;
  return v19;
}

