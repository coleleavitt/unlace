void __fastcall sub_21EA970(_QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[2];
  *a1 = &off_2C74F48;
  if ( v1 != a1 + 4 )
    free(v1);
}
