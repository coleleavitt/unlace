char __fastcall sub_545B10(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  _QWORD *v8; // rcx
  bool v9; // cc
  _QWORD *v10; // rdx

  v3 = *(_QWORD **)(a3 + 8);
  v4 = *(_QWORD **)(a2 + 8);
  v5 = 8LL * *(_QWORD *)(a3 + 16);
  v6 = 8LL * *(_QWORD *)(a2 + 16);
  v7 = &v4[(unsigned __int64)v5 / 8];
  v8 = &v4[(unsigned __int64)v6 / 8];
  v9 = v5 < v6;
  v10 = v3;
  if ( !v9 )
    v7 = v8;
  if ( v4 == v7 )
    return v10 != &v3[(unsigned __int64)v5 / 8];
  while ( 1 )
  {
    if ( *v4 < *v10 )
      return 1;
    if ( *v10 < *v4 )
      break;
    ++v4;
    ++v10;
    if ( v7 == v4 )
      return v10 != &v3[(unsigned __int64)v5 / 8];
  }
  return 0;
}
