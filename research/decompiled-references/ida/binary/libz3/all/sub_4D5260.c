__int64 __fastcall sub_4D5260(_QWORD *a1)
{
  _QWORD *v1; // rbp
  void *v2; // rdi

  v1 = a1 + 1;
  sub_64C320(*a1);
  sub_64B510(*a1, a1 + 32);
  sub_64C430(*a1, a1 + 1);
  if ( *((_BYTE *)a1 + 280) )
    sub_64DCE0(*a1);
  v2 = (void *)a1[32];
  if ( v2 )
    sub_186B220(v2);
  return sub_63D960(v1);
}

