void __fastcall sub_2011B80(_QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[2];
  *a1 = &off_2C71910;
  if ( v1 != a1 + 4 )
    free(v1);
}
