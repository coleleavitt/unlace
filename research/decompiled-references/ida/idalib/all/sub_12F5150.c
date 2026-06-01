void __fastcall sub_12F5150(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned __int64 v5; // rbp
  size_t v6; // rcx
  __int64 v7; // r12
  size_t v8; // r15
  size_t v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  size_t v12; // r14
  _BYTE *v13; // r12
  unsigned __int64 i; // r15
  size_t v15; // r8
  size_t v16; // rdx
  signed __int64 v17; // rax
  unsigned __int64 v18; // r8
  size_t v19; // r10
  size_t v20; // rdx
  signed __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rbp
  const __m128i *j; // r15
  __int64 v25; // rcx
  __int64 v26; // rsi
  __m128i *v27; // rdx
  __m128i v28; // xmm2
  __int64 v29; // r12
  __m128i *v30; // r13
  __int64 v31; // rax
  _BYTE *v32; // rax
  __int64 v33; // rbp
  size_t v34; // rdx
  __int64 v35; // rax
  size_t v36; // [rsp+0h] [rbp-A0h]
  unsigned __int64 v37; // [rsp+0h] [rbp-A0h]
  size_t v38; // [rsp+8h] [rbp-98h]
  unsigned __int64 v39; // [rsp+8h] [rbp-98h]
  size_t v40; // [rsp+10h] [rbp-90h]
  __m128i *v41; // [rsp+18h] [rbp-88h]
  unsigned __int64 v42; // [rsp+20h] [rbp-80h]
  __m128i *v43; // [rsp+28h] [rbp-78h]
  __int64 v44; // [rsp+30h] [rbp-70h]
  __m128i v45; // [rsp+38h] [rbp-68h] BYREF
  void *v46; // [rsp+48h] [rbp-58h] BYREF
  __int64 v47; // [rsp+50h] [rbp-50h]
  _OWORD v48[4]; // [rsp+58h] [rbp-48h] BYREF

  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) <= 512 )
    return;
  v4 = a3;
  if ( !a3 )
  {
    v42 = a2;
    goto LABEL_36;
  }
  v5 = a2;
  v41 = (__m128i *)(a1 + 32);
  do
  {
    v6 = *(_QWORD *)(a1 + 40);
    --v4;
    v7 = a1 + 32 * ((__int64)(((__int64)(v5 - a1) >> 5) + ((v5 - a1) >> 63)) >> 1);
    v8 = *(_QWORD *)(v7 + 8);
    v9 = v8;
    if ( v6 <= v8 )
      v9 = *(_QWORD *)(a1 + 40);
    if ( !v9
      || (v36 = *(_QWORD *)(a1 + 40), v10 = memcmp(*(const void **)(a1 + 32), *(const void **)v7, v9), v6 = v36, !v10) )
    {
      v11 = v6 - v8;
      if ( v11 > 0x7FFFFFFF )
        goto LABEL_46;
      if ( v11 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_12;
      v10 = v11;
    }
    if ( v10 < 0 )
    {
LABEL_12:
      if ( sub_9C4B50(v7, v5 - 32) < 0 )
        goto LABEL_48;
      if ( sub_9C4B50((__int64)v41, v5 - 32) < 0 )
        goto LABEL_49;
      goto LABEL_14;
    }
LABEL_46:
    if ( sub_9C4B50((__int64)v41, v5 - 32) >= 0 )
    {
      if ( sub_9C4B50(v7, v5 - 32) < 0 )
      {
LABEL_49:
        sub_ABA4C0((__m128i *)a1, (__m128i *)(v5 - 32));
        goto LABEL_15;
      }
LABEL_48:
      sub_ABA4C0((__m128i *)a1, (__m128i *)v7);
      goto LABEL_15;
    }
LABEL_14:
    sub_ABA4C0((__m128i *)a1, v41);
LABEL_15:
    v12 = *(_QWORD *)(a1 + 8);
    v13 = *(_BYTE **)a1;
    v37 = v5;
    for ( i = a1 + 32; ; i += 32LL )
    {
      v15 = *(_QWORD *)(i + 8);
      v16 = v12;
      v42 = i;
      if ( v15 <= v12 )
        v16 = *(_QWORD *)(i + 8);
      if ( !v16
        || (v38 = *(_QWORD *)(i + 8), LODWORD(v17) = memcmp(*(const void **)i, v13, v16), v15 = v38, !(_DWORD)v17) )
      {
        v17 = v15 - v12;
        if ( (__int64)(v15 - v12) > 0x7FFFFFFF )
          goto LABEL_24;
        if ( v17 < (__int64)0xFFFFFFFF80000000LL )
          continue;
      }
      if ( (int)v17 < 0 )
        continue;
LABEL_24:
      v18 = v37;
      do
      {
        do
        {
          v18 -= 32LL;
          v19 = *(_QWORD *)(v18 + 8);
          v37 = v18;
          v20 = v19;
          if ( v12 <= v19 )
            v20 = v12;
          if ( v20 )
          {
            v40 = *(_QWORD *)(v18 + 8);
            v39 = v18;
            LODWORD(v21) = memcmp(v13, *(const void **)v18, v20);
            v18 = v39;
            v19 = v40;
            if ( (_DWORD)v21 )
              break;
          }
          v21 = v12 - v19;
          if ( (__int64)(v12 - v19) > 0x7FFFFFFF )
            goto LABEL_32;
        }
        while ( v21 < (__int64)0xFFFFFFFF80000000LL );
      }
      while ( (int)v21 < 0 );
LABEL_32:
      if ( i >= v18 )
        break;
      sub_ABA4C0((__m128i *)i, (__m128i *)v18);
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(_BYTE **)a1;
    }
    sub_12F5150(i, v5, v4);
    v3 = i - a1;
    if ( (__int64)(i - a1) <= 512 )
      return;
    v5 = i;
  }
  while ( v4 );
LABEL_36:
  v22 = v3 >> 5;
  v23 = ((v3 >> 5) - 2) >> 1;
  for ( j = (const __m128i *)(a1 + 32 * v23 + 16); ; j -= 2 )
  {
    v27 = (__m128i *)j[-1].m128i_i64[0];
    if ( v27 == j )
    {
      v28 = _mm_loadu_si128(j);
      v26 = j[-1].m128i_i64[1];
      j->m128i_i8[0] = 0;
      j[-1].m128i_i64[1] = 0;
      v46 = v48;
      v45 = v28;
    }
    else
    {
      v25 = j->m128i_i64[0];
      v26 = j[-1].m128i_i64[1];
      j[-1].m128i_i64[0] = (__int64)j;
      v45.m128i_i64[0] = v25;
      j[-1].m128i_i64[1] = 0;
      j->m128i_i8[0] = 0;
      v46 = v48;
      if ( v27 != &v45 )
      {
        v46 = v27;
        *(_QWORD *)&v48[0] = v25;
        goto LABEL_39;
      }
    }
    v48[0] = _mm_load_si128(&v45);
LABEL_39:
    v47 = v26;
    v45.m128i_i8[0] = 0;
    sub_12EABA0(a1, v23, v22, (__int64)&v46);
    if ( v46 != v48 )
      operator delete(v46);
    if ( !v23 )
      break;
    --v23;
  }
  v29 = a1 + 16;
  v30 = (__m128i *)(v42 - 16);
  do
  {
    v43 = &v45;
    if ( (__m128i *)v30[-1].m128i_i64[0] == v30 )
    {
      v45 = _mm_loadu_si128(v30);
    }
    else
    {
      v43 = (__m128i *)v30[-1].m128i_i64[0];
      v45.m128i_i64[0] = v30->m128i_i64[0];
    }
    v31 = v30[-1].m128i_i64[1];
    v30[-1].m128i_i64[0] = (__int64)v30;
    v30[-1].m128i_i64[1] = 0;
    v44 = v31;
    v30->m128i_i8[0] = 0;
    if ( v29 == *(_QWORD *)a1 )
    {
      v34 = *(_QWORD *)(a1 + 8);
      if ( v34 )
      {
        if ( v34 == 1 )
          v30->m128i_i8[0] = *(_BYTE *)(a1 + 16);
        else
          memcpy(v30, (const void *)(a1 + 16), v34);
        v34 = *(_QWORD *)(a1 + 8);
      }
      v35 = v30[-1].m128i_i64[0];
      v30[-1].m128i_i64[1] = v34;
      *(_BYTE *)(v35 + v34) = 0;
      v32 = *(_BYTE **)a1;
    }
    else
    {
      v30[-1].m128i_i64[0] = *(_QWORD *)a1;
      v30[-1].m128i_i64[1] = *(_QWORD *)(a1 + 8);
      v30->m128i_i64[0] = *(_QWORD *)(a1 + 16);
      v32 = (_BYTE *)(a1 + 16);
      *(_QWORD *)a1 = v29;
    }
    *(_QWORD *)(a1 + 8) = 0;
    *v32 = 0;
    v46 = v48;
    if ( v43 == &v45 )
    {
      v48[0] = _mm_load_si128(&v45);
    }
    else
    {
      v46 = v43;
      *(_QWORD *)&v48[0] = v45.m128i_i64[0];
    }
    v33 = (__int64)v30[-1].m128i_i64 - a1;
    v47 = v44;
    v45.m128i_i8[0] = 0;
    sub_12EABA0(a1, 0, v33 >> 5, (__int64)&v46);
    if ( v46 != v48 )
      operator delete(v46);
    v30 -= 2;
  }
  while ( v33 > 32 );
}
