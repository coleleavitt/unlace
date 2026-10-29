unsigned __int64 __fastcall sub_21C8880(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 result; // rax
  void ***v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // r12d
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r13
  unsigned __int64 *v16; // rbx
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  signed __int64 v22; // r12
  char *v23; // rax
  char *v24; // r9
  __m128i v25; // xmm0
  void *v26; // r12
  signed __int64 v27; // r10
  char *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  int v31; // eax
  unsigned __int64 v32; // rsi
  unsigned int v33; // esi
  __int64 v34; // rax
  __int64 v35; // rax
  int i; // edx
  __int64 *v37; // rax
  unsigned int v38; // esi
  _QWORD *v39; // rax
  unsigned __int64 v40; // [rsp+8h] [rbp-A0h]
  __m128i v41; // [rsp+18h] [rbp-90h] BYREF
  __int64 v42; // [rsp+28h] [rbp-80h]
  __int64 v43; // [rsp+30h] [rbp-78h]
  __int64 v44; // [rsp+38h] [rbp-70h]
  _QWORD v45[2]; // [rsp+40h] [rbp-68h] BYREF
  void *src[2]; // [rsp+50h] [rbp-58h] BYREF
  void *v47; // [rsp+60h] [rbp-48h]

  v3 = a1[1];
  result = *a1;
  if ( !v3 )
    return result;
  v42 = a2;
  v6 = (void ***)sub_21C6300(a2, result);
  sub_21C6C70(v6, v3);
  result = a1[1];
  v7 = (__int64)a1 + (((_DWORD)result + 15) & 0xFFFFFFF8);
  if ( !(_DWORD)result )
    return result;
  v41.m128i_i64[1] = (__int64)v45;
  v40 = 0;
  while ( 2 )
  {
    v41.m128i_i64[0] = v7;
    v8 = *a1;
    *(_OWORD *)src = 0;
    v47 = nullptr;
    v9 = *((unsigned __int8 *)a1 + v40 + 8);
    sub_21C6DF0((__int64)src, v9);
    v13 = v41.m128i_i64[0];
    v14 = v41.m128i_i64[0] + 16 * v9;
    if ( v14 == v41.m128i_i64[0] )
      goto LABEL_13;
    v15 = v41.m128i_i64[0] + 16 * v9;
    v16 = (unsigned __int64 *)v41.m128i_i64[0];
    do
    {
      while ( 1 )
      {
        v17 = *v16;
        if ( !a3 )
          goto LABEL_10;
        if ( v8 )
        {
          if ( v8 != 2 )
            goto LABEL_10;
          v31 = *(_DWORD *)(a3 + 372);
          if ( !v31 )
          {
LABEL_31:
            v17 = 0;
            goto LABEL_10;
          }
          v10 = *(unsigned int *)(a3 + 368);
          v32 = *(_QWORD *)(a3 + 272);
          if ( (_DWORD)v10 )
          {
            if ( v17 < v32 || v17 >= *(_QWORD *)(a3 + 8LL * (unsigned int)(v31 - 1) + 320) )
              goto LABEL_31;
            if ( v17 < *(_QWORD *)(a3 + 320) )
            {
              v34 = 0;
            }
            else if ( v17 < *(_QWORD *)(a3 + 328) )
            {
              v34 = 1;
            }
            else if ( v17 < *(_QWORD *)(a3 + 336) )
            {
              v34 = 2;
            }
            else if ( v17 < *(_QWORD *)(a3 + 344) )
            {
              v34 = 3;
            }
            else if ( v17 < *(_QWORD *)(a3 + 352) )
            {
              v34 = 4;
            }
            else if ( v17 < *(_QWORD *)(a3 + 360) )
            {
              v34 = 5;
            }
            else
            {
              v33 = 5;
              do
                v34 = ++v33;
              while ( v17 >= *(_QWORD *)(a3 + 8LL * v33 + 320) );
            }
            v35 = *(_QWORD *)(a3 + 8 * v34 + 280);
            for ( i = v10 - 1; i; --i )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          while ( 1 )
                          {
                            while ( 1 )
                            {
                              while ( 1 )
                              {
                                while ( 1 )
                                {
                                  while ( 1 )
                                  {
                                    while ( 1 )
                                    {
                                      while ( 1 )
                                      {
                                        v37 = (__int64 *)(v35 & 0xFFFFFFFFFFFFFFC0LL);
                                        if ( v17 >= v37[12] )
                                          break;
                                        v13 = 0;
                                        v35 = *v37;
                                        if ( !--i )
                                          goto LABEL_72;
                                      }
                                      if ( v17 >= v37[13] )
                                        break;
                                      v13 = 1;
                                      v35 = v37[1];
                                      if ( !--i )
                                        goto LABEL_72;
                                    }
                                    if ( v17 >= v37[14] )
                                      break;
                                    v13 = 2;
                                    v35 = v37[2];
                                    if ( !--i )
                                      goto LABEL_72;
                                  }
                                  if ( v37[15] <= v17 )
                                    break;
                                  v13 = 3;
                                  v35 = v37[3];
                                  if ( !--i )
                                    goto LABEL_72;
                                }
                                if ( v37[16] <= v17 )
                                  break;
                                v13 = 4;
                                v35 = v37[4];
                                if ( !--i )
                                  goto LABEL_72;
                              }
                              if ( v37[17] <= v17 )
                                break;
                              v13 = 5;
                              v35 = v37[5];
                              if ( !--i )
                                goto LABEL_72;
                            }
                            if ( v17 >= v37[18] )
                              break;
                            v13 = 6;
                            v35 = v37[6];
                            if ( !--i )
                              goto LABEL_72;
                          }
                          if ( v17 >= v37[19] )
                            break;
                          v13 = 7;
                          v35 = v37[7];
                          if ( !--i )
                            goto LABEL_72;
                        }
                        if ( v17 >= v37[20] )
                          break;
                        v13 = 8;
                        v35 = v37[8];
                        if ( !--i )
                          goto LABEL_72;
                      }
                      if ( v17 >= v37[21] )
                        break;
                      v13 = 9;
                      v35 = v37[9];
                      if ( !--i )
                        goto LABEL_72;
                    }
                    if ( v37[22] <= v17 )
                      break;
                    v13 = 10;
                    v35 = v37[10];
                    if ( !--i )
                      goto LABEL_72;
                  }
                  if ( v17 >= v37[23] )
                    break;
                  v13 = 11;
                  v35 = v37[11];
                  if ( !--i )
                    goto LABEL_72;
                }
                if ( v17 >= v37[24] )
                  break;
                v13 = 12;
                v35 = v37[12];
                if ( !--i )
                  goto LABEL_72;
              }
              v38 = 12;
              do
                v13 = ++v38;
              while ( v17 >= v37[v38 + 12] );
              v35 = v37[v38];
            }
LABEL_72:
            v39 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFC0LL);
            if ( v17 < v39[1] )
            {
              v10 = 0;
            }
            else if ( v17 < v39[3] )
            {
              v10 = 1;
            }
            else if ( v17 < v39[5] )
            {
              v10 = 2;
            }
            else if ( v17 < v39[7] )
            {
              v10 = 3;
            }
            else if ( v17 < v39[9] )
            {
              v10 = 4;
            }
            else
            {
              v10 = v17 < v39[11] ? 5LL : (unsigned int)(v17 >= v39[13]) + 6;
            }
            if ( v17 < v39[2 * v10] )
              goto LABEL_31;
            v17 = v39[v10 + 16];
          }
          else
          {
            if ( v17 < v32 || v17 >= *(_QWORD *)(a3 + 16LL * (unsigned int)(v31 - 1) + 280) )
              goto LABEL_31;
            v10 = 0;
            if ( v17 >= *(_QWORD *)(a3 + 280) )
            {
              v10 = 1;
              if ( v17 >= *(_QWORD *)(a3 + 296) )
                v10 = (unsigned int)(v17 >= *(_QWORD *)(a3 + 312)) + 2;
              if ( v17 < *(_QWORD *)(a3 + 16 * v10 + 272) )
                goto LABEL_31;
            }
            v17 = *(_QWORD *)(a3 + 8 * v10 + 336);
          }
        }
        else
        {
          sub_21C84F0(a3, v9, v10, v13, v11, v12);
          v11 = *(_QWORD *)(a3 + 152);
          v10 = *(_QWORD *)(a3 + 144);
          v29 = (v11 - v10) >> 4;
          if ( v11 - v10 > 0 )
          {
            do
            {
              while ( 1 )
              {
                v30 = v29 >> 1;
                v13 = v10 + 16 * (v29 >> 1);
                if ( v17 <= *(_QWORD *)v13 )
                  break;
                v10 = v13 + 16;
                v29 = v29 - v30 - 1;
                if ( v29 <= 0 )
                  goto LABEL_29;
              }
              v29 >>= 1;
            }
            while ( v30 );
          }
LABEL_29:
          if ( v11 == v10 || v17 != *(_QWORD *)v10 )
            goto LABEL_31;
          v17 = *(_QWORD *)(v10 + 8);
        }
LABEL_10:
        v18 = v16[1];
        v9 = (unsigned __int64)src[1];
        v45[0] = v17;
        v45[1] = v18;
        if ( src[1] == v47 )
          break;
        v9 = (unsigned __int64)src[1] + 16;
        v16 += 2;
        v41.m128i_i64[0] = v18;
        *(__m128 *)src[1] = _mm_loadh_ps((const double *)v41.m128i_i64);
        src[1] = (void *)v9;
        if ( (unsigned __int64 *)v15 == v16 )
          goto LABEL_12;
      }
      v16 += 2;
      sub_21C79A0((__int64)src, src[1], (const __m128i *)v41.m128i_i64[1]);
    }
    while ( (unsigned __int64 *)v15 != v16 );
LABEL_12:
    v14 = v15;
LABEL_13:
    v19 = sub_21C6300(v42, v8);
    v20 = (__int64)v19;
    v21 = v19[1];
    if ( v21 == v19[2] )
    {
      sub_21C6ED0((__int64)v19, v19[1], (__int64)src);
      v26 = src[0];
    }
    else
    {
      v22 = (char *)src[1] - (char *)src[0];
      *(_QWORD *)(v21 + 16) = 0;
      *(_OWORD *)v21 = 0;
      if ( v22 >> 4 )
      {
        if ( (unsigned __int64)(v22 >> 4) > 0xFFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v43 = v21;
        v41.m128i_i64[0] = (__int64)v19;
        v23 = (char *)operator new(v22);
        v21 = v43;
        v20 = v41.m128i_i64[0];
        v24 = v23;
      }
      else
      {
        v24 = nullptr;
      }
      v41.m128i_i64[0] = (__int64)v24;
      v25 = _mm_loadl_epi64(&v41);
      *(_QWORD *)(v21 + 16) = &v24[v22];
      *(__m128i *)v21 = _mm_unpacklo_epi64(v25, v25);
      v26 = src[0];
      v27 = (char *)src[1] - (char *)src[0];
      if ( src[1] != src[0] )
      {
        v44 = v21;
        v43 = v20;
        v41.m128i_i64[0] = (char *)src[1] - (char *)src[0];
        v28 = (char *)memmove(v24, src[0], (char *)src[1] - (char *)src[0]);
        v21 = v44;
        v20 = v43;
        v27 = v41.m128i_i64[0];
        v24 = v28;
      }
      *(_QWORD *)(v21 + 8) = &v24[v27];
      *(_QWORD *)(v20 + 8) += 24LL;
    }
    if ( v26 )
      operator delete(v26);
    ++v40;
    result = a1[1];
    if ( result > v40 )
    {
      v7 = v14;
      continue;
    }
    return result;
  }
}
