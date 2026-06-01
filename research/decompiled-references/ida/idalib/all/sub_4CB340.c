__int64 __fastcall sub_4CB340(void *a1, char a2)
{
  __int64 v2; // rax
  __int64 name; // rdx
  __int64 result; // rax

  clr_abits(a1, 0x4000);
  v2 = ea2node(a1);
  name = netnode_get_name(v2, 0);
  result = 0;
  if ( name <= 0 )
  {
    if ( a2 )
      sub_3D00D0(*(_QWORD **)(qword_2CCB598 + 1672), a1, 0x4000);
    return 1;
  }
  return result;
}
