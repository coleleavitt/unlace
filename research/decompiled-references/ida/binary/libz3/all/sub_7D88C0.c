__int64 __fastcall sub_7D88C0(__int64 *a1, unsigned int *a2)
{
  __int64 (__fastcall *v3)(__int64, unsigned int *, unsigned __int8); // rax
  double v4; // xmm0_8
  int v5; // eax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64); // r13
  __int64 (*v8)(void); // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned int v12; // eax

  v3 = *(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8))(*a1 + 536);
  if ( v3 != sub_7D4220 )
    return ((__int64 (__fastcall *)(__int64 *, unsigned int *, _QWORD, _QWORD))v3)(a1, a2, 0, 0);
  v4 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1[10] + 152) + 40LL))(*(_QWORD *)(a1[10] + 152));
  sub_79B540(a1[10], 2 * v5, a2, v4);
  v6 = a1[10];
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 528);
  v8 = *(__int64 (**)(void))(*(_QWORD *)v6 + 440LL);
  if ( (char *)v8 == (char *)sub_79F010 )
    v9 = v6 + 1592;
  else
    v9 = v8();
  v10 = *(_QWORD *)(v9 + 128);
  if ( v10 )
  {
    v11 = *a2;
    if ( (unsigned int)v11 >= *(_DWORD *)(v10 - 4) )
      v10 = 0;
    else
      v10 = *(_QWORD *)(v10 + 8 * v11);
  }
  if ( v7 != sub_7D4100 )
    return v7((__int64)a1, v10);
  v12 = sub_7E69A0(a1, v10);
  return sub_13D7950(a1[10] + 1592, v10, v12, *((unsigned int *)a1 + 3));
}

