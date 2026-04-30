__int64 __fastcall sub_295C10(int *a1, __int64 a2, _QWORD *a3, unsigned int a4)
{
  int v5; // r14d
  unsigned int v6; // r13d
  __int64 (__fastcall *v7)(__int64, int); // rax
  __int64 v8; // r9
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // rbp
  __int64 (__fastcall *v12)(__int64, int, int); // rax
  __int64 v13; // rsi
  _DWORD *v14; // rax
  int v16; // eax
  __int64 (__fastcall *v17)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v18)(__int64); // rax
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // [rsp+8h] [rbp-50h]
  int v23; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+8h] [rbp-50h]
  int v26; // [rsp+14h] [rbp-44h]
  int v27; // [rsp+14h] [rbp-44h]
  __int64 v28; // [rsp+18h] [rbp-40h]
  __int64 v29; // [rsp+18h] [rbp-40h]

  v5 = a2;
  v6 = *(_DWORD *)(*a3 + 4LL * (int)a2);
  v7 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
  if ( v7 == interactive_graph_t__::vfunc_12 )
  {
    v8 = *(int *)(*((_QWORD *)a1 + 22) + 24LL * (int)a2 + 8);
  }
  else
  {
    a2 = (unsigned int)a2;
    v8 = (int)v7((__int64)a1, a2);
  }
  if ( (int)v8 > 0 )
  {
    v9 = a4;
    if ( (int)a4 <= 0 )
    {
      v17 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
      if ( v17 == interactive_graph_t__::vfunc_19 )
      {
        v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
        if ( v18 == interactive_graph_t__::vfunc_7 )
        {
          v19 = a1[46];
        }
        else
        {
          v24 = v8;
          v19 = ((__int64 (__fastcall *)(int *, __int64, __int64 (__fastcall *)(__int64), __int64 (__fastcall *)(__int64, unsigned int), _QWORD))v18)(
                  a1,
                  a2,
                  interactive_graph_t__::vfunc_7,
                  interactive_graph_t__::vfunc_19,
                  a4);
          v8 = v24;
        }
        if ( (int)a2 >= v19 )
          sub_16B930((__int64)"nrect(%d) failed", a2);
        v20 = *((_QWORD *)a1 + 28) + 16LL * (int)a2;
      }
      else
      {
        v23 = v8;
        v20 = ((__int64 (__fastcall *)(int *, _QWORD, __int64 (__fastcall *)(__int64, unsigned int), __int64 (__fastcall *)(__int64, unsigned int), _QWORD))v17)(
                a1,
                (unsigned int)a2,
                v17,
                interactive_graph_t__::vfunc_19,
                a4);
        v8 = v23;
      }
      v9 = *(_DWORD *)(v20 + 12) + 30 - *(_DWORD *)(v20 + 4);
    }
    v10 = v6 + v9;
    v11 = 0;
    v22 = 24LL * (int)a2;
    do
    {
      v12 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
      if ( v12 == interactive_graph_t__::vfunc_14 )
      {
        v13 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 22) + v22) + 4 * v11);
      }
      else
      {
        v29 = v8;
        v27 = v10;
        v21 = v12((__int64)a1, v5, v11);
        v8 = v29;
        v10 = v27;
        v13 = v21;
      }
      v14 = (_DWORD *)(*a3 + 4LL * (int)v13);
      if ( *v14 < v10 )
      {
        *v14 = v10;
        v28 = v8;
        v26 = v10;
        v16 = sub_295C10(a1, v13, a3, a4);
        v8 = v28;
        v10 = v26;
        if ( (int)v6 < v16 )
          v6 = v16;
      }
      ++v11;
    }
    while ( v11 != v8 );
  }
  return v6;
}
