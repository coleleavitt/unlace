__int64 __fastcall update_func(unsigned __int64 *a1)
{
  unsigned int v1; // ebx

  v1 = sub_504700(*(_QWORD *)(qword_2CCB598 + 1672) + 1704LL, a1);
  if ( (_BYTE)v1 )
  {
    lock_func_range(a1, 1);
    sub_39ADA0(0x21u, a1);
    lock_func_range(a1, 0);
  }
  return v1;
}
