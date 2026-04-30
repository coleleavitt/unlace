__int64 __fastcall sub_29DC10(__int64 a1, int *a2)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // r8
  int v5; // esi
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *a2;
  v4 = a1 + 8;
  v5 = a2[1];
  if ( !v2 )
    return v4;
  v6 = a1 + 8;
  do
  {
    while ( 1 )
    {
      if ( v3 > *(_DWORD *)(v2 + 32) )
      {
        v2 = *(_QWORD *)(v2 + 24);
        goto LABEL_7;
      }
      if ( v3 == *(_DWORD *)(v2 + 32) && v5 > *(_DWORD *)(v2 + 36) )
        break;
      v6 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        goto LABEL_8;
    }
    v2 = *(_QWORD *)(v2 + 24);
LABEL_7:
    ;
  }
  while ( v2 );
LABEL_8:
  if ( v4 == v6 || *(_DWORD *)(v6 + 32) > v3 )
    return v4;
  if ( *(_DWORD *)(v6 + 32) != v3 )
    return v6;
  if ( *(_DWORD *)(v6 + 36) <= v5 )
    return v6;
  return v4;
}
