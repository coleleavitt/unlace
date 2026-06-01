const char *__fastcall sub_4B7EA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 *v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rbp
  const char *result; // rax
  _QWORD *v10; // rdx

  if ( *(_DWORD *)a1 == 3 )
  {
    v5 = *(__int64 **)(a1 + 8);
    v6 = v5[1];
    if ( !v6 )
      return nullptr;
    v7 = *v5;
    v8 = 0;
    while ( !*(_QWORD *)(v7 + 8) || strcmp(*(const char **)v7, "focus") )
    {
      ++v8;
      v7 += 40;
      if ( v6 == v8 )
        return nullptr;
    }
    if ( *(_DWORD *)(v7 + 24) == 2 )
    {
      v10 = *(_QWORD **)(v7 + 32);
      result = &s1;
      if ( v10[1] )
        return (const char *)*v10;
    }
    else
    {
      return nullptr;
    }
  }
  else
  {
    sub_4B5660(a5, a1, a2, a3, a4);
    return (const char *)sub_4B7F50(a1, a2);
  }
  return result;
}
