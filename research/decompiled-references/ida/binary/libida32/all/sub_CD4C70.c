__int64 __fastcall sub_CD4C70(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r12
  unsigned __int8 **v5; // rax
  unsigned __int8 **v6; // rbp
  _QWORD **v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax

  v4 = sub_DFB220(*(_QWORD *)(a1 + 400));
  v5 = (unsigned __int8 **)sub_E0FF50(a1, v4, 2464, 0);
  if ( v5 )
  {
    v6 = v5;
    sub_AC60B0(v5, *a3, 2u);
    sub_AC60B0(v6, *(_QWORD *)(v4 + 8), 8u);
  }
  v7 = *(_QWORD ***)(a1 + 24);
  v8 = (__int64 (__fastcall *)(__int64))(*v7)[4];
  if ( v8 == sub_CCC520 )
    v8 = *(__int64 (__fastcall **)(__int64))(*v7[3] + 32LL);
  return ((__int64 (*)(void))v8)();
}

