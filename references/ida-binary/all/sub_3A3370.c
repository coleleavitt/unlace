__int64 __fastcall sub_3A3370(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  const __m128i *v9; // rax
  __int64 *v10; // r13
  __m128i *v11; // rsi
  __m128i *v12; // rcx
  __m128i si128; // xmm0
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  __int32 v16; // r15d
  __m128i *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a1 + 2528) & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 2592) )
    {
      v6 = sub_4A0A30(a1, a2, 0);
      v7 = sub_277DF0();
      if ( sub_278450(v7) )
      {
        v9 = (const __m128i *)sub_2781D0(v7, v6, nullptr);
        if ( v9 )
        {
          v10 = *(__int64 **)(a1 + 2592);
          v11 = (__m128i *)(*v10 + 32 * v10[1]);
          if ( (__m128i *)*v10 == v11 )
            goto LABEL_10;
          v12 = (__m128i *)*v10;
          while ( v9->m128i_i64[0] != v12->m128i_i64[0] )
          {
            v12 += 2;
            if ( v11 == v12 )
              goto LABEL_10;
          }
          if ( v12 == v11 )
          {
LABEL_10:
            si128 = _mm_loadu_si128(v9);
            v14 = v9[1].m128i_i64[0];
            v15 = v10[1] + 1;
            v16 = v9[1].m128i_i32[2];
            if ( v10[2] < v15 )
            {
              v17 = (__m128i *)*v10;
              v18 = *(_QWORD *)(a1 + 2592);
              v21[0] = si128;
              v19 = qvector_reserve(v18, v17, v15, 32);
              v20 = v10[1];
              si128 = _mm_load_si128(v21);
              *v10 = v19;
              v11 = (__m128i *)(v19 + 32 * v20);
            }
            v11[1].m128i_i64[0] = v14;
            v11[1].m128i_i32[2] = v16;
            *v11 = si128;
            ++v10[1];
          }
        }
      }
    }
  }
  return vault_files_dirtree_widget_t__::vfunc_40(a1 + 104, a2, a3);
}
