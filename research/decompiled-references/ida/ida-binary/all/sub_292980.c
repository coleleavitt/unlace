_DWORD *__fastcall sub_292980(__int64 *a1, int a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 (__fastcall *v5)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v6)(__int64); // rax
  int v7; // eax
  _DWORD *v8; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, int); // rax
  _DWORD *result; // rax
  __int64 v12; // r12
  __int64 i; // r13
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, int, int); // rax
  unsigned int v16; // ebp

  v4 = *a1;
  v5 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)*a1 + 152LL);
  if ( v5 == interactive_graph_t__::vfunc_19 )
  {
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a1 + 56LL);
    if ( v6 == interactive_graph_t__::vfunc_7 )
      v7 = *(_DWORD *)(v4 + 184);
    else
      v7 = v6(v4);
    if ( a2 >= v7 )
      sub_16B930((__int64)"nrect(%d) failed", (unsigned int)a2);
    v8 = (_DWORD *)(*(_QWORD *)(v4 + 224) + 16LL * a2);
  }
  else
  {
    v8 = (_DWORD *)((__int64 (__fastcall *)(__int64))v5)(v4);
  }
  *v8 += a3;
  v8[2] += a3;
  v9 = *a1;
  v10 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)*a1 + 96LL);
  if ( v10 == interactive_graph_t__::vfunc_12 )
  {
    result = (_DWORD *)(*(_QWORD *)(v9 + 176) + 24LL * a2);
    v12 = (int)result[2];
  }
  else
  {
    result = (_DWORD *)v10(v9, a2);
    v12 = (int)result;
  }
  if ( v12 )
  {
    for ( i = 0; i != v12; ++i )
    {
      v14 = *a1;
      v15 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)*a1 + 112LL);
      if ( v15 == interactive_graph_t__::vfunc_14 )
        v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 176) + 24LL * a2) + 4LL * (int)i);
      else
        v16 = v15(v14, a2, i);
      result = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1[1] + 8LL))(
                           a1[1],
                           (unsigned int)a2,
                           v16);
      if ( *result == 1 )
        result = (_DWORD *)sub_292980(a1, v16, a3);
    }
  }
  return result;
}
