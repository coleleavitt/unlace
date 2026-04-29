unsigned __int64 __fastcall sub_137840(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __m128i si128; // xmm0
  __int64 v14; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // [rsp+4h] [rbp-E4h]
  __int64 *v32; // [rsp+8h] [rbp-E0h]
  __int64 v33; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v34; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v36; // [rsp+28h] [rbp-C0h]
  _BYTE v37[24]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v38[8]; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+50h] [rbp-98h]
  _QWORD v40[2]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v41[2]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD v42[2]; // [rsp+88h] [rbp-60h] BYREF
  __int32 v43; // [rsp+98h] [rbp-50h]
  unsigned __int64 v44; // [rsp+A8h] [rbp-40h]

  v31 = a3;
  v44 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 1336);
  if ( !v5 )
  {
    v5 = qalloc_or_throw(24, (__int64)a2, a3, a4);
    *(_QWORD *)v5 = 0;
    *(_OWORD *)(v5 + 8) = 0;
    *(_QWORD *)(a1 + 1336) = v5;
  }
  if ( v31 == 9 )
    v31 = *(_DWORD *)(a1 + 312);
  v6 = *(_QWORD *)(v5 + 8);
  if ( (int)v31 >= v6 )
  {
    v16 = (int)(v31 + 1);
    v36 = v16;
    if ( v16 != v6 )
    {
      v17 = *(_QWORD *)v5;
      memset(v37, 0, sizeof(v37));
      if ( v16 < v6 )
      {
        v34 = (int)(v31 + 1);
        do
        {
          v22 = (__int64 *)(*(_QWORD *)v5 + 24 * v34);
          v23 = *v22;
          v32 = v22;
          if ( *v22 )
          {
            v33 = v22[1];
            if ( v33 )
            {
              v24 = 0;
              v25 = 0;
              do
              {
                v26 = v23 + v24;
                ++v25;
                v24 += 112;
                sub_11CDA0(v26 + 88);
                sub_11CDA0(v26 + 72);
                sub_11CDA0(v26 + 56);
                v23 = *v32;
              }
              while ( v33 != v25 );
            }
            v32[1] = 0;
            qfree(v23);
          }
          ++v34;
        }
        while ( v34 < v6 );
      }
      else
      {
        v18 = *(_QWORD *)(v5 + 16);
        if ( (unsigned __int64)v37 < v17 || (unsigned __int64)v37 >= v17 + 24 * v18 )
        {
          if ( v18 < v36 )
          {
            v29 = qvector_reserve(v5, v17, v36, 24);
            v6 = *(_QWORD *)(v5 + 8);
            *(_QWORD *)v5 = v29;
          }
          if ( v6 < v36 )
          {
            v27 = 24 * v6;
            do
            {
              ++v6;
              v28 = v27 + *(_QWORD *)v5;
              v27 += 24;
              *(_QWORD *)v28 = 0;
              *(_OWORD *)(v28 + 8) = 0;
            }
            while ( v36 != v6 );
          }
        }
        else
        {
          if ( v18 < v36 )
          {
            v30 = qvector_reserve(v5, v17, v36, 24);
            v6 = *(_QWORD *)(v5 + 8);
            *(_QWORD *)v5 = v30;
          }
          if ( v6 < v36 )
          {
            v19 = 24 * v6;
            do
            {
              ++v6;
              v20 = v19 + *(_QWORD *)v5;
              v19 += 24;
              *(_QWORD *)v20 = 0;
              *(_OWORD *)(v20 + 8) = 0;
            }
            while ( v36 != v6 );
          }
        }
      }
      *(_QWORD *)(v5 + 8) = v36;
      v5 = *(_QWORD *)(a1 + 1336);
    }
  }
  v7 = *(_QWORD *)v5;
  v8 = _mm_loadu_si128(a2);
  v40[1] = 0;
  v41[1] = 0;
  v9 = (__int64 *)(v7 + 24LL * v31);
  v10 = a2[1].m128i_i64[0];
  *(__m128i *)v37 = v8;
  v42[1] = 0;
  *(_QWORD *)&v37[16] = v10;
  v40[0] = 0xFFFFFFFF00000000LL;
  v41[0] = 0xFFFFFFFF00000000LL;
  v42[0] = 0xFFFFFFFF00000000LL;
  v39 = 0;
  sub_1253A0((__int64)v38, (__int64)&a2[1].m128i_i64[1]);
  v43 = a2[6].m128i_i32[2];
  v11 = v9[1];
  v12 = *v9;
  if ( v9[2] < (unsigned __int64)(v11 + 1) )
  {
    v21 = qvector_reserve((__int64)v9, v12, v11 + 1, 112);
    *v9 = v21;
    v11 = v9[1];
    v12 = v21;
  }
  si128 = _mm_load_si128((const __m128i *)v37);
  v14 = v12 + 112 * v11;
  *(_QWORD *)(v14 + 16) = *(_QWORD *)&v37[16];
  *(_QWORD *)(v14 + 56) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v14 + 64) = 0;
  *(_QWORD *)(v14 + 72) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v14 + 80) = 0;
  *(_QWORD *)(v14 + 88) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v14 + 96) = 0;
  *(__m128i *)v14 = si128;
  *(_OWORD *)(v14 + 32) = 0;
  sub_1253A0(v14 + 24, (__int64)v38);
  *(_DWORD *)(v14 + 104) = v43;
  ++v9[1];
  sub_11CDA0((__int64)v42);
  sub_11CDA0((__int64)v41);
  sub_11CDA0((__int64)v40);
  return v44 - __readfsqword(0x28u);
}
