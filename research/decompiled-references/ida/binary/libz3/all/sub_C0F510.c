char __fastcall sub_C0F510(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  char v5; // r13
  char v6; // dl
  char result; // al
  __int16 v8; // dx
  __int16 v9; // ax
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int *v12; // rdx
  unsigned int v13; // eax
  bool v14; // cf
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax

  if ( a2 == a3 )
    return 0;
  v3 = a2;
  v4 = a3;
  while ( 1 )
  {
    v5 = sub_15D26C0(*a1, v3);
    v6 = sub_15D26C0(*a1, v4);
    result = v6 & (v5 ^ 1);
    if ( result )
      return result;
    if ( v6 != 1 && v5 )
      return 0;
    v8 = *(_WORD *)(v3 + 4);
    v9 = *(_WORD *)(v4 + 4);
    if ( v8 )
    {
      if ( v8 == 2 )
      {
        v10 = *(_DWORD *)(v3 + 40);
        if ( v9 )
        {
          if ( v9 == 2 )
            return *(_DWORD *)(v4 + 40) < v10;
          return v10 > 1;
        }
        if ( *(unsigned __int16 *)(v4 + 28) < v10 )
          return 1;
      }
      else
      {
        if ( !v9 )
          return !*(_WORD *)(v4 + 28);
        if ( v9 == 2 )
        {
          v10 = 1;
          return *(_DWORD *)(v4 + 40) < v10;
        }
      }
      return 0;
    }
    v10 = *(unsigned __int16 *)(v3 + 28);
    if ( v9 )
      break;
    v11 = *(unsigned __int16 *)(v4 + 28);
    if ( v11 < v10 )
      return 1;
    if ( v10 != v11 )
      return 0;
    v12 = *(unsigned int **)(v4 + 16);
    v13 = **(_DWORD **)(v3 + 16);
    v14 = *v12 < v13;
    if ( *v12 != v13 )
      return v14;
    v15 = *(unsigned int *)(v4 + 24);
    v14 = (unsigned int)v15 < *(_DWORD *)(v3 + 24);
    if ( (_DWORD)v15 != *(_DWORD *)(v3 + 24) )
      return v14;
    if ( !(_DWORD)v15 )
    {
LABEL_30:
      sub_1872CE0("");
      sub_1873130(114, 659);
    }
    v16 = 8 * v15 + 32;
    v17 = 32;
    while ( *(_QWORD *)(v4 + v17) == *(_QWORD *)(v3 + v17) )
    {
      v17 += 8;
      if ( v17 == v16 )
        goto LABEL_30;
    }
    v4 = *(_QWORD *)(v4 + v17);
    v3 = *(_QWORD *)(v3 + v17);
  }
  if ( v9 == 2 )
    return *(_DWORD *)(v4 + 40) < v10;
  return v10 > 1;
}

