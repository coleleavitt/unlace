__int64 __fastcall sub_5E98C0(__int64 a1)
{
  char *v2; // rbp
  __int64 v3; // r13
  char *v4; // rax
  char *v5; // r13
  char *v6; // r12
  const char *v7; // r12
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdx
  const char *v15; // rbp
  char *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax

  v2 = *(char **)(a1 + 560);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 44LL) & 1) == 0 )
    return sub_5E9730(a1, v2);
  v3 = *(_QWORD *)(a1 + 152);
  if ( !v3 )
    return sub_5E9730(a1, v2);
  v4 = strrchr(*(const char **)(a1 + 560), 58);
  v5 = *(char **)(v3 + 72);
  v6 = v4;
  if ( !v4 )
  {
    if ( *v2 != 126 )
    {
      if ( !v5 || !strcmp(v2, v5) )
      {
        v8 = 0;
        goto LABEL_9;
      }
      if ( (unsigned __int8)sub_5E1D80(*(_QWORD *)(a1 + 248), v5) )
      {
        v2 = *(char **)(a1 + 560);
        v8 = 0;
        goto LABEL_9;
      }
      v7 = v2;
      v8 = 0;
      goto LABEL_28;
    }
    v7 = v2 + 1;
    if ( !v5 )
      return sub_5E9730(a1, v2);
LABEL_26:
    if ( !strcmp(v7, v5) )
      return sub_5E9730(a1, v2);
    v8 = -1;
    if ( (unsigned __int8)sub_5E1D80(*(_QWORD *)(a1 + 248), v5) )
      goto LABEL_14;
    goto LABEL_28;
  }
  if ( !v5 )
  {
    if ( v4[1] == 126 )
      return sub_5E9730(a1, v2);
    v8 = v4 + 1 - v2;
LABEL_8:
    if ( v8 == -1 )
      return sub_5E9730(a1, v2);
LABEL_9:
    v9 = *(_QWORD *)(a1 + 568);
    v10 = *(_QWORD *)(a1 + 576);
    if ( v9 )
    {
      v11 = v9 + 1;
      v12 = v9 - 1;
      if ( v10 >= v9 + 1 )
        goto LABEL_11;
      v17 = a1 + 560;
    }
    else
    {
      if ( v10 > 1 )
      {
        *(_QWORD *)(a1 + 568) = 2;
        v12 = 0;
        v2[1] = 0;
LABEL_13:
        *(_BYTE *)(*(_QWORD *)(a1 + 560) + v12) = 126;
LABEL_14:
        v2 = *(char **)(a1 + 560);
        return sub_5E9730(a1, v2);
      }
      v17 = a1 + 560;
      v12 = 0;
      v9 = 1;
      v11 = 2;
    }
    v18 = qvector_reserve(v17, v2, v11, 1);
    *(_QWORD *)(a1 + 560) = v18;
    v2 = (char *)v18;
LABEL_11:
    *(_QWORD *)(a1 + 568) = v11;
    v2[v9] = 0;
    if ( v8 < v12 )
    {
      v13 = v12;
      v12 = v8;
      memmove((void *)(v8 + *(_QWORD *)(a1 + 560) + 1), (const void *)(v8 + *(_QWORD *)(a1 + 560)), v13 - v8);
    }
    goto LABEL_13;
  }
  if ( strncmp(v2, v5, v4 - v2 - 1) )
    return set_qerrno(1604);
  if ( v6[1] == 126 )
  {
    v7 = v6 + 2;
    goto LABEL_26;
  }
  v7 = v6 + 1;
  v8 = v7 - v2;
  if ( !strcmp(v7, v5) )
    goto LABEL_8;
  if ( (unsigned __int8)sub_5E1D80(*(_QWORD *)(a1 + 248), v5) )
    goto LABEL_33;
LABEL_28:
  v15 = *(const char **)(*(_QWORD *)(a1 + 152) + 72LL);
  v16 = strstr(v15, v7);
  if ( v16 && v15 < v16 - 2 && *(v16 - 1) == 58 && *(v16 - 2) == 58 && *v7 != 58 )
  {
LABEL_33:
    v2 = *(char **)(a1 + 560);
    goto LABEL_8;
  }
  return set_qerrno(1604);
}
