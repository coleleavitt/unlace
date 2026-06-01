bool __fastcall sub_B50C90(__int64 a1)
{
  bool result; // al
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( (*(_BYTE *)(a1 + 80) & 0x7Fu) - 35 <= 3 )
  {
    v3 = *(_QWORD *)(sub_B68470(a1 + 72) + 16);
    v4 = (v3 & 4) != 0 ? *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL) : v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v4 )
    {
      if ( v4 != 64 )
      {
        v5 = *(_QWORD *)(v4 + 64);
        if ( v5 )
        {
          if ( (*(_BYTE *)(v5 + 10) & 0x20) != 0
            && (*(_DWORD *)(a1 + 40) & 7) == 6
            && *(_DWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL) == 42
            && (*(_BYTE *)(a1 + 84) & 3) != 2 )
          {
            return 1;
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 83) & 2) != 0 && (*(_BYTE *)(a1 + 84) & 3) != 2 )
    return 1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x26 && (*(_BYTE *)(a1 + 87) & 0x20) != 0 )
    return *(_QWORD *)(a1 + 184) != 0;
  v2 = *(_QWORD *)(a1 + 152);
  result = 0;
  if ( (v2 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && ((v2 & 6) != 0 || (*(_BYTE *)((*(_QWORD *)(a1 + 152) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 34 > 5) )
  {
    return (*(_BYTE *)(a1 + 84) & 3) == 1;
  }
  return result;
}

