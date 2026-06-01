__int64 __fastcall sub_785B40(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  int v3; // eax

  if ( (*(_BYTE *)(a1 + 48) & 4) == 0 )
    return 0;
  v1 = a1 + 56;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 40LL);
  if ( !v2 )
    return v1;
  v3 = 1;
  do
  {
    v2 = *(_QWORD *)(v2 + 40);
    ++v3;
  }
  while ( v2 );
  return a1 + 56;
}

