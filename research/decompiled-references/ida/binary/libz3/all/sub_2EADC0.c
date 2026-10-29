void __fastcall sub_2EADC0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // r13
  void *v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r15
  void *v8; // r14
  __int64 v9; // rsi
  void *v10; // rbx
  __int64 v11; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v3 = v1 + 96 * v2;
      do
      {
        v4 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1 + 64);
        sub_182CBA0(v4, v1 + 80);
        v5 = *(_QWORD *)(v1 + 48);
        if ( v5 )
        {
          v6 = *(unsigned int *)(v5 - 4);
          if ( (_DWORD)v6 )
          {
            v7 = v5 + 40 * v6;
            do
            {
              v8 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v5);
              v9 = v5 + 16;
              v5 += 40;
              sub_182CBA0(v8, v9);
            }
            while ( v7 != v5 );
            v5 = *(_QWORD *)(v1 + 48);
          }
          sub_186B220((void *)(v5 - 8));
        }
        v10 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1 + 16);
        v11 = v1 + 32;
        v1 += 96;
        sub_182CBA0(v10, v11);
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    sub_186B220((void *)(v1 - 8));
  }
}

