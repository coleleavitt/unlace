char __fastcall sub_125B90(unsigned __int8 *a1, __int64 a2, unsigned int *a3, unsigned int a4)
{
  unsigned __int8 *i; // r13
  unsigned int *j; // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  int v9; // eax
  unsigned int *v10; // r9
  int v11; // eax
  int v12; // edx
  int v13; // eax
  char result; // al
  unsigned int *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r12
  unsigned __int8 *v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  _DWORD *v25; // rax
  _DWORD *v26; // rax
  int v27; // [rsp+8h] [rbp-50h]

  for ( i = a1;
        (*(_DWORD *)i == 4 || *(_DWORD *)i == 67 && *((_DWORD *)i + 17) == *((_DWORD *)i + 9)) && i[32] == 4;
        i = *((unsigned __int8 **)i + 5) )
  {
    ;
  }
  for ( j = a3; (*j == 4 || *j == 67 && j[17] == j[9]) && *((_BYTE *)j + 32) == 4; j = *((unsigned int **)j + 5) )
    ;
  v7 = (__int64)(j + 8);
  v8 = (__int64)(j + 12);
  v27 = *j;
  v9 = sub_32EA00(*(unsigned int *)a1);
  v10 = a3;
  if ( v27 != v9 )
  {
    v8 = (__int64)(j + 8);
    v7 = (__int64)(j + 12);
  }
  if ( (a4 & 2) != 0 || (v11 = *(_DWORD *)i, v12 = *j, *(_DWORD *)i == *j) )
  {
    if ( *((_DWORD *)a1 + 17) == a3[17] )
    {
LABEL_17:
      v13 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 == 62 )
        return *((_QWORD *)i + 3) == *((_QWORD *)j + 3);
      goto LABEL_23;
    }
    if ( *(_DWORD *)i == 2 && *j == 2 && *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
      return 0;
  }
  else
  {
    if ( (a4 & 1) == 0 )
      return 0;
    if ( v11 == 64 )
    {
      if ( v12 != 63 || *((_DWORD *)i + 17) >= (signed int)j[17] )
        return 0;
    }
    else if ( v12 != 64 || v11 != 63 || (signed int)j[17] >= *((_DWORD *)i + 17) )
    {
      return 0;
    }
    if ( *((_DWORD *)a1 + 17) == a3[17] )
      goto LABEL_17;
  }
  v13 = *(_DWORD *)a1;
  if ( (unsigned int)(*(_DWORD *)a1 - 65) <= 2 )
    return 0;
  if ( v13 == 62 )
    return *((_QWORD *)i + 3) == *((_QWORD *)j + 3);
LABEL_23:
  if ( (a4 & 4) != 0 )
  {
    if ( !sub_1255D0(a1 + 64, a2, (__int64)(a3 + 16), 0) )
      return 0;
    v13 = *(_DWORD *)a1;
    v10 = a3;
  }
  if ( v13 != 20 )
    goto LABEL_46;
  if ( *((_DWORD *)a1 + 17) != v10[17] && (a4 & 1) == 0 )
    return 0;
  if ( a1[48] != 2 )
  {
    if ( a1[32] == 2 )
    {
      v15 = (unsigned int *)(a1 + 48);
      v16 = (__int64)(a1 + 32);
      goto LABEL_30;
    }
LABEL_46:
    if ( !sub_1255D0(i + 32, a2, v8, a4) || !sub_1255D0(i + 48, a2, v7, a4) )
    {
      v19 = *(unsigned int *)i;
      if ( (unsigned int)v19 > 0x21 || (v20 = 0x306385000LL, !_bittest64(&v20, v19)) )
      {
        v23 = *j;
        if ( (_DWORD)v19 == (_DWORD)v23 )
          return 0;
        if ( (unsigned int)v23 > 0x21 )
          return 0;
        v24 = 0x306385000LL;
        if ( !_bittest64(&v24, v23) )
          return 0;
      }
      if ( !sub_1255D0(i + 32, a2, v7, a4) || !sub_1255D0(i + 48, a2, v8, a4) )
        return 0;
    }
    v21 = *(unsigned int *)i;
    if ( (_DWORD)v21 == 62 )
    {
      if ( (i[5] & 0x10) != 0 )
        return sub_1255D0(i + 64, a2, (__int64)(j + 16), a4);
    }
    else if ( (unsigned int)v21 <= 0x3B )
    {
      v22 = 0xCFFFC0000000003LL;
      if ( _bittest64(&v22, v21) )
        return sub_1255D0(i + 64, a2, (__int64)(j + 16), a4);
    }
    result = 1;
    if ( i[64] != 8 )
      return result;
    return sub_1255D0(i + 64, a2, (__int64)(j + 16), a4);
  }
  v15 = (unsigned int *)(a1 + 32);
  v16 = (__int64)(a1 + 48);
LABEL_30:
  v17 = (__int64)(v10 + 8);
  v18 = (unsigned __int8 *)(v10 + 12);
  if ( *((_BYTE *)v10 + 48) == 2 )
    goto LABEL_33;
  if ( *((_BYTE *)v10 + 32) != 2 )
    return 0;
  v17 = (__int64)(v10 + 12);
  v18 = (unsigned __int8 *)(v10 + 8);
LABEL_33:
  if ( !sub_1255D0(v18, a2, v16, 1) )
    return 0;
  if ( *(_BYTE *)v15 == 4 )
  {
    v26 = *((_DWORD **)v15 + 1);
    if ( *v26 == 10 )
      v15 = v26 + 8;
  }
  if ( *(_BYTE *)v17 == 4 )
  {
    v25 = *(_DWORD **)(v17 + 8);
    if ( *v25 == 10 )
      v17 = (__int64)(v25 + 8);
  }
  return sub_1255D0((unsigned __int8 *)v15, a2, v17, 1);
}
