void __fastcall sub_EB4DB0(_DWORD *a1)
{
  int v2; // eax
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  void (__fastcall *v8)(_DWORD *, _DWORD *, __int64); // rax
  void (__fastcall *v9)(_DWORD *, _DWORD *, __int64); // rax
  _DWORD *v10; // rdi
  _DWORD *v11; // rdi

  *(_QWORD *)a1 = &off_2B4C0E8;
  v2 = a1[51];
  v3 = *((char **)a1 + 24);
  if ( v2 )
  {
    v4 = a1[50];
    if ( v4 )
    {
      v5 = 0;
      v6 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        v7 = *(_QWORD **)&v3[v5];
        if ( v7 != (_QWORD *)-8LL && v7 )
        {
          operator delete(*(_QWORD *)&v3[v5], *v7 + 17LL, 8);
          v3 = *((char **)a1 + 24);
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  v8 = *((void (__fastcall **)(_DWORD *, _DWORD *, __int64))a1 + 22);
  if ( v8 )
    v8(a1 + 40, a1 + 40, 3);
  v9 = *((void (__fastcall **)(_DWORD *, _DWORD *, __int64))a1 + 18);
  if ( v9 )
    v9(a1 + 32, a1 + 32, 3);
  v10 = *((_DWORD **)a1 + 10);
  *(_QWORD *)a1 = &off_2B4C0C0;
  if ( v10 != a1 + 24 )
    free(v10);
  v11 = *((_DWORD **)a1 + 1);
  if ( v11 != a1 + 6 )
    free(v11);
  operator delete(a1, 0xD8u);
}
