void __fastcall sub_EB4CB0(__int64 a1)
{
  int v2; // eax
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  void (__fastcall *v8)(__int64, __int64, __int64); // rax
  void (__fastcall *v9)(__int64, __int64, __int64); // rax
  void *v10; // rdi
  void *v11; // rdi

  *(_QWORD *)a1 = &off_2B4C0E8;
  v2 = *(_DWORD *)(a1 + 204);
  v3 = *(char **)(a1 + 192);
  if ( v2 )
  {
    v4 = *(_DWORD *)(a1 + 200);
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
          v3 = *(char **)(a1 + 192);
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  v8 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 176);
  if ( v8 )
    v8(a1 + 160, a1 + 160, 3);
  v9 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 144);
  if ( v9 )
    v9(a1 + 128, a1 + 128, 3);
  v10 = *(void **)(a1 + 80);
  *(_QWORD *)a1 = &off_2B4C0C0;
  if ( v10 != (void *)(a1 + 96) )
    free(v10);
  v11 = *(void **)(a1 + 8);
  if ( v11 != (void *)(a1 + 24) )
    free(v11);
}
