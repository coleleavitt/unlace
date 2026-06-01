__int64 __fastcall op_stkvar(unsigned int a1, unsigned int a2)
{
  _QWORD *v2; // r12

  v2 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( (~((unsigned __int16)sub_3B9AA0((__int64)v2, a1, 4) >> 8) & 6) != 0 || !sub_5AFCE0(v2) )
    return 0;
  else
    return sub_3CFC40(v2, a1, 0xBBBBBB0BB00000LL, a2);
}

