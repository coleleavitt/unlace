__int64 __fastcall set_default_sreg_value(unsigned __int64 *a1, signed int a2, __int64 a3)
{
  __int64 *v7; // rdi

  v7 = *(__int64 **)(qword_2CCB598 + 1672);
  if ( a2 >= *(_DWORD *)(v7[2] + 68) )
    return sub_51C600(v7, a1, a2, a3);
  else
    return 0;
}
