__int64 __fastcall sub_3FDDB0(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx

  if ( *(__int64 *)(a1 + 32) <= 0 )
    return 1;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 24) + 32 * v7;
    if ( *(_BYTE *)(v9 + 24) )
    {
      if ( *(_QWORD *)(v9 + 16) && sub_3FDCC0(a1, a2, v9, v8, a6, a7, a3) )
        break;
    }
    v7 = ++v8;
    if ( v8 >= *(_QWORD *)(a1 + 32) )
      return 1;
  }
  return 0;
}
