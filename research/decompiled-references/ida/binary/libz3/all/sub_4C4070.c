__int64 __fastcall sub_4C4070(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // eax
  _DWORD *v9; // rdx

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 8) + 56LL;
  if ( !*a2 )
    return 1;
  v4 = *(unsigned int *)(v2 - 4);
  if ( !(_DWORD)v4 )
    return 1;
  v5 = 8 * v4;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v2 + v6);
    v8 = sub_1625010(v3);
    v9 = *(_DWORD **)(v7 + 24);
    if ( v9 )
    {
      if ( v8 == *v9 && v9[1] == 2 )
        break;
    }
    v6 += 8;
    if ( v6 == v5 )
      return 1;
    v2 = *a2;
  }
  return 0;
}

