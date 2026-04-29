__int64 __fastcall sub_6F000(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  int v4; // eax
  int dword; // eax
  int v7; // eax

  v2 = a1;
  if ( a2 == 4 )
  {
    dword = get_dword();
    if ( dword >= 0 || dword != -2 && (dword & 3) != 0 )
      return 0;
    v7 = get_dword();
    if ( v7 >= 0 || (v7 & 3) != 0 )
      return 0;
    v2 = a1 + 16;
  }
  v3 = 0;
  v4 = get_dword();
  if ( v4 < 0 )
    goto LABEL_11;
LABEL_3:
  if ( v3 > v4 )
  {
    do
    {
      if ( (unsigned int)get_dword() && (unsigned __int8)segtype() != 2 )
        break;
      get_dword();
      if ( (unsigned __int8)segtype() != 2
        || (v3 > 0 || a2 != 3)
        && ((get_flags_ex() & 0x1000) != 0
         || v3 > 0 && ((get_flags_ex() & 0x1000) != 0 || (get_flags_ex() & 0x1000) != 0)) )
      {
        break;
      }
      v2 += 12;
      ++v3;
      v4 = get_dword();
      if ( v4 >= 0 )
        goto LABEL_3;
LABEL_11:
      ;
    }
    while ( (v4 == -1 || a2 != 3) && (v4 == -2 || a2 != 4) );
  }
  return (unsigned int)v3;
}
