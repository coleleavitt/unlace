void __fastcall sub_4DE540(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi

  v1 = a1[10];
  *a1 = &off_1C4F890;
  if ( v1 )
  {
    v3 = a1[11];
    if ( (*(_DWORD *)(v1 + 8))-- == 1 )
      sub_15D7BC0(v3, v1);
  }
  sub_4DA630((__int64)a1);
  operator delete(a1, 0x68u);
}

