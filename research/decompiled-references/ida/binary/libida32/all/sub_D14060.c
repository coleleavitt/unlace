__int64 __fastcall sub_D14060(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v5; // rax
  bool v6; // cl
  __int64 v8; // rbp
  __int64 *v9; // rbx
  void *v10; // rax
  void *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbp
  unsigned __int8 **v14; // rax
  unsigned __int8 **v15; // rbx
  void *v16; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v17; // [rsp+8h] [rbp-90h]
  char v18; // [rsp+Ch] [rbp-8Ch]
  void *v19; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-80h]
  void *v21; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-70h]
  unsigned __int8 v23; // [rsp+2Ch] [rbp-6Ch]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __m128i si128; // [rsp+38h] [rbp-60h]
  _BYTE v26[80]; // [rsp+48h] [rbp-50h] BYREF

  v5 = *a4;
  v6 = *a4 == -1;
  if ( !v5 )
  {
    v8 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v9 = (__int64 *)sub_E0FED0(a1, v8, 2508, 0);
    v10 = (void *)sub_EC8B80(*(_QWORD *)(v8 + 24));
    if ( v9 )
    {
      ptr = v10;
      si128.m128i_i8[0] = 1;
      sub_AC88D0(v9, (__int64 *)&ptr);
    }
    return 0;
  }
  if ( *a3 != 0x8000000000000000LL || !v6 )
    return 1;
  v16 = (void *)0x8000000000000000LL;
  v17 = 64;
  ptr = v26;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
  v18 = 0;
  sub_BF2AD0((__int64)&v19, (__int64)&v16, 65);
  sub_BF2C20((__int64)&v21, (__int64)&v19);
  sub_21E7D50((unsigned int)&v21, (unsigned int)&ptr, 10, v23 ^ 1, 0, 1, 0);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  v11 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v12 = *(_QWORD *)(a1 + 400);
  v21 = v11;
  v13 = sub_DFB220(v12);
  v14 = (unsigned __int8 **)sub_E0FFE0(a1, &v21, 2464, 0);
  v15 = v14;
  if ( v14 )
  {
    sub_AC84E0(v14, ptr, si128.m128i_i64[0]);
    sub_AC60B0(v15, *(_QWORD *)(v13 + 8), 8u);
  }
  if ( ptr != v26 )
    free(ptr);
  if ( v17 <= 0x40 || !v16 )
    return 0;
  operator delete[](v16);
  return 0;
}

