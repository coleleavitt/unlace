__int64 __fastcall sub_3FE900(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  unsigned int v4; // ecx
  unsigned int v5; // edi
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned int v8; // eax

  v2 = *(_QWORD *)(a1 + 72);
  v3 = a1 + 64;
  v4 = *a2;
  v5 = a2[1];
  if ( !v2 )
    return v3;
  v6 = v3;
  do
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v2 + 32);
      if ( v7 < v4 || v4 >= v7 && *(_DWORD *)(v2 + 36) < v5 )
        break;
      v6 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        goto LABEL_8;
    }
    v2 = *(_QWORD *)(v2 + 24);
  }
  while ( v2 );
LABEL_8:
  if ( v3 == v6 )
    return v3;
  v8 = *(_DWORD *)(v6 + 32);
  if ( v4 < v8 )
    return v3;
  if ( v8 >= v4 )
  {
    if ( v5 >= *(_DWORD *)(v6 + 36) )
      return v6;
    return v3;
  }
  return v6;
}

