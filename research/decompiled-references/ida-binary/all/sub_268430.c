__int64 *__fastcall sub_268430(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 *result; // rax
  __int64 v6; // r13
  const char *v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rbp
  const char *v10; // rdi

  result = (__int64 *)sub_268380(a1, a2, a3, a4, a5);
  if ( result )
  {
    v6 = result[1];
    v7 = "flat_dto";
    if ( (_BYTE)a2 )
      v7 = "graph_dto";
    if ( !v6 )
      return nullptr;
    v8 = *result;
    v9 = 0;
    while ( 1 )
    {
      v10 = &s1;
      if ( *(_QWORD *)(v8 + 8) )
        v10 = *(const char **)v8;
      if ( !strcmp(v10, v7) )
        break;
      ++v9;
      v8 += 40;
      if ( v6 == v9 )
        return nullptr;
    }
    if ( *(_DWORD *)(v8 + 24) == 3 )
      return *(__int64 **)(v8 + 32);
    else
      return nullptr;
  }
  return result;
}
