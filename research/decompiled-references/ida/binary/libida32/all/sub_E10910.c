void __fastcall sub_E10910(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_2B21980;
  v2 = a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  nullsub_436();
  operator delete(a1, 0x18u);
}

