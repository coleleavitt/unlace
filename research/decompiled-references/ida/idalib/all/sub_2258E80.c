void __fastcall sub_2258E80(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi

  *a1 = &off_2BEB920;
  v2 = a1[17];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (_QWORD *)a1[6];
  if ( v3 != a1 + 8 )
    operator delete(v3);
  v4 = (_QWORD *)a1[2];
  *a1 = &unk_2C76008;
  if ( v4 != a1 + 4 )
    operator delete(v4);
  operator delete(a1, 0x90u);
}
