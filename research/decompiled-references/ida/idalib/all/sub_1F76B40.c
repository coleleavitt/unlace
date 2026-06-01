void __fastcall sub_1F76B40(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdi
  volatile signed __int32 *v6; // rax
  __int64 v7; // rsi
  unsigned int v8; // [rsp+4h] [rbp-314h]
  __int128 v10; // [rsp+10h] [rbp-308h] BYREF
  void *v11; // [rsp+20h] [rbp-2F8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-2F0h]
  _DWORD v13[6]; // [rsp+30h] [rbp-2E8h] BYREF
  void *v14; // [rsp+48h] [rbp-2D0h]
  __int64 v15; // [rsp+50h] [rbp-2C8h]
  __int64 v16; // [rsp+58h] [rbp-2C0h] BYREF
  void *ptr; // [rsp+70h] [rbp-2A8h] BYREF
  __m128i si128; // [rsp+78h] [rbp-2A0h]
  _BYTE v19[72]; // [rsp+88h] [rbp-290h] BYREF
  void *v20; // [rsp+D0h] [rbp-248h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-240h]
  _BYTE v22[568]; // [rsp+E0h] [rbp-238h] BYREF

  sub_A25970(*(_QWORD *)(a1 + 16), 0x12u, 4u);
  sub_1F6B880(&v10);
  sub_A1FE00(v10, 1, 1);
  sub_A1FE00(v10, 6, 4);
  sub_A1FE00(v10, 6, 4);
  sub_A1FE00(v10, 6, 4);
  sub_A1FE00(v10, 6, 4);
  sub_A1FE00(v10, 0, 10);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *((volatile signed __int32 **)&v10 + 1);
  v20 = (void *)v10;
  v10 = 0;
  v21 = (__int64)v6;
  v8 = sub_A22F90(v5, (__int64 *)&v20);
  if ( v21 )
    sub_4343A0((volatile signed __int32 *)v21);
  v7 = a3[1];
  v20 = v22;
  v21 = 0x4000000000LL;
  (*(void (__fastcall **)(void **))(*(_QWORD *)v7 + 40LL))(&v11);
  sub_9B9C90((__int64)&v20, 1);
  sub_9B9C90((__int64)&v20, v13[4]);
  sub_9B9C90((__int64)&v20, v13[5]);
  sub_9B9C90((__int64)&v20, v12);
  sub_9B9C90((__int64)&v20, v15);
  ptr = v19;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  sub_A1FE50(&ptr, v11, (_BYTE *)v11 + v12);
  sub_A1FE50(&ptr, v14, (_BYTE *)v14 + v15);
  sub_1F76680(
    *(_QWORD *)(a1 + 16),
    v8,
    (unsigned __int8 *)v20,
    (unsigned int)v21,
    (unsigned __int64)ptr,
    si128.m128i_i64[0]);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a3 + 16LL))(a3, a2, *(_QWORD *)(a1 + 16));
  sub_A25550(*(_QWORD *)(a1 + 16));
  if ( ptr != v19 )
    free(ptr);
  if ( v14 != &v16 )
    operator delete(v14);
  if ( v11 != v13 )
    operator delete(v11);
  if ( v20 != v22 )
    free(v20);
  if ( *((_QWORD *)&v10 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v10 + 1));
}
