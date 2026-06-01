__int64 __fastcall sub_5F9090(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        const __m128i a8)
{
  unsigned int v8; // ebx
  __int64 result; // rax
  __int64 v10; // r12
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // ebp
  int v16; // r15d
  __m128i v17; // xmm0
  unsigned int v18; // r14d
  __int64 v19; // rbx
  char v20; // r13
  __int64 v21; // rsi
  int v22; // r12d
  char v23; // dl
  int v24; // eax
  unsigned int v25; // ebp
  __int64 v26; // r13
  unsigned int v27; // ebx
  char v28; // al
  char v29; // dl
  __m128i *v30; // r14
  __int64 v31; // rax
  __m128i si128; // xmm1
  unsigned int v34; // [rsp+8h] [rbp-80h]
  __int64 v35; // [rsp+8h] [rbp-80h]
  __int64 v36; // [rsp+10h] [rbp-78h]
  __int64 v37; // [rsp+18h] [rbp-70h]
  __int64 v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+30h] [rbp-58h]
  int v40; // [rsp+38h] [rbp-50h]
  int v41; // [rsp+3Ch] [rbp-4Ch]
  __m128i v42[4]; // [rsp+40h] [rbp-48h] BYREF

  v8 = *(_DWORD *)(a1 + 20);
  v40 = a7;
  result = *(unsigned int *)(a1 + 16);
  if ( v8 >= (unsigned int)result )
    return result;
  v10 = a1;
  do
  {
    v12 = v8;
    v13 = 24LL * v8;
    v14 = v13 + *(_QWORD *)v10;
    v15 = *(_DWORD *)(v14 + 12);
    if ( !v15 )
      goto LABEL_20;
    v16 = a3;
    v17 = _mm_loadu_si128((const __m128i *)((char *)&a7 + 8));
    LODWORD(a7) = v40;
    if ( v8 >= (unsigned int)result )
      goto LABEL_19;
    v37 = v8;
    v18 = v8;
    v39 = a8.m128i_i64[1];
    v19 = 32LL * v8;
    v20 = 0;
    v21 = v10;
    v41 = DWORD1(a7);
    v22 = v15;
    v34 = HIDWORD(a3);
    v38 = a3;
    v42[0] = v17;
    do
    {
      if ( v22 >= 0 )
        goto LABEL_6;
      if ( v16 == v22 || v34 == v22 )
        goto LABEL_13;
      v36 = *(_QWORD *)(v21 + 272);
      v23 = sub_CB1620(v36, (unsigned int)v22);
      v24 = 1;
      if ( !v23 )
      {
        if ( (unsigned __int8)sub_CB1620(v36, v34) )
          goto LABEL_15;
LABEL_13:
        v24 = 0;
      }
      if ( a2 != v24 )
      {
LABEL_15:
        result = *(unsigned int *)(v21 + 16);
        ++v18;
        v19 += 32;
        if ( v18 >= (unsigned int)result )
          return result;
        v20 = 1;
        goto LABEL_7;
      }
      v31 = v19 + *(_QWORD *)(v21 + 8);
      if ( (unsigned int)(*(_DWORD *)v31 - 70) <= 3 )
      {
        si128 = _mm_load_si128(v42);
        *(_DWORD *)v31 = v40;
        *(__m128i *)(v31 + 8) = si128;
        *(_DWORD *)(v31 + 4) = v41;
        *(_QWORD *)(v31 + 24) = v39;
      }
      result = *(unsigned int *)(v21 + 16);
LABEL_6:
      ++v18;
      v19 += 32;
      if ( v18 >= (unsigned int)result )
        break;
LABEL_7:
      v22 = *(_DWORD *)(*(_QWORD *)v21 + 24LL * v18 + 12);
    }
    while ( v22 );
    v8 = v18;
    a3 = v38;
    v12 = v37;
    v10 = v21;
    if ( v20 )
      return result;
    v14 = v13 + *(_QWORD *)v21;
LABEL_19:
    *(_DWORD *)(v10 + 20) = v8;
LABEL_20:
    v25 = *(_DWORD *)(v14 + 4);
    v26 = *(_QWORD *)(v10 + 272);
    if ( v25 == (_DWORD)a3 )
      goto LABEL_26;
    v27 = HIDWORD(a3);
    if ( v25 == HIDWORD(a3) )
      goto LABEL_26;
    v35 = a3;
    v28 = sub_CB1620(*(_QWORD *)(v10 + 272), v25);
    a3 = v35;
    v29 = v28;
    result = 1;
    if ( !v29 )
    {
      result = sub_CB1620(v26, v27);
      a3 = v35;
      if ( (_BYTE)result )
        return result;
LABEL_26:
      result = 0;
      if ( !a2 )
        goto LABEL_27;
      return result;
    }
    if ( a2 != 1 )
      return result;
LABEL_27:
    if ( (unsigned int)(v40 - 70) > 3 )
    {
      v30 = (__m128i *)(*(_QWORD *)(v10 + 8) + 32 * v12);
      if ( (unsigned int)(v30->m128i_i32[0] - 70) <= 3 )
      {
        LODWORD(a7) = v40;
        *v30 = _mm_loadu_si128((const __m128i *)&a7);
        v30[1] = _mm_loadu_si128(&a8);
      }
    }
    v8 = *(_DWORD *)(v10 + 20) + 1;
    result = *(unsigned int *)(v10 + 16);
    *(_DWORD *)(v10 + 20) = v8;
  }
  while ( v8 < (unsigned int)result );
  return result;
}

