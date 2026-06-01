void __fastcall sub_2258AC0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi

  *a1 = &off_2BEBA40;
  v2 = (_QWORD *)a1[2];
  if ( v2 != a1 + 4 )
    operator delete(v2);
  v3 = a1[1];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  operator delete(a1, 0x68u);
}
