__int64 __fastcall sub_561D70(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, unsigned int a7)
{
  unsigned int v11; // ebp

  if ( a2 )
  {
    if ( *(_QWORD *)(a4 + 24) )
    {
      if ( (unsigned __int8)sub_6A99B0(a2, *(_QWORD *)(a4 + 16)) )
        goto LABEL_4;
    }
    else if ( (unsigned __int8)sub_6A99B0(a2, haystack) )
    {
      goto LABEL_4;
    }
    return 0;
  }
LABEL_4:
  if ( a3 && !(unsigned __int8)sub_6A9D30(a3, a4 + 40) || !(unsigned __int8)serialize_tinfo(a1, a2, a3, a4 + 64, a7) )
    return 0;
  if ( a6 )
    sub_581110(a4 + 72, a1);
  v11 = sub_535F20(a1, *(_BYTE *)(a4 + 136), *(_DWORD *)(a4 + 132), nullptr, 1);
  if ( !(_BYTE)v11 )
    return 0;
  if ( (a7 & 0x800) != 0 && (*(_BYTE *)(a4 + 133) & 2) == 0 )
    sub_6B3440(a1, *(_QWORD *)a4 - a5);
  return v11;
}
