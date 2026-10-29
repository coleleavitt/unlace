_QWORD *__fastcall sub_1DD1930(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // r15
  size_t v6; // rax
  int v7; // eax
  int v8; // r14d
  __int64 v9; // r13
  __m128 si128; // xmm0
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // r12
  _QWORD *v21; // rax
  size_t n; // [rsp+8h] [rbp-80h]
  size_t na; // [rsp+8h] [rbp-80h]
  size_t nb; // [rsp+8h] [rbp-80h]
  void *v25; // [rsp+10h] [rbp-78h] BYREF
  __m128i v26; // [rsp+18h] [rbp-70h]
  _DWORD v27[9]; // [rsp+28h] [rbp-60h] BYREF
  char v28; // [rsp+4Ch] [rbp-3Ch]

  v4 = (_QWORD *)a2;
  v6 = *(_QWORD *)(a1 + 48);
  v26.m128i_i64[0] = a2 + 8;
  n = v6;
  v25 = *(void **)a2;
  v7 = sub_F6CCB0((__int64 *)&v25, a3);
  v8 = *(_DWORD *)(a1 + 40);
  v9 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 40) = v7;
    *(_QWORD *)(a1 + 48) = n;
  }
  if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0xB) != 0 )
    {
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
      v11 = *(_QWORD *)a2;
      na = *(_QWORD *)a2;
      v25 = v27;
      v26 = (__m128i)si128;
      v27[8] = 0;
      v28 = 0;
      v12 = sub_F6C560(v11);
      v15 = na;
      if ( (unsigned __int64)v12 > v26.m128i_i64[0] )
      {
        sub_1EA60C0(&v25);
        v15 = na;
      }
      v16 = sub_1DCE820((__int64 *)a1, (__int64)&v25, v15, (const __m128i *)(a2 + 8), si128, a4, v13, v14);
      if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        nb = v26.m128i_i64[0] - v26.m128i_i64[1];
        v21 = sub_A81BC0(
                *(_QWORD **)(*(_QWORD *)a1 + 248LL),
                v16,
                v26.m128i_i32[0] - v26.m128i_i32[2],
                v26.m128i_i64[0] - v26.m128i_i64[1],
                v17,
                v18);
        v19 = v25;
        v4 = v21;
        memcpy(v21 + 1, (char *)v25 + v26.m128i_i64[1], nb);
      }
      else
      {
        v19 = v25;
        v4 = nullptr;
      }
      if ( v19 != v27 && v19 )
        operator delete[](v19);
    }
    else
    {
      sub_18C4110(*(_QWORD *)a1, *(_DWORD *)(a1 + 40), *(_QWORD *)a2);
    }
  }
  *(_DWORD *)(a1 + 40) = v8;
  *(_QWORD *)(a1 + 48) = v9;
  return v4;
}
