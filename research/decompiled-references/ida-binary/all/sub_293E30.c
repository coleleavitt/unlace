__int64 __fastcall interactive_graph_t__::vfunc_25(__int64 a1, int a2)
{
  __int64 (*v3)(void); // rax
  int v4; // eax
  _QWORD *v5; // rdx
  __int64 (__fastcall *v6)(__int64, int); // rax
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // r15d
  int v10; // ebp
  __int64 v11; // r13
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  __int64 (__fastcall *v14)(__int64, int, int); // rax
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64); // r9
  unsigned int v16; // eax
  __int64 (__fastcall *v17)(__int64, int); // rax
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // r13d
  __int64 v21; // r15
  __int64 v22; // rsi
  unsigned __int8 (__fastcall *v23)(__int64, __int64, _QWORD); // r8
  __int64 (__fastcall *v24)(__int64, int, int); // rax
  unsigned int v25; // eax
  int v27; // eax
  unsigned __int8 (__fastcall *v28)(__int64, __int64, _QWORD); // [rsp+10h] [rbp-48h]
  __int64 (__fastcall *v29)(__int64, _QWORD, __int64); // [rsp+18h] [rbp-40h]

  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v3 == (char *)interactive_graph_t__::vfunc_7 )
    v4 = *(_DWORD *)(a1 + 184);
  else
    v4 = v3();
  if ( v4 <= a2 || *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * a2) == 0x7FFFFFFF )
    return -1;
  v5 = *(_QWORD **)a1;
  v6 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
  if ( v6 == interactive_graph_t__::vfunc_12 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 24LL * a2 + 8);
  }
  else
  {
    v27 = v6(a1, a2);
    v5 = *(_QWORD **)a1;
    v7 = v27;
  }
  v8 = v7 - 1;
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 0;
  }
  else
  {
    v10 = 0;
    v11 = 4LL * v8;
    do
    {
      v14 = (__int64 (__fastcall *)(__int64, int, int))v5[14];
      v15 = (__int64 (__fastcall *)(__int64, _QWORD, __int64))v5[27];
      if ( v14 == interactive_graph_t__::vfunc_14 )
      {
        v12 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL * a2) + v11);
      }
      else
      {
        v29 = (__int64 (__fastcall *)(__int64, _QWORD, __int64))v5[27];
        v16 = v14(a1, a2, v9);
        v15 = v29;
        v12 = v16;
      }
      --v9;
      v11 -= 4;
      v13 = v15(a1, (unsigned int)a2, v12);
      v5 = *(_QWORD **)a1;
      v10 += v13;
    }
    while ( v9 != -1 );
  }
  v17 = (__int64 (__fastcall *)(__int64, int))v5[13];
  if ( v17 == interactive_graph_t__::vfunc_13 )
    v18 = *(_DWORD *)(*(_QWORD *)(a1 + 200) + 24LL * a2 + 8);
  else
    v18 = v17(a1, a2);
  v19 = v18 - 1;
  v20 = v19;
  if ( v19 >= 0 )
  {
    v21 = 4LL * v19;
    do
    {
      v23 = *(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 216LL);
      v24 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 120LL);
      if ( v24 == interactive_graph_t__::vfunc_15 )
      {
        v22 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 24LL * a2) + v21);
      }
      else
      {
        v28 = *(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 216LL);
        v25 = v24(a1, a2, v20);
        v23 = v28;
        v22 = v25;
      }
      --v20;
      v21 -= 4;
      v10 += v23(a1, v22, (unsigned int)a2);
    }
    while ( v20 != -1 );
  }
  sub_293CE0(a1, a2);
  return v10;
}
