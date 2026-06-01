void __fastcall sub_144E830(_QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  *a1 = &unk_2C446A0;
  if ( v1 != a1 + 3 )
    operator delete(v1);
}
