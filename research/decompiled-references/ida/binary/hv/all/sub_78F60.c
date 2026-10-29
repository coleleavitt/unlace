__int64 __fastcall sub_78F60(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 850) )
    return 1;
  if ( *(_DWORD *)(a1 + 616) <= 6u )
    return sub_91D10(a1, *(_QWORD *)(a1 + 640));
  if ( a2 != sub_92670(*(_QWORD *)(a1 + 640), 0, 1) )
  {
    if ( !byte_1671A1 )
      sub_96F80(3327);
    BUG();
  }
  return 1;
}

