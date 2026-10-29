_QWORD *__fastcall sub_1CF6590(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rbp
  void *v6; // rax
  __int64 v7; // r12
  int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // r15
  __int64 v11; // r12
  __m128 si128; // xmm0
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  _DWORD *v21; // r12
  size_t v22; // r14
  _QWORD *v23; // rax
  unsigned int v24; // [rsp+Ch] [rbp-7Ch]
  unsigned int v25; // [rsp+Ch] [rbp-7Ch]
  unsigned int v26; // [rsp+Ch] [rbp-7Ch]
  void *v27; // [rsp+10h] [rbp-78h] BYREF
  __m128i v28; // [rsp+18h] [rbp-70h]
  _DWORD v29[9]; // [rsp+28h] [rbp-60h] BYREF
  char v30; // [rsp+4Ch] [rbp-3Ch]

  v4 = (_QWORD *)a2;
  v6 = *(void **)a2;
  v7 = *(_QWORD *)(a1 + 40);
  v28.m128i_i64[0] = a2 + 8;
  v27 = v6;
  v8 = sub_F6CCB0((__int64 *)&v27, a3);
  v9 = *(_DWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 40);
  if ( v8 )
  {
    *(_DWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 40) = v7;
  }
  v11 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0LL) != 0
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0 )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v14 = *(_QWORD *)a2;
    v24 = v9;
    v27 = v29;
    v28 = (__m128i)si128;
    v29[8] = 0;
    v30 = 0;
    v15 = sub_F6C560(v14);
    v17 = v24;
    if ( (unsigned __int64)v15 > v28.m128i_i64[0] )
    {
      sub_1EA60C0(&v27);
      v17 = v24;
    }
    v25 = v17;
    v18 = sub_1CF4B60((__int64 *)a1, (__int64)&v27, v11, (__m128i *)(a2 + 8), v17, v16, si128, a4);
    v9 = v25;
    if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v22 = v28.m128i_i64[0] - v28.m128i_i64[1];
      v23 = sub_A81BC0(*(_QWORD **)(*(_QWORD *)a1 + 248LL), v18, v28.m128i_i32[0] - v28.m128i_i32[2], v19, v25, v20);
      v21 = v27;
      v4 = v23;
      memcpy(v23 + 1, (char *)v27 + v28.m128i_i64[1], v22);
      v9 = v25;
    }
    else
    {
      v21 = v27;
      v4 = nullptr;
    }
    if ( v21 != v29 && v21 )
    {
      v26 = v9;
      operator delete[](v21);
      v9 = v26;
    }
  }
  *(_QWORD *)(a1 + 40) = v10;
  *(_DWORD *)(a1 + 32) = v9;
  return v4;
}
