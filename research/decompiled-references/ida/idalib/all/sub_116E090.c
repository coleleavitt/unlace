void __fastcall sub_116E090(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // edx
  __int64 v7; // r12
  bool v8; // r13
  __int64 v9; // r14
  __int64 v10; // rax
  void *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rax
  _BYTE *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rax
  _BYTE *v20; // rsi
  __int64 v21; // rdx
  void **p_ptr; // [rsp+8h] [rbp-1A0h] BYREF
  char *v23; // [rsp+10h] [rbp-198h] BYREF
  __int16 v24; // [rsp+30h] [rbp-178h]
  const char *v25; // [rsp+40h] [rbp-168h] BYREF
  __int16 v26; // [rsp+60h] [rbp-148h]
  char v27[32]; // [rsp+70h] [rbp-138h] BYREF
  __int16 v28; // [rsp+90h] [rbp-118h]
  unsigned __int128 v29; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-F8h]
  __int16 v31; // [rsp+C0h] [rbp-E8h]
  void *ptr; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-D0h]
  char v34; // [rsp+E8h] [rbp-C0h] BYREF
  __int16 v35; // [rsp+F0h] [rbp-B8h]

  v5 = *(_DWORD *)(a1 + 64);
  if ( v5 > 3
    || (v6 = *(_DWORD *)(a1 + 68) & 0x7FFFFFFF, v5 == 3)
    && (v6 > 5 || v6 == 5 && *(_DWORD *)(a1 + 72) & 0x7FFFFFFF | *(_DWORD *)(a1 + 76) & 0x7FFFFFFF) )
  {
    v9 = sub_10DCD30(a2, 0xBE3u);
    v8 = v9 == 0;
    v7 = sub_10DCD30(a2, 0x848u);
    if ( sub_10DCD30(a2, 0xBD9u) )
      goto LABEL_9;
    v15 = *(__int64 **)a1;
    p_ptr = &ptr;
    v16 = (_BYTE *)v15[31];
    v17 = v15[32];
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    ptr = &v34;
    sub_A1FE50(&ptr, v16, &v16[v17]);
    if ( v9 )
    {
      v8 = 0;
    }
    else
    {
      v25 = "cuda_wrappers";
      v31 = 257;
      v28 = 257;
      v8 = 1;
      v26 = 259;
      v23 = "include";
      v24 = 259;
      sub_228A3B0(&ptr, &v23, &v25, v27, &v29);
    }
LABEL_22:
    sub_10DC5D0(a3, (__int64)"-internal-isystem");
    v31 = 261;
    v29 = __PAIR128__(si128.m128i_u64[0], (unsigned __int64)ptr);
    v18 = sub_10DA6C0(a2, (__int64)&v29);
    sub_10DC5D0(a3, v18);
    if ( ptr != p_ptr + 3 )
      free(ptr);
    goto LABEL_9;
  }
  v7 = sub_10DCD30(a2, 0x848u);
  if ( !sub_10DCD30(a2, 0xBD9u) )
  {
    v19 = *(__int64 **)a1;
    v8 = 0;
    p_ptr = &ptr;
    v20 = (_BYTE *)v19[31];
    v21 = v19[32];
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    ptr = &v34;
    sub_A1FE50(&ptr, v20, &v20[v21]);
    goto LABEL_22;
  }
  v8 = 0;
LABEL_9:
  p_ptr = (void **)a3;
  v30 = a1;
  v29 = (unsigned __int128)_mm_loadh_ps((const double *)&p_ptr);
  if ( !(unsigned __int8)sub_21B7850(a2, 3085, 3016, 1) )
    goto LABEL_12;
  if ( !*(_BYTE *)(a1 + 8) )
  {
    sub_FC70B0((__int64)&ptr, **(_QWORD **)a1, 0, 433);
    sub_AEA040((__int64)&ptr);
    return;
  }
  sub_10DC5D0(a3, (__int64)"-idirafter");
  v10 = *(_QWORD *)(a1 + 344);
  v11 = *(void **)(a1 + 336);
  v35 = 261;
  ptr = v11;
  si128.m128i_i64[0] = v10;
  v12 = sub_10DA6C0(a2, (__int64)&ptr);
  sub_10DC5D0(a3, v12);
  if ( !v8 )
  {
LABEL_12:
    if ( !v7 )
      return;
    goto LABEL_13;
  }
  v13 = *(unsigned int *)(a3 + 8);
  if ( v13 + 2 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v13 + 2, 8);
    v13 = *(unsigned int *)(a3 + 8);
  }
  v14 = *(_QWORD *)a3;
  p_ptr = (void **)"__clang_hip_runtime_wrapper.h";
  *(__m128 *)(v14 + 8 * v13) = _mm_loadh_ps((const double *)&p_ptr);
  *(_DWORD *)(a3 + 8) += 2;
  if ( v7 )
LABEL_13:
    sub_116C450((__int64 *)&v29);
}
