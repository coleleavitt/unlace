__int64 __fastcall sub_295540(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v3; // rdx
  __int64 (__fastcall *v4)(__int64, int); // rax
  __int64 v5; // rbp
  __int64 i; // r13
  __int64 (__fastcall *v7)(__int64, int, int); // rax
  int v8; // r12d
  __int64 (__fastcall *v9)(__int64, unsigned int); // rax
  __int64 (__fastcall *v10)(__int64); // rax
  int v11; // eax
  __int64 (__fastcall *v12)(__int64, int); // rax
  __int64 result; // rax
  __int64 v14; // rbp
  __int64 j; // r12
  __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64, int, int); // rcx
  int v18; // esi
  __int64 (__fastcall *v19)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v20)(__int64); // rax
  int v21; // eax
  int v22; // eax
  int v23; // eax

  v3 = *(_QWORD **)a1;
  v4 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
  if ( v4 == interactive_graph_t__::vfunc_12 )
  {
    v5 = *(int *)(*(_QWORD *)(a1 + 176) + 24LL * a2 + 8);
  }
  else
  {
    v23 = v4(a1, a2);
    v3 = *(_QWORD **)a1;
    v5 = v23;
  }
  if ( (int)v5 > 0 )
  {
    for ( i = 0; i != v5; ++i )
    {
      while ( 1 )
      {
        v7 = (__int64 (__fastcall *)(__int64, int, int))v3[14];
        if ( v7 == interactive_graph_t__::vfunc_14 )
        {
          v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL * a2) + 4 * i);
        }
        else
        {
          v22 = v7(a1, a2, i);
          v3 = *(_QWORD **)a1;
          v8 = v22;
        }
        v9 = (__int64 (__fastcall *)(__int64, unsigned int))v3[19];
        if ( v9 == interactive_graph_t__::vfunc_19 )
        {
          v10 = (__int64 (__fastcall *)(__int64))v3[7];
          if ( v10 == interactive_graph_t__::vfunc_7 )
            v11 = *(_DWORD *)(a1 + 184);
          else
            v11 = v10(a1);
          if ( v8 >= v11 )
            sub_16B930((__int64)"nrect(%d) failed", v8);
        }
        else
        {
          v9(a1, v8);
        }
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 104) + v8) & 2) != 0 )
          break;
        ++i;
        v3 = *(_QWORD **)a1;
        if ( v5 == i )
          goto LABEL_14;
      }
      sub_295430(a1, v8, a3, 1);
      v3 = *(_QWORD **)a1;
    }
  }
LABEL_14:
  v12 = (__int64 (__fastcall *)(__int64, int))v3[13];
  if ( v12 == interactive_graph_t__::vfunc_13 )
  {
    result = *(_QWORD *)(a1 + 200) + 24LL * a2;
    v14 = *(int *)(result + 8);
  }
  else
  {
    result = v12(a1, a2);
    v14 = (int)result;
  }
  if ( (int)v14 > 0 )
  {
    for ( j = 0; j != v14; ++j )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)a1;
        v17 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 120LL);
        if ( v17 == interactive_graph_t__::vfunc_15 )
        {
          v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 24LL * a2) + 4 * j);
        }
        else
        {
          v18 = v17(a1, a2, j);
          v16 = *(_QWORD *)a1;
        }
        v19 = *(__int64 (__fastcall **)(__int64, unsigned int))(v16 + 152);
        if ( v19 == interactive_graph_t__::vfunc_19 )
        {
          v20 = *(__int64 (__fastcall **)(__int64))(v16 + 56);
          v21 = v20 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(a1 + 184) : v20(a1);
          if ( v18 >= v21 )
            sub_16B930((__int64)"nrect(%d) failed", v18);
        }
        else
        {
          ((void (__fastcall *)(__int64))v19)(a1);
        }
        result = v18;
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 104) + v18) & 2) != 0 )
          break;
        if ( v14 == ++j )
          return result;
      }
      result = (__int64)sub_295430(a1, v18, a3, 0);
    }
  }
  return result;
}
