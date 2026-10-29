void __fastcall sub_22582C0(_QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[2];
  *a1 = &off_2BEB750;
  if ( v1 != a1 + 4 )
    operator delete(v1);
}
