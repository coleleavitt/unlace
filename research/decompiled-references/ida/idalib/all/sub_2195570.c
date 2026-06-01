void __fastcall sub_2195570(_QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[3];
  *a1 = &off_2BE96D8;
  if ( v1 != a1 + 5 )
    operator delete(v1);
}
