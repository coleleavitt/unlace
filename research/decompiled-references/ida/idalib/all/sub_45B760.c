bool __fastcall sub_45B760(__int64 a1, int a2, __int64 a3, char a4, double a5, double a6, __m128 a7)
{
  __m128 v9; // xmm0
  __int64 *v10; // r12
  __m128i si128; // xmm1
  signed __int64 v12; // r13
  bool result; // al
  void *v14; // rdx
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  signed __int64 v20; // rax
  unsigned int v21; // r9d
  int v22; // [rsp+0h] [rbp-68h]
  int v23; // [rsp+0h] [rbp-68h]
  int v24; // [rsp+0h] [rbp-68h]
  int v25; // [rsp+0h] [rbp-68h]
  int v26[2]; // [rsp+8h] [rbp-60h]
  int v27[2]; // [rsp+8h] [rbp-60h]
  int v28; // [rsp+8h] [rbp-60h]
  int v29; // [rsp+8h] [rbp-60h]
  void *ptr[2]; // [rsp+10h] [rbp-58h] BYREF
  int v31; // [rsp+20h] [rbp-48h]
  int v32[2]; // [rsp+28h] [rbp-40h]
  __int64 v33; // [rsp+30h] [rbp-38h]

  *(_QWORD *)v32 = __readfsqword(0x28u);
  v9.m128_u64[0] = 0;
  v10 = *(__int64 **)(switch_dbctx(*(int *)(a1 + 4LL * a2 + 360)) + 1672);
  *(_OWORD *)ptr = 0;
  sub_630CA0(*v10, 26, ptr, 16);
  si128 = _mm_load_si128((const __m128i *)ptr);
  if ( a4 )
  {
    *(_QWORD *)v26 = -a3;
    v12 = sub_454380((__int64)v10, -a3);
  }
  else
  {
    v9 = (__m128)_mm_add_epi64(_mm_unpacklo_epi64((__m128i)(unsigned __int64)a3, (__m128i)(unsigned __int64)a3), si128);
    *(__m128 *)ptr = v9;
    v14 = (void *)v9.m128_u64[0];
    v15 = (void *)_mm_movehl_ps(a7, v9).m128_u64[0];
    if ( *(_DWORD *)(v10[3] + 24) == 4 )
    {
      if ( (unsigned __int8)rangeset_t_has_common(v10 + 135, ptr, 0) )
        return 0;
      v14 = ptr[0];
      v15 = ptr[1];
    }
    if ( v14 >= v15 )
      return 0;
    v12 = sub_454380((__int64)v10, -a3);
    if ( -a3 != v12 )
    {
      v20 = sub_454380((__int64)v10, a3);
      v17 = -v20;
      if ( v20 > 0 )
        v17 = v20;
      v16 = -v12;
      if ( v12 > 0 )
        v16 = v12;
      v18 = -a3;
      if ( a3 > 0 )
        v18 = a3;
      if ( v17 + v16 < v18 )
        sub_368890();
    }
    if ( (unsigned int)sub_454B70(
                         v10,
                         v12,
                         v16,
                         v17,
                         v18,
                         v19,
                         v22,
                         -(int)a3,
                         ptr[0],
                         (__int64)ptr[1],
                         v31,
                         v32[0],
                         v33) )
      return 0;
  }
  if ( (unsigned int)sub_673690((int)v10, v22, v26[0], ptr[0], (__int64)ptr[1], v31, v32[0], v33) )
    return 0;
  if ( !(unsigned __int8)sub_66F990(v10, *(_QWORD *)v27, *(double *)v9.m128_u64, *(double *)si128.m128i_i64) )
  {
    v21 = -11;
LABEL_24:
    if ( a2 != 2 )
    {
      move_segm_strerror(v21);
      sub_368890();
    }
    return 0;
  }
  v21 = sub_673690((int)v10, v23, v27[0], ptr[0], (__int64)ptr[1], v31, v32[0], v33);
  if ( v21 )
    goto LABEL_24;
  v21 = sub_673690((int)v10, v24, v28, ptr[0], (__int64)ptr[1], v31, v32[0], v33);
  result = v21 == 0;
  if ( a3 + v12 && !v21 )
  {
    v21 = sub_673690((int)v10, v25, v29, ptr[0], (__int64)ptr[1], v31, v32[0], v33);
    result = v21 == 0;
  }
  if ( v21 )
    goto LABEL_24;
  return result;
}
