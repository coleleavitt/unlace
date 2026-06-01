void __fastcall sub_2259260(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi

  *a1 = &off_2C76038;
  v2 = (_QWORD *)a1[3];
  if ( v2 != a1 + 5 )
    operator delete(v2);
  v3 = a1[2];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  operator delete(a1, 0x40u);
}
