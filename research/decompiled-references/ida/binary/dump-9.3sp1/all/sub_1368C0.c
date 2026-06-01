void __fastcall sub_1368C0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &unk_4EBEE0;
  v2 = a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    qfree(v2);
  }
  qfree(a1[2]);
  operator delete(a1, 0x68u);
}
