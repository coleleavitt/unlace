__int64 get_func_qty()
{
  __int64 v0; // rbx
  __int64 v1; // rdi

  v0 = *(_QWORD *)(qword_2CA1698 + 1480);
  v1 = *(_QWORD *)(*(_QWORD *)v0 + 1424LL);
  if ( !*(_BYTE *)(v1 + 48) )
  {
    sub_5AF6C0(v1);
    v1 = *(_QWORD *)(*(_QWORD *)v0 + 1424LL);
  }
  return *(_QWORD *)(v1 + 24);
}

