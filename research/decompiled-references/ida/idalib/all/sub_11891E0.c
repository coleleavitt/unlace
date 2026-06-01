void __fastcall sub_11891E0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_2C37CF0;
  v2 = a1[5];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  nullsub_581();
  operator delete(a1, 0x30u);
}
