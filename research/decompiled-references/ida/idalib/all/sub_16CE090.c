void __fastcall sub_16CE090(__int64 a1, unsigned __int64 a2, __int64 a3, double a4)
{
  __int64 v7; // rdi
  char v8; // r8
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  unsigned int v12; // edx
  int v13; // r8d
  __int16 v14; // ax
  __int16 v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  const char *v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  size_t v29; // r13
  const char *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r13
  unsigned __int64 v33; // r13
  size_t v34; // r14
  const char *v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rdi
  const char *v38; // rax
  __int64 v39; // rdx
  __int16 v40; // dx
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rax
  int v44; // [rsp+0h] [rbp-C8h] BYREF
  int v45; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v46; // [rsp+8h] [rbp-C0h] BYREF
  const char *v47; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+18h] [rbp-B0h]
  const char *v49; // [rsp+20h] [rbp-A8h]
  __int64 v50; // [rsp+28h] [rbp-A0h]
  const char *v51; // [rsp+30h] [rbp-98h]
  __int64 v52; // [rsp+38h] [rbp-90h]
  const char *v53; // [rsp+40h] [rbp-88h]
  __int64 v54; // [rsp+48h] [rbp-80h]
  const char *v55; // [rsp+50h] [rbp-78h]
  __int64 v56; // [rsp+58h] [rbp-70h]

  v7 = *(_QWORD *)(a1 + 232);
  if ( (*(_DWORD *)a2 & 0x200000) != 0 )
  {
    v9 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32);
    v10 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 36);
    v11 = (*(_WORD *)(v7 + 206) >> 7) & 3;
    if ( v11 == 3 )
      v11 = 2;
    v8 = *(_BYTE *)(v7 + 46);
    v12 = v11
        | (((v8 & 8) != 0) << 14)
        | (((v8 & 4) != 0) << 13)
        | (((v8 & 2) != 0) << 12)
        | (8 * *(unsigned __int8 *)(v7 + 45)) & 0x400
        | (((*(_BYTE *)(v7 + 45) & 0x40) != 0) << 9)
        | (4 * ((unsigned int)*(char *)(v7 + 106) >> 31))
        | ((v8 & 1) << 11)
        | (((*(_BYTE *)(v7 + 207) >> 1) & 3) << 6);
    v13 = v11 & 3;
    v14 = v12 | 0x38;
    if ( v13 == 1 && (v12 & 4) != 0 )
    {
      v40 = v12 | 0x138;
      if ( (unsigned __int8)v14 >> 6 == 2 )
        v14 = v40;
    }
    v15 = v14 ^ (v14 ^ v9) & v10;
    if ( (v15 & 0x400) == 0 )
      goto LABEL_6;
  }
  else
  {
    v15 = sub_FEAD90(v7);
    if ( (v15 & 0x400) == 0 )
      goto LABEL_6;
  }
  if ( a3 )
  {
    v16 = *(_QWORD *)(a3 + 40);
    if ( (v16 & 7) == 0 )
    {
      v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 16);
        if ( *(_DWORD *)v18 != 5 || *(_DWORD *)(v18 + 16) != 1634628457 || *(_BYTE *)(v18 + 20) != 110 )
          goto LABEL_13;
        if ( sub_B8EC80(a3) )
          goto LABEL_20;
        v41 = *(_QWORD *)(a3 + 40);
        if ( (v41 & 7) == 0 )
        {
          v17 = v41 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v17 )
          {
LABEL_13:
            v19 = *(_QWORD *)(v17 + 16);
            if ( *(_DWORD *)v19 == 11
              && *(_QWORD *)(v19 + 16) == 0x6564726F6E757369LL
              && *(_WORD *)(v19 + 24) == 25970
              && *(_BYTE *)(v19 + 26) == 100
              && sub_B8EC80(a3) )
            {
              goto LABEL_20;
            }
          }
        }
      }
    }
  }
  v20 = sub_995750(a3);
  v48 = 13;
  v47 = "__builtin_nan";
  v49 = "__builtin_nanf";
  v51 = "__builtin_nanl";
  v53 = "__builtin_nanf16";
  v50 = 14;
  v52 = 14;
  v54 = 16;
  v55 = "__builtin_nanf128";
  v56 = 17;
  if ( v21 == 13 )
  {
    if ( *(_QWORD *)v20 != 0x69746C6975625F5FLL || *((_DWORD *)v20 + 2) != 1634623342 || v20[12] != 110 )
      goto LABEL_6;
    goto LABEL_20;
  }
  if ( v21 != 14 )
  {
    if ( v21 == 16 )
    {
      if ( *(_QWORD *)v20 ^ 0x69746C6975625F5FLL | *((_QWORD *)v20 + 1) ^ 0x3631666E616E5F6ELL )
        goto LABEL_6;
    }
    else if ( v21 != 17
           || *(_QWORD *)v20 ^ 0x69746C6975625F5FLL | *((_QWORD *)v20 + 1) ^ 0x3231666E616E5F6ELL
           || v20[16] != 56 )
    {
      goto LABEL_6;
    }
LABEL_20:
    v22 = sub_BF6D70(a2);
    sub_168B9F0((__int64)&v47, (__int64 *)(a1 + 8), v22, 0x8Au, 0);
    v45 = 1;
LABEL_21:
    v23 = sub_1587D10((__int64)&v47, &v45);
    v44 = 0;
    v24 = sub_1587D10(v23, &v44);
    v46 = sub_EEC8C0(a2, (__int64)&v44, a4);
    sub_1587DB0(v24, &v46);
    sub_15F7200(&v47);
    return;
  }
  if ( *(_QWORD *)v20 == 0x69746C6975625F5FLL && *((_DWORD *)v20 + 2) == 1634623342 && *((_WORD *)v20 + 6) == 26222
    || *(_QWORD *)v20 == 0x69746C6975625F5FLL && *((_DWORD *)v20 + 2) == 1634623342 && *((_WORD *)v20 + 6) == 27758 )
  {
    goto LABEL_20;
  }
LABEL_6:
  if ( (v15 & 0x800) == 0 )
    return;
  if ( a3 )
  {
    v25 = *(_QWORD *)(a3 + 40);
    if ( (v25 & 7) == 0 )
    {
      v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 16);
        if ( *(_DWORD *)v27 != 5 || *(_DWORD *)(v27 + 16) != 1852404585 || *(_BYTE *)(v27 + 20) != 102 )
          goto LABEL_26;
        if ( sub_B8EC80(a3) )
          goto LABEL_79;
        v43 = *(_QWORD *)(a3 + 40);
        if ( (v43 & 7) == 0 )
        {
          v26 = v43 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v26 )
          {
LABEL_26:
            v28 = *(_QWORD *)(v26 + 16);
            if ( *(_DWORD *)v28 == 8 && *(_QWORD *)(v28 + 16) == 0x6574696E69667369LL && sub_B8EC80(a3) )
              goto LABEL_79;
          }
        }
      }
    }
  }
  v29 = j__strlen("infinity");
  v30 = sub_995750(a3);
  if ( v29 == v31 && (!v29 || !memcmp(v30, "infinity", v29)) && (*(_BYTE *)(a3 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v32 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16);
    if ( (v32 & 4) != 0 )
      v33 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v33 = v32 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v33 )
      v33 -= 64LL;
    v34 = j__strlen("numeric_limits");
    v35 = sub_995750(v33);
    if ( v34 == v36 && (!v34 || !memcmp(v35, "numeric_limits", v34)) )
    {
      v37 = *(_QWORD *)(v33 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v33 + 16) & 4) != 0 )
        v37 = *(_QWORD *)v37;
      if ( (*(_BYTE *)(v37 + 8) & 0x7F) == 0x18 && v37 != 48 && sub_B8EBA0(v37) )
        goto LABEL_79;
    }
  }
  v38 = sub_995750(a3);
  v48 = 13;
  v47 = "__builtin_inf";
  v49 = "__builtin_inff";
  v51 = "__builtin_infl";
  v53 = "__builtin_inff16";
  v50 = 14;
  v52 = 14;
  v54 = 16;
  v55 = "__builtin_inff128";
  v56 = 17;
  if ( v39 != 13 )
  {
    if ( v39 == 14 )
    {
      if ( *(_QWORD *)v38 == 0x69746C6975625F5FLL && *((_DWORD *)v38 + 2) == 1852399470 && *((_WORD *)v38 + 6) == 26214
        || *(_QWORD *)v38 == 0x69746C6975625F5FLL && *((_DWORD *)v38 + 2) == 1852399470 && *((_WORD *)v38 + 6) == 27750 )
      {
        goto LABEL_79;
      }
      return;
    }
    if ( v39 != 16 )
    {
      if ( v39 == 17
        && !(*(_QWORD *)v38 ^ 0x69746C6975625F5FLL | *((_QWORD *)v38 + 1) ^ 0x323166666E695F6ELL)
        && v38[16] == 56 )
      {
        goto LABEL_79;
      }
      return;
    }
    if ( *(_QWORD *)v38 ^ 0x69746C6975625F5FLL | *((_QWORD *)v38 + 1) ^ 0x363166666E695F6ELL )
      return;
LABEL_79:
    v42 = sub_BF6D70(a2);
    sub_168B9F0((__int64)&v47, (__int64 *)(a1 + 8), v42, 0x8Au, 0);
    v45 = 0;
    goto LABEL_21;
  }
  if ( *(_QWORD *)v38 == 0x69746C6975625F5FLL && *((_DWORD *)v38 + 2) == 1852399470 && v38[12] == 102 )
    goto LABEL_79;
}
