void __fastcall sub_221FD00(_QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  *a1 = &off_2BEAE58;
  if ( v1 != a1 + 3 )
    operator delete(v1);
}
