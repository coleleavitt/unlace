__int64 __fastcall sub_DEBCB0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int32 v12; // ecx
  __m128i *v13; // rax
  int v14; // ecx
  __m128i v16; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v17; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v18; // [rsp+20h] [rbp-98h] BYREF
  __m128i v19; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v20[4]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v21[11]; // [rsp+60h] [rbp-58h] BYREF

  v5 = a1[22];
  v16 = _mm_loadu_si128((const __m128i *)sub_E21760(v5, 16));
  sub_E21790(v5, 16);
  v6 = a1[22];
  v17 = _mm_load_si128(&v16);
  v7 = (a3 >> 3) & 7;
  v16 = _mm_loadu_si128((const __m128i *)sub_E21760(v6, 16));
  sub_E21790(v6, 16);
  v18 = _mm_load_si128(&v16);
  v8 = sub_21F8CF0(v18.m128i_u32[2]);
  v19.m128i_i64[0] = sub_D421E0(a1, v8);
  if ( (_BYTE)v7 == 7 )
    v7 = 1;
  v19.m128i_i64[1] = v9;
  sub_CFEAE0((__int64)v20, (__int64)&v18);
  sub_CFEAE0((__int64)v21, (__int64)&v17);
  v11 = sub_21F90D0(v21, &v17, v10);
  if ( v20[0] == v11 )
    v12 = sub_2200970(v20, v21, v7);
  else
    v12 = sub_21FD850(v20, v21, v7);
  v16.m128i_i32[0] = v12;
  sub_CFED10((__int64)&v19, v20);
  sub_9955A0(v21);
  sub_9955A0(v20);
  v13 = (__m128i *)sub_E216C0(a1[22], 16);
  v14 = v16.m128i_i32[0];
  *v13 = _mm_load_si128(&v19);
  return sub_DCADA0((__int64)a1, a2, (__int64)&v19, v14, a3);
}
