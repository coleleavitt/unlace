_DWORD *__fastcall sub_8BA8C0(__int64 a1)
{
  _DWORD *result; // rax
  unsigned int *v3; // rdi
  size_t v4; // rdx
  int v5; // edx
  _DWORD *v6; // rdx

  result = *(_DWORD **)(a1 + 8);
  if ( !result || *(result - 1) != 1 )
  {
    v3 = *(unsigned int **)(a1 + 16);
    if ( v3 )
      v4 = 4LL * *(v3 - 1);
    else
      v4 = 0;
    memset(v3, 0, v4);
    result = *(_DWORD **)(a1 + 8);
    if ( result && (v5 = *(result - 2), *(result - 1) = 0, v5) )
    {
      v6 = result;
    }
    else
    {
      sub_313C10((unsigned int **)(a1 + 8));
      result = *(_DWORD **)(a1 + 8);
      v6 = &result[*(result - 1)];
    }
    *v6 = -1;
    ++*(result - 1);
  }
  return result;
}

