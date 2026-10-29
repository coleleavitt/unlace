void __fastcall sub_1670820(__int64 a1, unsigned int a2, __int64 a3)
{
  int v4; // eax
  __m128i *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  const void *v8; // rbp
  size_t v9; // rbx
  __m128i *v10; // r13
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 *v13; // r13
  __int64 *v14; // r15
  __m128i *v15; // rbp
  __m128i *v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rdx
  __m128i *v19; // rcx
  int v20; // eax
  int v21; // esi
  __int64 v22; // r8
  bool v23; // zf
  __int64 v24; // r9
  __int64 v25; // rdx
  __m128i *v26; // rcx
  int v27; // eax
  int v28; // esi
  __int64 v29; // r8
  __int64 v30; // rax
  __m128i v31; // xmm0
  const void *v32; // rbp
  size_t v33; // rbx
  __int64 *v34; // rbx
  __m128i v35; // [rsp+0h] [rbp-128h] BYREF
  __m128i *v36; // [rsp+18h] [rbp-110h]
  __int64 v37; // [rsp+20h] [rbp-108h]
  __int64 v38; // [rsp+28h] [rbp-100h]
  __int64 *v39; // [rsp+30h] [rbp-F8h]
  __int64 *v40; // [rsp+38h] [rbp-F0h]
  _QWORD *v41; // [rsp+40h] [rbp-E8h]
  __int64 v42; // [rsp+48h] [rbp-E0h]
  __m128i *v43; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD v44[4]; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int8 *v45; // [rsp+80h] [rbp-A8h] BYREF
  char v46; // [rsp+D8h] [rbp-50h]
  char v47; // [rsp+E4h] [rbp-44h]

  v4 = *(_BYTE *)(sub_B8EAA0(*(_QWORD *)(a1 + 544)) + 8) & 0x7F;
  if ( v4 && v4 != 24 )
  {
    sub_168B9F0(v44, a1 + 8, a2, 4820, 0);
    if ( v46 )
    {
      sub_AE9DF0(&v45, (__int64)"function", 1u);
      sub_15F7200(v44);
    }
    else
    {
      if ( v47 )
        sub_1669EA0((__int64)v44, (__int64)"function");
      sub_15F7200(v44);
    }
  }
  else
  {
    v5 = *(__m128i **)a3;
    v37 = *(_QWORD *)a3 + 16LL * *(unsigned int *)(a3 + 8);
    if ( v5 != (__m128i *)v37 )
    {
      v39 = (__int64 *)(a1 + 2336);
      v40 = (__int64 *)&v43;
      v42 = a1 + 2376;
      v41 = v44;
      do
      {
        if ( *(_DWORD *)(a1 + 2344) )
        {
          if ( !(unsigned __int8)sub_10E92B0(v39, v5, v40) )
          {
            v25 = *(unsigned int *)(a1 + 2352);
            v26 = v43;
            v27 = *(_DWORD *)(a1 + 2344) + 1;
            v28 = 2 * v25;
            v29 = (unsigned int)(4 * v27);
            v44[0] = v43;
            if ( (unsigned int)v29 < 3 * (int)v25 )
            {
              if ( (int)v25 - *(_DWORD *)(a1 + 2348) - v27 > (unsigned int)v25 >> 3 )
              {
LABEL_39:
                v23 = v26->m128i_i64[0] == -1;
                *(_DWORD *)(a1 + 2344) = v27;
                if ( !v23 )
                  --*(_DWORD *)(a1 + 2348);
                v30 = *(unsigned int *)(a1 + 2368);
                *v26 = _mm_loadu_si128(v5);
                v31 = _mm_loadu_si128(v5);
                if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2372) )
                {
                  v35 = v31;
                  sub_2237220(a1 + 2360, v42, v30 + 1, 16);
                  v30 = *(unsigned int *)(a1 + 2368);
                  v31 = _mm_load_si128(&v35);
                }
                *(__m128i *)(*(_QWORD *)(a1 + 2360) + 16 * v30) = v31;
                ++*(_DWORD *)(a1 + 2368);
                goto LABEL_22;
              }
              v28 = v25;
            }
            v34 = v39;
            sub_10FCC90((__int64)v39, v28, v25, (__int64)v43, v29, v24);
            sub_10E92B0(v34, v5, v41);
            v26 = (__m128i *)v44[0];
            v27 = *(_DWORD *)(a1 + 2344) + 1;
            goto LABEL_39;
          }
        }
        else
        {
          v6 = *(_QWORD *)(a1 + 2360);
          v38 = *(unsigned int *)(a1 + 2368);
          v36 = (__m128i *)(v6 + 16 * v38);
          v7 = (16 * v38) >> 4;
          if ( !((16 * v38) >> 6) )
            goto LABEL_45;
          v8 = (const void *)v5->m128i_i64[0];
          v9 = v5->m128i_u64[1];
          v35.m128i_i64[0] = v6 + ((16 * v38) >> 6 << 6);
          do
          {
            if ( *(_QWORD *)(v6 + 8) == v9 && (!v9 || !memcmp(*(const void **)v6, v8, v9)) )
              goto LABEL_21;
            v10 = (__m128i *)(v6 + 16);
            if ( v9 == *(_QWORD *)(v6 + 24) && (!v9 || !memcmp(*(const void **)(v6 + 16), v8, v9))
              || (v10 = (__m128i *)(v6 + 32), v9 == *(_QWORD *)(v6 + 40))
              && (!v9 || !memcmp(*(const void **)(v6 + 32), v8, v9))
              || (v10 = (__m128i *)(v6 + 48), v9 == *(_QWORD *)(v6 + 56))
              && (!v9 || !memcmp(*(const void **)(v6 + 48), v8, v9)) )
            {
              if ( v36 == v10 )
                goto LABEL_25;
              goto LABEL_22;
            }
            v6 += 64;
          }
          while ( v35.m128i_i64[0] != v6 );
          v7 = ((__int64)v36->m128i_i64 - v6) >> 4;
LABEL_45:
          switch ( v7 )
          {
            case 2LL:
              v32 = (const void *)v5->m128i_i64[0];
              v33 = v5->m128i_u64[1];
              if ( *(_QWORD *)(v6 + 8) == v33 )
                goto LABEL_63;
              goto LABEL_61;
            case 3LL:
              v32 = (const void *)v5->m128i_i64[0];
              v33 = v5->m128i_u64[1];
              if ( *(_QWORD *)(v6 + 8) == v33
                && (!v33 || !memcmp(*(const void **)v6, (const void *)v5->m128i_i64[0], v5->m128i_u64[1])) )
              {
                goto LABEL_21;
              }
              v6 += 16;
              if ( *(_QWORD *)(v6 + 8) == v33 )
              {
LABEL_63:
                if ( !v33 || !memcmp(*(const void **)v6, v32, v33) )
                  goto LABEL_21;
              }
LABEL_61:
              v6 += 16;
              goto LABEL_49;
            case 1LL:
              v32 = (const void *)v5->m128i_i64[0];
              v33 = v5->m128i_u64[1];
LABEL_49:
              if ( v33 == *(_QWORD *)(v6 + 8) && (!v33 || !memcmp(*(const void **)v6, v32, v33)) )
              {
LABEL_21:
                if ( v36 != (__m128i *)v6 )
                  goto LABEL_22;
              }
              break;
          }
LABEL_25:
          v11 = _mm_loadu_si128(v5);
          if ( v38 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2372) )
          {
            v35 = v11;
            sub_2237220(a1 + 2360, v42, v38 + 1, 16);
            v11 = _mm_load_si128(&v35);
            v36 = (__m128i *)(*(_QWORD *)(a1 + 2360) + 16LL * *(unsigned int *)(a1 + 2368));
          }
          *v36 = v11;
          v12 = (unsigned int)(*(_DWORD *)(a1 + 2368) + 1);
          *(_DWORD *)(a1 + 2368) = v12;
          if ( (unsigned int)v12 > 4 )
          {
            v13 = v39;
            v14 = v40;
            v15 = *(__m128i **)(a1 + 2360);
            v16 = &v15[v12];
            while ( (unsigned __int8)sub_10E92B0(v13, v15, v14) )
            {
LABEL_29:
              if ( v16 == ++v15 )
                goto LABEL_22;
            }
            v18 = *(unsigned int *)(a1 + 2352);
            v19 = v43;
            v20 = *(_DWORD *)(a1 + 2344) + 1;
            v21 = 2 * v18;
            v22 = (unsigned int)(4 * v20);
            v44[0] = v43;
            if ( (unsigned int)v22 < 3 * (int)v18 )
            {
              if ( (int)v18 - *(_DWORD *)(a1 + 2348) - v20 > (unsigned int)v18 >> 3 )
              {
LABEL_33:
                v23 = v19->m128i_i64[0] == -1;
                *(_DWORD *)(a1 + 2344) = v20;
                if ( !v23 )
                  --*(_DWORD *)(a1 + 2348);
                *v19 = _mm_loadu_si128(v15);
                goto LABEL_29;
              }
              v21 = v18;
            }
            sub_10FCC90((__int64)v13, v21, v18, (__int64)v43, v22, v17);
            sub_10E92B0(v13, v15, v41);
            v19 = (__m128i *)v44[0];
            v20 = *(_DWORD *)(a1 + 2344) + 1;
            goto LABEL_33;
          }
        }
LABEL_22:
        ++v5;
      }
      while ( (__m128i *)v37 != v5 );
    }
  }
}
