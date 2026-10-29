__int64 __fastcall sub_606090(unsigned int a1, void *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // ebp

  result = a1;
  if ( a1 )
  {
    result = netnode_altval(a3, a1, 65);
    if ( (_DWORD)result )
    {
      v4 = node2ea((unsigned int)result);
      show_auto(v4, 0);
      if ( (*(_BYTE *)(*(_QWORD *)(qword_2CA1698 + 1480) + 2624LL) & 4) != 0 )
        return set_name(v4, a2);
      else
        return append_cmt();
    }
  }
  return result;
}

