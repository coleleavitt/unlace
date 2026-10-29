__int64 __fastcall sub_B57450(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ecx

  if ( (*(_BYTE *)(a1 + 48) & 4) == 0 )
    return 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 40LL);
  if ( v2 )
  {
    v3 = 1;
    do
    {
      v2 = *(_QWORD *)(v2 + 40);
      ++v3;
    }
    while ( v2 );
  }
  return a1 + 56;
}

