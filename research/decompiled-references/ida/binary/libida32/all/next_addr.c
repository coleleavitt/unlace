__int64 __fastcall next_addr(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r12d
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_2CA1698 + 1480);
  if ( (unsigned __int8)sub_3E9640(v1) )
  {
    v2 = sub_3E9EF0(v1, a1);
    result = a1 + 1;
    if ( v2 == (_DWORD)result )
      return result;
  }
  else
  {
    v2 = -1;
  }
  result = rangeset_t_next_addr(v1 + 1032, a1);
  if ( (unsigned int)result > v2 )
    return v2;
  return result;
}

