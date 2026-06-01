__int64 __fastcall sub_125D8E0(__m128 *a1)
{
  __int64 result; // rax
  double v3; // r13
  unsigned __int64 v4; // rax
  __int64 v5; // r12
  __m128i *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __m128 v12; // xmm0
  _QWORD *v13; // r12
  __m128 v14; // xmm0
  const __m128i *v15; // rsi
  unsigned __int64 v16; // [rsp+8h] [rbp-110h] BYREF
  __m128 *v17; // [rsp+10h] [rbp-108h]
  __m128 *v18; // [rsp+18h] [rbp-100h]
  unsigned __int8 *v19; // [rsp+20h] [rbp-F8h]
  __m128i *v20; // [rsp+28h] [rbp-F0h]
  __m128i *v21; // [rsp+30h] [rbp-E8h]
  __m128 *v22; // [rsp+38h] [rbp-E0h]
  __int64 v23; // [rsp+40h] [rbp-D8h] BYREF
  double v24[3]; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v25[4]; // [rsp+60h] [rbp-B8h] BYREF
  int v26; // [rsp+80h] [rbp-98h] BYREF
  __m128 v27; // [rsp+88h] [rbp-90h]
  unsigned __int64 v28; // [rsp+B0h] [rbp-68h] BYREF
  __m128 v29; // [rsp+B8h] [rbp-60h]

  result = sub_125D680(a1);
  if ( a1[9].m128_i32[2] == 19 )
  {
    v17 = a1 + 17;
    v19 = &a1->m128_u8[8];
    v18 = a1 + 13;
    v21 = (__m128i *)&v23;
    v20 = (__m128i *)v25;
    v22 = a1 + 19;
    do
    {
      sub_9EE8A0((__int64)v17, (__int64)v18);
      sub_12510C0(v19);
      sub_124FB10(v21, a1);
      v3 = v24[1];
      sub_125D680(a1);
      sub_124FB10(v20, a1);
      v4 = a1[16].m128_u64[0];
      v5 = v25[2];
      LODWORD(v28) = 10;
      v29.m128_u64[0] = -1;
      v6 = *(__m128i **)(v4 + 64);
      if ( v6 == *(__m128i **)(v4 + 72) )
      {
        v15 = *(const __m128i **)(v4 + 64);
        v16 = v4;
        sub_1252750(v4 + 56, v15, (const __m128i *)&v28);
        v7 = v16;
        v8 = *(_QWORD *)(v16 + 64);
      }
      else
      {
        v16 = v4;
        sub_124FC70(v6, (const __m128i *)&v28);
        v7 = v16;
        v8 = *(_QWORD *)(v16 + 64) + 48LL;
        *(_QWORD *)(v16 + 64) = v8;
      }
      v9 = 0xAAAAAAAAAAAAAAABLL * ((v8 - *(_QWORD *)(v7 + 56)) >> 4);
      if ( v9 > 0x186A0 )
        abort();
      v10 = v9 - 1;
      sub_124FBE0((__int64)&v28);
      v26 = 1;
      v11 = v25[0];
      *(_QWORD *)(*(_QWORD *)(v23 + 56) + 48LL * *(_QWORD *)&v3 + 8) = v10;
      v12 = _mm_loadh_ps(v24);
      *(_QWORD *)(*(_QWORD *)(v11 + 56) + 48 * v5 + 8) = v10;
      v13 = (_QWORD *)a1[16].m128_u64[0];
      v27 = v12;
      sub_124FC70((__m128i *)&v28, (const __m128i *)&v26);
      v16 = sub_1252950(v13, (const __m128i *)&v28);
      sub_124FBE0((__int64)&v28);
      sub_124FBE0((__int64)&v26);
      v16 = v10;
      v14 = _mm_loadh_ps((const double *)&v16);
      v28 = a1[16].m128_u64[0];
      v29 = v14;
      result = sub_1253440(v22, (const __m128i *)&v28);
    }
    while ( a1[9].m128_i32[2] == 19 );
  }
  return result;
}
