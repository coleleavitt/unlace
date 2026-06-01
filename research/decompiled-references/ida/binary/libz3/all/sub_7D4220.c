__int64 __fastcall sub_7D4220(__int64 a1, unsigned int *a2, unsigned __int8 a3)
{
  double v5; // xmm0_8
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdi
  int v9; // r14d
  __int64 (__fastcall *v10)(__int64, __int64); // r15
  __int64 (*v11)(void); // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned int v15; // eax

  v5 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 152LL) + 40LL))(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 152LL));
  v7 = sub_79B540(*(_QWORD *)(a1 + 80), 2 * v6, a2, v5);
  v8 = *(_QWORD *)(a1 + 80);
  v9 = v7;
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 528LL);
  v11 = *(__int64 (**)(void))(*(_QWORD *)v8 + 440LL);
  if ( (char *)v11 == (char *)sub_79F010 )
    v12 = v8 + 1592;
  else
    v12 = v11();
  v13 = *(_QWORD *)(v12 + 128);
  if ( v13 )
  {
    v14 = *a2;
    if ( (unsigned int)v14 >= *(_DWORD *)(v13 - 4) )
      v13 = 0;
    else
      v13 = *(_QWORD *)(v13 + 8 * v14);
  }
  if ( v10 == sub_7D4100 )
  {
    v15 = sub_7E69A0(a1, v13);
    sub_13D7950(*(_QWORD *)(a1 + 80) + 1592LL, v13, v15, *(unsigned int *)(a1 + 12));
  }
  else
  {
    v10(a1, v13);
  }
  return v9 ^ (unsigned int)a3;
}

