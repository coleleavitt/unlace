__int64 __fastcall sub_D32AC0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  unsigned int v7; // eax
  unsigned int v8; // r14d
  __int32 v9; // r15d
  void *v10; // rsi
  __int32 v12; // ebx
  void *v13; // r15
  bool v14; // bl
  void *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r13
  unsigned __int8 **v18; // rax
  unsigned __int8 **v19; // rbx
  __int64 v20; // rbx
  __int64 *v21; // rbp
  void *v22; // rax
  void *v24; // [rsp+8h] [rbp-B0h]
  void *v25; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-A0h]
  void *v27; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-90h]
  void *v29; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-80h]
  unsigned __int8 v31; // [rsp+3Ch] [rbp-7Ch]
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __m128i si128; // [rsp+48h] [rbp-70h]
  _BYTE v34[96]; // [rsp+58h] [rbp-60h] BYREF

  v7 = sub_D29E30(a4);
  if ( (_BYTE)v7 )
  {
    v20 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v21 = (__int64 *)sub_E0FED0(a1, v20, 2508, 0);
    v22 = (void *)sub_EC8B80(*(_QWORD *)(v20 + 24));
    if ( v21 )
    {
      ptr = v22;
      si128.m128i_i8[0] = 1;
      sub_AC88D0(v21, (__int64 *)&ptr);
    }
    return 0;
  }
  else
  {
    v8 = v7;
    sub_D279E0((__int64)&ptr, a3);
    if ( si128.m128i_i32[0] <= 0x40u )
    {
      if ( ptr != (void *)(1LL << (si128.m128i_i8[0] - 1)) )
        return 1;
    }
    else
    {
      v10 = ptr;
      if ( ((1LL << (si128.m128i_i8[0] - 1)) & *((_QWORD *)ptr + ((unsigned int)(si128.m128i_i32[0] - 1) >> 6))) == 0
        || (v24 = ptr, v10 = ptr, v9 = si128.m128i_i32[0] - 1, v9 != (unsigned int)sub_21E2B70(&ptr)) )
      {
        if ( v10 )
          operator delete[](v10);
        return 1;
      }
      if ( v24 )
        operator delete[](v24);
    }
    if ( !(unsigned __int8)sub_D31740(a4) )
      return 1;
    sub_D279E0((__int64)&ptr, a4);
    v12 = si128.m128i_i32[0];
    if ( si128.m128i_i32[0] )
    {
      v13 = ptr;
      if ( si128.m128i_i32[0] <= 0x40u )
      {
        v14 = ptr == (void *)(0xFFFFFFFFFFFFFFFFLL >> (64 - si128.m128i_i8[0]));
      }
      else
      {
        v14 = v12 == (unsigned int)sub_21E2C40(&ptr);
        if ( v13 )
          operator delete[](v13);
      }
      if ( !v14 )
        return 1;
    }
    sub_D27A40((__int64)&v25, (__int64)a3, 0);
    ptr = v34;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
    sub_BF2AD0((__int64)&v27, (__int64)&v25, v26 + 1);
    sub_BF2C20((__int64)&v29, (__int64)&v27);
    sub_21E7D50((unsigned int)&v29, (unsigned int)&ptr, 10, v31 ^ 1, 0, 1, 0);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
    v15 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v16 = *(_QWORD *)(a1 + 400);
    v29 = v15;
    v17 = sub_DFB220(v16);
    v18 = (unsigned __int8 **)sub_E0FFE0(a1, &v29, 2464, 0);
    v19 = v18;
    if ( v18 )
    {
      sub_AC84E0(v18, ptr, si128.m128i_i64[0]);
      sub_AC60B0(v19, *(_QWORD *)(v17 + 8), 8u);
    }
    if ( ptr != v34 )
      free(ptr);
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
  }
  return v8;
}

