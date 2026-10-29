void __fastcall sub_1FF5B80(__int64 *a1)
{
  __int64 v2; // rbx
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r15
  _QWORD *v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rdi

  v2 = *a1;
  if ( *a1 )
  {
    v3 = *(char **)(v2 + 32);
    if ( *(_DWORD *)(v2 + 44) )
    {
      v4 = *(_DWORD *)(v2 + 40);
      if ( v4 )
      {
        v5 = 0;
        v6 = 8LL * (unsigned int)(v4 - 1) + 8;
        do
        {
          v7 = *(_QWORD **)&v3[v5];
          if ( v7 != (_QWORD *)-8LL && v7 )
          {
            v8 = *v7 + 65LL;
            sub_1FF5AE0((__int64)(v7 + 1));
            operator delete(v7, v8, 8);
            v3 = *(char **)(v2 + 32);
          }
          v5 += 8;
        }
        while ( v6 != v5 );
      }
    }
    free(v3);
    if ( *(_QWORD *)v2 != v2 + 16 )
      operator delete(*(void **)v2);
    operator delete((void *)v2, 0x38u);
  }
  v9 = a1[1];
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
}
