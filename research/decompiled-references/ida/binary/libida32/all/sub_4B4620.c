__int64 __fastcall sub_4B4620(__int64 a1, char a2)
{
  unsigned int v2; // eax
  __int64 name; // rdx
  __int64 result; // rax

  clr_abits(a1, 0x4000);
  v2 = ea2node((unsigned int)a1);
  name = netnode_get_name(v2, 0);
  result = 0;
  if ( name <= 0 )
  {
    if ( a2 )
      sub_3CA7E0(*(_QWORD **)(qword_2CA1698 + 1480), a1, 0x4000);
    return 1;
  }
  return result;
}

