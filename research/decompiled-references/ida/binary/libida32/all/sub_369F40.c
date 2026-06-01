__int64 __fastcall sub_369F40(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v5; // r8
  const char *v6; // rsi
  const char *v7; // rdi
  __int64 func; // rax

  v2 = 0;
  v5 = *(unsigned int *)(a1 + 104);
  if ( (_DWORD)v5 == -1 )
  {
    func = get_func(*(unsigned int *)(a1 + 72));
    v5 = *(unsigned int *)(a1 + 104);
    v2 = func;
  }
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v6 = *(const char **)(a1 + 40);
  v7 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v7 = *(const char **)(a1 + 8);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)gen_flow_graph(
                                           v7,
                                           v6,
                                           v2,
                                           *(unsigned int *)(a1 + 72),
                                           v5,
                                           *(unsigned int *)(a1 + 136));
  return 0;
}

