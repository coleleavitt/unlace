__int64 __fastcall ZSTD_frameHeaderSize(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 v3; // di

  result = -72;
  if ( a2 > 4 )
  {
    v3 = *(_BYTE *)(a1 + 4);
    return qword_A9980[v3 & 3]
         + qword_A99A0[v3 >> 6]
         + ((v3 & 0x20) == 0)
         + 5
         + ((unsigned __int8)(v3 >> 5) & (v3 >> 6 == 0));
  }
  return result;
}

