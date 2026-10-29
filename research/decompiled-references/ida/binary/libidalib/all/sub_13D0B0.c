__int64 sub_13D0B0()
{
  const char *v0; // rcx
  __int64 v2; // rdi
  __int64 v3; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v4[3]; // [rsp+10h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_161C80(0, &v3, v4) )
  {
    if ( dword_245118 >= 0
      && (unsigned int)sub_92580(0, (__int64)"HIDECANCEL\nDo you want to undefine the selected items?") != 1 )
    {
      return 0;
    }
    v2 = v3;
    del_items();
    sub_15E150(v2, 0);
    goto LABEL_10;
  }
  if ( (WORD4(xmmword_2528B0) & 0x600) != 0 )
  {
    if ( !dword_245118 )
    {
      v0 = "data item";
      if ( (WORD4(xmmword_2528B0) & 0x600) == 0x600 )
      {
        v0 = "instruction(s)";
        if ( (DWORD2(xmmword_2528B0) & 0x10000000) != 0 )
          v0 = "function";
      }
      if ( (unsigned int)sub_92580(0, (__int64)"HIDECANCEL\nDo you want to undefine the current %s?", v0) != 1 )
        return 0;
    }
    v3 = xmmword_2528A0;
    del_items();
LABEL_10:
    set_notcode();
  }
  return 1;
}

