void __fastcall sub_2007EE0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_2BE4EB8;
  v2 = a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  operator delete(a1, 0x10u);
}
