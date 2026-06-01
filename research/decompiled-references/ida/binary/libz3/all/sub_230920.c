__int64 *__fastcall sub_230920(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  bool v5; // zf

  result = *(__int64 **)(a1 + 8);
  v2 = (__int64 *)(result[1] + 8LL * *(unsigned int *)(a1 + 16));
  v3 = *v2;
  if ( *v2 && (v4 = *result, v5 = *(_DWORD *)(v3 + 8) == 1, --*(_DWORD *)(v3 + 8), v5) )
  {
    result = (__int64 *)sub_15D7BC0(v4, v3);
    *v2 = 0;
  }
  else
  {
    *v2 = 0;
  }
  return result;
}

