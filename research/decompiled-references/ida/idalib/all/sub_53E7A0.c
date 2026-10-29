__int64 __fastcall sub_53E7A0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD **v6; // rax
  _QWORD *v7; // r14
  int v8; // r12d
  __int64 v9; // rax
  const __m128i *v10; // r13
  char tinfo_property; // al
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rax
  __m128i v18; // xmm0
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  int v25; // [rsp+0h] [rbp-68h]
  void *v26; // [rsp+8h] [rbp-60h]
  __int64 *i; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+10h] [rbp-58h] BYREF
  int v29; // [rsp+20h] [rbp-48h]
  int v30[2]; // [rsp+28h] [rbp-40h]
  __int64 v31; // [rsp+30h] [rbp-38h]

  *(_QWORD *)v30 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v6 = (_QWORD **)sub_53CF90(*(__int64 **)(*(_QWORD *)a1 + 1824LL), a3);
  if ( v6 )
  {
    v7 = *v6;
    v8 = 0;
    v9 = 0;
    for ( i = &v28; (unsigned __int64)v8 < v7[1]; v9 = v8 )
    {
      v10 = (const __m128i *)(*v7 + 144 * v9);
      tinfo_property = get_tinfo_property(v10[4].m128i_i64[0], 2);
      v16 = v10->m128i_i64[0];
      if ( (tinfo_property & 0xF) == 0xE )
      {
        if ( v16 < v16 + v10->m128i_i64[1] )
        {
          do
          {
            v17 = v16;
            v16 += 8LL;
            rangeset_t_add(
              a2,
              (int)i,
              v12,
              v13,
              v14,
              v15,
              v25,
              i,
              a4 + (v17 >> 3),
              a4 + (v17 >> 3) + 1,
              v29,
              v30[0],
              v31);
            v18 = _mm_loadu_si128(v10);
          }
          while ( v16 < _mm_add_epi64(v18, _mm_srli_si128(v18, 8)).m128i_u64[0] );
        }
      }
      else if ( !(unsigned __int8)append_tinfo_covered(a2, v10[4].m128i_i64[0], (v16 >> 3) + a4) )
      {
        return 0;
      }
      ++v8;
    }
    return 1;
  }
  v20 = get_tinfo_property(a3, 15);
  if ( v20 == -1 )
    return 0;
  rangeset_t_add(a2, (int)&v28, v21, v22, v23, v24, v25, v26, a4, a4 + v20, v29, v30[0], v31);
  return 1;
}
