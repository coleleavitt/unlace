void __fastcall sub_505E00(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // rdi

  *a1 = &off_1C503D0;
  v2 = a1[8];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[3];
  if ( v3 )
  {
    v4 = a1[4];
    v5 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v4, v3);
  }
  v6 = a1[1];
  if ( v6 && (v7 = a1[2], v5 = *(_DWORD *)(v6 + 8) == 1, --*(_DWORD *)(v6 + 8), v5) )
  {
    sub_15D7BC0(v7, v6);
    operator delete(a1, 0x50u);
  }
  else
  {
    operator delete(a1, 0x50u);
  }
}

