__int64 __fastcall add_auto_stkpnt(__int64 a1, unsigned int a2, int a3)
{
  _QWORD *v4; // r13

  if ( !a1 )
    return 0;
  v4 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( (get_aflags(a2) & 2) != 0 )
    return 0;
  else
    return sub_59FDE0(v4, a1, a2, a3);
}

