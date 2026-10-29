__int64 get_func_qty()
{
  __int64 v0; // rbx
  __int64 v1; // rdi

  v0 = *(_QWORD *)(qword_2CCB598 + 1672);
  v1 = *(_QWORD *)(*(_QWORD *)v0 + 1616LL);
  if ( !*(_BYTE *)(v1 + 56) )
  {
    sub_5CA3A0(v1);
    v1 = *(_QWORD *)(*(_QWORD *)v0 + 1616LL);
  }
  return *(_QWORD *)(v1 + 32);
}
