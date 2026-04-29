__int64 __fastcall sub_3D3360(_QWORD *a1, int a2, int a3, char a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 *v10; // rsi
  __int64 v11; // rdx

  if ( a2 < 0 )
    return 0;
  if ( (unsigned __int64)a2 >= a1[15] )
    return 0;
  if ( a3 < 0 )
    return 0;
  v7 = (_QWORD *)(a1[14] + 24LL * a2);
  if ( (unsigned __int64)a3 >= v7[1] )
    return 0;
  v8 = *(_QWORD *)(*v7 + 8LL * a3);
  if ( !v8 )
    return 0;
  v9 = (__int64 *)a1[11];
  v10 = &v9[a1[12]];
  if ( v10 == v9 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *v9;
      if ( *(_BYTE *)(*v9 + 48) == a4
        && *(_DWORD *)(v11 + 40) == a2
        && *(_QWORD *)(v11 + 24) == *(_QWORD *)(v8 + 24)
        && *(_DWORD *)(v11 + 32) == *(_DWORD *)v8 )
      {
        break;
      }
      if ( v10 == ++v9 )
        return 0;
    }
    if ( *(_DWORD *)(v11 + 36) <= a3 )
      break;
    if ( v10 == ++v9 )
      return 0;
  }
  return v11;
}
