unsigned __int64 __fastcall sub_51B380(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 *v10; // rbx
  const __m128i *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  size_t v16; // rax
  __m128i *v17; // r14
  __m128i v18; // xmm0
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128 si128; // xmm0
  __int64 v29; // [rsp+0h] [rbp-68h]
  __int64 v30; // [rsp+8h] [rbp-60h]
  int v31[4]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v32; // [rsp+20h] [rbp-48h]
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]
  int v34; // [rsp+30h] [rbp-38h]
  int v35; // [rsp+38h] [rbp-30h]
  int v36; // [rsp+40h] [rbp-28h]
  int v37; // [rsp+48h] [rbp-20h]
  __int64 v38; // [rsp+50h] [rbp-18h]

  v33 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 996) != 65 )
  {
    if ( !under_debugger )
      interr(1785);
LABEL_22:
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 1768);
  if ( !*(_BYTE *)(v5 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    goto LABEL_22;
  }
  v6 = 68 - *(_DWORD *)(*(_QWORD *)(v5 + 8) + 68LL);
  if ( v6 >= *(_QWORD *)(v5 + 40) )
    sub_5144F0(a1, a2);
  v7 = v6 << 6;
  v8 = *(_QWORD *)(a1 + 1672) + 1624LL;
  *(_DWORD *)(*(_QWORD *)(v5 + 32) + v7 + 56) = 68;
  v10 = (__int64 *)(*(_QWORD *)(v5 + 32) + v7);
  v11 = (const __m128i *)sub_506150(v8);
  if ( v11 )
  {
    v30 = v8;
    do
    {
      v11[3].m128i_i64[68 - *(_DWORD *)(a1 + 996) + 1] = a2;
      update_segm(v11);
      si128 = (__m128)_mm_loadu_si128(v11);
      a5 = _mm_movehl_ps(a5, si128);
      if ( si128.m128_u64[0] >= a5.m128_u64[0]
        || (v12 = v10[1], v13 = *v10, v14 = 33 * v12, v12) && si128.m128_u64[0] < *(_QWORD *)(v13 + v14 - 25) )
      {
        sub_84F5B0("srrange %a..%a dropped%s\n", v29, v30, v31[0], v31[2], v32, v33, v34, v35, v36, v37, v38);
        v19 = ea2node(si128.m128_u64[0]);
        v20 = v10[6];
        v21 = v10[4];
        v32 = v19;
        v22 = v19;
        v23 = v10[5];
        if ( v20 < v23 + 1 )
        {
          *(_QWORD *)v31 = v22;
          v24 = qvector_reserve(v10 + 4, v21, v23 + 1, 8);
          v22 = *(_QWORD *)v31;
          v10[4] = v24;
          v21 = v24;
          v23 = v10[5];
        }
        *(_QWORD *)(v21 + 8 * v23) = v22;
        ++v10[5];
      }
      else
      {
        v15 = v12 + 1;
        v16 = 0;
        if ( v10[2] < v15 )
        {
          *(__m128 *)v31 = si128;
          v25 = qvector_reserve(v10, v13, v15, 33);
          v26 = v10[1];
          si128 = (__m128)_mm_load_si128((const __m128i *)v31);
          *v10 = v25;
          v13 = v25;
          v16 = 33 * v26 - v14;
        }
        v17 = (__m128i *)(v13 + v14);
        *(__m128 *)v31 = si128;
        memmove(&v17[2].m128i_i8[1], v17, v16);
        v18 = _mm_load_si128((const __m128i *)v31);
        v17[1].m128i_i64[0] = 0;
        v17[1].m128i_i8[8] = 0;
        v17[2].m128i_i8[0] = 0;
        *v17 = 0;
        ++v10[1];
        v17[1].m128i_i64[0] = a2;
        v17[1].m128i_i8[8] = 3;
        v17[2].m128i_i8[0] = 1;
        *v17 = v18;
        v10[3] = *v10 + 33 * v10[1];
      }
      v11 = (const __m128i *)sub_505EB0(v30, v11->m128i_i64[0]);
    }
    while ( v11 );
  }
  return v33 - __readfsqword(0x28u);
}
