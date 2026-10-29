__int64 __fastcall set_default_sreg_value(unsigned int *a1, signed int a2, unsigned __int32 a3)
{
  __int64 *v7; // rdi

  v7 = *(__int64 **)(qword_2CA1698 + 1480);
  if ( a2 >= *(_DWORD *)(v7[2] + 68) )
    return sub_5046E0(v7, a1, a2, a3);
  else
    return 0;
}

