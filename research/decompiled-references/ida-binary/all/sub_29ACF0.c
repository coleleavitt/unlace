__int64 __fastcall sub_29ACF0(__int64 a1)
{
  unsigned __int64 i; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 (__fastcall *v4)(__int64); // rax

  for ( i = 0; ; ++i )
  {
    v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v4 != interactive_graph_t__::vfunc_7 )
      break;
    if ( i >= *(int *)(a1 + 184) )
      return 0;
LABEL_3:
    v2 = *(_QWORD *)(a1 + 104);
    result = *(_BYTE *)(v2 + (int)i) & 1;
    if ( (*(_BYTE *)(v2 + (int)i) & 1) != 0 )
      return result;
  }
  if ( i < (int)v4(a1) )
    goto LABEL_3;
  return 0;
}
