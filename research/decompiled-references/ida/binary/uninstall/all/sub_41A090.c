__int64 __fastcall sub_41A090(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // r14d
  int *v6; // r13
  int v7; // r12d
  __int64 v9; // rdi
  _BYTE *v10; // rax
  int v11; // eax
  _QWORD *v12; // r15
  unsigned int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  char *v17; // rax
  char v18; // cl
  const char *v19; // rdi
  __int64 result; // rax
  int *v21; // rdi
  __int64 v22; // rax
  int *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  _BOOL4 v26; // edx
  int v27; // eax
  int v28; // r14d
  char *v29; // rbp
  __int16 v30; // cx
  char *v31; // rbx
  char *v32; // r13
  bool i; // zf
  char *v34; // rdx
  int v35; // r12d
  __int64 v36; // rax
  int v37; // ecx
  int v38; // eax
  unsigned __int16 v39; // cx
  int v40; // ecx
  int *v41; // rax
  __int64 v42; // rsi
  int v43; // eax
  char *v44; // rsi
  __int64 v45; // rdx
  _WORD *v46; // rsi
  int *v47; // rax
  int v48; // r9d
  __int64 v49; // rdi
  __int64 v50; // rdx
  int v51; // eax
  int v52; // eax
  int v53; // r14d
  _WORD *v54; // rbx
  _WORD *v55; // r13
  _WORD *v56; // rbp
  _WORD *v57; // r12
  int *v58; // rax
  int *v59; // rax
  __int16 v60; // [rsp+1Eh] [rbp-CAh]
  __int64 (__fastcall *v61)(); // [rsp+20h] [rbp-C8h]
  int v62; // [rsp+2Ch] [rbp-BCh]
  char *v63; // [rsp+30h] [rbp-B8h]
  __int64 v64; // [rsp+30h] [rbp-B8h]
  _WORD *v65; // [rsp+38h] [rbp-B0h]
  int *v66; // [rsp+40h] [rbp-A8h]
  int *v67; // [rsp+48h] [rbp-A0h]
  int *v68; // [rsp+50h] [rbp-98h]
  __int64 v69; // [rsp+58h] [rbp-90h]
  int v70; // [rsp+60h] [rbp-88h]
  unsigned int v71; // [rsp+64h] [rbp-84h]
  int v72; // [rsp+68h] [rbp-80h]
  unsigned int v73; // [rsp+6Ch] [rbp-7Ch]
  unsigned int v75; // [rsp+78h] [rbp-70h] BYREF
  int v76; // [rsp+7Ch] [rbp-6Ch] BYREF
  int v77; // [rsp+80h] [rbp-68h] BYREF
  int v78; // [rsp+84h] [rbp-64h] BYREF
  char v79[4]; // [rsp+88h] [rbp-60h] BYREF
  int v80; // [rsp+8Ch] [rbp-5Ch] BYREF
  int v81; // [rsp+90h] [rbp-58h] BYREF
  __int64 v82; // [rsp+98h] [rbp-50h]

  v5 = 3;
  v6 = nullptr;
  v7 = 1;
  v72 = 0;
  v78 = 0;
  v68 = nullptr;
  if ( a3 > 1 )
  {
    while ( 2 )
    {
      v9 = *(_QWORD *)(a4 + 8LL * v7);
      v10 = *(_BYTE **)(v9 + 8);
      if ( !v10 )
        v10 = (_BYTE *)sub_47B3B0(v9);
      if ( *v10 == 45 )
      {
        if ( !(unsigned int)sub_4584C0(
                              a2,
                              *(_QWORD *)(a4 + 8LL * v7),
                              (unsigned int)&off_6541C0,
                              8,
                              (unsigned int)"switch",
                              1,
                              (__int64)&v80) )
        {
          switch ( v80 )
          {
            case 0:
              ++v7;
              v72 = 1;
              goto LABEL_14;
            case 1:
              v5 |= 8u;
              ++v7;
              goto LABEL_14;
            case 2:
              v5 |= 0x20u;
              ++v7;
              goto LABEL_14;
            case 3:
              LOBYTE(v5) = v5 | 0xC0;
              ++v7;
              goto LABEL_14;
            case 4:
              v5 |= 0x40u;
              ++v7;
              goto LABEL_14;
            case 5:
              LOBYTE(v5) = v5 | 0x80;
              ++v7;
              goto LABEL_14;
            case 6:
              if ( ++v7 >= a3 )
                goto LABEL_15;
              if ( (unsigned int)sub_49FAC0(a2, *(_QWORD *)(a4 + 8LL * v7), 0, v79) )
                goto LABEL_58;
              if ( v6 )
              {
                v11 = *v6 - 1;
                i = *v6 == 1;
                *v6 = v11;
                if ( v11 < 0 || i )
                  sub_47B120(v6);
              }
              v6 = *(int **)(a4 + 8LL * v7);
              ++*v6;
LABEL_13:
              ++v7;
LABEL_14:
              if ( v7 >= a3 )
                goto LABEL_15;
              continue;
            case 7:
              ++v7;
              goto LABEL_15;
            default:
              goto LABEL_13;
          }
        }
        goto LABEL_58;
      }
      break;
    }
  }
LABEL_15:
  v62 = a3 - v7;
  if ( (unsigned int)(a3 - v7 - 3) > 1 )
  {
    sub_458930(a2, 1, a4, "?switches? exp string subSpec ?varName?");
LABEL_58:
    if ( v6 )
    {
      v38 = *v6 - 1;
      i = *v6 == 1;
      *v6 = v38;
      if ( v38 < 0 || i )
        sub_47B120(v6);
    }
    return 1;
  }
  v12 = (_QWORD *)(a4 + 8LL * v7);
  if ( v6 )
  {
    v13 = sub_48F360(v12[1]);
    sub_49FAC0(0, v6, v13, &v78);
    v14 = *v6 - 1;
    i = *v6 == 1;
    *v6 = v14;
    if ( v14 < 0 || i )
      sub_47B120(v6);
    v15 = 0;
    if ( v78 > -1 )
      v15 = v78;
    v78 = v15;
  }
  if ( v72 && !v78 )
  {
    v16 = v12[2];
    v17 = *(char **)(v16 + 8);
    if ( !v17 )
      v17 = (char *)sub_47B3B0(v16);
    v18 = *v17;
    if ( !*v17 )
      goto LABEL_30;
    while ( v18 != 38 && v18 != 92 )
    {
      v18 = *++v17;
      if ( !*v17 )
        goto LABEL_30;
    }
    if ( !v18 || !v17 )
    {
LABEL_30:
      v19 = *(const char **)(*v12 + 8LL);
      if ( !v19 )
        v19 = (const char *)sub_47B3B0(*v12);
      if ( !strpbrk(v19, "*+?{}()[].\\|^$") )
      {
        v53 = v5 & 8;
        v71 = 0;
        if ( v53 )
          v61 = Tcl_UniCharNcasecmp;
        else
          v61 = Tcl_UniCharNcmp;
        v54 = (_WORD *)sub_48F2D0(*v12, &v77);
        v65 = (_WORD *)sub_48F2D0(v12[1], &v76);
        v64 = sub_48F2D0(v12[2], &v75);
        v55 = &v65[v76];
        if ( v77 )
          v55 += -v77 + 1;
        v73 = 0;
        if ( v77 )
        {
          v56 = v65;
          v60 = sub_49C170((unsigned __int16)*v54);
          v57 = v65;
          if ( v65 < v55 )
          {
            do
            {
              if ( (*v65 == *v54 || v53 && (unsigned __int16)sub_49C170((unsigned __int16)*v65) == v60)
                && (v77 == 1 || !((unsigned int (__fastcall *)(_WORD *, _WORD *, _QWORD))v61)(v65, v54, v77)) )
              {
                if ( !v71 )
                {
                  v58 = (int *)sub_48E750(v65, 0);
                  ++*v58;
                  v68 = v58;
                }
                if ( v57 != v65 )
                  sub_48EA90(v68, v57, v65 - v57);
                v57 = &v65[v77];
                v65 = v57 - 1;
                sub_48EA90(v68, v64, v75);
                ++v71;
              }
              ++v65;
            }
            while ( v65 < v55 );
            if ( v71 )
            {
              v65 = v57;
              v76 = &v56[v76] - v57;
            }
          }
        }
        else if ( v65 < v55 )
        {
          v59 = (int *)sub_48E750(v65, 0);
          ++*v59;
          v68 = v59;
          do
          {
            sub_48EA90(v68, v64, v75);
            sub_48EA90(v68, v65++, 1);
            ++v71;
          }
          while ( v65 < v55 );
          v76 = 0;
        }
        v66 = nullptr;
        v67 = nullptr;
        goto LABEL_79;
      }
    }
  }
  v69 = sub_48AC00(a2, *v12, v5);
  result = 1;
  if ( !v69 )
    return result;
  v21 = (int *)v12[1];
  v66 = v21;
  if ( v21 == (int *)*v12 )
  {
    v66 = (int *)sub_47B2A0(v21);
    v22 = sub_48F2D0(v66, &v76);
  }
  else
  {
    v22 = sub_48F2D0(v21, &v76);
  }
  v23 = (int *)v12[2];
  v65 = (_WORD *)v22;
  v67 = v23;
  if ( v23 == (int *)*v12 )
  {
    v67 = (int *)sub_47B2A0(v23);
    v24 = sub_48F2D0(v67, &v75);
  }
  else
  {
    v24 = sub_48F2D0(v23, &v75);
  }
  v25 = (unsigned int)v78;
  v63 = (char *)v24;
  v73 = 0;
  v71 = 0;
  if ( v78 > v76 )
  {
LABEL_80:
    v41 = (int *)v12[1];
    ++*v41;
    v68 = v41;
    goto LABEL_81;
  }
  do
  {
    v26 = 0;
    if ( (int)v25 > 0 )
      v26 = v65[(int)v25 - 1] != 10;
    v27 = sub_48A6C0(a2, v69, v66, v25, 10, v26);
    if ( v27 < 0 )
    {
LABEL_106:
      v73 = 1;
      goto LABEL_84;
    }
    if ( !v27 )
      break;
    if ( !v71 )
    {
      v47 = (int *)sub_48E750(v65, 0);
      ++*v47;
      v68 = v47;
      if ( v78 > 0 )
        sub_48EA90(v47, v65, (unsigned int)v78);
    }
    ++v71;
    sub_48A470(v69, &v81);
    v28 = *(_DWORD *)(v82 + 8);
    v70 = *(_QWORD *)v82;
    sub_48EA90(v68, &v65[v78], *(_QWORD *)v82);
    v29 = v63;
    v30 = *(_WORD *)v63;
    v31 = v63;
    v32 = &v63[2 * v75];
    for ( i = v63 == v32; !i; i = v34 == v32 )
    {
      v35 = 0;
      if ( v30 == 38 )
        goto LABEL_49;
      v34 = v31 + 2;
      if ( v30 != 92 )
        goto LABEL_46;
      v39 = *((_WORD *)v31 + 1);
      if ( (unsigned __int16)(v39 - 48) <= 9u )
      {
        v35 = v39 - 48;
LABEL_49:
        if ( v29 != v31 )
          sub_48EA90(v68, v29, (v31 - v29) >> 1);
        if ( v81 >= v35 )
        {
          v36 = 16LL * v35;
          v37 = *(_DWORD *)(v36 + v82);
          if ( (v37 | *(_DWORD *)(v36 + v82 + 8)) >= 0 )
            sub_48EA90(v68, &v65[v37 + (__int64)v78], (unsigned int)(*(_DWORD *)(v36 + v82 + 8) - v37));
        }
        if ( *(_WORD *)v31 == 92 )
          v31 += 2;
        v34 = v31 + 2;
        v29 = v31 + 2;
        goto LABEL_46;
      }
      v34 = v31 + 2;
      if ( v39 == 92 || v39 == 38 )
      {
        v44 = v29;
        v45 = v31 - v29;
        v29 = v31 + 4;
        *(_WORD *)v31 = v39;
        sub_48EA90(v68, v44, (unsigned int)(v45 >> 1) + 1);
        v34 = v31 + 4;
        *(_WORD *)v31 = 92;
      }
LABEL_46:
      v30 = *(_WORD *)v34;
      v31 = v34;
    }
    if ( v29 != v31 )
      sub_48EA90(v68, v29, (unsigned int)((v31 - v29) >> 1));
    if ( !v28 )
    {
      v40 = v78;
      if ( v78 >= v76 )
        goto LABEL_76;
      v46 = &v65[v78];
LABEL_96:
      sub_48EA90(v68, v46, 1);
      v40 = v78;
      goto LABEL_76;
    }
    v40 = v28 + v78;
    v78 += v28;
    if ( v70 == v28 )
    {
      if ( v40 < v76 )
      {
        v46 = &v65[v40];
        goto LABEL_96;
      }
LABEL_76:
      v78 = v40 + 1;
    }
    if ( !v72 )
      break;
    v25 = (unsigned int)v78;
  }
  while ( v78 <= v76 );
LABEL_79:
  if ( !v71 )
    goto LABEL_80;
  if ( v78 < v76 )
    sub_48EA90(v68, &v65[v78], (unsigned int)(v76 - v78));
LABEL_81:
  if ( v62 != 4 )
  {
    v42 = (__int64)v68;
    goto LABEL_83;
  }
  if ( !sub_4A4160(a2, v12[3], 0, v68, 0) )
  {
    v49 = v12[3];
    v50 = *(_QWORD *)(v49 + 8);
    if ( !v50 )
      LODWORD(v50) = sub_47B3B0(v49);
    sub_48B710(a2, (unsigned int)"couldn't set variable \"", v50, (unsigned int)"\"", 0, v48);
    goto LABEL_106;
  }
  v42 = sub_47BD00(v71);
LABEL_83:
  sub_48AFD0(a2, v42);
LABEL_84:
  if ( v66 )
  {
    if ( v12[1] == *v12 )
    {
      v51 = *v66 - 1;
      i = *v66 == 1;
      *v66 = v51;
      if ( v51 < 0 || i )
        sub_47B120(v66);
    }
  }
  if ( v67 )
  {
    if ( v12[2] == *v12 )
    {
      v52 = *v67 - 1;
      i = *v67 == 1;
      *v67 = v52;
      if ( v52 < 0 || i )
        sub_47B120(v67);
    }
  }
  if ( !v68 )
    return v73;
  v43 = *v68 - 1;
  i = *v68 == 1;
  *v68 = v43;
  if ( v43 >= 0 && !i )
    return v73;
  sub_47B120(v68);
  return v73;
}

