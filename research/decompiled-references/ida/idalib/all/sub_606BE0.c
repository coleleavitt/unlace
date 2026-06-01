__int64 __fastcall sub_606BE0(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  __int64 v6; // r13
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v11; // rdi
  unsigned __int8 scalar_bt; // al
  __int64 v13; // rcx
  unsigned int v14; // ebx
  char *v15; // rbp
  int v17; // r14d
  char v18; // al
  char *v19; // r13
  char tinfo_property; // r14
  char v21; // al
  __int64 tinfo_pdata; // rax
  bool v24; // [rsp+Fh] [rbp-59h]
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v26; // [rsp+18h] [rbp-50h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v6 = a4;
  v8 = *a3 + 144 * a4;
  v9 = v8;
  v27 = __readfsqword(0x28u);
  if ( a4 == -1 )
  {
    v11 = *a2;
    if ( !(unsigned __int8)*a2 || (v11 & 0xE) == 0 && (v11 & 0x30) != 0 )
      goto LABEL_5;
    goto LABEL_23;
  }
  if ( !*(_QWORD *)(v8 + 24) )
  {
    if ( a5 != *(_QWORD *)(v8 + 8) >> 3 )
    {
      v11 = *a2;
      if ( (unsigned __int8)*a2 && ((v11 & 0xE) != 0 || (v11 & 0x30) == 0) )
      {
        v24 = 0;
        v6 = -1;
        goto LABEL_24;
      }
LABEL_5:
      scalar_bt = get_scalar_bt((unsigned int)a5);
      v13 = scalar_bt;
      if ( !scalar_bt )
        return 0;
      goto LABEL_6;
    }
    copy_tinfo_t(a2);
    v11 = *a2;
    if ( !(unsigned __int8)*a2 )
      goto LABEL_38;
    if ( (v11 & 0xE) == 0 && (v11 & 0x30) != 0 )
      goto LABEL_49;
LABEL_23:
    v24 = 0;
    goto LABEL_24;
  }
  v17 = strcmp(*(const char **)(v8 + 16), "__varargs");
  if ( *(_QWORD *)(v9 + 8) >> 3 == a5 )
  {
    copy_tinfo_t(a2);
    v11 = *a2;
    v18 = *a2;
    if ( !v18 )
    {
      if ( !v17 )
        goto LABEL_16;
      goto LABEL_38;
    }
  }
  else
  {
    v11 = *a2;
    v18 = *a2;
    if ( !v18 )
    {
      if ( !v17 )
      {
LABEL_16:
        s1 = nullptr;
        v26 = 0;
        goto LABEL_17;
      }
      goto LABEL_5;
    }
    v6 = -1;
  }
  v24 = v17 == 0;
  if ( (v18 & 0xE) == 0 && (v18 & 0x30) != 0 )
    goto LABEL_25;
LABEL_24:
  s1 = (char *)get_tinfo_property(v11, 9);
  tinfo_property = get_tinfo_property(s1, 2);
  clear_tinfo_t(&s1);
  if ( (tinfo_property & 0x3F) == 0x30 )
  {
LABEL_25:
    if ( v24 )
    {
      v11 = *a2;
      goto LABEL_16;
    }
LABEL_49:
    if ( v6 == -1 )
      goto LABEL_5;
LABEL_38:
    if ( (get_tinfo_property(*(_QWORD *)(v9 + 64), 2) & 0x3F) == 0x39
      && (!(unsigned __int8)getinf(66) || *(_QWORD *)(a1 + 1048) == (unsigned __int8)getinf(66)) )
    {
      v13 = 41;
    }
    else
    {
      v21 = get_tinfo_property(*(_QWORD *)(v9 + 64), 2);
      v13 = 25;
      if ( (v21 & 0x3F) != 0x19 )
      {
        if ( (get_tinfo_property(*(_QWORD *)(v9 + 64), 2) & 0x3F) != 9 )
          goto LABEL_5;
        v13 = 9;
      }
    }
LABEL_6:
    s1 = (char *)v13;
    copy_tinfo_t(a2);
    clear_tinfo_t(&s1);
    s1 = nullptr;
    *((_QWORD *)&v26 + 1) = 0;
LABEL_7:
    v14 = 1;
    if ( ((unsigned __int8)*a2 & 0xFu) <= 8 )
      return v14;
    v15 = s1;
    goto LABEL_9;
  }
  s1 = nullptr;
  v26 = 0;
  if ( !v24 )
    goto LABEL_7;
  v11 = *a2;
LABEL_17:
  if ( (v11 & 0x100) == 0 )
  {
    v19 = s1;
LABEL_19:
    *a6 = 0;
    v15 = v19;
    v14 = 2;
    goto LABEL_10;
  }
  tinfo_pdata = get_tinfo_pdata(&s1, v11, 0);
  v15 = s1;
  v19 = s1;
  if ( !tinfo_pdata || !(_QWORD)v26 || strcmp(s1, "__gnuc_va_list") )
    goto LABEL_19;
  v14 = 1;
  if ( ((unsigned __int8)*a2 & 0xFu) > 8 )
  {
LABEL_9:
    *a6 = 0;
    v14 = 1;
  }
LABEL_10:
  if ( v15 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v15);
  }
  return v14;
}
