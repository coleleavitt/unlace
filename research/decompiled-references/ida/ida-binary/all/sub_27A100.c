__int64 __fastcall disasm_graph_t__::vfunc_36(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 *v3; // rax
  __int64 v4; // rbx

  v2 = *(int *)(a1 + 376);
  if ( !(_DWORD)v2 )
    return 0xFFFFFFFFLL;
  v3 = *(unsigned __int64 **)(a1 + 352);
  v4 = 0;
  while ( a2 < *v3 || a2 >= v3[1] )
  {
    ++v4;
    v3 += 8;
    if ( v4 == v2 )
      return 0xFFFFFFFFLL;
  }
  while ( !(unsigned __int8)sub_29AC50(a1, (unsigned int)v4) )
    LODWORD(v4) = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * (int)v4) & 0x7FFFFFFF;
  return (unsigned int)v4;
}
