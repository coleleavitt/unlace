__int64 __fastcall sub_2DD3F0(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r14
  void *v5; // rbp
  __int64 v6; // rsi
  void *v7; // rbx

  v1 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 64);
  sub_182CBA0(v1, a1 + 80);
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v2 + 40 * v3;
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2);
        v6 = v2 + 16;
        v2 += 40;
        sub_182CBA0(v5, v6);
      }
      while ( v4 != v2 );
      v2 = *(_QWORD *)(a1 + 48);
    }
    sub_186B220((void *)(v2 - 8));
  }
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 16);
  return sub_182CBA0(v7, a1 + 32);
}

