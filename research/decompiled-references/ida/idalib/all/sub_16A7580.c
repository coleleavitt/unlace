__int64 __fastcall sub_16A7580(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r10

  if ( !*(_DWORD *)a3 || !*(_DWORD *)(a3 + 4) || (result = 0, *(_QWORD *)(a3 + 8)) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 16LL);
    if ( (*(_QWORD *)v5 & 0xFFFFFFFE) == 0 )
      return (unsigned int)sub_16A30B0(a1, a2, 1, 0, 0) ^ 1;
    if ( *(_WORD *)(v5 + 16) != 9020 )
      return (unsigned int)sub_16A30B0(a1, a2, 1, 0, 0) ^ 1;
    result = 0;
    if ( *(_WORD *)(v5 + (unsigned int)*(_QWORD *)v5 + 14) != 15907 )
      return (unsigned int)sub_16A30B0(a1, a2, 1, 0, 0) ^ 1;
  }
  return result;
}
