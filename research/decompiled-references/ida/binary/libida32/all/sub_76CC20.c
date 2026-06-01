const char *__fastcall sub_76CC20(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // r9
  int v4; // ecx
  unsigned int v5; // r8d
  __int64 v6; // rax
  unsigned int *v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdi
  int v10; // edx
  const char *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  if ( a3 )
  {
    v3 = a1[15];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = (unsigned int *)(a1[14] + 8 * v6);
        if ( a2 < *v7 )
          break;
        ++v4;
        v5 = v7[1];
        v6 = v4;
      }
      while ( v4 < v3 );
    }
    else
    {
      v5 = 0;
    }
    *a3 = v5;
  }
  v8 = a1[12];
  if ( !v8 )
    return nullptr;
  v9 = a1[11];
  v10 = 0;
  v11 = nullptr;
  v12 = 0;
  do
  {
    v13 = v9 + 32 * v12;
    if ( a2 < *(_DWORD *)v13 )
      break;
    v11 = haystack;
    if ( *(_QWORD *)(v13 + 16) )
      v11 = *(const char **)(v13 + 8);
    v12 = ++v10;
  }
  while ( v10 < v8 );
  return v11;
}

