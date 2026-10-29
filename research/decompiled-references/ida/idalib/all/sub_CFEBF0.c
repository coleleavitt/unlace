__int64 __fastcall sub_CFEBF0(__int64 a1, __int64 (__fastcall *a2)(__int64, _QWORD), __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  char v11; // bl
  __m128i v13; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v14; // [rsp+10h] [rbp-98h] BYREF
  __m128i v15; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v16[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v17[11]; // [rsp+50h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 176);
  v13 = _mm_loadu_si128((const __m128i *)sub_E21760(v5, 16));
  sub_E21790(v5, 16);
  v6 = *(_QWORD *)(a1 + 176);
  v15 = _mm_load_si128(&v13);
  v13 = _mm_loadu_si128((const __m128i *)sub_E21760(v6, 16));
  sub_E21790(v6, 16);
  v7 = *(_QWORD *)(a1 + 176);
  v14 = _mm_load_si128(&v13);
  sub_CFEAE0((__int64)v17, (__int64)&v14);
  sub_CFEAE0((__int64)v16, (__int64)&v15);
  v9 = sub_21F90D0(v16, &v15, v8);
  if ( v17[0] == v9 )
    v10 = (unsigned int)sub_2201020(v17, v16);
  else
    v10 = (unsigned int)sub_21FA440(v17, v16);
  sub_9955A0(v16);
  sub_9955A0(v17);
  v11 = a2(a3, byte_23F08B8[v10]);
  *(_BYTE *)sub_E216C0(v7, 8) = v11;
  return 1;
}
