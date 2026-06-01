__int64 __fastcall sub_16A7500(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned __int8 a7)
{
  __int64 result; // rax
  __int64 v8; // rbx

  if ( !*(_DWORD *)a5 || !*(_DWORD *)(a5 + 4) || (result = 1, *(_QWORD *)(a5 + 8)) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
    if ( (*(_QWORD *)v8 & 0xFFFFFFFE) == 0 )
      return sub_16A30B0(a1, a2, 0, a6, a7);
    if ( *(_WORD *)(v8 + 16) != 9020 )
      return sub_16A30B0(a1, a2, 0, a6, a7);
    result = 1;
    if ( *(_WORD *)(v8 + (unsigned int)*(_QWORD *)v8 + 14) != 15907 )
      return sub_16A30B0(a1, a2, 0, a6, a7);
  }
  return result;
}
