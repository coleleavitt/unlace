__int64 __fastcall sub_5CD880(__int64 a1, __int64 a2)
{
  bool v4; // al
  __int64 v5; // rsi
  __int64 i; // rdi
  char v7; // al

  if ( (unsigned int)(*(_DWORD *)(a1 + 208) - 1) <= 2 )
    return set_qerrno(62, a2);
  v4 = sub_5CD7B0(a1, *(_QWORD *)(a1 + 112));
  v5 = *(_QWORD *)(a1 + 112);
  if ( v4 )
  {
    if ( *(_BYTE *)(v5 + 186) > 0x3Fu )
    {
      return set_qerrno(71, v5);
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 136) + 72LL) = 1;
      return 0;
    }
  }
  else
  {
    for ( i = *(_QWORD *)(a1 + 112); ; i = *(_QWORD *)(i + 48) )
    {
      v7 = *(_BYTE *)(i + 186) & 0xF;
      if ( v7 != 10 && v7 != 11 && v7 != 12 )
        break;
    }
    if ( (*(_BYTE *)(a1 + 730) & 2) == 0 )
    {
      sub_5C5E90((void **)i);
      v5 = *(_QWORD *)(a1 + 112);
    }
    return (unsigned int)(unsigned __int8)sub_5C5B40(*(_QWORD *)(a1 + 136), v5, 1) - 1;
  }
}

