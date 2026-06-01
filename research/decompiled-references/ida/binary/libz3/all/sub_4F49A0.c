void __fastcall sub_4F49A0(_QWORD *a1)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  void *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi

  v2 = a1[10];
  *a1 = &off_1C4FFA8;
  if ( *((_DWORD *)a1 + 32) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(a1[15] + 8 * v3++);
      sub_553300(v2, v4);
    }
    while ( (unsigned int)v3 < *((_DWORD *)a1 + 32) );
  }
  v5 = a1[44];
  *((_DWORD *)a1 + 32) = 0;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[41];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[40];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[39];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = (void *)a1[36];
  if ( v9 )
    sub_186B220(v9);
  v10 = (_QWORD *)a1[25];
  if ( v10 != a1 + 27 && v10 )
    sub_186B220(v10);
  v11 = (_QWORD *)a1[15];
  if ( v11 && v11 != a1 + 17 )
    sub_186B220(v11);
  v12 = a1[13];
  if ( v12 )
  {
    v13 = a1[14];
    v14 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v13, v12);
  }
  v15 = a1[11];
  if ( v15 )
  {
    v16 = a1[12];
    v14 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v16, v15);
  }
  sub_180C0E0(a1 + 5);
  v17 = a1[4];
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = a1[3];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = a1[2];
  *a1 = qword_1C66740;
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = a1[1];
  *a1 = qword_1C66718;
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  operator delete(a1, 0x168u);
}

