void __fastcall sub_2019C20(_QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[2];
  *a1 = &off_2C72020;
  if ( v1 != a1 + 4 )
    free(v1);
}
