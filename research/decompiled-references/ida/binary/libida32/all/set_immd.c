__int64 __fastcall set_immd(unsigned int a1)
{
  _QWORD *v1; // rbp
  __int64 result; // rax
  unsigned __int8 v3; // [rsp+Fh] [rbp-19h]

  v1 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( (~((unsigned __int16)sub_3B9AA0((__int64)v1, a1, 4) >> 8) & 6) != 0 )
    return 0;
  result = sub_3CA430(v1, a1, 0x40000000);
  if ( !(_BYTE)result )
    return 0;
  if ( qword_2CA1648 )
  {
    v3 = result;
    qword_2CA1648(a1, 1);
    return v3;
  }
  return result;
}

