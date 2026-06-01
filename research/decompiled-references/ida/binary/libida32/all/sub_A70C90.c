__int64 __fastcall sub_A70C90(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 j; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  char v17; // r15
  __int64 v18; // rax
  __int64 v19; // rsi
  char v20; // al
  unsigned __int8 v21; // al
  unsigned __int8 v22; // dl
  __int64 *v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  int v28; // eax
  unsigned __int8 v29; // dl
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  unsigned __int8 v33; // r14
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 *v40; // rdi
  __int64 v41; // r15
  __int64 *v42; // rcx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rsi
  __int64 v45; // rbp
  __int64 v46; // rax
  int v47; // eax
  char v48; // bl
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rax
  size_t v55; // rdx
  _DWORD *v56; // rdx
  _DWORD *v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rax
  char v64; // r13
  __int64 v65; // rdi
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rsi
  int v69; // eax
  int v70; // eax
  __int64 i; // rax
  __int64 v72; // rbp
  __int64 v73; // [rsp+8h] [rbp-50h]
  __int64 v74[8]; // [rsp+18h] [rbp-40h] BYREF

  v7 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    v7 = (_QWORD *)*v7;
  v8 = sub_B6AD60(v7);
  v9 = sub_B68470(v8);
  v10 = *(_QWORD *)(a2 + 16);
  v11 = v9;
  if ( (v10 & 4) != 0 )
    v12 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v12 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  v13 = sub_B6AD60(v12);
  v14 = sub_B68470(v13);
  LOBYTE(j) = v11 == 0 || v14 == 0;
  if ( (_BYTE)j || v11 != v14 && !sub_A32BE0(v14, v11) )
    goto LABEL_27;
  if ( !(unsigned __int8)sub_B69900(a2) && !(unsigned __int8)sub_B69900(a3) )
    goto LABEL_18;
  v15 = *(_QWORD *)(a3 + 8) & 7LL;
  if ( *(char *)(a3 + 29) >= 0 )
  {
    if ( v15 )
    {
      v16 = *(_QWORD *)(a3 - 8);
      v17 = v16 == 0;
      goto LABEL_13;
    }
    goto LABEL_30;
  }
  if ( !v15 )
  {
LABEL_30:
    v17 = 1;
    v16 = 0;
    goto LABEL_13;
  }
  v16 = sub_B68920(a3);
  v17 = v16 == 0;
LABEL_13:
  v18 = *(_QWORD *)(a2 + 8) & 7LL;
  if ( *(char *)(a2 + 29) < 0 )
  {
    if ( v18 )
    {
      v19 = sub_B68920(a2);
      v20 = v19 == 0;
      goto LABEL_16;
    }
LABEL_43:
    v20 = 1;
    v19 = 0;
    goto LABEL_16;
  }
  if ( !v18 )
    goto LABEL_43;
  v19 = *(_QWORD *)(a2 - 8);
  v20 = v19 == 0;
LABEL_16:
  if ( v17 != v20 )
    goto LABEL_27;
  v74[0] = (__int64)a1;
  v73 = sub_A70860(v74, v19);
  if ( v73 != sub_A70860(v74, v16) )
    goto LABEL_27;
LABEL_18:
  v21 = *(_BYTE *)(a2 + 28) & 0x7F;
  v22 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( (unsigned int)v21 - 64 <= 2 && (unsigned int)v22 - 64 <= 2 )
  {
    v23 = (__int64 *)(*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a3 + 80) & 4) != 0 )
      v24 = v23[1];
    else
      v24 = *v23;
    v25 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
      v26 = v25[1];
    else
      v26 = *v25;
    goto LABEL_24;
  }
  if ( v21 != v22 )
    goto LABEL_27;
  if ( ((v21 + 109) & 0x7Fu) <= 1 )
    goto LABEL_46;
  if ( (unsigned int)v21 - 60 <= 1 )
    goto LABEL_27;
  if ( (unsigned int)v21 - 58 <= 4 )
  {
    v28 = *(unsigned __int8 *)(a2 + 73);
    LOBYTE(v28) = (unsigned __int8)v28 >> 5;
    v29 = *(_BYTE *)(a3 + 73) >> 5;
    if ( (unsigned __int8)v28 != v29 )
    {
      if ( (unsigned __int8)v28 <= 1u || (unsigned __int8)v28 == 3 )
      {
        LOBYTE(j) = v29 <= 1u;
        LOBYTE(v28) = v29 == 3;
        LODWORD(j) = v28 | j;
        return (unsigned int)j;
      }
      goto LABEL_27;
    }
LABEL_46:
    LODWORD(j) = 1;
    return (unsigned int)j;
  }
  if ( (unsigned int)v21 - 34 > 5 )
  {
    if ( (unsigned int)v21 - 40 <= 6 )
    {
      v48 = sub_B5DE30(a2);
      if ( v48 == (unsigned __int8)sub_B5DE30(a3) )
      {
        v49 = *(_QWORD *)(a2 + 48);
        if ( (v49 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_46;
        v50 = *(_QWORD *)(a3 + 48);
        if ( (v50 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_46;
        v51 = *(_QWORD *)&byte_8[*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL];
        if ( (*(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)v49 | (unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL])
            & 7) == (v51 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v51 | (unsigned __int8)v50) & 7) )
          goto LABEL_46;
        j = sub_A4E300(a1, v49);
        v52 = sub_A4E300(a1, *(_QWORD *)(a3 + 48));
        if ( j )
        {
          if ( v52
            && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5
             || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5) )
          {
            v24 = *(_QWORD *)(v52 + 32);
            v26 = *(_QWORD *)(j + 32);
LABEL_24:
            LOBYTE(j) = (*(_QWORD *)&byte_8[v26 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                       | ((unsigned __int8)*(_QWORD *)&byte_8[v26 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v26) & 7) == (*(_QWORD *)&byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v24) & 7);
            return (unsigned int)j;
          }
        }
      }
LABEL_27:
      LODWORD(j) = 0;
      return (unsigned int)j;
    }
    if ( v21 == 24 )
    {
      LOBYTE(j) = ((*(_QWORD *)(a2 + 56) & 0x2000) != 0) == ((*(_QWORD *)(a3 + 56) & 0x2000) != 0);
      return (unsigned int)j;
    }
    if ( (unsigned int)v21 - 68 <= 6 )
    {
      if ( v21 != 73
        || (v60 = *(_QWORD *)(a2 + 64), v61 = *(_QWORD *)(a3 + 64), (v60 == 0) == (v61 == 0))
        && (!v60 || (unsigned __int8)sub_A32C10((__int64)a1, v60, v61)) )
      {
        if ( (unsigned __int8)sub_A715A0(a1, *(_QWORD *)(a2 + 48), *(_QWORD *)(a3 + 48)) )
        {
          LODWORD(j) = sub_A71880(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a3 + 56));
          return (unsigned int)j;
        }
      }
      goto LABEL_27;
    }
    if ( (unsigned int)v21 - 49 <= 2 )
    {
      v24 = *(_QWORD *)(a3 + 48);
      v26 = *(_QWORD *)(a2 + 48);
      goto LABEL_24;
    }
    if ( v21 == 32 )
    {
      v65 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8LL * *(unsigned int *)(a2 + 64) - 8);
      j = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 32LL))(v65);
      v66 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8LL * *(unsigned int *)(a3 + 64) - 8);
      LOBYTE(j) = j == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 32LL))(v66);
      return (unsigned int)j;
    }
    if ( v21 == 33 )
      goto LABEL_46;
    if ( (unsigned int)v21 - 53 <= 1 )
    {
      v67 = *(_QWORD *)(a2 + 64);
      v68 = *(_QWORD *)(a3 + 64);
      if ( !v67 )
        goto LABEL_27;
      goto LABEL_124;
    }
    switch ( v21 )
    {
      case 0x51u:
        if ( !sub_A33470(*(_QWORD *)(a2 + 64), *(_QWORD *)(a3 + 64))
          || ((*(__int64 *)(a2 + 48) >> 2) & 1) != ((*(__int64 *)(a3 + 48) >> 2) & 1) )
        {
          goto LABEL_27;
        }
        break;
      case 0x1Cu:
        if ( !sub_A33470(*(_QWORD *)(a2 + 64), *(_QWORD *)(a3 + 64)) )
          goto LABEL_27;
        break;
      case 0x3Fu:
        LOBYTE(v70) = sub_A33470(*(_QWORD *)(a2 + 72), *(_QWORD *)(a3 + 72));
        LODWORD(j) = v70;
        return (unsigned int)j;
      case 0x37u:
        v67 = *(_QWORD *)(a2 + 48);
        v68 = *(_QWORD *)(a3 + 48);
        if ( !v67 )
          goto LABEL_27;
LABEL_124:
        if ( v68 )
        {
          if ( v68 != v67 )
          {
            LOBYTE(v69) = sub_A32BE0(v67, v68);
            LODWORD(j) = v69;
            return (unsigned int)j;
          }
          goto LABEL_46;
        }
        goto LABEL_27;
      case 0x4Du:
        for ( i = *(_QWORD *)(a2 + 88); (*(_BYTE *)(i + 28) & 0x7F) == 0x4D; i = *(_QWORD *)(i + 88) )
          ;
        for ( j = *(_QWORD *)(a3 + 88); (*(_BYTE *)(j + 28) & 0x7F) == 0x4D; j = *(_QWORD *)(j + 88) )
          ;
        v72 = sub_B6D830(i + 48);
        LOBYTE(j) = v72 == sub_B6D830(j + 48);
        return (unsigned int)j;
      default:
        goto LABEL_27;
    }
    LOBYTE(j) = (*(_DWORD *)(a2 + 56) == 0) == (*(_DWORD *)(a3 + 56) == 0);
    return (unsigned int)j;
  }
  if ( v21 == 38 )
  {
    v30 = *(_QWORD *)(a2 + 80);
    if ( (v30 & 0x2000000000000000LL) != 0 )
    {
      if ( *(_QWORD *)(a2 + 176) )
      {
        v31 = 0;
        if ( (*(_BYTE *)(a3 + 87) & 0x20) != 0 )
          v31 = *(_QWORD *)(a3 + 184);
        v32 = 0;
        if ( (v30 & 0x2000000000000000LL) != 0 )
          v32 = *(_QWORD *)(a2 + 184);
        if ( !(unsigned __int8)sub_A715A0(a1, v32, v31) )
          return (unsigned int)j;
      }
    }
  }
  v33 = *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) + 84);
  if ( v33 >> 7 != *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) + 84) >> 7 )
    return (unsigned int)j;
  if ( *(char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) + 84) < 0 )
  {
    v53 = sub_A46AB0(a2);
    v54 = sub_A46AB0(a3);
    v55 = *(unsigned int *)(v53 + 40);
    if ( *(_DWORD *)(v54 + 40) != (_DWORD)v55
      || *(_DWORD *)(v53 + 40) && memcmp(*(const void **)(v53 + 48), *(const void **)(v54 + 48), v55) )
    {
      return (unsigned int)j;
    }
  }
  if ( (unsigned __int8)sub_B51380(a2) || (unsigned __int8)sub_B51380(a3) )
  {
    v34 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v34 = *(_QWORD *)(v34 + 8);
    v35 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      v35 = *(_QWORD *)(v35 + 8);
    if ( !v35 )
      return (unsigned int)j;
    v36 = sub_B6D830(v34);
    if ( v36 != sub_B6D830(v35) )
      return (unsigned int)j;
  }
  v37 = *(_QWORD *)(a3 + 56);
  v38 = (*(__int64 *)(a2 + 56) >> 2) & 1;
  if ( (v37 & 4) != 0 )
  {
    v56 = (_DWORD *)((v37 & 0xFFFFFFFFFFFFFFF8LL) + 40);
    if ( !v38 )
    {
      v57 = &unk_23BABE0;
LABEL_96:
      if ( v57[2] != v56[2] )
        return (unsigned int)j;
      v58 = *(_QWORD *)v57;
      v59 = *(_QWORD *)v56;
      if ( (*(_QWORD *)v57 == 0) != (v59 == 0) || v58 && !(unsigned __int8)sub_A32C10((__int64)a1, v58, v59) )
        return (unsigned int)j;
      goto LABEL_67;
    }
LABEL_109:
    v57 = (_DWORD *)((*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL) + 40);
    goto LABEL_96;
  }
  if ( v38 )
  {
    v56 = &unk_23BABE0;
    goto LABEL_109;
  }
LABEL_67:
  v39 = sub_A32E80(a2);
  v40 = (__int64 *)(v39 & 0xFFFFFFFFFFFFFFF0LL);
  v41 = sub_A32E80(a3);
  v42 = (__int64 *)(v41 & 0xFFFFFFFFFFFFFFF0LL);
  v43 = *(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)v39 | (unsigned __int8)*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
  v44 = *(_QWORD *)&byte_8[v41 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
  if ( v43 == (v44 | ((unsigned __int8)v41 | (unsigned __int8)*(_QWORD *)&byte_8[v41 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
  {
    v64 = sub_B5DE30(a2);
    if ( v64 == (unsigned __int8)sub_B5DE30(a3) )
      LODWORD(j) = sub_A35770(a2, a3);
  }
  else
  {
    v45 = *v40;
    if ( *(_BYTE *)(*v40 + 16) != 26 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
      {
        v63 = sub_F3F310(*v40, v44, v43, v42);
        v42 = (__int64 *)(v41 & 0xFFFFFFFFFFFFFFF0LL);
        v45 = v63;
      }
      else
      {
        v45 = 0;
      }
    }
    v46 = *v42;
    if ( *(_BYTE *)(*v42 + 16) != 26 )
    {
      v62 = *(_QWORD *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v62 + 16) != 26 )
        return (unsigned int)j;
      v46 = sub_F3F310(*v42, v44, v62, v42);
    }
    if ( (*(_BYTE *)(a1[290] + 1LL) & 0x40) != 0
      && v45
      && v46
      && (((*(_BYTE *)(v45 + 19) >> 1) & 0xFu) - 9 <= 1 || ((*(_BYTE *)(v46 + 19) >> 1) & 0xFu) - 9 <= 1) )
    {
      LOBYTE(v47) = sub_A5E750((__int64)a1, v39, v41);
      LODWORD(j) = v47;
    }
  }
  return (unsigned int)j;
}

