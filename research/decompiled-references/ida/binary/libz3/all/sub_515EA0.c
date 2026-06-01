void __fastcall sub_515EA0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r15
  void *v10; // r13
  void *v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdi
  void *v15; // rbx
  void *v16; // rbx
  __int64 v17; // rdi

  v2 = (_QWORD *)a1[27];
  *a1 = qword_1C66E88;
  if ( v2 )
  {
    v3 = v2[4];
    if ( v3 )
      sub_186B220((void *)(v3 - 8));
    v4 = v2[3];
    if ( v4 )
      sub_186B220((void *)(v4 - 8));
    v5 = v2[2];
    if ( v5 )
      sub_186B220((void *)(v5 - 8));
    sub_186B220(v2);
  }
  v6 = (__int64 *)a1[18];
  if ( v6 )
  {
    v7 = *v6;
    if ( *v6 )
    {
      v8 = *(unsigned int *)(v7 - 4);
      if ( (_DWORD)v8 )
      {
        v9 = v7 + 112 * v8;
        do
        {
          v10 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v7 + 56);
          sub_182CBA0(v10, v7 + 72);
          v11 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v7 + 16);
          v12 = v7 + 32;
          v7 += 112;
          sub_182CBA0(v11, v12);
        }
        while ( v7 != v9 );
        v7 = *v6;
      }
      sub_186B220((void *)(v7 - 8));
    }
    sub_186B220(v6);
  }
  sub_180C0E0(a1 + 22);
  v13 = a1[21];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[20];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 11);
  sub_182CBA0(v15, a1 + 13);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 6);
  sub_182CBA0(v16, a1 + 8);
  v17 = a1[2];
  *a1 = qword_1C665B0;
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  operator delete(a1, 0xE0u);
}

