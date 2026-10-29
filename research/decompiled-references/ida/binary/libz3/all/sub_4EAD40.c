void __fastcall sub_4EAD40(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi

  v1 = a1[10];
  *a1 = &off_1C66640;
  if ( v1 )
  {
    v3 = a1[11];
    v4 = (*(_DWORD *)(v1 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v3, v1);
  }
  v5 = a1[8];
  if ( v5 )
  {
    v6 = a1[9];
    v4 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v6, v5);
  }
  v7 = a1[6];
  if ( v7 )
  {
    v8 = a1[7];
    v4 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v8, v7);
  }
  v9 = a1[4];
  if ( v9 )
  {
    v10 = a1[5];
    v4 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v10, v9);
  }
  v11 = a1[2];
  *a1 = qword_1C665B0;
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  operator delete(a1, 0x60u);
}

