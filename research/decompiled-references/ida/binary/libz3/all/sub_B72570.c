void __fastcall sub_B72570(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rdi

  *a1 = &off_1C57A40;
  v2 = (void *)a1[4];
  if ( v2 )
    sub_186B220(v2);
  v3 = a1[2];
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (_DWORD)v4 )
    {
      v5 = v3 + 16 * v4;
      do
      {
        v6 = v3;
        v3 += 16;
        sub_15D0DF0(v6);
      }
      while ( v5 != v3 );
      v3 = a1[2];
    }
    sub_186B220((void *)(v3 - 8));
  }
  operator delete(a1, 0x28u);
}

