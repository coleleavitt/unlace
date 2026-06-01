unsigned __int64 __fastcall sub_398DB0(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // r15
  __int64 v4; // r14
  __int64 *v5; // r13
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  int v9; // ecx
  int v10; // r12d
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // edi
  bool v16; // cf
  int v17; // eax
  const __m128i *v18; // rbp
  __int64 v19; // rax
  __m128 v20; // xmm0
  __int32 *v21; // rcx
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 *v24; // r13
  unsigned __int64 v25; // r12
  __int64 v26; // r15
  void *v27; // rdi
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // r12
  void *v33; // rdi
  unsigned __int64 v34; // rax
  __m128 v35; // xmm0
  __int32 *v36; // rdx
  __int64 v38; // [rsp+0h] [rbp-98h] BYREF
  const __m128i *v39; // [rsp+8h] [rbp-90h]
  __int32 v40; // [rsp+18h] [rbp-80h] BYREF
  __m128 v41; // [rsp+20h] [rbp-78h] BYREF
  __int32 *v42; // [rsp+30h] [rbp-68h]
  __int64 v43; // [rsp+38h] [rbp-60h]
  __m128i v44; // [rsp+40h] [rbp-58h]
  __int64 v45; // [rsp+50h] [rbp-48h]
  unsigned __int64 v46; // [rsp+58h] [rbp-40h]

  v39 = a2;
  v46 = __readfsqword(0x28u);
  if ( (const __m128i *)a1 != a2 )
  {
    v2 = (const __m128i *)(a1 + 72);
    if ( a2 != (const __m128i *)(a1 + 72) )
    {
      v4 = a1 + 8;
      while ( 1 )
      {
        v5 = &v2->m128i_i64[1];
        v38 = v2[1].m128i_i64[1];
        v6 = *(_QWORD *)(v38 + 32);
        v7 = *(_QWORD *)(std::_Rb_tree_decrement(&v2->m128i_u64[1]) + 32);
        v8 = v2[3].m128i_u64[0];
        if ( v8 < v6 )
        {
          v10 = v7 - v8;
        }
        else
        {
          v9 = v8 - v6;
          if ( v7 >= v8 )
            v9 = v7 - v6;
          v10 = v9;
        }
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL);
        v12 = std::_Rb_tree_decrement(v4);
        v13 = *(_QWORD *)(a1 + 48);
        v14 = *(_QWORD *)(v12 + 32);
        if ( v13 < v11 )
        {
          v17 = v14 - v13;
        }
        else
        {
          v15 = v14 - v11;
          v16 = v14 < v13;
          v17 = v13 - v11;
          if ( !v16 )
            v17 = v15;
        }
        v18 = (const __m128i *)((char *)v2 + 72);
        if ( v17 <= v10 )
        {
          sub_398AD0((__int64)v2);
          if ( v39 == v18 )
            return v46 - __readfsqword(0x28u);
        }
        else
        {
          v19 = v2[1].m128i_i64[0];
          if ( v19 )
          {
            v20 = _mm_loadh_ps((const double *)&v38);
            v40 = v2->m128i_i32[2];
            v21 = (__int32 *)v2[2].m128i_i64[0];
            v41 = v20;
            v42 = v21;
            *(_QWORD *)(v19 + 8) = &v40;
            v22 = v2[2].m128i_i64[1];
            v2[1].m128i_i64[0] = 0;
            v43 = v22;
            v2[1].m128i_i64[1] = (__int64)v5;
            v2[2].m128i_i64[0] = (__int64)v5;
            v2[2].m128i_i64[1] = 0;
          }
          else
          {
            v40 = 0;
            v41.m128_u64[0] = 0;
            v41.m128_u64[1] = (unsigned __int64)&v40;
            v42 = &v40;
            v43 = 0;
          }
          v23 = _mm_loadu_si128(v2 + 3);
          v24 = &v2->m128i_i64[1];
          v45 = v2[4].m128i_i64[0];
          v44 = v23;
          v25 = 0x8E38E38E38E38E39LL * (((__int64)v2->m128i_i64 - a1) >> 3);
          if ( (__int64)v2->m128i_i64 - a1 > 0 )
          {
            do
            {
              v26 = v24[1];
              while ( v26 )
              {
                sub_398830(*(_QWORD **)(v26 + 24));
                v27 = (void *)v26;
                v26 = *(_QWORD *)(v26 + 16);
                operator delete(v27, 0x30u);
              }
              v28 = *(v24 - 8);
              v24[1] = 0;
              v24[2] = (__int64)v24;
              v24[3] = (__int64)v24;
              v24[4] = 0;
              if ( v28 )
              {
                v29 = *((_DWORD *)v24 - 18);
                v24[1] = v28;
                *(_DWORD *)v24 = v29;
                v24[2] = *(v24 - 7);
                v24[3] = *(v24 - 6);
                *(_QWORD *)(v28 + 8) = v24;
                v30 = *(v24 - 5);
                *(v24 - 8) = 0;
                v24[4] = v30;
                v31 = v24 - 9;
                *(v24 - 7) = (__int64)(v24 - 9);
                *(v24 - 6) = (__int64)(v24 - 9);
                *(v24 - 5) = 0;
              }
              else
              {
                v31 = v24 - 9;
              }
              v24[5] = *(v24 - 4);
              *((_DWORD *)v24 + 12) = *((_DWORD *)v24 - 6);
              v24[7] = *(v24 - 2);
              v24 = v31;
              --v25;
            }
            while ( v25 );
          }
          v32 = *(_QWORD *)(a1 + 16);
          while ( v32 )
          {
            sub_398830(*(_QWORD **)(v32 + 24));
            v33 = (void *)v32;
            v32 = *(_QWORD *)(v32 + 16);
            operator delete(v33, 0x30u);
          }
          v34 = v41.m128_u64[0];
          *(_QWORD *)(a1 + 16) = 0;
          *(_QWORD *)(a1 + 24) = v4;
          *(_QWORD *)(a1 + 32) = v4;
          *(_QWORD *)(a1 + 40) = 0;
          if ( v34 )
          {
            v35 = _mm_loadh_ps((const double *)&v41.m128_u64[1]);
            *(_DWORD *)(a1 + 8) = v40;
            v36 = v42;
            *(__m128 *)(a1 + 16) = v35;
            *(_QWORD *)(a1 + 32) = v36;
            *(_QWORD *)(v34 + 8) = v4;
            *(_QWORD *)(a1 + 40) = v43;
          }
          *(_QWORD *)(a1 + 48) = v44.m128i_i64[0];
          *(_DWORD *)(a1 + 56) = v44.m128i_i32[2];
          *(_QWORD *)(a1 + 64) = v45;
          if ( v39 == v18 )
            return v46 - __readfsqword(0x28u);
        }
        v2 = v18;
      }
    }
  }
  return v46 - __readfsqword(0x28u);
}
