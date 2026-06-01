__int64 __fastcall sub_3ED760(__int64 *a1)
{
  __int64 *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r14
  void *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // r14
  void *v20; // r12
  __int64 v21; // rsi

  v2 = (__int64 *)a1[13];
  if ( v2 )
  {
    sub_2334C0(v2 + 19);
    v3 = (void *)v2[18];
    v2[12] = (__int64)&off_1C62200;
    if ( v3 )
      sub_186B220(v3);
    v4 = (void *)v2[15];
    if ( v4 )
      sub_186B220(v4);
    v5 = (void *)v2[11];
    v2[5] = (__int64)&off_1C62200;
    if ( v5 )
      sub_186B220(v5);
    v6 = (void *)v2[8];
    if ( v6 )
      sub_186B220(v6);
    v7 = *v2;
    if ( *v2 )
    {
      v8 = v2[1];
      if ( (*(_DWORD *)(v7 + 8))-- == 1 )
        sub_15D7BC0(v8, v7);
    }
    sub_186B220(v2);
  }
  v10 = a1[12];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = a1[11];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = a1[10];
  if ( v12 )
  {
    v13 = *(unsigned int *)(v12 - 4);
    if ( (_DWORD)v13 )
    {
      v14 = v12 + 32 * v13;
      do
      {
        v15 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v12);
        v16 = v12 + 16;
        v12 += 32;
        sub_182CBA0(v15, v16);
      }
      while ( v12 != v14 );
      v12 = a1[10];
    }
    sub_186B220((void *)(v12 - 8));
  }
  v17 = a1[9];
  if ( v17 )
  {
    v18 = *(unsigned int *)(v17 - 4);
    if ( (_DWORD)v18 )
    {
      v19 = v17 + 32 * v18;
      do
      {
        v20 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v17);
        v21 = v17 + 16;
        v17 += 32;
        sub_182CBA0(v20, v21);
      }
      while ( v19 != v17 );
      v17 = a1[9];
    }
    sub_186B220((void *)(v17 - 8));
  }
  sub_2334C0(a1 + 7);
  sub_2334C0(a1 + 5);
  return sub_14B63F0(a1 + 3);
}

