_BOOL8 __fastcall sub_2121F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 1256);
  if ( !(96LL * *(_QWORD *)(a1 + 1264)) )
    return 0;
  while ( (unsigned int)sub_32B790(v2, a2) )
  {
    v2 += 96;
    if ( v2 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
      return 0;
  }
  return v2 && (*(_BYTE *)(v2 + 88) & 2) != 0;
}
