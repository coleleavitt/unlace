unsigned __int64 __fastcall del_tryblks(unsigned int *a1)
{
  _QWORD *v1; // rbp
  unsigned __int64 result; // rax

  v1 = *(_QWORD **)(**(_QWORD **)(qword_2CA1698 + 1480) + 1648LL);
  sub_396090(0x2Fu, a1);
  result = sub_67ADC0(v1, a1);
  if ( *a1 != -1 )
    result = (unsigned __int64)sub_67FD20((__int64)v1, a1);
  v1[8] = -1;
  return result;
}

