__int64 __fastcall sub_539C0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v5; // ebp
  __int64 v6; // r13
  __int64 v7; // rsi
  const __m128i *v8; // rdi
  const __m128i *v9; // rbx
  __m128i v10; // xmm1
  __int64 v11; // rdx
  __int32 v12; // r14d
  __int32 *v13; // rcx
  __int32 *v14; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v20[7]; // [rsp+10h] [rbp-38h] BYREF

  v20[1] = __readfsqword(0x28u);
  if ( (debug & 0x40000) != 0 )
  {
    sub_7AC30(*(_QWORD *)(a1 + 40), a3[2]);
    sub_29350();
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64 *))(*a3 + 216LL))(a3, &v19);
  if ( !v5 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD *))(*a3 + 112LL))(a3, v20) )
      v20[0] = 0;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 144LL);
    sub_75D50(v6);
    v7 = *(_QWORD *)(v6 + 584);
    v8 = *(const __m128i **)(v6 + 576);
    v9 = v8;
    if ( 40 * v7 )
    {
      do
      {
        v10 = _mm_loadu_si128(v9);
        if ( v19 < _mm_add_epi64(_mm_srli_si128(v10, 8), v10).m128i_u64[0] && v10.m128i_i64[0] < v20[0] + v19 )
        {
          v11 = a2[1];
          v12 = v9[2].m128i_i32[0];
          v13 = (__int32 *)(*a2 + 4 * v11);
          if ( (__int32 *)*a2 == v13 )
            goto LABEL_16;
          v14 = (__int32 *)*a2;
          while ( v12 != *v14 )
          {
            if ( v13 == ++v14 )
              goto LABEL_16;
          }
          if ( v14 == v13 )
          {
LABEL_16:
            v16 = v11 + 1;
            if ( a2[2] < v16 )
            {
              v17 = qvector_reserve(a2, *a2, v16, 4);
              v18 = a2[1];
              *a2 = v17;
              v13 = (__int32 *)(v17 + 4 * v18);
            }
            *v13 = v12;
            ++a2[1];
            v8 = *(const __m128i **)(v6 + 576);
            v7 = *(_QWORD *)(v6 + 584);
          }
        }
        v9 = (const __m128i *)((char *)v9 + 40);
      }
      while ( v9 != (const __m128i *)((char *)v8 + 40 * v7) );
    }
  }
  return v5;
}
