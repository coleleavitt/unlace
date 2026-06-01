void __fastcall sub_141AC30(__int64 a1, int *a2, char a3, double a4, double a5)
{
  signed __int64 v6; // r14
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  int v12; // ecx
  unsigned __int8 *v13; // [rsp+8h] [rbp-130h]
  unsigned __int8 *v14; // [rsp+10h] [rbp-128h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-120h]
  void *ptr; // [rsp+60h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-D0h]
  _BYTE v18[192]; // [rsp+78h] [rbp-C0h] BYREF

  v6 = 0;
  v9 = *(_QWORD *)(a1 + 1112);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v18;
  sub_13DB780(v9, &ptr, si128, a5);
  v14 = (unsigned __int8 *)ptr;
  v15 = si128.m128i_i64[0];
  v10 = sub_2246F60(&v14, 32, 0);
  v11 = v15;
  if ( v10 < v15 )
  {
    v6 = v15 - v10;
    v11 = v10;
  }
  v12 = 1287;
  v13 = &v14[v11];
  if ( !a3 )
    v12 = 1134;
  sub_FC70B0((__int64)&v14, *(_QWORD *)(a1 + 48), *a2, v12);
  sub_AEC220(&v14, v13, v6);
  sub_AEA040((__int64)&v14);
  if ( ptr != v18 )
    free(ptr);
}
