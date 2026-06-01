__int64 __fastcall sub_29B420(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  int v5; // eax
  __int64 v6; // rax
  unsigned int v7; // r12d
  unsigned int *v8; // rdx
  unsigned int v9; // eax

  if ( a2 < 0 )
    return 0;
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  v5 = v4 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(a1 + 184) : ((__int64 (*)(void))v4)();
  if ( a2 >= v5 )
    return 0;
  v6 = *(_QWORD *)(a1 + 104);
  v7 = *(_BYTE *)(v6 + a2) & 1;
  if ( (*(_BYTE *)(v6 + a2) & 1) == 0 || sub_293760(a1, 8, a1, (unsigned int)a2, a3) )
    return 0;
  v8 = (unsigned int *)(*(_QWORD *)(a1 + 80) + 4LL * a2);
  v9 = *v8 & 0x7FFFFFFF;
  if ( !a3 )
    v9 = *v8 | 0x80000000;
  *v8 = v9;
  return v7;
}
