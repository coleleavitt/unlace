void __fastcall sub_13FBA30(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  int v4; // edx
  int v5; // eax
  unsigned __int64 v7; // r14
  int v8; // esi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rbp
  __m128i *v13; // r13
  __int32 v14; // eax
  void *v15; // rsi
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int8 v18; // al
  __int8 v19; // al
  __int32 v20; // eax
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __int8 v23; // al
  __m128i v24; // xmm4
  __m128i si128; // xmm5
  __m128i *v26; // rdi
  __int8 v27; // al
  __int64 v28; // rdx
  __int64 v29; // r12
  __m128i *v30; // r13
  const __m128i *v31; // r15
  __int32 v32; // edx
  __int64 *v33; // rdi
  __int32 *v34; // rdx
  __int64 v35; // rbp
  void *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 m128i_i64; // rcx
  int v41; // eax
  __int64 v42; // rbx
  void *v43; // rdi
  __m128i *v45; // [rsp+8h] [rbp-A0h]
  __int64 v46; // [rsp+10h] [rbp-98h]
  const __m128i *v47; // [rsp+10h] [rbp-98h]
  unsigned __int64 v48; // [rsp+18h] [rbp-90h]
  __int32 v49; // [rsp+20h] [rbp-88h]
  __int32 v50; // [rsp+24h] [rbp-84h]
  void *v51[2]; // [rsp+28h] [rbp-80h] BYREF
  __m128i v52; // [rsp+38h] [rbp-70h] BYREF
  __int8 v53; // [rsp+48h] [rbp-60h]
  __int8 v54; // [rsp+49h] [rbp-5Fh]
  __m128i v55; // [rsp+50h] [rbp-58h] BYREF
  __m128i v56[4]; // [rsp+60h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    v2 = *(_QWORD *)a1;
    v3 = *(_DWORD *)(a2 + 8);
    if ( *(_QWORD *)a1 == a1 + 16 || *(_QWORD *)a2 == a2 + 16 )
    {
      if ( *(_DWORD *)(a1 + 12) < v3 )
        sub_13FB900(a1, v3);
      v7 = *(unsigned int *)(a1 + 8);
      v8 = v7;
      if ( *(_DWORD *)(a2 + 12) < (unsigned int)v7 )
      {
        sub_13FB900(a2, v7);
        v7 = *(unsigned int *)(a1 + 8);
        v8 = *(_DWORD *)(a1 + 8);
      }
      v9 = *(unsigned int *)(a2 + 8);
      v10 = v7;
      if ( v9 <= v7 )
        v10 = *(unsigned int *)(a2 + 8);
      v48 = v10;
      if ( v10 )
      {
        v11 = 0;
        v46 = 80 * v10;
        do
        {
          while ( 1 )
          {
            v12 = v11 + *(_QWORD *)a1;
            v13 = (__m128i *)(v11 + *(_QWORD *)a2);
            v49 = *(_DWORD *)v12;
            v14 = *(_DWORD *)(v12 + 4);
            v51[0] = &v52;
            v50 = v14;
            if ( *(_QWORD *)(v12 + 8) == v12 + 24 )
            {
              v52 = _mm_loadu_si128((const __m128i *)(v12 + 24));
            }
            else
            {
              v51[0] = *(void **)(v12 + 8);
              v52.m128i_i64[0] = *(_QWORD *)(v12 + 24);
            }
            v15 = *(void **)(v12 + 16);
            *(_BYTE *)(v12 + 24) = 0;
            v16 = _mm_loadu_si128((const __m128i *)(v12 + 48));
            v17 = _mm_loadu_si128((const __m128i *)(v12 + 64));
            v51[1] = v15;
            *(_QWORD *)(v12 + 8) = v12 + 24;
            v18 = *(_BYTE *)(v12 + 40);
            *(_QWORD *)(v12 + 16) = 0;
            v53 = v18;
            v19 = *(_BYTE *)(v12 + 41);
            v55 = v16;
            v54 = v19;
            v20 = v13->m128i_i32[0];
            v56[0] = v17;
            *(_DWORD *)v12 = v20;
            *(_DWORD *)(v12 + 4) = v13->m128i_i32[1];
            sub_A0AAD0(v12 + 8, &v13->m128i_i64[1]);
            v21 = _mm_loadu_si128(v13 + 3);
            v22 = _mm_loadu_si128(v13 + 4);
            *(_BYTE *)(v12 + 40) = v13[2].m128i_i8[8];
            v23 = v13[2].m128i_i8[9];
            *(__m128i *)(v12 + 48) = v21;
            *(_BYTE *)(v12 + 41) = v23;
            *(__m128i *)(v12 + 64) = v22;
            v13->m128i_i32[0] = v49;
            v13->m128i_i32[1] = v50;
            sub_A0AAD0((__int64)&v13->m128i_i64[1], v51);
            v24 = _mm_load_si128(&v55);
            si128 = _mm_load_si128(v56);
            v26 = (__m128i *)v51[0];
            v13[2].m128i_i8[8] = v53;
            v27 = v54;
            v13[3] = v24;
            v13[2].m128i_i8[9] = v27;
            v13[4] = si128;
            if ( v26 == &v52 )
              break;
            operator delete(v26);
            v11 += 80;
            if ( v11 == v46 )
              goto LABEL_17;
          }
          v11 += 80;
        }
        while ( v46 != v11 );
LABEL_17:
        v7 = *(unsigned int *)(a1 + 8);
        v9 = *(unsigned int *)(a2 + 8);
        v8 = *(_DWORD *)(a1 + 8);
      }
      if ( v9 >= v7 )
      {
        if ( v9 > v7 )
        {
          v37 = *(_QWORD *)a1 + 80 * v7;
          v38 = *(_QWORD *)a2;
          v39 = *(_QWORD *)a2 + 80 * v9;
          m128i_i64 = *(_QWORD *)a2 + 80 * v48;
          if ( m128i_i64 == v39 )
          {
            v41 = v7;
          }
          else
          {
            do
            {
              v47 = (const __m128i *)m128i_i64;
              v45 = (__m128i *)v37;
              *(_DWORD *)v37 = *(_DWORD *)m128i_i64;
              *(_DWORD *)(v37 + 4) = *(_DWORD *)(m128i_i64 + 4);
              *(_QWORD *)(v37 + 8) = v37 + 24;
              sub_13F27F0(
                (_QWORD *)(v37 + 8),
                *(_BYTE **)(m128i_i64 + 8),
                *(_QWORD *)(m128i_i64 + 8) + *(_QWORD *)(m128i_i64 + 16));
              m128i_i64 = (__int64)v47[5].m128i_i64;
              v37 = (__int64)v45[5].m128i_i64;
              v45[2].m128i_i8[8] = v47[2].m128i_i8[8];
              v45[2].m128i_i8[9] = v47[2].m128i_i8[9];
              v45[3] = _mm_loadu_si128(v47 + 3);
              v45[4] = _mm_loadu_si128(v47 + 4);
            }
            while ( &v47[5] != (const __m128i *)v39 );
            v38 = *(_QWORD *)a2;
            v41 = *(_DWORD *)(a1 + 8);
            v39 = *(_QWORD *)a2 + 80 * v48;
          }
          *(_DWORD *)(a1 + 8) = v41 + v9 - v7;
          v42 = v38 + 80LL * *(unsigned int *)(a2 + 8);
          while ( v42 != v39 )
          {
            while ( 1 )
            {
              v42 -= 80;
              v43 = *(void **)(v42 + 8);
              if ( v43 == (void *)(v42 + 24) )
                break;
              operator delete(v43);
              if ( v42 == v39 )
                goto LABEL_37;
            }
          }
LABEL_37:
          *(_DWORD *)(a2 + 8) = v48;
        }
      }
      else
      {
        v28 = *(_QWORD *)a1;
        v29 = *(_QWORD *)a1 + 80 * v7;
        v30 = (__m128i *)(*(_QWORD *)a2 + 80 * v9);
        v31 = (const __m128i *)(*(_QWORD *)a1 + 80 * v48);
        if ( v31 != (const __m128i *)v29 )
        {
          do
          {
            v32 = v31->m128i_i32[0];
            v33 = &v30->m128i_i64[1];
            v31 += 5;
            v30->m128i_i32[0] = v32;
            v30->m128i_i32[1] = v31[-5].m128i_i32[1];
            v34 = &v30[1].m128i_i32[2];
            v30 += 5;
            v30[-5].m128i_i64[1] = (__int64)v34;
            sub_13F27F0(v33, (_BYTE *)v31[-5].m128i_i64[1], v31[-5].m128i_i64[1] + v31[-4].m128i_i64[0]);
            v30[-3].m128i_i8[8] = v31[-3].m128i_i8[8];
            v30[-3].m128i_i8[9] = v31[-3].m128i_i8[9];
            v30[-2] = _mm_loadu_si128(v31 - 2);
            v30[-1] = _mm_loadu_si128(v31 - 1);
          }
          while ( v31 != (const __m128i *)v29 );
          v28 = *(_QWORD *)a1;
          v29 = *(_QWORD *)a1 + 80 * v48;
          v8 = v7 + *(_DWORD *)(a2 + 8) - v9;
        }
        *(_DWORD *)(a2 + 8) = v8;
        v35 = v28 + 80LL * *(unsigned int *)(a1 + 8);
        while ( v35 != v29 )
        {
          while ( 1 )
          {
            v35 -= 80;
            v36 = *(void **)(v35 + 8);
            if ( v36 == (void *)(v35 + 24) )
              break;
            operator delete(v36);
            if ( v35 == v29 )
              goto LABEL_26;
          }
        }
LABEL_26:
        *(_DWORD *)(a1 + 8) = v48;
      }
    }
    else
    {
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_QWORD *)a2 = v2;
      v4 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 8) = v3;
      *(_DWORD *)(a2 + 8) = v4;
      v5 = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v5;
    }
  }
}
