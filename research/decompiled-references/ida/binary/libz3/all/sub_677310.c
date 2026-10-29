__int64 __fastcall sub_677310(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  void *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // r14
  void *v18; // r12
  __int64 v19; // rsi

  v2 = a1[31];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[30];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[29];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[28];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[27];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[26];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[24];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[23];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 19);
  sub_182CBA0(v10, a1 + 21);
  v11 = a1[18];
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 - 4);
    if ( (_DWORD)v12 )
    {
      v13 = v11 + 16 * v12;
      do
      {
        v14 = v11;
        v11 += 16;
        sub_15D0DF0(v14);
      }
      while ( v13 != v11 );
      v11 = a1[18];
    }
    sub_186B220((void *)(v11 - 8));
  }
  v15 = a1[17];
  if ( v15 )
  {
    v16 = *(unsigned int *)(v15 - 4);
    if ( (_DWORD)v16 )
    {
      v17 = v15 + 32 * v16;
      do
      {
        v18 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v15);
        v19 = v15 + 16;
        v15 += 32;
        sub_182CBA0(v18, v19);
      }
      while ( v17 != v15 );
      v15 = a1[17];
    }
    sub_186B220((void *)(v15 - 8));
  }
  sub_2334C0(a1 + 8);
  sub_2334C0(a1 + 6);
  sub_2334C0(a1 + 4);
  return sub_2334C0(a1 + 2);
}

