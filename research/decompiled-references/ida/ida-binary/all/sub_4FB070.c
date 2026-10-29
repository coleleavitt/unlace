__int64 __fastcall form_actions_impl_t__::vfunc_14(__int64 a1, int a2, __int64 a3)
{
  __int64 *v3; // rax
  unsigned __int64 v5; // r9
  __int64 v6; // r10
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // eax

  v3 = *(__int64 **)(a1 + 24);
  v5 = v3[1];
  if ( !v5 )
    return sub_4FAF30(*(_QWORD *)(a1 + 8), 0, 255, a3);
  v6 = *v3;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = v6 + 72 * v8;
    v10 = *(_DWORD *)(v9 + 56);
    if ( a2 == v10 )
      return sub_4FAF30(*(_QWORD *)(a1 + 8), *(_QWORD *)v9, *(_BYTE *)(v9 + 52), a3);
    if ( v10 == -a2 )
      break;
    v8 = ++v7;
    if ( v7 >= v5 )
      return sub_4FAF30(*(_QWORD *)(a1 + 8), 0, 255, a3);
  }
  return sub_4FAF30(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(v9 + 52), a3);
}
