__int64 __fastcall sub_296000(int *a1, _QWORD *a2, unsigned int a3, int a4)
{
  __int64 v5; // rsi
  __int64 (*v8)(void); // rax
  __int64 result; // rax
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // ebp
  __int64 v15; // r8
  int v16; // eax
  int *v17; // rdx
  int v18; // edi
  __int64 (__fastcall *v19)(__int64, int, int); // rax
  __int64 (__fastcall *v20)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v21)(__int64); // rax
  int v22; // eax
  int *v23; // rcx
  __int64 v24; // [rsp+10h] [rbp-48h]
  __int64 v25; // [rsp+18h] [rbp-40h]

  v5 = a3;
  v8 = *(__int64 (**)(void))(*(_QWORD *)a1 + 96LL);
  if ( (char *)v8 == (char *)interactive_graph_t__::vfunc_12 )
  {
    result = *((_QWORD *)a1 + 22) + 24LL * (int)a3;
    v10 = *(int *)(result + 8);
  }
  else
  {
    result = v8();
    v5 = (unsigned int)v5;
    v10 = (int)result;
  }
  if ( !(_DWORD)v10 )
    return result;
  v11 = (int)v5;
  if ( a4 > 0 )
  {
    v12 = 4LL * (int)v5;
    if ( (int)v10 > 0 )
      goto LABEL_6;
LABEL_24:
    v23 = (int *)(*a2 + v12);
    v14 = 0x7FFFFFFF;
    v18 = *v23;
    v17 = v23;
LABEL_14:
    *v17 = v18 + v14;
    return result;
  }
  v20 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
  if ( v20 == interactive_graph_t__::vfunc_19 )
  {
    v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v21 == interactive_graph_t__::vfunc_7 )
    {
      v22 = a1[46];
    }
    else
    {
      v22 = v21((__int64)a1);
      v5 = (unsigned int)v5;
    }
    if ( (int)v5 >= v22 )
      sub_16B930((__int64)"nrect(%d) failed", v5);
    v11 = (int)v5;
    result = *((_QWORD *)a1 + 28) + 16LL * (int)v5;
  }
  else
  {
    result = ((__int64 (__fastcall *)(int *))v20)(a1);
    v11 = (int)v5;
    v5 = (int)v5;
  }
  v12 = 4 * v11;
  a4 = *(_DWORD *)(result + 12) + 30 - *(_DWORD *)(result + 4);
  if ( (int)v10 <= 0 )
    goto LABEL_24;
LABEL_6:
  v13 = 0;
  v14 = 0x7FFFFFFF;
  v15 = 24 * v11;
  do
  {
    v19 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
    if ( v19 == interactive_graph_t__::vfunc_14 )
    {
      v16 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 22) + v15) + 4 * v13);
    }
    else
    {
      v25 = v15;
      v24 = v12;
      v16 = ((__int64 (__fastcall *)(int *, __int64, _QWORD, __int64, __int64, __int64 (__fastcall *)(__int64, int, int)))v19)(
              a1,
              v5,
              (unsigned int)v13,
              v12,
              v15,
              interactive_graph_t__::vfunc_14);
      v15 = v25;
      v12 = v24;
      v5 = (unsigned int)v5;
    }
    v17 = (int *)(*a2 + v12);
    v18 = *v17;
    result = (unsigned int)(*(_DWORD *)(*a2 + 4LL * v16) - (*v17 + a4));
    if ( v14 > (int)result )
      v14 = result;
    ++v13;
  }
  while ( v13 != v10 );
  if ( v14 > 0 )
    goto LABEL_14;
  return result;
}
