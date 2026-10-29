__int64 (__fastcall *__fastcall sub_202EF80(__int64 a1))(__int64, __int64, __int64)
{
  int v2; // ecx
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD *v7; // rax
  int v8; // eax
  char *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r12
  _QWORD *v12; // rax
  int v13; // eax
  char *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r12
  _QWORD *v17; // rax
  void (__fastcall *v18)(__int64, __int64, __int64); // rax
  __int64 (__fastcall *result)(__int64, __int64, __int64); // rax

  *(_QWORD *)a1 = &off_2BE5CE8;
  v2 = *(_DWORD *)(a1 + 340);
  v3 = *(char **)(a1 + 328);
  if ( v2 )
  {
    v4 = *(_DWORD *)(a1 + 336);
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
          v3 = *(char **)(a1 + 328);
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  if ( *(_DWORD *)(a1 + 308) )
  {
    v8 = *(_DWORD *)(a1 + 304);
    v9 = *(char **)(a1 + 296);
    if ( v8 )
    {
      v10 = 0;
      v11 = 8LL * (unsigned int)(v8 - 1) + 8;
      do
      {
        v12 = *(_QWORD **)&v9[v10];
        if ( v12 != (_QWORD *)-8LL && v12 )
        {
          operator delete(*(_QWORD *)&v9[v10], *v12 + 17LL, 8);
          v9 = *(char **)(a1 + 296);
        }
        v10 += 8;
      }
      while ( v11 != v10 );
    }
  }
  else
  {
    v9 = *(char **)(a1 + 296);
  }
  free(v9);
  operator delete(*(_QWORD *)(a1 + 264), 16LL * *(unsigned int *)(a1 + 280), 8);
  if ( *(_DWORD *)(a1 + 244) )
  {
    v13 = *(_DWORD *)(a1 + 240);
    v14 = *(char **)(a1 + 232);
    if ( v13 )
    {
      v15 = 0;
      v16 = 8LL * (unsigned int)(v13 - 1) + 8;
      do
      {
        v17 = *(_QWORD **)&v14[v15];
        if ( v17 && v17 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v14[v15], *v17 + 17LL, 8);
          v14 = *(char **)(a1 + 232);
        }
        v15 += 8;
      }
      while ( v16 != v15 );
    }
  }
  else
  {
    v14 = *(char **)(a1 + 232);
  }
  free(v14);
  operator delete(*(_QWORD *)(a1 + 200), 16LL * *(unsigned int *)(a1 + 216), 8);
  operator delete(*(_QWORD *)(a1 + 168), 16LL * *(unsigned int *)(a1 + 184), 8);
  operator delete(*(_QWORD *)(a1 + 136), 16LL * *(unsigned int *)(a1 + 152), 8);
  operator delete(*(_QWORD *)(a1 + 104), 16LL * *(unsigned int *)(a1 + 120), 8);
  v18 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 80);
  if ( v18 )
    v18(a1 + 64, a1 + 64, 3);
  result = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 48);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64))result(a1 + 32, a1 + 32, 3);
  return result;
}
