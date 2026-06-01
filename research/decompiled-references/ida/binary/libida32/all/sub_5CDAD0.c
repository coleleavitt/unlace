__int64 __fastcall sub_5CDAD0(__int64 a1)
{
  char *v2; // rbp
  __int64 v3; // r13
  char *v4; // rax
  char *v5; // r13
  char *v6; // r12
  void *v7; // rsi
  const char *v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rdx
  const char *v16; // rbp
  char *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax

  v2 = *(char **)(a1 + 552);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 104) + 44LL) & 1) == 0 )
    return sub_5CD940(a1, v2);
  v3 = *(_QWORD *)(a1 + 144);
  if ( !v3 )
    return sub_5CD940(a1, v2);
  v4 = strrchr(*(const char **)(a1 + 552), 58);
  v5 = *(char **)(v3 + 72);
  v6 = v4;
  if ( !v4 )
  {
    if ( *v2 != 126 )
    {
      if ( !v5 || !strcmp(v2, v5) )
      {
        v9 = 0;
        goto LABEL_9;
      }
      if ( (unsigned __int8)sub_5C6080(*(_QWORD *)(a1 + 240), v5) )
      {
        v2 = *(char **)(a1 + 552);
        v9 = 0;
        goto LABEL_9;
      }
      v8 = v2;
      v9 = 0;
      goto LABEL_28;
    }
    v8 = v2 + 1;
    if ( !v5 )
      return sub_5CD940(a1, v2);
LABEL_26:
    if ( !strcmp(v8, v5) )
      return sub_5CD940(a1, v2);
    v9 = -1;
    if ( (unsigned __int8)sub_5C6080(*(_QWORD *)(a1 + 240), v5) )
      goto LABEL_14;
    goto LABEL_28;
  }
  if ( !v5 )
  {
    if ( v4[1] == 126 )
      return sub_5CD940(a1, v2);
    v9 = v4 + 1 - v2;
LABEL_8:
    if ( v9 == -1 )
      return sub_5CD940(a1, v2);
LABEL_9:
    v10 = *(_QWORD *)(a1 + 560);
    v11 = *(_QWORD *)(a1 + 568);
    if ( v10 )
    {
      v12 = v10 + 1;
      v13 = v10 - 1;
      if ( v11 >= v10 + 1 )
        goto LABEL_11;
      v18 = a1 + 552;
    }
    else
    {
      if ( v11 > 1 )
      {
        *(_QWORD *)(a1 + 560) = 2;
        v13 = 0;
        v2[1] = 0;
LABEL_13:
        *(_BYTE *)(*(_QWORD *)(a1 + 552) + v13) = 126;
LABEL_14:
        v2 = *(char **)(a1 + 552);
        return sub_5CD940(a1, v2);
      }
      v18 = a1 + 552;
      v13 = 0;
      v10 = 1;
      v12 = 2;
    }
    v19 = qvector_reserve(v18, v2, v12, 1);
    *(_QWORD *)(a1 + 552) = v19;
    v2 = (char *)v19;
LABEL_11:
    *(_QWORD *)(a1 + 560) = v12;
    v2[v10] = 0;
    if ( v9 < v13 )
    {
      v14 = v13;
      v13 = v9;
      memmove((void *)(v9 + *(_QWORD *)(a1 + 552) + 1), (const void *)(v9 + *(_QWORD *)(a1 + 552)), v14 - v9);
    }
    goto LABEL_13;
  }
  v7 = v5;
  if ( strncmp(v2, v5, v4 - v2 - 1) )
    return set_qerrno(1604, v7);
  if ( v6[1] == 126 )
  {
    v8 = v6 + 2;
    goto LABEL_26;
  }
  v8 = v6 + 1;
  v9 = v8 - v2;
  if ( !strcmp(v8, v5) )
    goto LABEL_8;
  if ( (unsigned __int8)sub_5C6080(*(_QWORD *)(a1 + 240), v5) )
    goto LABEL_33;
LABEL_28:
  v7 = (void *)v8;
  v16 = *(const char **)(*(_QWORD *)(a1 + 144) + 72LL);
  v17 = strstr(v16, v8);
  if ( v17 && v16 < v17 - 2 && *(v17 - 1) == 58 && *(v17 - 2) == 58 && *v8 != 58 )
  {
LABEL_33:
    v2 = *(char **)(a1 + 552);
    goto LABEL_8;
  }
  return set_qerrno(1604, v7);
}

