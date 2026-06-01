void __fastcall sub_4EA7B0(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v5; // rsi
  __int64 v6; // rdi

  v1 = a1[4];
  *a1 = &off_1C4FBC0;
  if ( v1 )
  {
    v3 = a1[5];
    v4 = (*(_DWORD *)(v1 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v3, v1);
  }
  v5 = a1[2];
  if ( v5 && (v6 = a1[3], v4 = *(_DWORD *)(v5 + 8) == 1, --*(_DWORD *)(v5 + 8), v4) )
  {
    sub_15D7BC0(v6, v5);
    operator delete(a1, 0x30u);
  }
  else
  {
    operator delete(a1, 0x30u);
  }
}

