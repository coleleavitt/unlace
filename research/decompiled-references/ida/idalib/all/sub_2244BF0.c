char *__fastcall sub_2244BF0(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  char *result; // rax
  __int64 v4; // rdx

  if ( a2 )
  {
    *(_QWORD *)(a1 + 12) = 0;
    v2 = a2;
    result = (char *)calloc(a2 + 1, 0xCu);
    if ( result )
    {
      v4 = 8LL * a2;
    }
    else
    {
      if ( a2 != -1 || (result = (char *)malloc(1u)) == nullptr )
LABEL_5:
        sub_2221CE0("Allocation failed", 1u);
      v4 = 0x7FFFFFFF8LL;
      v2 = -1;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 12) = 0;
    result = (char *)calloc(0x11u, 0xCu);
    if ( !result )
      goto LABEL_5;
    v4 = 128;
    v2 = 16;
  }
  *(_QWORD *)&result[v4] = 2;
  *(_DWORD *)(a1 + 8) = v2;
  *(_QWORD *)a1 = result;
  return result;
}
