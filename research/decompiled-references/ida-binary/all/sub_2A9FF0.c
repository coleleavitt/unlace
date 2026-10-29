__int64 __fastcall sub_2A9FF0(__int64 a1, _QWORD *a2, __int64 *a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 (__fastcall *v8)(__int64); // rax
  int v9; // eax
  __int64 (*v10)(); // rdx
  __int64 v11; // rax

  if ( a4 < 0 )
    return 0;
  v6 = sub_2B70C0();
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL);
  v9 = v8 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(v7 + 184) : v8(v7);
  if ( a4 >= v9 || (*(_BYTE *)(*(_QWORD *)(v7 + 104) + a4) & 1) != 0 )
    return 0;
  *a2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 296LL))(v7, (unsigned int)a4);
  v10 = *(__int64 (**)())(*(_QWORD *)v7 + 304LL);
  v11 = -1;
  if ( v10 != proxim_graph_t__::vfunc_38 )
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD))v10)(v7, (unsigned int)a4);
  *a3 = v11;
  return 1;
}
