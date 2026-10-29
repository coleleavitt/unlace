__int64 __fastcall sub_D00650(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // eax
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // eax

  v3 = *(_DWORD *)(a1 + 1256);
  if ( a2 == 13 )
  {
    if ( *(_DWORD *)(a1 + 1252) != v3 )
      return 1;
    *(_QWORD *)(a1 + 1240) = *a3;
    v7 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
    v8 = *(_DWORD *)(v7 + 24);
    if ( !v8 || v8 == 2 )
    {
      if ( *(_QWORD *)(v7 + 32) )
        return 1;
    }
    else if ( v8 == 3 || *(_QWORD *)(v7 + 40) || *(_QWORD *)v7 )
    {
      return 1;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 1252) != v3 )
      return 1;
    *(_QWORD *)(a1 + 1240) = *a3;
    v5 = sub_E21760(*(_QWORD *)(a1 + 560), 64);
    v6 = *(_DWORD *)(v5 + 24);
    if ( !v6 || v6 == 2 )
    {
      if ( *(_QWORD *)(v5 + 32) )
        return 1;
    }
    else if ( v6 == 3 || *(_QWORD *)(v5 + 40) || *(_QWORD *)v5 )
    {
      return 1;
    }
    if ( *(_QWORD *)(v5 + 48) )
      return 1;
  }
  v9 = sub_E206C0(*(_QWORD *)(a1 + 784));
  sub_E33B30(a1 + 384, v9, 2526, 0);
  return 0;
}
