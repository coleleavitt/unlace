bool __fastcall sub_16B5970(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  bool result; // al
  unsigned __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // ecx
  int v7; // edx

  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v2 + 16) == 13 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v5 = *(_QWORD *)v4;
    if ( *(_BYTE *)(*(_QWORD *)v4 + 16LL) == 13 )
    {
      v6 = (*(_WORD *)(v2 + 18) >> 3) & 0x1FF;
      v7 = (*(_WORD *)(v5 + 18) >> 3) & 0x1FF;
      result = v7 == 448 && v6 == 449;
      if ( !result )
      {
        result = v7 == 437 && v6 == 438;
        if ( !result )
        {
          result = v7 == 438 && v6 == 437;
          if ( !result )
            return v7 == 449 && v6 == 448;
        }
      }
    }
  }
  return result;
}
