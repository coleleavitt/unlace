void __fastcall sub_13D04A0(_QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[8];
  *a1 = &off_2C449F0;
  if ( v1 != a1 + 10 )
    free(v1);
}
