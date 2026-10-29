void __fastcall sub_991A00(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rdi

  v2 = a1[6];
  *a1 = qword_1C6E7C8;
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v2 + 16 * v3;
      do
      {
        v5 = v2;
        v2 += 16;
        sub_15D0DF0(v5);
      }
      while ( v2 != v4 );
      v2 = a1[6];
    }
    sub_186B220((void *)(v2 - 8));
  }
  operator delete(a1, 0x40u);
}

