void __fastcall sub_4301B0(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // r12
  void *v4; // rbp
  __int64 v5; // rsi

  v1 = a1[9];
  *a1 = &off_1C4E830;
  if ( v1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v3 = v1 + 32 * v2;
      do
      {
        v4 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1);
        v5 = v1 + 16;
        v1 += 32;
        sub_182CBA0(v4, v5);
      }
      while ( v1 != v3 );
      v1 = a1[9];
    }
    sub_186B220((void *)(v1 - 8));
  }
  operator delete(a1, 0x50u);
}

