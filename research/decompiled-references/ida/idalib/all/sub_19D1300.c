__int64 __fastcall sub_19D1300(__int64 a1, const __m128i *a2, __int64 a3, int a4, int a5)
{
  const __m128i *v5; // r13
  _QWORD *v7; // r15
  __int64 v8; // rax
  size_t v9; // r12
  void *v10; // rcx
  const __m128i *v11; // r14
  const void *v12; // rbp
  const __m128i *v13; // rbx
  unsigned __int8 v14; // al
  __m128i v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 result; // rax
  int v19; // ecx
  __m128i v20; // xmm0
  int v21; // ecx
  const __m128i *v22; // rbp
  unsigned __int64 v23; // rax
  const __m128i *v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i v29; // [rsp+0h] [rbp-D8h] BYREF
  const __m128i *v30; // [rsp+18h] [rbp-C0h]
  __int64 *v31; // [rsp+20h] [rbp-B8h]
  int v32; // [rsp+2Ch] [rbp-ACh]
  const __m128i *v33; // [rsp+30h] [rbp-A8h]
  int v34; // [rsp+38h] [rbp-A0h]
  unsigned int v35; // [rsp+3Ch] [rbp-9Ch]
  const __m128i *v36; // [rsp+40h] [rbp-98h]
  void *s2; // [rsp+48h] [rbp-90h]
  signed __int64 v38; // [rsp+50h] [rbp-88h]
  __int64 v39; // [rsp+58h] [rbp-80h]
  __m128i v40; // [rsp+60h] [rbp-78h] BYREF
  _OWORD v41[6]; // [rsp+70h] [rbp-68h] BYREF

  v5 = a2;
  v32 = a4;
  v31 = (__int64 *)a1;
  v34 = a5;
  v29 = 0u;
  v7 = (_QWORD *)sub_168B6C0(a1);
  v8 = v7[2181];
  v9 = *(_QWORD *)(v8 + 368);
  v35 = *(_DWORD *)(v8 + 260);
  v10 = *(void **)(v8 + 360);
  s2 = v10;
  v30 = (const __m128i *)((char *)a2 + 40 * a3);
  v38 = 0xCCCCCCCCCCCCCCCDLL * ((40 * a3) >> 3);
  v39 = v38 >> 2;
  if ( v38 >> 2 > 0 )
  {
    v11 = a2;
    v36 = a2;
    v12 = v10;
    v33 = &a2[10 * (v38 >> 2)];
    while ( 1 )
    {
      if ( v9 == v11[1].m128i_i64[1] )
      {
        if ( !v9 )
        {
          v13 = v11;
LABEL_17:
          if ( v30 == v13 )
            goto LABEL_19;
LABEL_18:
          v40 = _mm_loadu_si128(v13);
          v14 = sub_22B82D0(v35, &v40);
          v41[0] = _mm_loadu_si128(v13);
          v15.m128i_i64[0] = sub_22B8130(v35, v41, v14);
          v41[1] = v15;
          v29 = v15;
          goto LABEL_19;
        }
        if ( !memcmp((const void *)v11[1].m128i_i64[0], v12, v9) )
        {
          v22 = a2;
          v5 = v36;
          goto LABEL_25;
        }
      }
      v13 = (const __m128i *)((char *)v11 + 40);
      if ( v9 == v11[4].m128i_i64[0] )
      {
        if ( !v9 )
          goto LABEL_17;
        if ( !memcmp((const void *)v11[3].m128i_i64[1], v12, v9) )
          goto LABEL_24;
      }
      v13 = v11 + 5;
      if ( v9 == v11[6].m128i_i64[1] )
      {
        if ( !v9 )
          goto LABEL_17;
        if ( !memcmp((const void *)v11[6].m128i_i64[0], v12, v9) )
          goto LABEL_24;
      }
      v13 = (const __m128i *)((char *)v11 + 120);
      if ( v9 == v11[9].m128i_i64[0] )
      {
        if ( !v9 )
          goto LABEL_17;
        if ( !memcmp((const void *)v11[8].m128i_i64[1], v12, v9) )
        {
LABEL_24:
          v22 = a2;
          v5 = v36;
          v11 = v13;
          goto LABEL_25;
        }
      }
      v11 += 10;
      if ( v11 == v33 )
      {
        v22 = a2;
        v5 = v36;
        v23 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v30 - (char *)v11) >> 3);
        goto LABEL_28;
      }
    }
  }
  v22 = a2;
  v23 = v38;
  v11 = a2;
LABEL_28:
  if ( v23 == 2 )
  {
LABEL_53:
    if ( v9 != v11[1].m128i_i64[1] || v9 && memcmp((const void *)v11[1].m128i_i64[0], s2, v9) )
    {
      v11 = (const __m128i *)((char *)v11 + 40);
      goto LABEL_57;
    }
    goto LABEL_25;
  }
  if ( v23 != 3 )
  {
    if ( v23 != 1 )
      goto LABEL_31;
LABEL_57:
    if ( v9 != v11[1].m128i_i64[1] || v9 && memcmp((const void *)v11[1].m128i_i64[0], s2, v9) )
      goto LABEL_31;
    goto LABEL_25;
  }
  if ( v9 != v11[1].m128i_i64[1] || v9 && memcmp((const void *)v11[1].m128i_i64[0], s2, v9) )
  {
    v11 = (const __m128i *)((char *)v11 + 40);
    goto LABEL_53;
  }
LABEL_25:
  v13 = v11;
  if ( v30 != v11 )
    goto LABEL_18;
LABEL_31:
  if ( v9 != 11 || *(_QWORD *)s2 != 0x6C6174616363616DLL || *((_WORD *)s2 + 4) != 29561 || *((_BYTE *)s2 + 10) != 116 )
    goto LABEL_19;
  if ( v39 <= 0 )
  {
LABEL_70:
    if ( v38 != 2 )
    {
      if ( v38 != 3 )
      {
        if ( v38 != 1 )
          goto LABEL_19;
        goto LABEL_73;
      }
      if ( sub_19CF560((__int64)v22) )
        goto LABEL_47;
      v22 = (const __m128i *)((char *)v22 + 40);
    }
    if ( sub_19CF560((__int64)v22) )
      goto LABEL_47;
    v22 = (const __m128i *)((char *)v22 + 40);
LABEL_73:
    if ( !sub_19CF560((__int64)v22) )
      goto LABEL_19;
    goto LABEL_47;
  }
  v24 = &v5[10 * v39];
  while ( 1 )
  {
    if ( v22[1].m128i_i64[1] == 3 )
    {
      v28 = v22[1].m128i_i64[0];
      if ( *(_WORD *)v28 == 28521 && *(_BYTE *)(v28 + 2) == 115 )
        break;
    }
    if ( v22[4].m128i_i64[0] == 3 )
    {
      v25 = v22[3].m128i_i64[1];
      if ( *(_WORD *)v25 == 28521 && *(_BYTE *)(v25 + 2) == 115 )
      {
        v22 = (const __m128i *)((char *)v22 + 40);
        break;
      }
    }
    if ( v22[6].m128i_i64[1] == 3 )
    {
      v26 = v22[6].m128i_i64[0];
      if ( *(_WORD *)v26 == 28521 && *(_BYTE *)(v26 + 2) == 115 )
      {
        v22 += 5;
        break;
      }
    }
    if ( v22[9].m128i_i64[0] == 3 )
    {
      v27 = v22[8].m128i_i64[1];
      if ( *(_WORD *)v27 == 28521 && *(_BYTE *)(v27 + 2) == 115 )
      {
        v22 = (const __m128i *)((char *)v22 + 120);
        break;
      }
    }
    v22 += 10;
    if ( v24 == v22 )
    {
      v38 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v30 - (char *)v22) >> 3);
      goto LABEL_70;
    }
  }
LABEL_47:
  if ( v30 != v22 )
  {
    v13 = v22;
    goto LABEL_18;
  }
LABEL_19:
  v16 = sub_1680870(*v31);
  if ( v16 )
    *(_BYTE *)(v16 + 9) |= 8u;
  v17 = v7[2330];
  result = sub_EEE9A0(40, v7, 8u);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x29;
  if ( unk_2CD7484 )
  {
    v30 = (const __m128i *)result;
    sub_EE9B50(41);
    result = (__int64)v30;
  }
  v19 = v32;
  v20 = _mm_load_si128(&v29);
  *(_QWORD *)(result + 8) = v17;
  *(_WORD *)(result + 1) &= 0xF801u;
  *(_DWORD *)(result + 32) = v19;
  v21 = v34;
  *(__m128i *)(result + 16) = v20;
  *(_DWORD *)(result + 36) = v21;
  return result;
}
