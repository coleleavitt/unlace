__int64 __fastcall sub_DEB3F0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rax
  __m128i v9; // rax
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int32 v13; // ecx
  __m128i *v14; // rax
  int v15; // ecx
  __m128i v16; // [rsp+0h] [rbp-C8h] BYREF
  char v17; // [rsp+1Fh] [rbp-A9h]
  __m128i v18; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v19; // [rsp+30h] [rbp-98h] BYREF
  __m128i v20; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v21[4]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v22[11]; // [rsp+70h] [rbp-58h] BYREF

  v5 = a1[22];
  v16 = _mm_loadu_si128((const __m128i *)sub_E21760(v5, 16));
  sub_E21790(v5, 16);
  v6 = a1[22];
  v18 = _mm_load_si128(&v16);
  v16 = _mm_loadu_si128((const __m128i *)sub_E21760(v6, 16));
  sub_E21790(v6, 16);
  v19 = _mm_load_si128(&v16);
  result = sub_D08C40((__int64)a1, a2, (__int64)&v19, (__int64)&v18);
  if ( (_BYTE)result )
  {
    v8 = sub_21F8CF0(v19.m128i_u32[2]);
    v9.m128i_i64[0] = sub_D421E0(a1, v8);
    v20 = v9;
    v10 = (a3 >> 3) & 7;
    if ( ((a3 >> 3) & 7) == 7 )
      LOBYTE(v10) = 1;
    v16.m128i_i8[0] = v10;
    v17 = v10;
    sub_CFEAE0((__int64)v21, (__int64)&v19);
    sub_CFEAE0((__int64)v22, (__int64)&v18);
    v12 = sub_21F90D0(v22, &v18, v11);
    if ( v21[0] == v12 )
      v13 = sub_22014F0(v21, v22, v16.m128i_u8[0]);
    else
      v13 = sub_21FD480(v21, v22, v16.m128i_u8[0]);
    v16.m128i_i32[0] = v13;
    sub_CFED10((__int64)&v20, v21);
    sub_9955A0(v22);
    sub_9955A0(v21);
    v14 = (__m128i *)sub_E216C0(a1[22], 16);
    v15 = v16.m128i_i32[0];
    *v14 = _mm_load_si128(&v20);
    return sub_DCADA0((__int64)a1, a2, (__int64)&v20, v15, a3);
  }
  return result;
}
