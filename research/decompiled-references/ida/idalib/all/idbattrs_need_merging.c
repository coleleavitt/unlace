__int64 __fastcall idbattrs_need_merging(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi

  if ( !a4 )
    return 1;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a4);
  if ( !(_BYTE)result )
  {
    if ( !a3 )
      return result;
    v6 = a2 + 48;
    v7 = 0;
    while ( (*(_BYTE *)(v6 + 8) & 0xF) != 0 && !*(_QWORD *)v6 )
    {
      ++v7;
      v6 += 64;
      if ( a3 == v7 )
        return result;
    }
  }
  return 1;
}
