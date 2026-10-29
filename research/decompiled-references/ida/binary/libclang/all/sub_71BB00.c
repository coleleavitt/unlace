__int64 __fastcall sub_71BB00(_QWORD *a1, __int64 *a2, const __m128i *a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  int v11; // edx
  __int64 v12; // rsi
  _DWORD *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  void *v21; // r15
  __int64 v22; // rcx
  void *v23; // rax
  void *v24; // r15
  __int64 v25; // rcx
  void *v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int32 v30; // eax
  unsigned __int64 v31; // rax
  void *v32; // [rsp+10h] [rbp-78h]
  void *v33; // [rsp+10h] [rbp-78h]
  __int64 v34; // [rsp+10h] [rbp-78h]
  __int64 v35; // [rsp+18h] [rbp-70h]
  void *v36; // [rsp+28h] [rbp-60h] BYREF
  __m128i v37; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38; // [rsp+40h] [rbp-48h]

  if ( a4 == a6 )
  {
    v6 = *((unsigned int *)a2 + 2);
    v11 = *((_DWORD *)a2 + 2);
    if ( v6 != a4 )
    {
      if ( a4 >= v6 )
      {
        if ( *((unsigned int *)a2 + 3) < a4 )
        {
          sub_25D6060(a2, a2 + 2, a4, 24);
          v6 = *((unsigned int *)a2 + 2);
        }
        v12 = 24 * v6;
        v13 = (_DWORD *)(*a2 + 24 * v6);
        v14 = 24 * a4 + *a2;
        if ( v12 != 24 * a4 )
        {
          do
          {
            *v13 = 0;
            v13 += 6;
            *((_QWORD *)v13 - 2) = 0;
          }
          while ( (_DWORD *)v14 != v13 );
        }
      }
      *((_DWORD *)a2 + 2) = a4;
      v11 = a4;
    }
    v15 = 0;
    if ( !v11 )
      return 0;
    while ( 1 )
    {
      v19 = 24 * v15;
      if ( (a3->m128i_i32[0] & 0x7FFFFFFF) == (*(_DWORD *)a5 & 0x7FFFFFFF) )
      {
        switch ( a3->m128i_i32[0] & 0x7FFFFFFF )
        {
          case 1:
            v17 = a3->m128i_u64[1];
            if ( (*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] | v17 & 7) != (*(_QWORD *)&byte_8[*(_QWORD *)(a5 + 8)
                                                                                                 & 0xFFFFFFFFFFFFFFF0LL]
                                                                              | *(_QWORD *)(a5 + 8) & 7LL) )
              goto LABEL_12;
            v31 = sub_7197B0(a1, v17, *(_QWORD *)(a5 + 8), 0);
            sub_AFCC70(&v37, v31, 0, 0);
            v19 = 24 * v15;
            break;
          case 3:
            v27 = a3->m128i_u64[1];
            if ( (*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] | v27 & 7) != (*(_QWORD *)&byte_8[*(_QWORD *)(a5 + 8)
                                                                                                 & 0xFFFFFFFFFFFFFFF0LL]
                                                                              | *(_QWORD *)(a5 + 8) & 7LL) )
              goto LABEL_12;
            v28 = sub_7197B0(a1, v27, *(_QWORD *)(a5 + 8), 0);
            sub_AFCC70(&v37, v28, 1, 0);
            v19 = 24 * v15;
            break;
          case 6:
            sub_B03900(&v36, a3->m128i_i64[1]);
            v24 = v36;
            sub_B03900(&v36, *(_QWORD *)(a5 + 8));
            v25 = (__int64)v36;
            v19 = 24 * v15;
            if ( v36 != v24 )
            {
              v33 = v36;
              v24 = sub_717B10(a1, v24, 0);
              v26 = sub_717B10(a1, v33, 0);
              v19 = 24 * v15;
              v25 = (__int64)v26;
              if ( v26 != v24 )
                goto LABEL_12;
            }
            if ( !v24 )
              goto LABEL_12;
            v37.m128i_i64[1] = v25;
            v37.m128i_i64[0] = 6;
            break;
          case 7:
            sub_B03900(&v36, a3->m128i_i64[1]);
            v21 = v36;
            sub_B03900(&v36, *(_QWORD *)(a5 + 8));
            v22 = (__int64)v36;
            v19 = 24 * v15;
            if ( (v36 == v21
               || (v32 = v36,
                   v21 = sub_717B10(a1, v21, 0),
                   v23 = sub_717B10(a1, v32, 0),
                   v19 = 24 * v15,
                   v22 = (__int64)v23,
                   v23 == v21))
              && v21 )
            {
              v35 = v19;
              v34 = v22;
              v29 = sub_AFD9F0(a3);
              v37.m128i_i32[0] = 7;
              v36 = (void *)v29;
              v30 = v29 + 1;
              v19 = v35;
              v37.m128i_i64[1] = v34;
              if ( !BYTE4(v29) )
                v30 = 0;
              v37.m128i_i32[1] = v30;
            }
            else
            {
              v37 = (__m128i)6uLL;
            }
            break;
          case 8:
            if ( (*(_QWORD *)&byte_8[*(_QWORD *)(a3->m128i_i64[1] + 8) & 0xFFFFFFFFFFFFFFF0LL]
                | *(_QWORD *)(a3->m128i_i64[1] + 8) & 7LL) != (*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(a5 + 8) + 8LL)
                                                                                & 0xFFFFFFFFFFFFFFF0LL]
                                                             | *(_QWORD *)(*(_QWORD *)(a5 + 8) + 8LL) & 7LL) )
              goto LABEL_12;
            goto LABEL_19;
          default:
LABEL_19:
            v20 = a3[1].m128i_i64[0];
            v37 = _mm_loadu_si128(a3);
            v38 = v20;
            break;
        }
      }
      else
      {
LABEL_12:
        v37.m128i_i32[0] = 0;
        v37.m128i_i64[1] = 0;
      }
      v18 = *a2;
      *(__m128i *)(v18 + 24 * v15) = _mm_load_si128(&v37);
      *(_QWORD *)(v18 + v19 + 16) = v38;
      if ( (*(_DWORD *)(*a2 + 24 * v15) & 0x7FFFFFFF) == 0 )
        break;
      ++v15;
      a3 = (const __m128i *)((char *)a3 + 24);
      a5 += 24;
      if ( v15 >= *((unsigned int *)a2 + 2) )
        return 0;
    }
  }
  return 1;
}

