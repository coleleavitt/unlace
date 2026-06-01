__m128i *__fastcall sub_5F9D40(const __m128i *a1, __int64 a2)
{
  __int64 *v2; // r13
  __m128i *result; // rax
  __int64 *v4; // r12
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 i; // rdx
  __m128i v12; // xmm3
  __m128i v13; // xmm2
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __m128i v16; // xmm3
  __m128i v17; // xmm3
  __m128i v18; // xmm3
  __m128i v19; // xmm0
  __int64 v20; // rsi
  const __m128i *v21; // r14
  __int64 *v22; // rdx
  __int64 v23; // rdx
  __int64 *v24; // r14
  const __m128i *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // r14
  const __m128i *v29; // [rsp+8h] [rbp-90h]
  __int64 *v30; // [rsp+8h] [rbp-90h]
  const __m128i *v31; // [rsp+8h] [rbp-90h]
  __m128i *v32; // [rsp+8h] [rbp-90h]
  const __m128i *v33; // [rsp+8h] [rbp-90h]
  const __m128i *v34; // [rsp+18h] [rbp-80h] BYREF
  __m128i v35; // [rsp+20h] [rbp-78h]
  __m128i v36; // [rsp+30h] [rbp-68h]
  _OWORD v37[5]; // [rsp+40h] [rbp-58h] BYREF

  sub_5F9AA0(a1, a2);
  v2 = *(__int64 **)(a2 + 24);
  result = *(__m128i **)(a2 + 32);
  v4 = &v2[(_QWORD)result];
  while ( v4 != v2 )
  {
    result = (__m128i *)a1->m128i_i64[0];
    v5 = *v2;
    v34 = a1;
    v6 = result->m128i_u32[2];
    if ( v5 )
    {
      result = (__m128i *)*(unsigned __int8 *)(v5 + 8);
      switch ( *(_BYTE *)(v5 + 8) )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 8:
        case 0x2C:
        case 0x2D:
          break;
        case 5:
        case 6:
        case 0x25:
        case 0x27:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2E:
          if ( *(_QWORD *)(v5 + 32) )
          {
            result = *(__m128i **)(v5 + 24);
            v20 = result->m128i_i64[0];
            if ( result->m128i_i64[0] )
              goto LABEL_13;
          }
          break;
        case 7:
        case 0x14:
        case 0x17:
        case 0x26:
        case 0x31:
          v22 = *(__int64 **)(v5 + 24);
          if ( *v22 )
          {
            sub_5F99B0(a1, *v22);
            v23 = *(_QWORD *)(v5 + 24);
            result = (__m128i *)(v23 + 8);
            v30 = (__int64 *)(v23 + 8LL * *(_QWORD *)(v5 + 32));
            if ( (__int64 *)(v23 + 8) == v30 )
              goto LABEL_14;
LABEL_22:
            v24 = (__int64 *)result;
            do
            {
              if ( *v24 )
                sub_5F99B0(a1, *v24);
              ++v24;
            }
            while ( v30 != v24 );
            goto LABEL_14;
          }
          result = (__m128i *)(v22 + 1);
          v30 = &v22[*(_QWORD *)(v5 + 32)];
          if ( v22 + 1 != v30 )
            goto LABEL_22;
          break;
        case 9:
          v20 = *(_QWORD *)(v5 + 24);
          if ( !v20 )
            break;
          goto LABEL_13;
        case 0xA:
          if ( *(_BYTE *)(v5 + 25) )
          {
            if ( *(_BYTE *)(v5 + 24) )
            {
              v20 = *(_QWORD *)(v5 + 32);
              if ( v20 )
              {
LABEL_13:
                sub_5F99B0(a1, v20);
                goto LABEL_14;
              }
            }
            break;
          }
          result = (__m128i *)(v5 + 32);
          v28 = v5 + 32 + 8LL * *(unsigned int *)(v5 + 28);
          if ( result == (__m128i *)v28 )
            break;
          do
          {
            if ( result->m128i_i64[0] )
            {
              v33 = result;
              sub_5F99B0(a1, result->m128i_i64[0]);
              result = (__m128i *)v33;
            }
            result = (__m128i *)((char *)result + 8);
          }
          while ( (__m128i *)v28 != result );
          goto LABEL_14;
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x15:
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
          sub_5F9750(&v34, v5);
          result = (__m128i *)a1->m128i_i64[0];
          v7 = *(unsigned int *)(a1->m128i_i64[0] + 8);
          goto LABEL_5;
        case 0x28:
          result = *(__m128i **)(v5 + 24);
          v25 = (__m128i *)((char *)result + 8 * *(_QWORD *)(v5 + 32));
          if ( result == v25 )
            break;
          do
          {
            if ( result->m128i_i64[0] )
            {
              v31 = result;
              sub_5F99B0(a1, result->m128i_i64[0]);
              result = (__m128i *)v31;
            }
            result = (__m128i *)((char *)result + 8);
          }
          while ( v25 != result );
          goto LABEL_14;
        case 0x2F:
          result = *(__m128i **)(v5 + 24);
          v21 = (__m128i *)((char *)result + 8 * *(_QWORD *)(v5 + 32));
          if ( result == v21 )
            break;
          do
          {
            if ( result->m128i_i64[0] )
            {
              v29 = result;
              sub_5F99B0(a1, result->m128i_i64[0]);
              result = (__m128i *)v29;
            }
            result = (__m128i *)((char *)result + 8);
          }
          while ( v21 != result );
          goto LABEL_14;
        case 0x30:
          v26 = *(_QWORD *)(v5 + 32);
          result = nullptr;
          if ( !(_DWORD)v26 )
            break;
          do
          {
            while ( 1 )
            {
              v27 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8LL * (_QWORD)result);
              if ( !v27 )
                break;
              v32 = result;
              sub_5F99B0(a1, v27);
              v26 = *(_QWORD *)(v5 + 32);
              result = (__m128i *)&v32->m128i_i8[1];
              if ( (int)v32 + 1 >= (unsigned int)v26 )
                goto LABEL_14;
            }
            result = (__m128i *)((char *)result + 1);
          }
          while ( (unsigned int)result < (unsigned int)v26 );
LABEL_14:
          result = (__m128i *)a1->m128i_i64[0];
          v7 = *(unsigned int *)(a1->m128i_i64[0] + 8);
LABEL_5:
          if ( (_DWORD)v6 != (_DWORD)v7 )
          {
            v8 = result->m128i_i64[0];
            v9 = v6 << 6;
            v10 = v7 << 6;
            result = (__m128i *)(result->m128i_i64[0] + v9);
            if ( v9 != v10 )
            {
              for ( i = v8 + v10 - 64; (unsigned __int64)result < i; *(__m128i *)(i + 108) = v19 )
              {
                v12 = _mm_loadu_si128(result + 3);
                v13 = _mm_loadu_si128(result);
                i -= 64LL;
                result += 4;
                v14 = _mm_loadu_si128(result - 3);
                v15 = _mm_loadu_si128(result - 2);
                v37[1] = v12;
                v16 = _mm_loadu_si128((const __m128i *)(i + 64));
                v37[0] = v15;
                result[-4] = v16;
                v17 = _mm_loadu_si128((const __m128i *)(i + 80));
                v35 = v13;
                result[-3] = v17;
                v18 = _mm_loadu_si128((const __m128i *)(i + 96));
                v36 = v14;
                result[-2] = v18;
                *(__m128i *)((char *)result - 20) = _mm_loadu_si128((const __m128i *)(i + 108));
                *(__m128i *)(i + 96) = v15;
                v19 = _mm_loadu_si128((const __m128i *)((char *)v37 + 12));
                *(__m128i *)(i + 64) = v13;
                *(__m128i *)(i + 80) = v14;
              }
            }
          }
          break;
      }
    }
    ++v2;
  }
  return result;
}

