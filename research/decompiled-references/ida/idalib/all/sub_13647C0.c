void __fastcall sub_13647C0(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // rdi
  void *v4; // rdi

  v1 = a1 - 2;
  *(a1 - 2) = &off_2C43568;
  *a1 = off_2C43628;
  v3 = a1[6];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (void *)a1[1];
  if ( v4 )
    operator delete(v4);
  nullsub_1230(a1);
  operator delete(v1, 0x48u);
}
