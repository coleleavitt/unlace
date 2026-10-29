void __fastcall sub_1E0A6E0(__int64 a1, const __m128i *a2, char a3, char a4)
{
  __m128i *v5; // rdi
  __m128i *v6; // rbp
  __int64 v7; // rdx
  __m128i *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __m128i v13; // xmm2
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  __m128i *v25; // rdi
  __m128i *v26; // rdi
  __int32 v27; // r13d
  __int32 v28; // eax
  _QWORD *v29; // rax
  __int64 v30; // r14
  void **v31; // rbp
  __int64 v32; // r12
  void *v33; // rdi
  unsigned int v34; // r8d
  const void *v35; // rsi
  void **v36; // r12
  __int32 v37; // r12d
  __int32 v38; // eax
  size_t v39; // rdx
  unsigned int v40; // [rsp+0h] [rbp-4Ch]
  unsigned int v41; // [rsp+0h] [rbp-4Ch]
  _DWORD v42[16]; // [rsp+Ch] [rbp-40h] BYREF

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 9) = a4;
  if ( a3 )
  {
    if ( a2[934].m128i_i32[3] <= (unsigned __int32)a2[934].m128i_i32[2] )
    {
      v6 = (__m128i *)sub_2237400(&a2[934], &a2[935], 0, 80, v42);
      v25 = &v6[5 * a2[934].m128i_u32[2]];
      v25->m128i_i64[0] = 0;
      v25->m128i_i64[1] = 0;
      v25[1].m128i_i64[0] = 0;
      v25[1].m128i_i64[1] = 0;
      v25[2].m128i_i64[0] = 0;
      v25[2].m128i_i64[1] = 0;
      v25[3].m128i_i64[0] = 0;
      v25[3].m128i_i64[1] = 0;
      v25[4].m128i_i64[0] = 0;
      v25[4].m128i_i64[1] = 0;
      sub_1DFE940(v25);
      sub_1E0A550((__int64)a2[934].m128i_i64, v6);
      v26 = (__m128i *)a2[934].m128i_i64[0];
      v27 = v42[0];
      if ( &a2[935] != v26 )
        free(v26);
      v28 = a2[934].m128i_i32[2];
      a2[934].m128i_i64[0] = (__int64)v6;
      a2[934].m128i_i32[3] = v27;
      v7 = (unsigned int)(v28 + 1);
      a2[934].m128i_i32[2] = v7;
    }
    else
    {
      v5 = (__m128i *)(a2[934].m128i_i64[0] + 80LL * a2[934].m128i_u32[2]);
      v5->m128i_i64[0] = 0;
      v5->m128i_i64[1] = 0;
      v5[1].m128i_i64[0] = 0;
      v5[1].m128i_i64[1] = 0;
      v5[2].m128i_i64[0] = 0;
      v5[2].m128i_i64[1] = 0;
      v5[3].m128i_i64[0] = 0;
      v5[3].m128i_i64[1] = 0;
      v5[4].m128i_i64[0] = 0;
      v5[4].m128i_i64[1] = 0;
      sub_1DFE940(v5);
      v6 = (__m128i *)a2[934].m128i_i64[0];
      v7 = (unsigned int)(a2[934].m128i_i32[2] + 1);
      a2[934].m128i_i32[2] = v7;
    }
    v8 = &v6[5 * v7 - 5];
    v9 = v8[1].m128i_i64[0];
    v10 = v8[1].m128i_i64[1];
    v8[1] = _mm_loadu_si128(a2 + 791);
    v11 = v8[2].m128i_i64[0];
    v12 = v8[2].m128i_i64[1];
    v8[2] = _mm_loadu_si128(a2 + 792);
    v13 = _mm_loadu_si128(a2 + 793);
    a2[791].m128i_i64[0] = v9;
    a2[791].m128i_i64[1] = v10;
    a2[792].m128i_i64[0] = v11;
    a2[792].m128i_i64[1] = v12;
    v14 = v8[4].m128i_i64[0];
    v15 = v8[4].m128i_i64[1];
    v16 = v8[3].m128i_i64[0];
    v17 = v8[3].m128i_i64[1];
    v8[3] = v13;
    v8[4] = _mm_loadu_si128(a2 + 794);
    a2[794].m128i_i64[0] = v14;
    v18 = a2[790].m128i_i64[0];
    a2[793].m128i_i64[0] = v16;
    a2[793].m128i_i64[1] = v17;
    a2[794].m128i_i64[1] = v15;
    v19 = v8->m128i_i64[0];
    v8->m128i_i64[0] = v18;
    v20 = a2[790].m128i_i64[1];
    a2[790].m128i_i64[0] = v19;
    v21 = v8->m128i_i64[1];
    v8->m128i_i64[1] = v20;
    a2[790].m128i_i64[1] = v21;
    if ( a2[797].m128i_i32[3] <= (unsigned __int32)a2[797].m128i_i32[2] )
    {
      v23 = sub_2237400(&a2[797], &a2[798], 0, 272, v42);
      v29 = (_QWORD *)(v23 + 272LL * a2[797].m128i_u32[2]);
      v29[1] = 0x1000000000LL;
      *v29 = v29 + 2;
      v30 = a2[797].m128i_i64[0];
      v31 = (void **)(v30 + 272LL * a2[797].m128i_u32[2]);
      if ( (void **)v30 != v31 )
      {
        v32 = v23;
        do
        {
          *(_DWORD *)(v32 + 8) = 0;
          v33 = (void *)(v32 + 16);
          *(_DWORD *)(v32 + 12) = 16;
          v34 = *(_DWORD *)(v30 + 8);
          *(_QWORD *)v32 = v32 + 16;
          if ( v32 != v30 && v34 )
          {
            v35 = (const void *)(v30 + 16);
            if ( *(_QWORD *)v30 == v30 + 16 )
            {
              v39 = 16LL * v34;
              if ( v34 <= 0x10uLL
                || (v41 = v34,
                    sub_2237220(v32, v32 + 16, v34, 16),
                    v33 = *(void **)v32,
                    v35 = *(const void **)v30,
                    v34 = v41,
                    (v39 = 16LL * *(unsigned int *)(v30 + 8)) != 0) )
              {
                v40 = v34;
                memcpy(v33, v35, v39);
                v34 = v40;
              }
              *(_DWORD *)(v32 + 8) = v34;
              *(_DWORD *)(v30 + 8) = 0;
            }
            else
            {
              *(_QWORD *)v32 = *(_QWORD *)v30;
              *(_DWORD *)(v32 + 8) = v34;
              *(_DWORD *)(v32 + 12) = *(_DWORD *)(v30 + 12);
              *(_QWORD *)v30 = v35;
              *(_DWORD *)(v30 + 12) = 0;
              *(_DWORD *)(v30 + 8) = 0;
            }
          }
          v30 += 272;
          v32 += 272;
        }
        while ( v31 != (void **)v30 );
        v36 = (void **)a2[797].m128i_i64[0];
        v31 = &v36[34 * a2[797].m128i_u32[2]];
        if ( v36 != v31 )
        {
          do
          {
            while ( 1 )
            {
              v31 -= 34;
              if ( *v31 == v31 + 2 )
                break;
              free(*v31);
              if ( v31 == v36 )
                goto LABEL_20;
            }
          }
          while ( v31 != v36 );
LABEL_20:
          v31 = (void **)a2[797].m128i_i64[0];
        }
      }
      v37 = v42[0];
      if ( &a2[798] != (const __m128i *)v31 )
        free(v31);
      v38 = a2[797].m128i_i32[2];
      a2[797].m128i_i64[0] = v23;
      a2[797].m128i_i32[3] = v37;
      v24 = (unsigned int)(v38 + 1);
      a2[797].m128i_i32[2] = v24;
    }
    else
    {
      v22 = (_QWORD *)(a2[797].m128i_i64[0] + 272LL * a2[797].m128i_u32[2]);
      v22[1] = 0x1000000000LL;
      *v22 = v22 + 2;
      v23 = a2[797].m128i_i64[0];
      v24 = (unsigned int)(a2[797].m128i_i32[2] + 1);
      a2[797].m128i_i32[2] = v24;
    }
    sub_1E05B10((__int64 *)(v23 + 272 * v24 - 272), &a2[205].m128i_i64[1]);
  }
}
