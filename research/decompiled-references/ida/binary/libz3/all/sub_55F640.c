void __fastcall sub_55F640(_QWORD *a1)
{
  _DWORD *v2; // rbp
  bool v3; // zf
  __int64 v4; // rsi
  __int64 v5; // rdi
  void *v6; // rdi
  __int64 v7; // rdi

  v2 = (_DWORD *)a1[8];
  *a1 = off_1C50F18;
  if ( v2 )
  {
    v3 = v2[8]-- == 1;
    if ( v3 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
      sub_186B220(v2);
    }
  }
  v4 = a1[6];
  if ( v4 )
  {
    v5 = a1[7];
    v3 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v3 )
      sub_15D7BC0(v5, v4);
  }
  v6 = (void *)a1[5];
  *a1 = &off_1C675A8;
  if ( v6 )
    sub_4D63E0(v6);
  v7 = a1[2];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  operator delete(a1, 0x48u);
}

