void __fastcall sub_2016820(_QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[5];
  *a1 = &off_2BE4EE8;
  if ( v1 != a1 + 7 )
    free(v1);
}
