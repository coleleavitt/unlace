unsigned __int64 __fastcall sub_7EFFC0(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  unsigned __int64 result; // rax
  unsigned int *v4; // rdi
  size_t v5; // rdx
  unsigned int *v6; // rdi
  size_t v7; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(v1 + 2544) + 1;
  *(_DWORD *)(v1 + 2544) = v2;
  if ( v2 == -1 )
  {
    v4 = *(unsigned int **)(v1 + 2552);
    if ( v4 )
    {
      v5 = 4LL * *(v4 - 1);
      if ( v5 )
        memset(v4, 0, v5);
    }
    *(_DWORD *)(v1 + 2544) = 0;
  }
  result = (unsigned int)(*(_DWORD *)(v1 + 2560) + 1);
  *(_DWORD *)(v1 + 2560) = result;
  if ( (_DWORD)result == -1 )
  {
    v6 = *(unsigned int **)(v1 + 2568);
    if ( v6 )
    {
      v7 = 4LL * *(v6 - 1);
      if ( v7 )
        result = (unsigned __int64)memset(v6, 0, v7);
    }
    *(_DWORD *)(v1 + 2560) = 0;
    *(_BYTE *)(v1 + 2536) = 0;
  }
  else
  {
    *(_BYTE *)(v1 + 2536) = 0;
  }
  return result;
}

