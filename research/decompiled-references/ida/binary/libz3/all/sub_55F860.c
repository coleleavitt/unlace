void __fastcall sub_55F860(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  _DWORD *v4; // rbp
  bool v5; // zf
  _DWORD *v6; // rbp
  void *v7; // rdi
  __int64 v8; // rdi

  *a1 = off_1C50F48;
  v2 = a1[9];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[8];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (_DWORD *)a1[7];
  if ( v4 )
  {
    v5 = v4[8]-- == 1;
    if ( v5 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
      sub_186B220(v4);
    }
  }
  v6 = (_DWORD *)a1[6];
  if ( v6 )
  {
    v5 = v6[8]-- == 1;
    if ( v5 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
      sub_186B220(v6);
    }
  }
  v7 = (void *)a1[5];
  *a1 = &off_1C675A8;
  if ( v7 )
    sub_4D63E0(v7);
  v8 = a1[2];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  operator delete(a1, 0x50u);
}

