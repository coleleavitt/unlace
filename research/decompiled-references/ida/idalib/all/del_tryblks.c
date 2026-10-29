unsigned __int64 __fastcall del_tryblks(unsigned __int64 *a1)
{
  __int64 v1; // rbp
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1840LL);
  sub_39ADA0(0x2Fu, a1);
  result = sub_69AD20((unsigned __int64 *)v1, a1);
  if ( *a1 != -1 )
    result = sub_6A0430(v1, a1);
  *(_OWORD *)(v1 + 64) = -1;
  return result;
}
