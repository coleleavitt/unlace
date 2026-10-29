__int64 __fastcall sub_1A0B790(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rax
  int v5; // edx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = v1 + 40LL * *(unsigned int *)(a1 + 16);
  if ( v1 == v2 )
    return 0;
  v3 = *(_DWORD *)(v2 - 40);
  if ( v3 != 4 )
  {
    if ( v3 != 5 )
    {
      v4 = v2 - 40;
      do
      {
        if ( v4 == v1 )
          break;
        v5 = *(_DWORD *)(v4 - 40);
        if ( v5 == 4 )
          return 1;
        v4 -= 40;
      }
      while ( v5 != 5 );
    }
    return 0;
  }
  return 1;
}
