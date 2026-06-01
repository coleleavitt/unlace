void __fastcall sub_83B4F0(__int64 *a1)
{
  void *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r14
  void *v6; // rbp
  __int64 v7; // rsi

  v2 = (void *)a1[1];
  if ( v2 )
    sub_186B220(v2);
  v3 = *a1;
  if ( *a1 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (_DWORD)v4 )
    {
      v5 = v3 + 40 * v4;
      do
      {
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v3 + 8);
        v7 = v3 + 24;
        v3 += 40;
        sub_182CBA0(v6, v7);
      }
      while ( v3 != v5 );
      v3 = *a1;
    }
    sub_186B220((void *)(v3 - 8));
  }
}

