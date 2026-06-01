unsigned __int64 __fastcall sub_7F5AC0(__int64 *a1, _BYTE *a2, void *a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r8
  int v8; // ebp
  __int64 v9; // r14
  unsigned __int64 v10; // rcx
  void *v11; // rdi
  char v12; // r10
  size_t v13; // rbx
  size_t v14; // r15
  void *v15; // rax
  __int64 v16; // rdx
  int v17; // ebp
  __int64 v18; // rdx
  int v19; // ebp
  char v20; // [rsp+7h] [rbp-51h]
  unsigned __int64 v21; // [rsp+8h] [rbp-50h]
  unsigned __int64 v22; // [rsp+10h] [rbp-48h]
  __int64 v23; // [rsp+18h] [rbp-40h]

  v5 = *a1;
  v23 = *a1;
  result = (unsigned __int64)memset(a3, 0, 4 * a4 + 8);
  if ( v5 )
  {
    v7 = result;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = a2 + 1;
    do
    {
      result = v10++;
      v12 = *(_BYTE *)(a1[1] + result);
      if ( v12 == *a2 )
      {
        ++v8;
      }
      else
      {
        v13 = 0;
        do
          v14 = v13++;
        while ( v12 != a2[v13] );
        v22 = v7;
        v21 = v10;
        v20 = *(_BYTE *)(a1[1] + result);
        v15 = memmove(v11, a2, v13);
        v10 = v21;
        v7 = v22;
        v11 = v15;
        *a2 = v20;
        if ( v8 > 0 )
        {
          v16 = a1[3];
          do
          {
            v17 = v8 - 1;
            ++v9;
            *(_BYTE *)(v16 + v9 - 1) = v17 & 1;
            ++*(_DWORD *)(v22 + 4LL * (v17 & 1));
            v8 = v17 >> 1;
          }
          while ( v8 );
        }
        result = a1[3];
        *(_BYTE *)(result + v9++) = v13 + 1;
        ++*(_DWORD *)(v22 + 4 * v14 + 8);
      }
    }
    while ( v23 != v10 );
    if ( v8 > 0 )
    {
      v18 = a1[3];
      do
      {
        v19 = v8 - 1;
        ++v9;
        *(_BYTE *)(v18 + v9 - 1) = v19 & 1;
        result = v19 & 1;
        ++*(_DWORD *)(v7 + 4 * result);
        v8 = v19 >> 1;
      }
      while ( v8 );
    }
  }
  else
  {
    v9 = 0;
  }
  a1[2] = v9;
  return result;
}

