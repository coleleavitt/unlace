__int64 __fastcall sub_A23250(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // esi

  result = (*(_BYTE *)(a2 + 8) >> 1) & 7;
  if ( (_BYTE)result == 2 )
  {
    if ( *(_QWORD *)a2 )
      return sub_A1FFA0(a1, a3, *(_QWORD *)a2);
  }
  else if ( (_BYTE)result == 4 )
  {
    if ( (unsigned __int8)(a3 - 97) <= 0x19u )
    {
      v4 = (char)a3 - 97;
    }
    else if ( (unsigned __int8)(a3 - 65) <= 0x19u )
    {
      v4 = (char)a3 - 39;
    }
    else
    {
      v4 = (char)a3 + 4;
      if ( (unsigned __int8)(a3 - 48) > 9u )
        v4 = ((_BYTE)a3 != 46) + 62;
    }
    return sub_A20270(a1, v4);
  }
  else if ( *(_QWORD *)a2 )
  {
    return sub_A1FEC0(a1, a3, *(_QWORD *)a2);
  }
  return result;
}
