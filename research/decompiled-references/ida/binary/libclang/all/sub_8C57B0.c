unsigned __int64 __fastcall sub_8C57B0(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(sub_B0E910(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)) + 128);
  if ( result )
  {
    if ( (*(_BYTE *)(result + 10) & 0x20) == 0 )
      return 0;
    v2 = *(_QWORD *)(result + 128);
    result = 0;
    if ( (unsigned __int64)v2 > 7 )
    {
      result = v2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v2 & 4) != 0 && !*(_DWORD *)(result + 8) )
        return 0;
      if ( ((v2 >> 2) & 1) != 0 )
        return **(_QWORD **)result;
    }
  }
  return result;
}

