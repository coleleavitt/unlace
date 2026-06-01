__int64 __fastcall sub_1FE3F40(const __m128i *a1, __int64 a2)
{
  __int64 v3; // r8
  _DWORD *v4; // rdi
  const __m128i *v5; // r12
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r9
  __m128i *v9; // r14
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int32 v13; // r13d
  unsigned __int64 v14; // rdx
  unsigned int v15; // ebx
  unsigned int v16; // eax
  __int64 v18; // rsi
  char v19; // r13
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _DWORD *v24; // rsi
  __int64 v25; // r13
  unsigned __int64 v26; // rdx
  __m128i *v27; // r13
  __m128i v28; // xmm1
  __int64 v29; // rdx
  __int64 v30; // [rsp+18h] [rbp-160h]
  __int64 v31; // [rsp+28h] [rbp-150h]
  void *v32; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-140h]
  char v34; // [rsp+3Ch] [rbp-13Ch]
  __m128i v35; // [rsp+40h] [rbp-138h]
  __int64 v36; // [rsp+50h] [rbp-128h]
  __m128i v37; // [rsp+60h] [rbp-118h]
  __int64 v38; // [rsp+70h] [rbp-108h]
  __m128i v39; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v40; // [rsp+90h] [rbp-E8h]
  char v41[8]; // [rsp+A0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-C8h]
  _DWORD v44[48]; // [rsp+B8h] [rbp-C0h] BYREF

  v41[0] = 0;
  v30 = sub_224A990("Stable Hash for Template Arguments", 34, 0, 0);
  v4 = v44;
  v43 = 0x2000000001LL;
  v5 = (const __m128i *)((char *)a1 + 24 * a2);
  ptr = v44;
  v44[0] = a2;
  if ( v5 == a1 )
    goto LABEL_15;
  v6 = 32;
  v7 = 1;
  while ( 1 )
  {
    v8 = a1[1].m128i_i64[0];
    v35 = _mm_loadu_si128(a1);
    v9 = (__m128i *)v35.m128i_i64[1];
    v36 = v8;
    v10 = _mm_cvtsi128_si32(v35) & 0x7FFFFFFF;
    v37 = v35;
    v38 = v8;
    if ( v7 + 1 > v6 )
    {
      v31 = v8;
      sub_2237220(&ptr, v44, v7 + 1, 4);
      v7 = (unsigned int)v43;
      v8 = v31;
    }
    *((_DWORD *)ptr + v7) = v10;
    v11 = (unsigned int)(v43 + 1);
    LODWORD(v43) = v43 + 1;
    switch ( v10 )
    {
      case 1LL:
        sub_1FE3950((__int64)v41, (__int64)v9, v11, v7, v3, v8);
        break;
      case 2LL:
        v29 = (*(_BYTE *)(v8 + 28) & 0x7Fu) - 18;
        if ( (unsigned int)v29 > 0x3F )
          goto LABEL_10;
        sub_1FE3A00((__int64)v41, *(_QWORD *)(v8 + 40), v29, v7, v3, v8);
        break;
      case 3LL:
        v20 = (unsigned int)v11;
        v21 = (unsigned int)v11 + 1LL;
        if ( v21 > HIDWORD(v43) )
        {
          sub_2237220(&ptr, v44, v21, 4);
          v20 = (unsigned int)v43;
        }
        *((_DWORD *)ptr + v20) = 0;
        LODWORD(v43) = v43 + 1;
        v22 = (unsigned int)v43;
        if ( (unsigned __int64)(unsigned int)v43 + 1 > HIDWORD(v43) )
        {
          sub_2237220(&ptr, v44, (unsigned int)v43 + 1LL, 4);
          v22 = (unsigned int)v43;
        }
        *((_DWORD *)ptr + v22) = 0;
        LODWORD(v43) = v43 + 1;
        break;
      case 4LL:
        v18 = v37.m128i_i32[1] & 0x7FFFFFFF;
        v19 = (unsigned __int8)v37.m128i_i8[7] >> 7;
        if ( (unsigned int)v18 > 0x40 )
        {
          sub_2205600(&v39, v18, v9, ((unsigned __int64)(unsigned int)v18 + 63) >> 6);
          v34 = v19;
          v33 = v39.m128i_u32[2];
          v32 = (void *)v39.m128i_i64[0];
        }
        else
        {
          v33 = v37.m128i_i32[1] & 0x7FFFFFFF;
          v32 = v9;
          v34 = (unsigned __int8)v37.m128i_i8[7] >> 7;
        }
        sub_220C670(&v32, &ptr);
        if ( v33 > 0x40 && v32 )
          operator delete[](v32);
        break;
      case 5LL:
        sub_1FE3950((__int64)v41, v8, v11, v7, v3, v8);
        v12 = (unsigned int)v43;
        v13 = v9->m128i_i32[0];
        v14 = (unsigned int)v43 + 1LL;
        if ( v14 > HIDWORD(v43) )
        {
          sub_2237220(&ptr, v44, v14, 4);
          v12 = (unsigned int)v43;
        }
        *((_DWORD *)ptr + v12) = v13;
        LODWORD(v43) = v43 + 1;
        if ( v13 == 7 || v13 == 12 )
          goto LABEL_10;
        sub_A4FF00((unsigned int *)v9, (__int64)&ptr);
        break;
      case 6LL:
      case 7LL:
        a1 = (const __m128i *)((char *)a1 + 24);
        sub_F22A90(&v39, (__int64)v9);
        sub_1FE3B30(v41, v39.m128i_i64[0]);
        if ( v5 == a1 )
          goto LABEL_14;
        goto LABEL_12;
      case 8LL:
LABEL_10:
        v41[0] = 1;
        break;
      case 9LL:
        v23 = (unsigned int)v11;
        LODWORD(v24) = HIDWORD(v43);
        v25 = v37.m128i_u32[1];
        v26 = (unsigned int)v11 + 1LL;
        if ( v26 > HIDWORD(v43) )
        {
          v24 = v44;
          sub_2237220(&ptr, v44, v26, 4);
          v23 = (unsigned int)v43;
        }
        *((_DWORD *)ptr + v23) = v25;
        v27 = (__m128i *)((char *)v9 + 24 * v25);
        LODWORD(v43) = v43 + 1;
        while ( v27 != v9 )
        {
          v28 = _mm_loadu_si128(v9);
          v9 = (__m128i *)((char *)v9 + 24);
          v39 = v28;
          v40 = v9[-1].m128i_i64[1];
          sub_1FE3C20((__int64)v41, (int)v24, v40, v23, v3, v8, v28.m128i_i64[0], (_DWORD *)v28.m128i_i64[1], v40);
        }
        break;
      default:
        break;
    }
    a1 = (const __m128i *)((char *)a1 + 24);
    if ( v5 == a1 )
      break;
LABEL_12:
    v7 = (unsigned int)v43;
    v6 = HIDWORD(v43);
  }
LABEL_14:
  v4 = ptr;
  v15 = 305419896;
  if ( !v41[0] )
  {
LABEL_15:
    v16 = sub_2287CD0(v4, 4LL * (unsigned int)v43);
    v4 = ptr;
    v15 = v16;
  }
  if ( v4 != v44 )
    free(v4);
  if ( v30 )
    sub_224D6D0(v30);
  return v15;
}
