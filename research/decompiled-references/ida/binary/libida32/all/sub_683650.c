signed __int64 __fastcall sub_683650(
        __int64 a1,
        __m128i *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        __int64 a6)
{
  signed __int64 result; // rax
  __int64 v7; // r15
  __m128i *v8; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  __int8 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // ecx
  __m128i *i; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  __int32 v20; // edx
  __int64 v21; // r8
  __int64 v22; // r9
  __int32 v23; // eax
  __int128 v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // edx
  int v28; // esi
  char v29; // al
  __int64 v30; // rsi
  __int32 v31; // ecx
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // rdi
  __int32 v35; // esi
  __int64 v36; // rcx
  __m128i v37; // xmm0
  int v38; // eax
  __int8 *v39; // [rsp+28h] [rbp-60h]

  result = (signed __int64)a2->m128i_i64 - a1;
  if ( (__int64)a2->m128i_i64 - a1 > 320 )
  {
    v7 = a3;
    v8 = a2;
    if ( a3 )
    {
      while ( 1 )
      {
        v11 = a1 + 20;
        --v7;
        v12 = a1 + 20 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (result >> 2)) >> 1);
        v39 = &v8[-2].m128i_i8[12];
        v13 = &v8[-2].m128i_i8[12];
        if ( (unsigned __int8)a4(a1 + 20, v12) )
        {
          if ( (unsigned __int8)a4(v12, (__int64)v13) )
          {
            v14 = *(_QWORD *)(a1 + 12);
            v15 = *(_QWORD *)a1;
            v16 = *(_DWORD *)(a1 + 8);
            *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)v12);
            *(_DWORD *)(a1 + 16) = *(_DWORD *)(v12 + 16);
            *(_QWORD *)v12 = v15;
            *(_DWORD *)(v12 + 8) = v16;
            *(_QWORD *)(v12 + 12) = v14;
          }
          else
          {
            v29 = a4(a1 + 20, (__int64)v39);
            v30 = *(_QWORD *)a1;
            v31 = *(_DWORD *)(a1 + 8);
            v32 = *(_QWORD *)(a1 + 12);
            if ( v29 )
            {
              *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)v8 - 20));
              *(_DWORD *)(a1 + 16) = v8[-1].m128i_i32[3];
              *(__int64 *)((char *)&v8[-2].m128i_i64[1] + 4) = v30;
              v8[-1].m128i_i32[1] = v31;
              v8[-1].m128i_i64[1] = v32;
            }
            else
            {
              v37 = _mm_loadu_si128((const __m128i *)(a1 + 20));
              v38 = *(_DWORD *)(a1 + 36);
              *(_QWORD *)(a1 + 20) = v30;
              *(_DWORD *)(a1 + 28) = v31;
              *(_DWORD *)(a1 + 16) = v38;
              *(_QWORD *)(a1 + 32) = v32;
              *(__m128i *)a1 = v37;
            }
          }
        }
        else if ( (unsigned __int8)a4(a1 + 20, (__int64)v13) )
        {
          v25 = *(_QWORD *)(a1 + 12);
          v26 = *(_QWORD *)a1;
          v27 = *(_DWORD *)(a1 + 8);
          v28 = *(_DWORD *)(a1 + 36);
          *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(a1 + 20));
          *(_QWORD *)(a1 + 20) = v26;
          *(_DWORD *)(a1 + 16) = v28;
          *(_DWORD *)(a1 + 28) = v27;
          *(_QWORD *)(a1 + 32) = v25;
        }
        else
        {
          v33 = a4(v12, (__int64)v39);
          v34 = *(_QWORD *)a1;
          v35 = *(_DWORD *)(a1 + 8);
          v36 = *(_QWORD *)(a1 + 12);
          if ( v33 )
          {
            *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)v8 - 20));
            *(_DWORD *)(a1 + 16) = v8[-1].m128i_i32[3];
            *(__int64 *)((char *)&v8[-2].m128i_i64[1] + 4) = v34;
            v8[-1].m128i_i32[1] = v35;
            v8[-1].m128i_i64[1] = v36;
          }
          else
          {
            *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)v12);
            *(_DWORD *)(a1 + 16) = *(_DWORD *)(v12 + 16);
            *(_QWORD *)v12 = v34;
            *(_DWORD *)(v12 + 8) = v35;
            *(_QWORD *)(v12 + 12) = v36;
          }
        }
        for ( i = v8; ; *(__int64 *)((char *)&i->m128i_i64[1] + 4) = v18 )
        {
          while ( (unsigned __int8)a4(v11, a1) )
            v11 += 20LL;
          do
            i = (__m128i *)((char *)i - 20);
          while ( (unsigned __int8)a4(a1, (__int64)i) );
          if ( v11 >= (unsigned __int64)i )
            break;
          v18 = *(_QWORD *)(v11 + 12);
          v11 += 20LL;
          v19 = *(_QWORD *)(v11 - 20);
          v20 = *(_DWORD *)(v11 - 12);
          *(__m128i *)(v11 - 20) = _mm_loadu_si128(i);
          *(_DWORD *)(v11 - 4) = i[1].m128i_i32[0];
          i->m128i_i64[0] = v19;
          i->m128i_i32[2] = v20;
        }
        sub_683650(v11, v8, v7, a4);
        result = v11 - a1;
        if ( (__int64)(v11 - a1) <= 320 )
          break;
        v8 = (__m128i *)v11;
        if ( !v7 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      sub_683520((const __m128i *)a1, v8, (unsigned __int64)v8, a4, a5, a6);
      for ( result = (signed __int64)v8->m128i_i64 - a1;
            (__int64)v8->m128i_i64 - a1 > 20;
            result = sub_683310(
                       a1,
                       0,
                       0xCCCCCCCCCCCCCCCDLL * (((__int64)v8->m128i_i64 - a1) >> 2),
                       a4,
                       v21,
                       v22,
                       v24,
                       v23) )
      {
        v8 = (__m128i *)((char *)v8 - 20);
        v23 = v8[1].m128i_i32[0];
        v24 = (__int128)_mm_loadu_si128(v8);
        *v8 = _mm_loadu_si128((const __m128i *)a1);
        v8[1].m128i_i32[0] = *(_DWORD *)(a1 + 16);
      }
    }
  }
  return result;
}

