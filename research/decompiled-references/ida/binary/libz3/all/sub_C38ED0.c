__int64 __fastcall sub_C38ED0(__int64 *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  char v7; // al
  __int64 v8; // rdx
  char v9; // cl
  _DWORD *v10; // rax
  __int64 v11; // r15
  void *v12; // rbx
  _DWORD *v14; // rax
  _QWORD *v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  _QWORD *v19; // rdx
  _DWORD *v20; // rax
  unsigned int v21; // r12d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rdx
  void *v25; // rbp
  int v26; // edx
  void *v27; // rbp
  __int64 v28; // rdx
  char v29; // cl
  __int64 v30; // rdx
  int v31; // r12d
  void *v32; // rdi
  int v33; // ecx
  unsigned int v34; // r12d
  void *v35; // r14
  char **exception; // rbx
  __int64 v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rdi
  char v40; // [rsp+2Fh] [rbp-99h] BYREF
  __int64 v41; // [rsp+30h] [rbp-98h] BYREF
  __int64 v42; // [rsp+38h] [rbp-90h]
  __int64 v43; // [rsp+40h] [rbp-88h] BYREF
  __int64 v44; // [rsp+48h] [rbp-80h]
  _QWORD v45[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v46[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v47; // [rsp+70h] [rbp-58h] BYREF
  __int64 v48; // [rsp+78h] [rbp-50h]
  __int64 v49; // [rsp+80h] [rbp-48h] BYREF
  __int64 v50; // [rsp+88h] [rbp-40h]

  v4 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v4 )
  {
    if ( *v4 == 5 && v4[1] == 1 && !*(_WORD *)(a2 + 4) && !*(_DWORD *)(a2 + 24) )
    {
      v14 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v14 || *v14 == -1 )
      {
        v15 = (_QWORD *)a1[11];
        if ( !v15 )
        {
          v38 = (_QWORD *)sub_186B270(0x18u);
          v15 = v38 + 1;
          *v38 = 2;
          v18 = 1;
          a1[11] = (__int64)v15;
          v19 = v15;
          goto LABEL_34;
        }
        v16 = *((_DWORD *)v15 - 1);
        if ( v16 != *((_DWORD *)v15 - 2) )
          goto LABEL_33;
        v21 = (3 * v16 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v16 + 8 >= (unsigned int)v22 || v16 >= v21 )
          goto LABEL_89;
        goto LABEL_44;
      }
    }
  }
  v5 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v5 )
  {
    if ( *v5 == 5 && !v5[1] && !*(_WORD *)(a2 + 4) && !*(_DWORD *)(a2 + 24) )
    {
      v20 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v20 || *v20 == -1 )
      {
        v15 = (_QWORD *)a1[11];
        if ( !v15 )
        {
          v39 = (_QWORD *)sub_186B270(0x18u);
          *v39 = 2;
          v18 = 1;
          v15 = v39 + 1;
          a1[11] = (__int64)v15;
          v19 = v15;
          goto LABEL_34;
        }
        v16 = *((_DWORD *)v15 - 1);
        if ( v16 != *((_DWORD *)v15 - 2) )
        {
LABEL_33:
          v17 = v16;
          v18 = v16 + 1;
          v19 = &v15[v17];
LABEL_34:
          *v19 = a2;
          v11 = *a1;
          *((_DWORD *)v15 - 1) = v18;
          goto LABEL_18;
        }
        v21 = (3 * v16 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v16 + 8 >= (unsigned int)v22 || v16 >= v21 )
        {
LABEL_89:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_15FB08(&v47, "Overflow encountered when expanding vector", v37);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v47);
          sub_233E40((__int64)&v47);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_44:
        v23 = (unsigned int *)sub_186B300(v15 - 1, v22);
        v24 = v23[1];
        v15 = v23 + 2;
        a1[11] = (__int64)(v23 + 2);
        *v23 = v21;
        LODWORD(v23) = v24;
        v19 = &v15[v24];
        v18 = (_DWORD)v23 + 1;
        goto LABEL_34;
      }
    }
  }
  if ( (unsigned __int8)sub_15D2CB0(a1[2], a2) )
  {
    if ( !*(_WORD *)(a2 + 4) && !*(_DWORD *)(a2 + 24) )
    {
      v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v6 || *v6 == -1 )
        goto LABEL_68;
    }
  }
  v7 = sub_15D2CB0(a1[2], a2);
  v8 = *(_QWORD *)(a2 + 16);
  v9 = v7;
  v10 = *(_DWORD **)(v8 + 24);
  if ( v9 )
  {
    if ( v10 )
    {
      if ( *v10 != *((_DWORD *)a1 + 8) )
      {
        v11 = *a1;
        if ( *(_WORD *)(a2 + 4) )
          goto LABEL_17;
        goto LABEL_14;
      }
    }
    else if ( *((_DWORD *)a1 + 8) != -1 )
    {
      v11 = *a1;
      if ( *(_WORD *)(a2 + 4) )
        goto LABEL_25;
      goto LABEL_23;
    }
LABEL_68:
    v11 = *a1;
    goto LABEL_18;
  }
  v11 = *a1;
  if ( *(_WORD *)(a2 + 4) )
  {
    if ( v10 )
      goto LABEL_17;
    goto LABEL_25;
  }
  if ( !v10 )
  {
LABEL_23:
    if ( *(_QWORD *)(v11 + 120) == v8 || *(_QWORD *)(v11 + 136) == v8 )
      goto LABEL_70;
LABEL_25:
    *((_BYTE *)a1 + 97) = 0;
    goto LABEL_18;
  }
LABEL_14:
  if ( *v10 != 5 )
  {
    if ( *(_QWORD *)(v11 + 120) != v8 && *(_QWORD *)(v11 + 136) != v8 )
    {
LABEL_17:
      if ( !*v10 )
        goto LABEL_18;
      goto LABEL_25;
    }
    goto LABEL_70;
  }
  v33 = v10[1];
  if ( v33 != 9 && v33 != 6 && v33 != 7 && v33 != 2 && v33 != 4 && v33 != 3 && v33 != 5 && v33 && v33 != 8 )
    goto LABEL_23;
LABEL_70:
  *((_BYTE *)a1 + 96) = 0;
LABEL_18:
  v41 = 0;
  v42 = 0;
  v43 = 1;
  v44 = 0;
  if ( !(unsigned __int8)sub_1666AE0(v11 + 16, a2, &v41, &v40) || !v40 )
    goto LABEL_20;
  BYTE4(v47) &= 0xFCu;
  v25 = qword_1C7F2C0;
  BYTE4(v49) &= 0xFCu;
  LODWORD(v47) = 0;
  v48 = 0;
  LODWORD(v49) = 1;
  v50 = 0;
  if ( (v41 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v47, &v41);
  else
    LODWORD(v47) = v41;
  if ( (v43 & 0x100000000LL) != 0 )
  {
    sub_182C690(v25, &v49, &v43);
  }
  else
  {
    BYTE4(v49) &= ~1u;
    LODWORD(v49) = v43;
  }
  sub_1831690(qword_1C7F2C0, &v47);
  v26 = v47;
  v27 = qword_1C7F2C0;
  LODWORD(v47) = v41;
  LODWORD(v41) = v26;
  v28 = v48;
  v48 = v42;
  v42 = v28;
  v29 = BYTE4(v47) & 1;
  LOBYTE(v28) = BYTE4(v41) & 0xFC | BYTE4(v47) & 2;
  BYTE4(v47) = BYTE4(v41) & 1 | BYTE4(v47) & 0xFC | BYTE4(v41) & 2;
  BYTE4(v41) = v29 | v28;
  LODWORD(v28) = v49;
  LODWORD(v49) = v43;
  LODWORD(v43) = v28;
  v30 = v50;
  v50 = v44;
  v44 = v30;
  LOBYTE(v30) = BYTE4(v49) & 1 | BYTE4(v43) & 0xFC | BYTE4(v49) & 2;
  BYTE4(v49) = BYTE4(v43) & 1 | BYTE4(v49) & 0xFC | BYTE4(v43) & 2;
  BYTE4(v43) = v30;
  sub_182CBA0(qword_1C7F2C0, &v47);
  sub_182CBA0(v27, &v49);
  v45[0] = 1;
  v45[1] = 0;
  v46[0] = 1;
  v46[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v46);
  BYTE4(v46[0]) &= ~1u;
  LODWORD(v46[0]) = 1;
  v47 = 2;
  v48 = 0;
  v49 = 1;
  v50 = 0;
  sub_182CBA0(qword_1C7F2C0, &v49);
  BYTE4(v49) &= ~1u;
  v31 = 1;
  LODWORD(v49) = 1;
  while ( 1 )
  {
    v32 = qword_1C7F2C0;
    if ( (v46[0] & 0x100000000LL) != 0 || LODWORD(v46[0]) != 1 || (v43 & 0x100000000LL) != 0 || (_DWORD)v43 != 1 )
    {
      if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v45, &v41) )
        break;
      goto LABEL_51;
    }
    if ( (v45[0] & 0x100000000LL) == 0 && (v41 & 0x100000000LL) == 0 )
    {
      if ( SLODWORD(v45[0]) >= (int)v41 )
        goto LABEL_73;
      goto LABEL_62;
    }
    if ( (int)sub_182C7B0(qword_1C7F2C0, v45, &v41) >= 0 )
      break;
LABEL_51:
    v32 = qword_1C7F2C0;
    if ( (v46[0] & 0x100000000LL) != 0 || LODWORD(v46[0]) != 1 )
    {
LABEL_53:
      sub_1848FF0(v32, v45, &v47);
      goto LABEL_54;
    }
LABEL_62:
    if ( (v49 & 0x100000000LL) != 0 || (_DWORD)v49 != 1 )
      goto LABEL_53;
    sub_1831650(v32, v45, &v47);
    sub_182CBA0(v32, v46);
    BYTE4(v46[0]) &= ~1u;
    LODWORD(v46[0]) = 1;
LABEL_54:
    ++v31;
  }
  v32 = qword_1C7F2C0;
LABEL_73:
  v34 = v31 - 1;
  if ( !v34 )
    v34 = 1;
  sub_182CBA0(v32, &v47);
  sub_182CBA0(v32, &v49);
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v45);
  sub_182CBA0(v35, v46);
  if ( v34 >= *(_DWORD *)(v11 + 624) )
    *(_DWORD *)(v11 + 624) = v34 + 1;
LABEL_20:
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v41);
  return sub_182CBA0(v12, &v43);
}

