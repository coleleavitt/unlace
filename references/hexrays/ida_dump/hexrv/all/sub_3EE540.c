void __fastcall sub_3EE540(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  if ( a1 )
  {
    v2 = a1[5];
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
    v3 = a1[10];
    a1[5] = 0;
    a1[6] = 0;
    a1[7] = 0;
    a1[8] = &off_4B13D8;
    if ( v3 )
    {
      a1[11] = 0;
      qfree(v3);
    }
    operator delete(a1, 0x70u);
  }
}
