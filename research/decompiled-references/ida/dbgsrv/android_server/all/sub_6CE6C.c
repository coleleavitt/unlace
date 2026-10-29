/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CE6C
// Address: 0x000000000006CE6C

//----- (000000000006CE6C) ----------------------------------------------------
unsigned __int8 *__fastcall sub_6CE6C(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 a4)
{
  unsigned __int8 *v4; // x21
  int v7; // w23
  int utf8_char; // w0
  int v9; // w0
  unsigned __int8 *v12[2]; // [xsp+0h] [xbp-40h] BYREF

  v4 = a3;
  v7 = a4;
  v12[1] = *(unsigned __int8 **)(_ReadStatusReg(TPIDR_EL0) + 40);
  for ( v12[0] = a3; ; v4 = v12[0] )
  {
    utf8_char = get_utf8_char(v12);
    if ( utf8_char == -1 )
      utf8_char = *v12[0]++;
    if ( !utf8_char )
      break;
    if ( utf8_char == *(unsigned __int8 *)(a1 + 184) )
    {
      v4 = v12[0];
      v9 = get_utf8_char(v12);
      if ( v9 == -1 )
      {
        if ( !*v12[0]++ )
          break;
      }
      else if ( !v9 )
      {
        break;
      }
    }
    else if ( utf8_char == v7 )
    {
      sub_6CCE4((_QWORD *)a1, a2, (unsigned __int64)v12[0], *(_DWORD *)(a1 + 124));
      return v12[0];
    }
  }
  sub_6CCE4((_QWORD *)a1, a2, (unsigned __int64)v4, *(_DWORD *)(a1 + 176));
  return nullptr;
}
