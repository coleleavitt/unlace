__int64 sub_279560()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  unsigned int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rcx

  v0 = *(_QWORD *)(sub_277DF0() + 112);
  if ( !v0 )
    return 7;
  v1 = *(_QWORD *)(v0 + 104);
  v2 = 7;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v0 + 96);
    v4 = v3 + 32 * v1;
    if ( v3 != v4 )
    {
      while ( 1 )
      {
        v2 = *(_DWORD *)(v3 + 24);
        if ( v2 == 3 )
          break;
        v3 += 32;
        if ( v4 == v3 )
          return 7;
      }
    }
  }
  return v2;
}
