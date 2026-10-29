__int64 __fastcall sub_695310(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1 + 8;
  v4 = *a2;
  v5 = *((_DWORD *)a2 + 2);
  if ( !v2 )
    return v3;
  v6 = v3;
  do
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v2 + 32);
      if ( v7 < v4 )
      {
        v2 = *(_QWORD *)(v2 + 24);
        goto LABEL_7;
      }
      if ( v4 == v7 && v5 > *(_DWORD *)(v2 + 40) )
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
  if ( v3 == v6 )
    return v3;
  v8 = *(_QWORD *)(v6 + 32);
  if ( v4 < v8 )
    return v3;
  if ( v8 != v4 )
    return v6;
  if ( *(_DWORD *)(v6 + 40) <= v5 )
    return v6;
  return v3;
}
