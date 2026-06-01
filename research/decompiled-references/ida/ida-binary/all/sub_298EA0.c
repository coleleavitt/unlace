__int64 __fastcall sub_298EA0(__int64 a1, _QWORD *a2, char a3, double a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64); // rax
  int v7; // eax
  int v8; // r13d
  __int64 (__fastcall *v9)(_QWORD *, _QWORD, __int64); // rbx
  __int64 (__fastcall *v10)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v11)(__int64); // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 (__fastcall *v15)(__int64, int); // rax
  int v16; // edx
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 (__fastcall *v23)(__int64, int, int); // rcx
  __int64 v24; // [rsp+0h] [rbp-78h]
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  a2[1] = a1;
  v26 = a1;
  v27 = 0;
  v4 = node_iterator_goup(&v26);
  v5 = *(_QWORD *)v4;
  LODWORD(v4) = *(_DWORD *)(v4 + 8);
  v26 = v5;
  v27 = v4;
  while ( 1 )
  {
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    v7 = v6 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(a1 + 184) : v6(a1);
    v8 = v27;
    if ( v7 == v27 && a1 == v26 )
      return 0;
    if ( a3 )
    {
      v9 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 16LL);
      v10 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
      if ( v10 == interactive_graph_t__::vfunc_19 )
      {
        v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
        if ( v11 == interactive_graph_t__::vfunc_7 )
          v12 = *(_DWORD *)(a1 + 184);
        else
          v12 = v11(a1);
        if ( v8 >= v12 )
          sub_16B930((__int64)"nrect(%d) failed", v8);
        v13 = *(_QWORD *)(a1 + 224) + 16LL * v8;
      }
      else
      {
        v13 = v10(a1, v27);
      }
      result = v9(a2, (unsigned int)v8, v13);
      if ( (_DWORD)result )
        return result;
    }
    v15 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
    if ( v15 == interactive_graph_t__::vfunc_12 )
      v16 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 24LL * v8 + 8);
    else
      v16 = v15(a1, v8);
    if ( v16 > 0 )
    {
      v17 = 0;
      v24 = v16;
      while ( 1 )
      {
        v22 = *(_QWORD *)a1;
        v23 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
        if ( v23 == interactive_graph_t__::vfunc_14 )
        {
          v18 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL * v8) + 4 * v17);
        }
        else
        {
          v18 = (unsigned int)v23(a1, v8, v17);
          v22 = *(_QWORD *)a1;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(v22 + 72))(a1, (unsigned int)v18) )
          goto LABEL_36;
        v19 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL);
        v18 = (v18 << 32) | (unsigned int)v8;
        if ( !(v19 == interactive_graph_t__::vfunc_20 ? interactive_graph_t__::vfunc_20(a1, v18) : v19(a1, v18)) )
          break;
        result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a2 + 24LL))(a2, v18);
        if ( (_DWORD)result )
          return result;
        if ( v24 == ++v17 )
          goto LABEL_29;
      }
      if ( under_debugger )
        BUG();
      interr(40158, v18, 0, v21, a4);
LABEL_36:
      sub_16B930((__int64)"node %d does not belong to the graph", v18);
    }
LABEL_29:
    ++v27;
    node_iterator_goup(&v26);
  }
}
