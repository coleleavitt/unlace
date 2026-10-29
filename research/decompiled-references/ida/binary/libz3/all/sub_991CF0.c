__int64 __fastcall sub_991CF0(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r14
  void *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r14
  void *v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdi
  void *v14; // rbx

  v2 = a1[10];
  *a1 = &off_1C56380;
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v2 + 32 * v3;
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2);
        v6 = v2 + 16;
        v2 += 32;
        sub_182CBA0(v5, v6);
      }
      while ( v2 != v4 );
      v2 = a1[10];
    }
    sub_186B220((void *)(v2 - 8));
  }
  v7 = a1[9];
  if ( v7 )
  {
    v8 = *(unsigned int *)(v7 - 4);
    if ( (_DWORD)v8 )
    {
      v9 = v7 + 32 * v8;
      do
      {
        v10 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v7);
        v11 = v7 + 16;
        v7 += 32;
        sub_182CBA0(v10, v11);
      }
      while ( v9 != v7 );
      v7 = a1[9];
    }
    sub_186B220((void *)(v7 - 8));
  }
  v12 = a1[8];
  *a1 = &off_1C56338;
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[7];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = qword_1C7F2C0;
  *a1 = &off_1C56290;
  sub_182CBA0(v14, a1 + 2);
  return sub_182CBA0(v14, a1 + 4);
}

