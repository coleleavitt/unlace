__int64 __fastcall sub_4A2140(__int64 a1, unsigned int a2, const __m128i *a3, __int64 a4)
{
  int v6; // r14d
  __m128i v8; // xmm0
  __int32 v9; // eax
  __int64 v10; // rdi
  __m128i v11; // xmm0
  size_t v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // ebx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  void *src; // [rsp+0h] [rbp-C8h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-C0h]
  _OWORD v22[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int32 v23; // [rsp+40h] [rbp-88h]
  void *ptr; // [rsp+48h] [rbp-80h]
  void *v25; // [rsp+50h] [rbp-78h]
  __int128 v26; // [rsp+58h] [rbp-70h]
  __int64 v27; // [rsp+68h] [rbp-60h]
  __int128 v28; // [rsp+70h] [rbp-58h]
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v6 = *(_DWORD *)(a1 + 24);
  v29 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 1, 1);
  n[0] = 1;
  *(_BYTE *)src = 0;
  v8 = _mm_loadu_si128(a3);
  v9 = a3[2].m128i_i32[0];
  v10 = a3[2].m128i_i64[1];
  ptr = nullptr;
  v22[0] = v8;
  v11 = _mm_loadu_si128(a3 + 1);
  v23 = v9;
  v22[1] = v11;
  if ( v10 )
    ptr = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v12 = n[0];
  v25 = nullptr;
  v26 = 0;
  if ( n[0] )
  {
    v25 = (void *)qalloc_or_throw(n[0], nullptr);
    *((_QWORD *)&v26 + 1) = v12;
    memcpy(v25, src, v12);
    *(_QWORD *)&v26 = v12;
  }
  v27 = 0;
  v28 = 0;
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  sub_4A1920(qword_2CA1698, v6, a2, (__int64)v22, 1);
  sub_4A11A0(v22);
  sub_4A2090((__int64 *)a1, a2, a4);
  v13 = a3[2].m128i_i64[1];
  v14 = *(_QWORD *)(a1 + 16);
  v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, v14);
  if ( *(_DWORD *)(a1 + 28) == 7 || (get_merge_state(v13, v14) & 2) != 0 )
    return v29 - __readfsqword(0x28u);
  else
    return sub_514A50(*(_DWORD *)(a1 + 28), 1, v15, v17, v18, v19);
}

