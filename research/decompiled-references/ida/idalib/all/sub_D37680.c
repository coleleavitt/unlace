__int64 __fastcall sub_D37680(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4)
{
  __int64 v6; // rbp
  __int64 *v7; // rbx
  void *v8; // rax
  void *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbp
  unsigned __int8 **v12; // rax
  unsigned __int8 **v13; // rbx
  void *v14; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-90h]
  char v16; // [rsp+Ch] [rbp-8Ch]
  void *v17; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-80h]
  void *v19; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-70h]
  unsigned __int8 v21; // [rsp+2Ch] [rbp-6Ch]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __m128i si128; // [rsp+38h] [rbp-60h]
  _BYTE v24[80]; // [rsp+48h] [rbp-50h] BYREF

  if ( !*a4 )
  {
    v6 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    v7 = (__int64 *)sub_E33C10(a1, v6, 2508, 0);
    v8 = (void *)sub_EEC8C0(*(_QWORD *)(v6 + 24));
    if ( v7 )
    {
      ptr = v8;
      si128.m128i_i8[0] = 1;
      sub_AEC610(v7, (__int64 *)&ptr);
    }
    return 0;
  }
  if ( *a3 != 0x80 || *a4 != 0xFF )
    return 1;
  ptr = v24;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  v15 = 8;
  v14 = &qword_80;
  v16 = 0;
  sub_C16810((__int64)&v17, (__int64)&v14, 9);
  sub_C16960((__int64)&v19, (__int64)&v17);
  sub_220BA90((unsigned int)&v19, (unsigned int)&ptr, 10, v21 ^ 1, 0, 1, 0);
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  v9 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v10 = *(_QWORD *)(a1 + 400);
  v19 = v9;
  v11 = sub_E1EF60(v10);
  v12 = (unsigned __int8 **)sub_E33D20(a1, &v19, 2464, 0);
  v13 = v12;
  if ( v12 )
  {
    sub_AEC220(v12, ptr, si128.m128i_i64[0]);
    sub_AE9DF0(v13, *(_QWORD *)(v11 + 8), 8u);
  }
  if ( ptr != v24 )
    free(ptr);
  if ( v15 <= 0x40 || !v14 )
    return 0;
  operator delete[](v14);
  return 0;
}
