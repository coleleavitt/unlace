unsigned __int64 __fastcall sub_179C050(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        char a5,
        double a6,
        double a7)
{
  __int64 v7; // r9
  unsigned __int64 result; // rax
  __int64 v12; // rbx
  __m128i si128; // xmm0
  _DWORD *v14; // rdx
  __int64 v15; // rdx
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  _DWORD *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  size_t v26; // rbp
  _QWORD *v27; // r12
  unsigned __int64 v28; // [rsp+0h] [rbp-80h]
  void *v29; // [rsp+8h] [rbp-78h] BYREF
  __m128i v30; // [rsp+10h] [rbp-70h]
  _DWORD v31[9]; // [rsp+20h] [rbp-60h] BYREF
  char v32; // [rsp+44h] [rbp-3Ch]

  v7 = 0x1A1800020020000LL;
  if ( !_bittest64(&v7, *(unsigned __int8 *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)) )
    return a3;
  if ( !a2 || (!*(_DWORD *)a2 || !*(_DWORD *)(a2 + 4)) && !*(_QWORD *)(a2 + 8) )
    return sub_A76250(*(_QWORD *)(a1 + 248), 6, 0, a3, 0);
  result = sub_1E5F850(a1, 6, a2, a3, 0);
  v12 = result;
  if ( a5 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v31[8] = 0;
    v29 = v31;
    v30 = si128;
    v32 = 0;
    sub_1EA6140(&v29, a3, 4, 4);
    *v14 = a4;
    v15 = 16;
    if ( (unsigned __int8)(*(_WORD *)(v12 + 18) >> 3) == 6 )
      v15 = 16LL * (*(_QWORD *)(v12 + 32) != 0);
    v20 = sub_1EA6140(&v29, v12, v15, 8);
    v21 = v16;
    if ( (unsigned __int8)(*(_WORD *)(v20 + 18) >> 3) != 6 || *(_QWORD *)(v20 + 32) )
      *v16 = 0;
    sub_15AB9E0(a2, *(_QWORD **)(a1 + 248), (__int64)v16, v17, v18, v19);
    if ( (unsigned __int8)(*(_WORD *)(v20 + 18) >> 3) != 6 || *(_QWORD *)(v20 + 32) )
      *((_QWORD *)v21 + 1) = v22;
    v26 = v30.m128i_i64[0] - v30.m128i_i64[1];
    v27 = sub_A81BC0(*(_QWORD **)(a1 + 248), v12, v30.m128i_i32[0] - v30.m128i_i32[2], v23, v24, v25);
    memcpy(v27 + 1, (char *)v29 + v30.m128i_i64[1], v26);
    result = sub_1E61050(a1, v12, v27, *(double *)si128.m128i_i64, a7);
    if ( v29 )
    {
      if ( v29 != v31 )
      {
        v28 = result;
        operator delete[](v29);
        return v28;
      }
    }
  }
  return result;
}
