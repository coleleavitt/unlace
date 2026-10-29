void __fastcall sub_4F46C0(_QWORD *a1)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  void *v8; // rdi
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi

  v2 = a1[8];
  *a1 = &off_1C4FEF8;
  if ( *((_DWORD *)a1 + 28) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(a1[13] + 8 * v3++);
      sub_553300(v2, v4);
    }
    while ( (unsigned int)v3 < *((_DWORD *)a1 + 28) );
  }
  v5 = a1[29];
  *((_DWORD *)a1 + 28) = 0;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[28];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[27];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = (void *)a1[24];
  if ( v8 )
    sub_186B220(v8);
  v9 = (_QWORD *)a1[13];
  if ( v9 != a1 + 15 && v9 )
    sub_186B220(v9);
  v10 = a1[11];
  if ( v10 )
  {
    v11 = a1[12];
    v12 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v11, v10);
  }
  v13 = a1[9];
  if ( v13 )
  {
    v14 = a1[10];
    v12 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v14, v13);
  }
  sub_180C0E0(a1 + 3);
  v15 = a1[2];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = a1[1];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  operator delete(a1, 0x100u);
}

