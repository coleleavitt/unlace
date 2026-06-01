__int64 __fastcall sub_4638F0(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r14
  void *v5; // rbp
  __int64 v6; // rsi
  void *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi

  v2 = a1[12];
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v2 + 48 * v3;
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2 + 16);
        v6 = v2 + 32;
        v2 += 48;
        sub_182CBA0(v5, v6);
      }
      while ( v4 != v2 );
      v2 = a1[12];
    }
    sub_186B220((void *)(v2 - 8));
  }
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 8);
  sub_182CBA0(v7, a1 + 10);
  v8 = a1[5];
  if ( v8 )
  {
    v9 = a1[6];
    if ( (*(_DWORD *)(v8 + 8))-- == 1 )
      sub_15D7BC0(v9, v8);
  }
  return sub_14B63F0(a1 + 1);
}

