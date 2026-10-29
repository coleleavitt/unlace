__int64 __fastcall sub_5E9670(__int64 a1)
{
  bool v3; // al
  __int64 v4; // rsi
  __int64 i; // rdi
  char v6; // al

  if ( (unsigned int)(*(_DWORD *)(a1 + 216) - 1) <= 2 )
    return set_qerrno(62);
  v3 = sub_5E95A0(a1, *(_QWORD *)(a1 + 120));
  v4 = *(_QWORD *)(a1 + 120);
  if ( v3 )
  {
    if ( *(_BYTE *)(v4 + 186) > 0x3Fu )
    {
      return set_qerrno(71);
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 144) + 72LL) = 1;
      return 0;
    }
  }
  else
  {
    for ( i = *(_QWORD *)(a1 + 120); ; i = *(_QWORD *)(i + 48) )
    {
      v6 = *(_BYTE *)(i + 186) & 0xF;
      if ( v6 != 10 && v6 != 11 && v6 != 12 )
        break;
    }
    if ( (*(_BYTE *)(a1 + 746) & 2) == 0 )
    {
      sub_5E1B90((void **)i);
      v4 = *(_QWORD *)(a1 + 120);
    }
    return (unsigned int)(unsigned __int8)sub_5E1810(*(_QWORD *)(a1 + 144), v4, 1) - 1;
  }
}
