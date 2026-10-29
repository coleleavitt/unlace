void __fastcall sub_6E9070(__int64 a1, unsigned __int64 a2)
{
  char v2; // al

  if ( a2 )
  {
    if ( *(char *)(a2 + 28) >= 0 )
    {
      v2 = *(_BYTE *)(a2 + 73) >> 5;
      if ( (((v2 + 6) & 7u) <= 1 || !v2) && (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 <= 2 )
        sub_6E8F60(*(_QWORD **)(a1 + 16), a2);
    }
  }
}

