__int64 __fastcall del_node_info(int a1, unsigned int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rsi

  v3 = sub_3B90A0(*(_QWORD **)(qword_2CA1698 + 1480), a1);
  v4 = a2 << 16;
  if ( a2 >= 0x10000 )
    v4 = 0xFFFFFFFFLL;
  return netnode_delblob(v3, v4, 103);
}

