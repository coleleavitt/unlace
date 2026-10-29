__int64 *__fastcall sub_21A6F20(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned int v6; // esi
  unsigned int v7; // r13d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10; // r15
  __m128 v11; // xmm0
  const __m128i *v12; // rsi
  const __m128i *v13; // rsi
  __int32 v14; // eax
  char *v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  __int64 *result; // rax
  __int64 *v19; // rdx
  __int64 v20; // [rsp+8h] [rbp-B0h] BYREF
  __int32 v21; // [rsp+10h] [rbp-A8h]
  int v22; // [rsp+14h] [rbp-A4h]
  __int64 v23; // [rsp+18h] [rbp-A0h]
  __int64 *v24; // [rsp+20h] [rbp-98h]
  const __m128i *v25; // [rsp+28h] [rbp-90h]
  __int64 v26; // [rsp+38h] [rbp-80h] BYREF
  __m128i v27; // [rsp+40h] [rbp-78h] BYREF
  char v28; // [rsp+50h] [rbp-68h] BYREF
  __m128 v29; // [rsp+58h] [rbp-60h] BYREF
  int v30; // [rsp+68h] [rbp-50h]
  __m128i v31[4]; // [rsp+70h] [rbp-48h] BYREF

  v5 = (__int64)(*(_QWORD *)(a2 + 80) - *(_QWORD *)(a2 + 72)) >> 4;
  v24 = a1;
  *(_DWORD *)(a2 + 704) = -858993459 * v5;
  v6 = sub_21A2A40(a3);
  v23 = a2 + 328;
  sub_21A4A80((const __m128i **)(a2 + 328), v6);
  if ( v6 )
  {
    v7 = v6 - 1;
    v25 = &v27;
    while ( 1 )
    {
      v31[0] = 0u;
      v8 = sub_21A29A0((char **)(a3 + 8), *(char **)(a3 + 16));
      if ( v8 > 0xFFFFFFFF )
        goto LABEL_27;
      v15 = *(char **)(a3 + 16);
      if ( (unsigned int)(v8 - 105) <= 0x16 )
      {
        if ( ((1LL << ((unsigned __int8)v8 - 105)) & 0x7C00C1) == 0 )
          LODWORD(v8) = 255;
        v21 = v8;
      }
      else
      {
        v21 = 255;
        if ( (unsigned int)(v8 - 99) <= 1 )
        {
          sub_21A2AC0((char **)(a3 + 8), v15);
          v15 = *(char **)(a3 + 16);
        }
      }
      v9 = sub_21A29A0((char **)(a3 + 8), v15);
      v10 = v9;
      if ( v9 > 0xFFFFFFFF )
LABEL_27:
        sub_2221C70("LEB is outside Varuint32 range", 1);
      sub_21A29A0((char **)(a3 + 8), *(char **)(a3 + 16));
      if ( (v10 & 1) != 0 )
        v20 = sub_21A29A0((char **)(a3 + 8), *(char **)(a3 + 16));
      if ( (v10 & 8) != 0 )
      {
        v16 = sub_21A29A0((char **)(a3 + 8), *(char **)(a3 + 16));
        if ( v16 > 0xFFFFFFFF )
          goto LABEL_27;
        if ( v16 > 0x1F )
          sub_2221C70("log2(wasm page size) too large", 1);
        v22 = 1 << v16;
      }
      v11 = _mm_loadh_ps((const double *)&v20);
      v28 = v10;
      v12 = *(const __m128i **)(a2 + 336);
      v29 = v11;
      v27.m128i_i32[2] = v21;
      v30 = v22;
      v27.m128i_i32[0] = *(_DWORD *)(a2 + 676) + (((__int64)v12->m128i_i64 - *(_QWORD *)(a2 + 328)) >> 6);
      if ( v12 == *(const __m128i **)(a2 + 344) )
      {
        sub_21A6D80(v23, v12, v25);
        v13 = *(const __m128i **)(a2 + 336);
      }
      else
      {
        v13 = v12 + 4;
        v13[-4] = _mm_load_si128(&v27);
        v13[-3] = _mm_load_si128((const __m128i *)&v28);
        v13[-2] = _mm_load_si128((const __m128i *)&v29.m128_u16[4]);
        v13[-1] = _mm_load_si128(v31);
        *(_QWORD *)(a2 + 336) = v13;
      }
      v14 = v13[-4].m128i_i32[2];
      if ( v14 != 255 && v14 != 105 && (unsigned int)(v14 - 111) > 1 )
        break;
      if ( --v7 == -1 )
        goto LABEL_23;
    }
    sub_21A2C10(&v26, "invalid table element type");
    v19 = v24;
    *v24 = v26;
    return v19;
  }
  else
  {
LABEL_23:
    if ( *(_QWORD *)(a3 + 8) == *(_QWORD *)(a3 + 16) )
    {
      result = v24;
      *v24 = 0;
    }
    else
    {
      v27.m128i_i64[0] = (__int64)"table section ended prematurely";
      v29.m128_i16[4] = 259;
      v17 = operator new(0x38u);
      sub_2195A00(v17, (__int64)&v27, 3);
      result = v24;
      *v24 = v17;
    }
  }
  return result;
}
