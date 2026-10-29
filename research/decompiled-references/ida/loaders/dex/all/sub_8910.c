char __fastcall sub_8910(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  char result; // al
  unsigned int str_type; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx

  v4 = (unsigned int)(a3 - 1);
  if ( v4 >= *(_QWORD *)(a1 + 56) )
  {
    sub_59F0();
    return sub_89A0();
  }
  else
  {
    v6 = a4;
    v7 = netnode_altval(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v4), a4, 595);
    result = 0;
    if ( v7 != -1 )
    {
      str_type = get_str_type(v7);
      v11 = str_type;
      if ( str_type == -1 )
        v11 = (unsigned int)getinf(52, v6, v10, 0xFFFFFFFFLL);
      return get_strlit_contents(a2, v7, -1, v11, 0, 0) != -1;
    }
  }
  return result;
}

