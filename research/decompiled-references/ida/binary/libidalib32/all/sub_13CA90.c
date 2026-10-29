__int64 sub_13CA90()
{
  const char *v0; // rcx
  __int64 v2; // rdi
  unsigned int v3; // [rsp+0h] [rbp-18h] BYREF
  int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_161360(0, &v3, &v4) )
  {
    if ( dword_2440CC >= 0
      && (unsigned int)sub_924A0(0, (__int64)"HIDECANCEL\nDo you want to undefine the selected items?") != 1 )
    {
      return 0;
    }
    v2 = v3;
    del_items();
    sub_15D870(v2);
    goto LABEL_10;
  }
  if ( (qword_251710 & 0x600) != 0 )
  {
    if ( !dword_2440CC )
    {
      v0 = "data item";
      if ( (qword_251710 & 0x600) == 0x600 )
      {
        v0 = "instruction(s)";
        if ( (qword_251710 & 0x10000000) != 0 )
          v0 = "function";
      }
      if ( (unsigned int)sub_924A0(0, (__int64)"HIDECANCEL\nDo you want to undefine the current %s?", v0) != 1 )
        return 0;
    }
    v3 = qword_251700;
    del_items();
LABEL_10:
    set_notcode();
  }
  return 1;
}

