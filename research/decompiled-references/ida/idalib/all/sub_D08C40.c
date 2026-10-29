__int64 __fastcall sub_D08C40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  void *v9; // r12
  void **p_ptr; // rax
  char v11; // bp
  unsigned int v12; // ebp
  __int64 v14; // rbp
  __int64 *v15; // r12
  void *v16; // rax
  void **v17; // rax
  char v18; // bp
  void *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r12
  unsigned __int8 **v22; // rax
  unsigned __int8 **v23; // rbp
  char v25; // [rsp+10h] [rbp-D8h]
  __int64 v26; // [rsp+18h] [rbp-D0h]
  void *v27; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-C0h]
  char v29; // [rsp+2Ch] [rbp-BCh]
  void *v30; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-B0h]
  void *v32; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-90h]
  unsigned __int8 v34; // [rsp+5Ch] [rbp-8Ch]
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __m128i si128; // [rsp+78h] [rbp-70h]
  _BYTE v37[96]; // [rsp+88h] [rbp-60h] BYREF

  sub_CFEAE0((__int64)&ptr, a4);
  v9 = (void *)sub_21F90D0(&ptr, a4, v8);
  p_ptr = (void **)si128.m128i_i64[0];
  if ( ptr != v9 )
    p_ptr = &ptr;
  v11 = *((_BYTE *)p_ptr + 20) & 7;
  sub_9955A0(&ptr);
  if ( v11 == 3 )
  {
    v14 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    v15 = (__int64 *)sub_E33C90(a1, v14, 2508, 0);
    v16 = (void *)sub_EEC8C0(*(_QWORD *)(v14 + 24));
    if ( v15 )
    {
      ptr = v16;
      si128.m128i_i8[0] = 1;
      sub_AEC610(v15, (__int64 *)&ptr);
    }
    return 1;
  }
  sub_CFEAE0((__int64)&ptr, a3);
  if ( v9 == ptr )
    v12 = sub_2202290(&ptr);
  else
    v12 = sub_21F9CC0(&ptr);
  sub_9955A0(&ptr);
  if ( !(_BYTE)v12 )
    return 1;
  sub_CFEAE0((__int64)&ptr, a4);
  v17 = &ptr;
  if ( v9 == ptr )
    v17 = (void **)si128.m128i_i64[0];
  v25 = *((_BYTE *)v17 + 20) & 8;
  sub_9955A0(&ptr);
  if ( !v25 )
    return 1;
  sub_CFEAE0((__int64)&v30, a4);
  v26 = sub_21F90B0();
  sub_21FBFD0(&ptr, -1.0);
  sub_22023D0(&v32, &ptr, v26);
  sub_21F9830(&ptr);
  sub_22028C0(&v32, v30, 1, &ptr);
  if ( v30 != v32 )
  {
    sub_9955A0(&v32);
    sub_9955A0(&v30);
    return v12;
  }
  v18 = v9 == v30 ? sub_2201080(&v30, &v32) : sub_21F96E0(&v30, &v32);
  sub_9955A0(&v32);
  sub_9955A0(&v30);
  if ( !v18 )
    return 1;
  sub_CFEAE0((__int64)&ptr, a3);
  if ( v9 == ptr )
    sub_22010F0(&v32, &ptr);
  else
    sub_21FEE00(&v32, &ptr);
  v29 = 1;
  v28 = v33;
  v27 = v32;
  sub_9955A0(&ptr);
  ptr = v37;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  sub_C16810((__int64)&v30, (__int64)&v27, v28 + 1);
  sub_C16960((__int64)&v32, (__int64)&v30);
  sub_220BA90((unsigned int)&v32, (unsigned int)&ptr, 10, v34 ^ 1, 0, 1, 0);
  if ( v33 > 0x40 && v32 )
    operator delete[](v32);
  if ( v31 > 0x40 && v30 )
    operator delete[](v30);
  v19 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v20 = *(_QWORD *)(a1 + 400);
  v32 = v19;
  v21 = sub_E1EF60(v20);
  v22 = (unsigned __int8 **)sub_E33D20(a1, &v32, 2464, 0);
  v23 = v22;
  if ( v22 )
  {
    sub_AEC220(v22, ptr, si128.m128i_i64[0]);
    sub_AE9DF0(v23, *(_QWORD *)(v21 + 8), 8u);
  }
  if ( ptr != v37 )
    free(ptr);
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  return 0;
}
