__int64 __fastcall sub_D671C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int8 v6; // cl
  unsigned __int8 **v7; // rbp
  _QWORD *v8; // rdi
  __int64 (__fastcall *v9)(__int64); // rax
  _QWORD *v10; // rdi
  __int64 (*v11)(void); // rdx
  _QWORD *v12; // rdi
  _QWORD **v13; // rdi
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  _BYTE v17[80]; // [rsp+18h] [rbp-50h] BYREF

  v4 = sub_DFB220(*(_QWORD *)(a1 + 400));
  v5 = sub_E0FF50(a1, v4, 2464, 0);
  if ( v5 )
  {
    v6 = *(_BYTE *)(a3 + 12);
    v7 = (unsigned __int8 **)v5;
    ptr = v17;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
    sub_21E7D50(a3, (unsigned int)&ptr, 10, v6 ^ 1, 0, 1, 0);
    sub_AC84E0(v7, ptr, si128.m128i_i64[0]);
    if ( ptr != v17 )
      free(ptr);
    sub_AC60B0(v7, *(_QWORD *)(v4 + 8), 8u);
  }
  v8 = *(_QWORD **)(a1 + 24);
  v9 = *(__int64 (__fastcall **)(__int64))(*v8 + 32LL);
  if ( v9 == sub_CCC520 )
  {
    v10 = (_QWORD *)v8[3];
    v11 = *(__int64 (**)(void))(*v10 + 32LL);
    if ( (char *)v11 != (char *)v9 )
      return v11();
    v12 = (_QWORD *)v10[3];
    v9 = *(__int64 (__fastcall **)(__int64))(*v12 + 32LL);
    if ( (char *)v9 == (char *)v11 )
    {
      v13 = (_QWORD **)v12[3];
      v11 = (__int64 (*)(void))(*v13)[4];
      if ( (char *)v11 == (char *)v9 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v13[3] + 32LL))(v13[3]);
      return v11();
    }
  }
  return ((__int64 (*)(void))v9)();
}

