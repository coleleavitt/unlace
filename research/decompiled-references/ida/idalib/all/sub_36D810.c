__int64 __fastcall sub_36D810(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v5; // r8
  const char *v6; // rsi
  const char *v7; // rdi
  __int64 func; // rax

  v2 = 0;
  v5 = a1[13];
  if ( v5 == -1 )
  {
    func = get_func(a1[9]);
    v5 = a1[13];
    v2 = func;
  }
  v6 = haystack;
  if ( a1[6] )
    v6 = (const char *)a1[5];
  v7 = haystack;
  if ( a1[2] )
    v7 = (const char *)a1[1];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)gen_flow_graph(v7, v6, v2, a1[9], v5, a1[17]);
  return 0;
}
