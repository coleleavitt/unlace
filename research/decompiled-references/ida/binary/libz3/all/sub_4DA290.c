void __fastcall sub_4DA290(__int64 a1)
{
  char *v2; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  char *v5; // rbp
  void *v6; // rdi
  __int64 v7; // rdi

  sub_4DA030(a1);
  v2 = *(char **)(a1 + 16);
  if ( v2 )
  {
    v3 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v3 )
    {
      v4 = *(_QWORD *)(a1 + 16);
      v5 = &v2[48 * v3];
      do
      {
        v6 = *(void **)(v4 + 16);
        if ( v6 != (void *)(v4 + 32) )
          operator delete(v6, *(_QWORD *)(v4 + 32) + 1LL);
        v4 += 48;
      }
      while ( (char *)v4 != v5 );
    }
    sub_186B220(v2);
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
}

