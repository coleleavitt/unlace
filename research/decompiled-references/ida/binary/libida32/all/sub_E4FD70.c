void __fastcall sub_E4FD70(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_2B21A90;
  v2 = a1[7];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  *a1 = &off_2B219F0;
  operator delete();
  operator delete(a1, 0x40u);
}

