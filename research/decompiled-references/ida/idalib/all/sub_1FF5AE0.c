void __fastcall sub_1FF5AE0(__int64 a1)
{
  char *v2; // rdi
  int v3; // eax
  __int64 v4; // r12
  __int64 v5; // r14
  _QWORD *v6; // rbp
  __int64 v7; // r13

  v2 = *(char **)(a1 + 32);
  if ( *(_DWORD *)(a1 + 44) )
  {
    v3 = *(_DWORD *)(a1 + 40);
    if ( v3 )
    {
      v4 = 0;
      v5 = 8LL * (unsigned int)(v3 - 1) + 8;
      do
      {
        v6 = *(_QWORD **)&v2[v4];
        if ( v6 != (_QWORD *)-8LL && v6 )
        {
          v7 = *v6 + 65LL;
          sub_1FF5AE0(v6 + 1);
          operator delete(v6, v7, 8);
          v2 = *(char **)(a1 + 32);
        }
        v4 += 8;
      }
      while ( v5 != v4 );
    }
  }
  free(v2);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}
