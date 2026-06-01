void __fastcall sub_B155A0(_QWORD *a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // r12
  void *v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r15
  void *v8; // rbp
  __int64 v9; // rsi

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v2 = v1 + 10;
    sub_182EF00(v1[23], v1 + 24);
    sub_182EF00(v1[20], v1 + 21);
    sub_182EF00(v1[16], v1 + 17);
    sub_182EF00(v1[12], v1 + 13);
    do
    {
      v3 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v2 - 2);
      sub_182CBA0(v3, v2);
      v4 = *(v2 - 3);
      v5 = v4;
      if ( v4 )
      {
        v6 = *(unsigned int *)(v4 - 4);
        if ( (_DWORD)v6 )
        {
          v7 = v4 + 40 * v6;
          do
          {
            v8 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v4 + 8);
            v9 = v4 + 24;
            v4 += 40;
            sub_182CBA0(v8, v9);
          }
          while ( v4 != v7 );
          v5 = *(v2 - 3);
        }
        sub_186B220((void *)(v5 - 8));
      }
      v2 -= 5;
    }
    while ( v2 != v1 );
    sub_186B220(v2);
  }
}

