unsigned __int64 __fastcall sub_137840(__int64 a1, const __m128i *a2, unsigned int a3)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __m128i si128; // xmm0
  __int64 v13; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v31; // [rsp+8h] [rbp-E0h]
  __int64 v32; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v33; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v35; // [rsp+28h] [rbp-C0h]
  _BYTE v36[24]; // [rsp+30h] [rbp-B8h] BYREF
  char v37[8]; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v38; // [rsp+50h] [rbp-98h]
  _QWORD v39[2]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v40[2]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD v41[2]; // [rsp+88h] [rbp-60h] BYREF
  __int32 v42; // [rsp+98h] [rbp-50h]
  unsigned __int64 v43; // [rsp+A8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 1336);
  if ( !v4 )
  {
    v4 = qalloc_or_throw();
    *(_QWORD *)v4 = 0;
    *(_OWORD *)(v4 + 8) = 0;
    *(_QWORD *)(a1 + 1336) = v4;
  }
  if ( a3 == 9 )
    a3 = *(_DWORD *)(a1 + 312);
  v5 = *(_QWORD *)(v4 + 8);
  if ( (int)a3 >= v5 )
  {
    v15 = (int)(a3 + 1);
    v35 = v15;
    if ( v15 != v5 )
    {
      v16 = *(_QWORD *)v4;
      memset(v36, 0, sizeof(v36));
      if ( v15 < v5 )
      {
        v33 = (int)(a3 + 1);
        do
        {
          v21 = (__int64 *)(*(_QWORD *)v4 + 24 * v33);
          v22 = *v21;
          v31 = v21;
          if ( *v21 )
          {
            v32 = v21[1];
            if ( v32 )
            {
              v23 = 0;
              v24 = 0;
              do
              {
                v25 = v22 + v23;
                ++v24;
                v23 += 112;
                sub_11CDA0(v25 + 88);
                sub_11CDA0(v25 + 72);
                sub_11CDA0(v25 + 56);
                v22 = *v31;
              }
              while ( v32 != v24 );
            }
            v31[1] = 0;
            qfree();
          }
          ++v33;
        }
        while ( v33 < v5 );
      }
      else
      {
        v17 = *(_QWORD *)(v4 + 16);
        if ( (unsigned __int64)v36 < v16 || (unsigned __int64)v36 >= v16 + 24 * v17 )
        {
          if ( v17 < v35 )
          {
            v28 = qvector_reserve();
            v5 = *(_QWORD *)(v4 + 8);
            *(_QWORD *)v4 = v28;
          }
          if ( v5 < v35 )
          {
            v26 = 24 * v5;
            do
            {
              ++v5;
              v27 = v26 + *(_QWORD *)v4;
              v26 += 24;
              *(_QWORD *)v27 = 0;
              *(_OWORD *)(v27 + 8) = 0;
            }
            while ( v35 != v5 );
          }
        }
        else
        {
          if ( v17 < v35 )
          {
            v29 = qvector_reserve();
            v5 = *(_QWORD *)(v4 + 8);
            *(_QWORD *)v4 = v29;
          }
          if ( v5 < v35 )
          {
            v18 = 24 * v5;
            do
            {
              ++v5;
              v19 = v18 + *(_QWORD *)v4;
              v18 += 24;
              *(_QWORD *)v19 = 0;
              *(_OWORD *)(v19 + 8) = 0;
            }
            while ( v35 != v5 );
          }
        }
      }
      *(_QWORD *)(v4 + 8) = v35;
      v4 = *(_QWORD *)(a1 + 1336);
    }
  }
  v6 = *(_QWORD *)v4;
  v7 = _mm_loadu_si128(a2);
  v39[1] = 0;
  v40[1] = 0;
  v8 = (__int64 *)(v6 + 24LL * a3);
  v9 = a2[1].m128i_i64[0];
  *(__m128i *)v36 = v7;
  v41[1] = 0;
  *(_QWORD *)&v36[16] = v9;
  v39[0] = 0xFFFFFFFF00000000LL;
  v40[0] = 0xFFFFFFFF00000000LL;
  v41[0] = 0xFFFFFFFF00000000LL;
  v38 = 0;
  sub_1253A0((__int64)v37, (__int64)&a2[1].m128i_i64[1]);
  v42 = a2[6].m128i_i32[2];
  v10 = v8[1];
  v11 = *v8;
  if ( v8[2] < (unsigned __int64)(v10 + 1) )
  {
    v20 = qvector_reserve();
    *v8 = v20;
    v10 = v8[1];
    v11 = v20;
  }
  si128 = _mm_load_si128((const __m128i *)v36);
  v13 = v11 + 112 * v10;
  *(_QWORD *)(v13 + 16) = *(_QWORD *)&v36[16];
  *(_QWORD *)(v13 + 56) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 64) = 0;
  *(_QWORD *)(v13 + 72) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 80) = 0;
  *(_QWORD *)(v13 + 88) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 96) = 0;
  *(__m128i *)v13 = si128;
  *(_OWORD *)(v13 + 32) = 0;
  sub_1253A0(v13 + 24, (__int64)v37);
  *(_DWORD *)(v13 + 104) = v42;
  ++v8[1];
  sub_11CDA0((__int64)v41);
  sub_11CDA0((__int64)v40);
  sub_11CDA0((__int64)v39);
  return v43 - __readfsqword(0x28u);
}
