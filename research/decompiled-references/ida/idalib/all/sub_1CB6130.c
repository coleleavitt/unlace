__int64 __fastcall sub_1CB6130(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
    return *(unsigned int *)(a2 + 24);
  v3 = *(unsigned int *)(a1 + 11320);
  if ( !(_DWORD)v3 )
    return *(unsigned int *)(a2 + 24);
  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v4 - 34) > 5 )
  {
    if ( (unsigned int)(v4 - 60) > 1 && (unsigned int)(v4 - 41) > 1 )
      return *(unsigned int *)(a2 + 24);
  }
  else
  {
    if ( !(unsigned __int8)sub_B77A80(a2) )
      return *(unsigned int *)(a2 + 24);
    v3 = *(unsigned int *)(a1 + 11320);
  }
  v5 = *(_QWORD *)(a1 + 11312);
  v6 = v3 << 6;
  v7 = v5 + v6;
  if ( v5 == v5 + v6 )
    return *(unsigned int *)(a2 + 24);
  while ( !(unsigned __int8)sub_1DBA990(v5) || !*(_DWORD *)(v5 + 8) )
  {
    v5 += 64;
    if ( v7 == v5 )
      return *(unsigned int *)(a2 + 24);
  }
  return *(unsigned int *)(v5 + 8);
}
