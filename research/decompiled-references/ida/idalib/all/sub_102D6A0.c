void __fastcall sub_102D6A0(__int64 a1)
{
  int v2; // eax
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  *(_QWORD *)a1 = &unk_2C05230;
  v2 = *(_DWORD *)(a1 + 492);
  v3 = *(char **)(a1 + 480);
  if ( v2 )
  {
    v4 = *(_DWORD *)(a1 + 488);
    if ( v4 )
    {
      v5 = 0;
      v6 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        v7 = *(_QWORD **)&v3[v5];
        if ( v7 != (_QWORD *)-8LL && v7 )
        {
          operator delete(*(_QWORD *)&v3[v5], *v7 + 9LL, 8);
          v3 = *(char **)(a1 + 480);
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  if ( *(_BYTE *)(a1 + 464) )
  {
    v8 = *(void **)(a1 + 408);
    if ( v8 != (void *)(a1 + 424) )
      operator delete(v8);
  }
  v9 = *(void **)(a1 + 288);
  if ( v9 != (void *)(a1 + 304) )
    operator delete(v9);
  v10 = *(void **)(a1 + 216);
  if ( v10 != (void *)(a1 + 232) )
    operator delete(v10);
}
