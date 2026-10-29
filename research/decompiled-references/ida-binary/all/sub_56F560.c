__int64 __fastcall sub_56F560(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v5; // al
  char v6; // r13
  int v7; // eax
  unsigned __int16 v8; // si
  char *v9; // rbx
  unsigned __int16 v10; // si
  char *v11; // rax
  char v12; // dl
  unsigned int v13; // ecx
  char v14; // dl
  int v15; // eax
  int v16; // r14d
  unsigned __int16 v17; // si
  int v18; // r15d
  char *v19; // rbp
  unsigned __int16 v20; // si
  char *v21; // rax
  char v22; // al
  unsigned int v23; // ecx
  __int64 v24; // rdx
  int v25; // r14d
  unsigned __int16 v26; // si
  int v27; // r15d
  char *v28; // rbx
  unsigned __int16 v29; // si
  char *v30; // rax
  unsigned int v32; // eax
  int v33; // edx
  unsigned __int16 v34; // si
  char *v35; // rbp
  unsigned __int16 v36; // si
  char *v37; // rax
  unsigned __int16 v38; // si
  char *v39; // rbx
  unsigned __int16 v40; // si
  char *v41; // rax
  unsigned __int16 v42; // si
  char *v43; // rbp
  unsigned __int16 v44; // si
  char *v45; // rax
  unsigned __int16 v46; // si
  char *v47; // rbx
  unsigned __int16 v48; // si
  char *v49; // rax

  if ( !a2 )
    return 1;
  if ( !a3 )
    return 0;
  v5 = a2 & 1;
  v6 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    if ( (a3 & 0x20) != 0 )
    {
      if ( v5 )
      {
        if ( (a2 & 0x20) != 0 )
          return 1;
LABEL_7:
        if ( (a3 & 0x20) == 0 )
          goto LABEL_8;
LABEL_79:
        if ( !*(_QWORD *)(a1 + 152) && !*(_QWORD *)(a1 + 1400) )
          return 0;
        v38 = BYTE1(a3);
        if ( (a3 & 1) == 0 )
          v38 = *(_WORD *)(a3 + 40);
        v39 = sub_563060(*(_QWORD *)(a1 + 1256), v38);
        v40 = BYTE1(a2);
        if ( (a2 & 1) == 0 )
          v40 = *(_WORD *)(a2 + 40);
        v41 = sub_563060(*(_QWORD *)(a1 + 1256), v40);
        snprintf((char *)(a1 + 192), 0x400u, "select_smaller_error symbol:%s, over_symbol:%s", v41, v39);
        goto LABEL_85;
      }
      v22 = *(_BYTE *)(a2 + 45);
      if ( (v22 & 2) != 0 )
        goto LABEL_39;
      v23 = *(_DWORD *)(a2 + 32);
      if ( v23 > 0x262 )
        goto LABEL_68;
    }
    else
    {
      if ( v5 )
      {
        if ( (a2 & 0x20) == 0 )
          goto LABEL_7;
LABEL_68:
        if ( !*(_QWORD *)(a1 + 152) && !*(_QWORD *)(a1 + 1400) )
          return 1;
        v34 = BYTE1(a2);
        if ( (a2 & 1) == 0 )
          v34 = *(_WORD *)(a2 + 40);
        v35 = sub_563060(*(_QWORD *)(a1 + 1256), v34);
        v36 = BYTE1(a3);
        if ( (a3 & 1) == 0 )
          v36 = *(_WORD *)(a3 + 40);
        v37 = sub_563060(*(_QWORD *)(a1 + 1256), v36);
        snprintf((char *)(a1 + 192), 0x400u, "select_smaller_error symbol:%s, over_symbol:%s", v37, v35);
        goto LABEL_74;
      }
      v22 = *(_BYTE *)(a2 + 45);
      if ( (v22 & 2) != 0 )
        goto LABEL_68;
      v23 = *(_DWORD *)(a2 + 32);
      if ( v23 )
        goto LABEL_68;
    }
    v24 = (a3 >> 5) & 1;
    if ( v23 <= 0x261 && (_BYTE)v24 )
      goto LABEL_79;
LABEL_39:
    if ( !*(_DWORD *)(a2 + 36) )
      goto LABEL_98;
    v16 = *(_DWORD *)(a2 + 60);
    if ( v16 >= 0 )
    {
      if ( v16 > 0 )
      {
        if ( !*(_QWORD *)(a1 + 152) && !*(_QWORD *)(a1 + 1400) )
          return 0;
        goto LABEL_43;
      }
LABEL_98:
      if ( (v22 & 2) != 0 || *(_DWORD *)(a2 + 32) )
        return 1;
LABEL_9:
      v7 = sub_56F240(a2, a3, a1 + 1224);
      if ( v7 == -1 )
      {
        if ( !*(_QWORD *)(a1 + 152) && !*(_QWORD *)(a1 + 1400) )
          return 0;
        v46 = BYTE1(a3);
        if ( (a3 & 1) == 0 )
          v46 = *(_WORD *)(a3 + 40);
        v47 = sub_563060(*(_QWORD *)(a1 + 1256), v46);
        v48 = BYTE1(a2);
        if ( (a2 & 1) == 0 )
          v48 = *(_WORD *)(a2 + 40);
        v49 = sub_563060(*(_QWORD *)(a1 + 1256), v48);
        snprintf((char *)(a1 + 192), 0x400u, "select_earlier symbol:%s, over_symbol:%s", v49, v47);
        goto LABEL_85;
      }
      if ( v7 != 1 )
      {
        if ( !*(_QWORD *)(a1 + 152) && !*(_QWORD *)(a1 + 1400) )
          return 0;
        v8 = BYTE1(a3);
        if ( (a3 & 1) == 0 )
          v8 = *(_WORD *)(a3 + 40);
        v9 = sub_563060(*(_QWORD *)(a1 + 1256), v8);
        v10 = BYTE1(a2);
        if ( (a2 & 1) == 0 )
          v10 = *(_WORD *)(a2 + 40);
        v11 = sub_563060(*(_QWORD *)(a1 + 1256), v10);
        snprintf((char *)(a1 + 192), 0x400u, "select_existing symbol:%s, over_symbol:%s", v11, v9);
LABEL_85:
        sub_55D530(a1);
        return 0;
      }
      if ( !*(_QWORD *)(a1 + 152) && !*(_QWORD *)(a1 + 1400) )
        return 1;
      v42 = BYTE1(a2);
      if ( (a2 & 1) == 0 )
        v42 = *(_WORD *)(a2 + 40);
      v43 = sub_563060(*(_QWORD *)(a1 + 1256), v42);
      v44 = BYTE1(a3);
      if ( (a3 & 1) == 0 )
        v44 = *(_WORD *)(a3 + 40);
      v45 = sub_563060(*(_QWORD *)(a1 + 1256), v44);
      snprintf((char *)(a1 + 192), 0x400u, "select_earlier symbol:%s, over_symbol:%s", v45, v43);
LABEL_74:
      sub_55D530(a1);
      return 1;
    }
    goto LABEL_122;
  }
  v12 = *(_BYTE *)(a3 + 45);
  if ( (v12 & 2) != 0 )
  {
    if ( v5 )
    {
      if ( (a2 & 0x20) == 0 )
        goto LABEL_20;
      goto LABEL_88;
    }
    if ( (*(_BYTE *)(a2 + 45) & 2) == 0 )
    {
      v32 = *(_DWORD *)(a2 + 32);
      if ( v32 > 0x262 )
        goto LABEL_68;
      goto LABEL_56;
    }
  }
  else
  {
    v13 = *(_DWORD *)(a3 + 32);
    if ( v5 )
    {
      if ( (a2 & 0x20) == 0 )
      {
LABEL_20:
        if ( (v12 & 2) != 0 || *(_DWORD *)(a3 + 32) )
          goto LABEL_79;
LABEL_22:
        v14 = 1;
        if ( !*(_DWORD *)(a3 + 36) )
          goto LABEL_8;
LABEL_23:
        v15 = *(_DWORD *)(a3 + 60);
        if ( v14 )
        {
          if ( v15 > 0 )
            goto LABEL_25;
          goto LABEL_131;
        }
LABEL_116:
        if ( !*(_DWORD *)(a2 + 36) )
        {
          if ( v15 > 0 )
          {
            if ( !*(_QWORD *)(a1 + 152) && !*(_QWORD *)(a1 + 1400) )
              return 1;
LABEL_26:
            v16 = 0;
            goto LABEL_27;
          }
          goto LABEL_94;
        }
        goto LABEL_61;
      }
      if ( v13 <= 0x261 )
        goto LABEL_68;
LABEL_88:
      if ( (v12 & 2) != 0 )
      {
        if ( *(_DWORD *)(a3 + 36) && *(int *)(a3 + 60) > 0 )
        {
LABEL_25:
          if ( !*(_QWORD *)(a1 + 152) && !*(_QWORD *)(a1 + 1400) )
            return 1;
          goto LABEL_26;
        }
LABEL_131:
        if ( *(_DWORD *)(a3 + 36) )
        {
          v6 = 1;
          if ( *(int *)(a3 + 60) < 0 )
            goto LABEL_133;
        }
LABEL_8:
        if ( (a2 & 0x20) != 0 )
          return 1;
        goto LABEL_9;
      }
      if ( *(_DWORD *)(a3 + 32) > 0x262u )
        goto LABEL_79;
      goto LABEL_22;
    }
    if ( (*(_BYTE *)(a2 + 45) & 2) == 0 )
    {
      v32 = *(_DWORD *)(a2 + 32);
      if ( v13 < v32 )
        goto LABEL_68;
LABEL_56:
      if ( (v12 & 2) == 0 )
      {
        if ( v32 < *(_DWORD *)(a3 + 32) )
          goto LABEL_79;
        goto LABEL_58;
      }
      if ( v32 <= 0x261 )
        goto LABEL_79;
LABEL_114:
      if ( *(_DWORD *)(a3 + 36) )
      {
        v15 = *(_DWORD *)(a3 + 60);
        goto LABEL_116;
      }
      goto LABEL_59;
    }
    if ( v13 <= 0x261 )
      goto LABEL_68;
  }
  if ( (v12 & 2) != 0 )
    goto LABEL_114;
  if ( *(_DWORD *)(a3 + 32) > 0x262u )
    goto LABEL_79;
LABEL_58:
  if ( *(_DWORD *)(a3 + 36) )
  {
    v14 = 0;
    goto LABEL_23;
  }
LABEL_59:
  if ( !*(_DWORD *)(a2 + 36) )
  {
LABEL_94:
    if ( !*(_DWORD *)(a3 + 36) )
      goto LABEL_97;
    v33 = 0;
    goto LABEL_96;
  }
  v15 = 0;
LABEL_61:
  v16 = *(_DWORD *)(a2 + 60);
  v33 = v16;
  if ( v15 > v16 )
  {
LABEL_122:
    if ( !*(_QWORD *)(a1 + 152) && !*(_QWORD *)(a1 + 1400) )
      return 1;
LABEL_27:
    v17 = BYTE1(a2);
    if ( (a2 & 1) == 0 )
      v17 = *(_WORD *)(a2 + 40);
    v18 = 0;
    v19 = sub_563060(*(_QWORD *)(a1 + 1256), v17);
    if ( !v6 && *(_DWORD *)(a3 + 36) )
      v18 = *(_DWORD *)(a3 + 60);
    v20 = BYTE1(a3);
    if ( (a3 & 1) == 0 )
      v20 = *(_WORD *)(a3 + 40);
    v21 = sub_563060(*(_QWORD *)(a1 + 1256), v20);
    snprintf(
      (char *)(a1 + 192),
      0x400u,
      "select_higher_precedence symbol:%s, prec:%d, over_symbol:%s, other_prec:%d",
      v21,
      v18,
      v19,
      v16);
    sub_55D530(a1);
    return 1;
  }
  if ( *(_DWORD *)(a3 + 36) )
  {
LABEL_96:
    if ( v33 > *(_DWORD *)(a3 + 60) )
    {
LABEL_133:
      if ( !*(_QWORD *)(a1 + 152) && !*(_QWORD *)(a1 + 1400) )
        return 0;
      v25 = *(_DWORD *)(a3 + 60);
      goto LABEL_44;
    }
LABEL_97:
    v22 = *(_BYTE *)(a2 + 45);
    goto LABEL_98;
  }
  if ( v16 <= 0 )
    goto LABEL_97;
  if ( !*(_QWORD *)(a1 + 152) && !*(_QWORD *)(a1 + 1400) )
    return 0;
LABEL_43:
  v6 = 0;
  v25 = 0;
LABEL_44:
  v26 = BYTE1(a3);
  if ( (a3 & 1) == 0 )
    v26 = *(_WORD *)(a3 + 40);
  v27 = 0;
  v28 = sub_563060(*(_QWORD *)(a1 + 1256), v26);
  if ( !v6 && *(_DWORD *)(a2 + 36) )
    v27 = *(_DWORD *)(a2 + 60);
  v29 = BYTE1(a2);
  if ( (a2 & 1) == 0 )
    v29 = *(_WORD *)(a2 + 40);
  v30 = sub_563060(*(_QWORD *)(a1 + 1256), v29);
  snprintf(
    (char *)(a1 + 192),
    0x400u,
    "select_higher_precedence symbol:%s, prec:%d, over_symbol:%s, other_prec:%d",
    v30,
    v27,
    v28,
    v25);
  sub_55D530(a1);
  return 0;
}
