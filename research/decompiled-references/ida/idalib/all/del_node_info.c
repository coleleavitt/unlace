__int64 __fastcall del_node_info(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi

  v3 = sub_3BDD60(*(_QWORD **)(qword_2CCB598 + 1672), a1);
  v4 = a2 << 16;
  if ( a2 >= (unsigned int)&stru_10000 )
    v4 = -1;
  return netnode_delblob(v3, v4, 103);
}
