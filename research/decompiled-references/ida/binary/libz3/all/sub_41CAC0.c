void __fastcall sub_41CAC0(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi

  v1 = a1[7];
  if ( v1 )
  {
    v3 = a1[8];
    if ( (*(_DWORD *)(v1 + 8))-- == 1 )
      sub_15D7BC0(v3, v1);
  }
  sub_18572D0(a1 + 6);
  sub_18572D0(a1 + 2);
}

