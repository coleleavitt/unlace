unsigned __int64 __fastcall sub_1BDB2E0(__int64 a1, unsigned int a2, _QWORD *a3, _BYTE *a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 (__fastcall *v13)(__int64, void (__fastcall ****)(_QWORD)); // r9
  __int64 v15; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v16[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( !(**(unsigned __int8 (__fastcall ***)(_BYTE *, _QWORD))a4)(a4, a3[1]) && !a4[8] )
  {
    v12 = a3[1];
    v13 = *(__int64 (__fastcall **)(__int64, void (__fastcall ****)(_QWORD)))(*(_QWORD *)a4 + 8LL);
    if ( v13 == sub_18BC650 )
      *(double *)a5.m128_u64 = (*(double (__fastcall **)(_BYTE *, _BYTE *, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 80LL))(
                                 v16,
                                 a4,
                                 a1,
                                 a2,
                                 v12);
    else
      ((void (__fastcall *)(_BYTE *, _BYTE *, __int64, _QWORD, __int64))v13)(v16, a4, a1, a2, v12);
    v15 = sub_EEC8C0((unsigned __int64)a3, (__int64)a4, *(double *)a5.m128_u64);
    sub_1587DB0((__int64)v16, &v15);
    sub_15F7200(v16);
  }
  return sub_19146F0(a1, a3, v8, v9, v10, v11, a5, a6);
}
