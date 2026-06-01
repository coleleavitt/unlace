__int64 __fastcall sub_3BE050(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  __int64 result; // rax
  unsigned int v8; // eax

  v5 = a3;
  if ( (sub_3B9AA0(a1, a3, 4) & 0x600) == 0x200 )
    v5 = sub_3BD5D0(a1, v5);
  if ( (sub_3B9AA0(a1, v5, 4) & 0x800) == 0 )
    return -1;
  if ( a4 )
  {
    v8 = ea2node(v5);
    result = netnode_qsupstr(v8, a2, 1, 83);
    if ( result <= 0 )
      return result;
  }
  else
  {
    v6 = ea2node(v5);
    result = netnode_qsupstr(v6, a2, 0, 83);
    if ( result <= 0 )
      return result;
  }
  if ( a2 )
    return sub_3DA470(a2);
  return result;
}

