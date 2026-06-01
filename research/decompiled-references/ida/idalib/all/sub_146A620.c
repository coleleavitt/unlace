void __fastcall sub_146A620(_QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[3];
  *a1 = &off_2BB33A0;
  if ( v1 != a1 + 5 )
    free(v1);
}
