void __fastcall sub_1364820(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi

  *a1 = &off_2C43568;
  a1[2] = off_2C43628;
  v2 = a1[8];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (void *)a1[3];
  if ( v3 )
    operator delete(v3);
  nullsub_1230(a1 + 2);
  operator delete(a1, 0x48u);
}
