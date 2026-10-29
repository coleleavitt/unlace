__int64 __fastcall sub_7D87B0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r13
  __int64 (__fastcall *v3)(__int64, unsigned int *, unsigned __int8); // rax
  double v5; // xmm0_8
  int v6; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64); // r14
  __int64 (*v9)(void); // rax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned int v13; // eax

  v2 = a1 - 48;
  v3 = *(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8))(*(_QWORD *)(a1 - 48) + 536LL);
  if ( v3 != sub_7D4220 )
    return ((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD, _QWORD))v3)(a1 - 48, a2, 0, 0);
  v5 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 152LL) + 40LL))(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 152LL));
  sub_79B540(*(_QWORD *)(a1 + 32), 2 * v6, a2, v5);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 48) + 528LL);
  v9 = *(__int64 (**)(void))(*(_QWORD *)v7 + 440LL);
  if ( (char *)v9 == (char *)sub_79F010 )
    v10 = v7 + 1592;
  else
    v10 = v9();
  v11 = *(_QWORD *)(v10 + 128);
  if ( v11 )
  {
    v12 = *a2;
    if ( (unsigned int)v12 >= *(_DWORD *)(v11 - 4) )
      v11 = 0;
    else
      v11 = *(_QWORD *)(v11 + 8 * v12);
  }
  if ( v8 != sub_7D4100 )
    return v8(v2, v11);
  v13 = sub_7E69A0(v2, v11);
  return sub_13D7950(*(_QWORD *)(a1 + 32) + 1592LL, v11, v13, *(unsigned int *)(a1 - 36));
}

