void __fastcall sub_13B30E0(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdi
  __int64 v4; // rdi

  *a1 = &off_2C443D8;
  if ( (a1[9] & 1) != 0 )
  {
    v2 = a1[2];
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = (_QWORD *)a1[5];
  if ( v3 != a1 + 7 )
    operator delete(v3);
  v4 = a1[4];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  nullsub_558();
  operator delete(a1, 0x50u);
}
