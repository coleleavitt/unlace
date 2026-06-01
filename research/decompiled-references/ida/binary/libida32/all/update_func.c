__int64 __fastcall update_func(unsigned int *a1)
{
  unsigned int v1; // ebx

  v1 = sub_4ED1D0(*(_QWORD *)(qword_2CA1698 + 1480) + 1624LL, a1);
  if ( (_BYTE)v1 )
  {
    lock_func_range(a1, 1);
    sub_396090(0x21u, a1);
    lock_func_range(a1, 0);
  }
  return v1;
}

