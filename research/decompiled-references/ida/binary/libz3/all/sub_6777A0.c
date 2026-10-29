__int64 __fastcall sub_6777A0(__int64 *a1)
{
  void *v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r14
  void *v10; // rbp
  __int64 v11; // rsi

  v2 = qword_1C7F2C0;
  *a1 = (__int64)&off_1C52C00;
  sub_182CBA0(v2, a1 + 22);
  sub_182CBA0(v2, a1 + 24);
  v3 = a1[21];
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (_DWORD)v4 )
    {
      v5 = v3 + 16 * v4;
      do
      {
        v6 = v3;
        v3 += 16;
        sub_15D0DF0(v6);
      }
      while ( v3 != v5 );
      v3 = a1[21];
    }
    sub_186B220((void *)(v3 - 8));
  }
  v7 = a1[20];
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
      v7 = a1[20];
    }
    sub_186B220((void *)(v7 - 8));
  }
  return sub_6775C0(a1);
}

