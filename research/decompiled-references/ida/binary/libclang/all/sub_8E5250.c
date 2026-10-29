__int64 __fastcall sub_8E5250(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int8 v6; // cl
  unsigned __int8 **v7; // rbp
  _QWORD *v8; // rdi
  __int64 (*v9)(void); // rax
  _QWORD *v10; // rdi
  __int64 (*v11)(void); // rdx
  _QWORD *v12; // rdi
  _QWORD **v13; // rdi
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  _BYTE v17[80]; // [rsp+18h] [rbp-50h] BYREF

  v4 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v5 = sub_A2E240(a1, v4, 2262, 0);
  if ( v5 )
  {
    v6 = *(_BYTE *)(a3 + 12);
    ptr = v17;
    v7 = (unsigned __int8 **)v5;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    sub_2593F40(a3, (unsigned int)&ptr, 10, v6 ^ 1, 0, 1, 0);
    sub_838D50(v7, ptr, si128.m128i_u64[0]);
    if ( ptr != v17 )
      free(ptr);
    sub_8D69A0(v7, *(_QWORD *)(v4 + 8));
  }
  v8 = *(_QWORD **)(a1 + 24);
  v9 = *(__int64 (**)(void))(*v8 + 32LL);
  if ( (char *)v9 != (char *)sub_8D7FC0 )
    return v9();
  v10 = (_QWORD *)v8[3];
  v11 = *(__int64 (**)(void))(*v10 + 32LL);
  if ( v11 == v9 )
  {
    v12 = (_QWORD *)v10[3];
    v9 = *(__int64 (**)(void))(*v12 + 32LL);
    if ( v9 != v11 )
      return v9();
    v13 = (_QWORD **)v12[3];
    v11 = (__int64 (*)(void))(*v13)[4];
    if ( v11 == v9 )
    {
      v9 = *(__int64 (**)(void))(*v13[3] + 32LL);
      return v9();
    }
  }
  return v11();
}

