void __fastcall sub_1364920(_BYTE *a1)
{
  bool v2; // zf
  __int64 v3; // rdi

  v2 = a1[16] == 0;
  *(_QWORD *)a1 = &off_2BB21A8;
  if ( !v2 )
  {
    v3 = *((_QWORD *)a1 + 1);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  nullsub_1230(a1);
  operator delete(a1, 0x18u);
}
