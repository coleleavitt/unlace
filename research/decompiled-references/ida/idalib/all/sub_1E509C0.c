_QWORD *__fastcall sub_1E509C0(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, __m128 a5)
{
  void *v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r15
  unsigned int *v14; // rdx
  size_t v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  _DWORD *v20; // rbp
  __int64 *v22; // [rsp+0h] [rbp-88h]
  void *v23; // [rsp+10h] [rbp-78h] BYREF
  __m128i si128; // [rsp+18h] [rbp-70h]
  _DWORD v25[9]; // [rsp+28h] [rbp-60h] BYREF
  char v26; // [rsp+4Ch] [rbp-3Ch]

  v7 = (void *)*a2;
  si128.m128i_i64[0] = (__int64)(a2 + 1);
  v22 = a2 + 1;
  v23 = v7;
  v8 = (unsigned int)sub_F6CE20((__int64 *)&v23);
  v9 = (v8 << 32) | (unsigned int)sub_F6CCB0((__int64 *)&v23, a5);
  v10 = nullptr;
  v11 = sub_1E503F0(a1, *a2, v9, a3, a4);
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v12 = *a2;
    v13 = v11;
    v23 = v25;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v25[8] = 0;
    v26 = 0;
    sub_1EA6360(&v23, v12, v22);
    sub_1EA6140(&v23, v13, 4, 4);
    *v14 = a3;
    v15 = si128.m128i_i64[0] - si128.m128i_i64[1];
    v19 = sub_A81BC0(*(_QWORD **)(a1 + 248), v13, si128.m128i_i32[0] - si128.m128i_i32[2], v16, v17, v18);
    v20 = v23;
    v10 = v19;
    memcpy(v19 + 1, (char *)v23 + si128.m128i_i64[1], v15);
    if ( v20 != v25 )
    {
      if ( v20 )
        operator delete[](v20);
    }
  }
  return v10;
}
