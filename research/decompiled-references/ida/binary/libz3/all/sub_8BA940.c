void __fastcall sub_8BA940(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r13
  void *v4; // rbp
  __int64 v5; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v3 = v1 + 40 * v2;
      do
      {
        v4 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1 + 8);
        v5 = v1 + 24;
        v1 += 40;
        sub_182CBA0(v4, v5);
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    sub_186B220((void *)(v1 - 8));
  }
}

