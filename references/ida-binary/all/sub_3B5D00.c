__int64 __fastcall str_sink_t__::vfunc_2(__int64 a1, const char *a2)
{
  size_t v3; // rbx
  __int64 result; // rax
  __int64 *v5; // r12
  size_t v6; // r14
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rax

  v3 = strlen(a2);
  result = 1;
  if ( v3 )
  {
    v5 = *(__int64 **)(a1 + 8);
    v6 = v3;
    v7 = v5[1];
    if ( v7 )
    {
      --v7;
      v6 = v3 + v7;
    }
    v8 = *v5;
    if ( v5[2] < v6 + 1 )
    {
      v9 = qvector_reserve(v5, v8, v6 + 1, 1);
      *v5 = v9;
      v8 = v9;
    }
    v5[1] = v6 + 1;
    *(_BYTE *)(v8 + v6) = 0;
    memmove((void *)(v7 + *v5), a2, v3);
    return 0;
  }
  return result;
}
