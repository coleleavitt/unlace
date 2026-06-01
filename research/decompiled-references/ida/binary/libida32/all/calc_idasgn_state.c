__int64 __fastcall calc_idasgn_state(signed int a1)
{
  _QWORD *v1; // rbp
  int v2; // edx
  __int64 result; // rax
  int v4; // edx

  v1 = *(_QWORD **)(qword_2CA1698 + 1480);
  v2 = sub_79B3A0((char *)v1 + 2556, *v1, 4294967294LL, 65);
  result = 1;
  if ( a1 < v2 )
  {
    v4 = sub_79B3A0((char *)v1 + 2556, *v1, 0xFFFFFFFFLL, 65);
    result = 4;
    if ( a1 < v4 )
      return (unsigned int)((unsigned __int8)sub_79B3A0((char *)v1 + 2556, *v1, (unsigned int)a1, 4176) == 0) + 2;
  }
  return result;
}

