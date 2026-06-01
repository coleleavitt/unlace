unsigned __int64 __fastcall create_nodeval_merge_handlers(
        __int64 *a1,
        __int64 *a2,
        int a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v9; // r12
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  int v11; // ecx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __m128i v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __m128i v21; // [rsp+0h] [rbp-A0h] BYREF
  int v22; // [rsp+14h] [rbp-8Ch]
  __int64 *v23; // [rsp+18h] [rbp-88h]
  __int64 v24; // [rsp+20h] [rbp-80h]
  __int64 *v25; // [rsp+28h] [rbp-78h]
  __int64 v26; // [rsp+38h] [rbp-68h] BYREF
  __m128i v27; // [rsp+40h] [rbp-60h] BYREF
  __m128i v28; // [rsp+50h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-38h]

  v23 = a2;
  v22 = a3;
  v24 = a6;
  v29 = __readfsqword(0x28u);
  if ( a7 )
  {
    v9 = *v23;
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v23 + 16LL);
    if ( v10 == sub_454920 )
    {
      v11 = *(_DWORD *)(v9 + 28);
      v12 = 0;
      v25 = &v26;
      if ( v11 <= 0 )
        return v29 - __readfsqword(0x28u);
      while ( 1 )
      {
        v13 = switch_dbctx(*(int *)(v9 + 4 * v12 + 16));
        sub_7BEFF0(v25, v13, a4, 0, 0);
        if ( v26 != -1 )
          break;
        if ( *(_DWORD *)(v9 + 28) <= (int)++v12 )
          return v29 - __readfsqword(0x28u);
      }
    }
    else if ( !(unsigned __int8)v10(*v23, (__int64)a4) )
    {
      return v29 - __readfsqword(0x28u);
    }
  }
  if ( v24 )
  {
    v14 = 0;
    v21 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B28DB8), (__m128i)(unsigned __int64)sub_4542A0);
    do
    {
      v15 = *(_QWORD *)(a5 + 16);
      v28 = 0u;
      v27 = 0;
      if ( v15 )
      {
        v16 = _mm_load_si128(&v21);
        v27.m128i_i64[0] = v15;
        v28 = v16;
      }
      v25 = create_nodeval_merge_handler(v23, *(_QWORD *)a5, v22, a4, *(_BYTE *)(a5 + 8), *(_DWORD *)(a5 + 12), &v27, 0);
      if ( v28.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v28.m128i_i64[0])(&v27, &v27, 3);
      if ( a1 )
      {
        v17 = a1[1];
        v18 = *a1;
        if ( a1[2] < (unsigned __int64)(v17 + 1) )
        {
          v19 = qvector_reserve(a1, v18, v17 + 1, 8);
          *a1 = v19;
          v18 = v19;
          v17 = a1[1];
        }
        *(_QWORD *)(v18 + 8 * v17) = v25;
        ++a1[1];
      }
      ++v14;
      a5 += 24;
    }
    while ( v24 != v14 );
  }
  return v29 - __readfsqword(0x28u);
}
