void __fastcall sub_33D510(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r13
  void *v4; // r12
  void *v5; // r12
  void *v6; // r12
  __int64 v7; // rsi

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
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1 + 32);
        sub_182CBA0(v5, v1 + 48);
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1);
        v7 = v1 + 16;
        v1 += 96;
        sub_182CBA0(v6, v7);
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    sub_186B220((void *)(v1 - 8));
  }
}

