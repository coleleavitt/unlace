void __fastcall sub_A51B70(__int64 **a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rax
  __int64 *v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r15
  void *v7; // r14
  __int64 v8; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v3 = &v1[3 * v2];
      do
      {
        v4 = *v1;
        if ( *v1 )
        {
          v5 = *(unsigned int *)(v4 - 4);
          if ( (_DWORD)v5 )
          {
            v6 = v4 + 40 * v5;
            do
            {
              v7 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v4);
              v8 = v4 + 16;
              v4 += 40;
              sub_182CBA0(v7, v8);
            }
            while ( v6 != v4 );
            v4 = *v1;
          }
          sub_186B220((void *)(v4 - 8));
        }
        v1 += 3;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    sub_186B220(v1 - 1);
  }
}

