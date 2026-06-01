__int64 __fastcall sub_54CEF0(__int64 *a1, unsigned __int64 *a2, unsigned __int8 a3, unsigned int a4)
{
  unsigned __int64 v5; // rsi
  __int64 v8; // rbx
  __int16 v9; // ax
  char v11; // r15
  char v12; // al
  __int16 v13; // dx

  v5 = *a2;
  if ( !(_BYTE)v5 )
    return 4294967291LL;
  if ( a3 > 0xFu )
    return 4294967292LL;
  if ( v5 <= 0xFF || (v8 = sub_5340D0(*(_QWORD *)(*a1 + 1824), v5)) == 0 || get_tinfo_property(*a2, 288) )
  {
    v8 = sub_54ABE0(*a1, a2, 0);
    v9 = *(_WORD *)(v8 + 68);
    if ( *(_QWORD *)(v8 + 32) && (v9 & 0x1000) != 0 )
      goto LABEL_11;
    v11 = 1;
  }
  else
  {
    v9 = *(_WORD *)(v8 + 68);
    if ( (v9 & 0x1000) != 0 )
    {
      if ( *(_QWORD *)(v8 + 32) )
        return 4294967264LL;
      v8 = sub_547510(a1, a2, v8);
      v9 = *(_WORD *)(v8 + 68);
      if ( *(_QWORD *)(v8 + 32) )
      {
        if ( (v9 & 0x1000) != 0 )
          return 4294967264LL;
      }
    }
    v11 = 0;
  }
  if ( (~(_BYTE)v9 & 0x70) != 0 && !sub_53CE30(v8, *a1, *(_BYTE *)a2, 1) )
  {
    if ( !v11 )
      return 4294967291LL;
LABEL_11:
    if ( !under_debugger )
      interr(3046);
    BUG();
  }
  v12 = *(_BYTE *)(v8 + 70);
  *(_BYTE *)(v8 + 71) = a3;
  if ( (v12 & 0x2F) != 0xD )
  {
    if ( (a4 & 1) != 0 || !*(_QWORD *)(v8 + 32) && ((*(_BYTE *)(v8 + 69) & 0x40) == 0 || *(_QWORD *)(v8 + 16) == -1) )
      return 0;
    return sub_54C810(v8, *(void ***)(*a1 + 1672), a2, 0);
  }
  if ( *(_QWORD *)(v8 + 32) )
  {
    if ( (v13 = *(_WORD *)(v8 + 68), (v13 & 0x200) != 0) && (v13 & 0x40) == 0 || (v12 & 0xFu) <= 0xC )
    {
      if ( (a4 & 1) != 0 )
        return 0;
      return sub_54C810(v8, *(void ***)(*a1 + 1672), a2, 0);
    }
  }
  return set_tinfo_property4(a2, 7, a3, 0, 0, a4);
}
