__int64 __fastcall add_user_stkpnt(unsigned int a1, int a2)
{
  _QWORD *v2; // r12
  __int64 v3; // rax
  unsigned __int8 v5; // [rsp+Fh] [rbp-19h]

  v2 = *(_QWORD **)(qword_2CA1698 + 1480);
  v3 = sub_5AFCE0(v2);
  if ( !v3 )
    return 0;
  v5 = sub_59FDE0(v2, v3, a1, a2);
  if ( !v5 )
    return 0;
  set_abits(a1, 2);
  return v5;
}

