void __fastcall sub_1FFA480(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_2BE4D78;
  v2 = a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  nullsub_1254();
  operator delete(a1, 0x10u);
}
