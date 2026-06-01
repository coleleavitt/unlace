void **__fastcall sub_194C930(__int64 *a1, void **a2, __m128 a3, __m128 a4)
{
  void *v5; // rcx
  void **v6; // rbx
  __int64 v8; // r14
  __m128 si128; // xmm0
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rbp
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  size_t v19; // r12
  void **v20; // rax
  __m128 v21; // [rsp+0h] [rbp-88h] BYREF
  __m128 v22; // [rsp+10h] [rbp-78h] BYREF
  void *v23; // [rsp+20h] [rbp-68h] BYREF
  __m128i v24; // [rsp+28h] [rbp-60h]
  _DWORD v25[9]; // [rsp+38h] [rbp-50h] BYREF
  char v26; // [rsp+5Ch] [rbp-2Ch]

  v5 = *a2;
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 20 )
    return sub_1946B40(a1, a2, a3, a4);
  v21.m128_u64[0] = (unsigned __int64)a2;
  v23 = v5;
  v24.m128i_i64[0] = (__int64)(a2 + 1);
  sub_F6CCB0((__int64 *)&v23, a3);
  v8 = (__int64)*a2;
  v6 = a2;
  if ( ((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return v6;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v10 = *(_QWORD *)v21.m128_u64[0];
  v25[8] = 0;
  v23 = v25;
  v24 = (__m128i)si128;
  v26 = 0;
  v11 = sub_F6C560(v10);
  if ( (unsigned __int64)v11 > v24.m128i_i64[0] )
    sub_1EA60C0(&v23);
  v21.m128_u64[0] = (unsigned __int64)(a2 + 1);
  v21 = _mm_loadh_ps((const double *)v21.m128_u64);
  if ( v8 & 7 | (v8 >> 3) & 1 && v8 )
  {
    v17 = sub_F6C520(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
    v22.m128_u64[0] = v17 * ((a2 + 1 != nullptr) + ((unsigned __int64)a2 - (a2 + 1 != nullptr) + 8) / v17);
    v22 = _mm_loadh_ps((const double *)v22.m128_u64);
    v18 = sub_194C7B0(a1, (__int64)&v23, v22.m128_i64[0], v22.m128_i64[1], 1u);
    if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v12 = sub_18D0A20(a1, v18, v21.m128_i64[0], v21.m128_i64[1], si128);
      if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_16;
    }
  }
  else
  {
    v12 = sub_194C7B0(a1, (__int64)&v23, v21.m128_i64[0], v21.m128_i64[1], 1u);
    if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
LABEL_16:
      v19 = v24.m128i_i64[0] - v24.m128i_i64[1];
      v20 = (void **)sub_A81BC0(*(_QWORD **)(*a1 + 248), v12, v24.m128i_i32[0] - v24.m128i_i32[2], v13, v14, v15);
      v16 = v23;
      v6 = v20;
      memcpy(v20 + 1, (char *)v23 + v24.m128i_i64[1], v19);
      goto LABEL_10;
    }
  }
  v16 = v23;
  v6 = nullptr;
LABEL_10:
  if ( v16 != v25 && v16 )
    operator delete[](v16);
  return v6;
}
