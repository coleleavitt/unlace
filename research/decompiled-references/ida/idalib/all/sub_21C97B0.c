void __fastcall sub_21C97B0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_2BE9B08;
  operator delete(a1[3], 24LL * *((unsigned int *)a1 + 10), 8);
  sub_21D1A40(a1 + 2);
  v2 = a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  operator delete(a1, 0x38u);
}
