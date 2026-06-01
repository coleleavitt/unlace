__int64 __fastcall sub_9A2100(__int64 a1)
{
  int v2; // eax
  __int64 result; // rax
  unsigned int *v4; // rdi
  size_t v5; // rdx

  v2 = *(_DWORD *)(a1 + 976) + 1;
  *(_DWORD *)(a1 + 976) = v2;
  if ( v2 == -1 )
  {
    v4 = *(unsigned int **)(a1 + 984);
    if ( v4 )
    {
      v5 = 4LL * *(v4 - 1);
      if ( v5 )
        memset(v4, 0, v5);
    }
    *(_DWORD *)(a1 + 976) = 0;
  }
  result = *(_QWORD *)(a1 + 968);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

