__int64 __fastcall sub_3C3140(_QWORD *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax

  v5 = a3;
  if ( (sub_3BE900(a1, a3, 4) & 0x600) == 0x200 )
    v5 = sub_3C2650(a1, v5);
  if ( (sub_3BE900(a1, v5, 4) & 0x800) == 0 )
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
    return sub_3E0330(a2);
  return result;
}
