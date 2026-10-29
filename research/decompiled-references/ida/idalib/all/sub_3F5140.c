__int64 __fastcall sub_3F5140(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6, char **a7)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rcx

  v7 = *(_QWORD **)(a1 + 64);
  v8 = &v7[*(_QWORD *)(a1 + 72)];
  if ( v7 == v8 )
    return 0;
  while ( *v7 != a2 )
  {
    if ( v8 == ++v7 )
      return 0;
  }
  if ( v8 == v7 || a3 != 72 )
    return 0;
  sub_35A790(a7);
  return 1;
}
