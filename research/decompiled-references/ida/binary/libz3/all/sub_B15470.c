__int64 __fastcall sub_B15470(_QWORD *a1)
{
  __int64 *v2; // r13
  __int64 *v3; // r12
  void *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r15
  void *v10; // rbp
  __int64 v11; // rsi

  v2 = a1 + 7;
  sub_182EF00(a1[23], a1 + 24);
  sub_182EF00(a1[20], a1 + 21);
  sub_182EF00(a1[16], a1 + 17);
  v3 = a1 - 3;
  sub_182EF00(a1[12], a1 + 13);
  do
  {
    v4 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v2 + 1);
    result = sub_182CBA0(v4, v2 + 3);
    v6 = *v2;
    v7 = *v2;
    if ( *v2 )
    {
      v8 = *(unsigned int *)(v6 - 4);
      if ( (_DWORD)v8 )
      {
        v9 = v6 + 40 * v8;
        do
        {
          v10 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v6 + 8);
          v11 = v6 + 24;
          v6 += 40;
          sub_182CBA0(v10, v11);
        }
        while ( v9 != v6 );
        v7 = *v2;
      }
      result = sub_186B220((void *)(v7 - 8));
    }
    v2 -= 5;
  }
  while ( v2 != v3 );
  return result;
}

