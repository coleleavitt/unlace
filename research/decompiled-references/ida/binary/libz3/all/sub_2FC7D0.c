__int64 __fastcall sub_2FC7D0(_QWORD *a1)
{
  void *v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // r13
  void *v5; // rbp
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi

  v1 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 6);
  sub_182CBA0(v1, a1 + 8);
  v2 = a1[5];
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
      while ( v4 != v2 );
      v2 = a1[5];
    }
    sub_186B220((void *)(v2 - 8));
  }
  result = sub_2334C0(a1 + 3);
  v8 = a1[1];
  if ( v8 )
  {
    v9 = a1[2];
    if ( (*(_DWORD *)(v8 + 8))-- == 1 )
      return sub_15D7BC0(v9, v8);
  }
  return result;
}

