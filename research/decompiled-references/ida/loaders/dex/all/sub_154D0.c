__int64 __fastcall sub_154D0(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax

  v5 = a1[19] + (unsigned int)get_dword(a3, a2, a3);
  if ( v5 < a1[21] )
    return -1;
  if ( v5 >= a1[22] )
    return -1;
  create_data(a3, 0x20000000, 4, -1);
  v6 = num_flag();
  set_op_type(a3, v6, 0);
  add_dref(a3, v5, 5);
  if ( sub_153B0((__int64)a1, -1, v5, 0, a4) == -1 )
    return -1;
  else
    return a3 + 4;
}

