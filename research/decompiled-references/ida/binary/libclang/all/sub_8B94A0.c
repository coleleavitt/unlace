__int64 __fastcall sub_8B94A0(__m128i *a1, __int64 a2, __int64 *a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rsi
  char v8; // r12
  __int64 result; // rax
  __m128i v10; // xmm0
  __int64 v11; // r12
  __int64 v12; // rcx
  __m128i v13; // xmm0
  _QWORD *v14; // rax
  __int64 v15; // rbp
  __m128i v16; // xmm0
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  size_t v20; // r12
  int v21; // r13d
  __int64 v22; // rdx
  char *v23; // rsi
  __int64 *v24; // r8
  __int64 v25; // r15
  __int64 *v26; // r13
  __int64 *v27; // r14
  __int64 v28; // rdx
  unsigned __int8 v29; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v30; // [rsp+8h] [rbp-C0h]
  __int64 v31; // [rsp+8h] [rbp-C0h]
  __m128i v32; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v33; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-98h]
  void *ptr; // [rsp+38h] [rbp-90h] BYREF
  __int64 v36; // [rsp+40h] [rbp-88h]
  _QWORD src[16]; // [rsp+48h] [rbp-80h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
  {
    v13 = _mm_loadu_si128(a1);
    LOBYTE(v34) = a1[1].m128i_i8[0];
    v33 = v13;
    v8 = sub_871080((__int64)&v33, v7, a3, a4, a5, a6);
    v14 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v14 + 16LL) != 41 )
      sub_B0D320(*v14);
LABEL_4:
    if ( !v8 )
      goto LABEL_5;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(v7 + 1) & 6) != 0 )
  {
    v8 = sub_89CD60(a1->m128i_i64, v7);
    goto LABEL_4;
  }
  v10 = _mm_loadu_si128(a1);
  LOBYTE(v34) = 0;
  v33 = v10;
  if ( !sub_89CD60(v33.m128i_i64, v7) )
  {
LABEL_5:
    if ( !a1[1].m128i_i8[0] )
      return 0;
    v15 = a1->m128i_i64[1];
    sub_69F1F0((__int64)&v32, a2, 0, 0);
    v16 = _mm_load_si128(&v32);
    *(_BYTE *)(v15 + 128) |= 2u;
    *(_QWORD *)(v15 + 16) = 0;
    *(__m128i *)v15 = v16;
    v33 = v16;
    v17 = sub_69F240(v33.m128i_i64);
    ptr = src;
    v34 = v17;
    v33.m128i_i32[0] = 0;
    v36 = 0x800000000LL;
    v33.m128i_i64[1] = 0;
    *(_DWORD *)(v15 + 24) = 0;
    *(_QWORD *)(v15 + 32) = 0;
    *(_QWORD *)(v15 + 40) = v34;
    v18 = ptr;
    if ( (void **)(v15 + 48) == &ptr )
      goto LABEL_26;
    if ( ptr != src )
    {
      if ( *(_QWORD *)(v15 + 48) != v15 + 64 )
      {
        free(*(void **)(v15 + 48));
        v18 = ptr;
      }
      *(_QWORD *)(v15 + 48) = v18;
      *(_QWORD *)(v15 + 56) = v36;
      goto LABEL_28;
    }
    v19 = (unsigned int)v36;
    v20 = *(unsigned int *)(v15 + 56);
    v21 = v36;
    if ( v20 >= (unsigned int)v36 )
    {
      *(_DWORD *)(v15 + 56) = 0;
LABEL_28:
      *(_WORD *)(v15 + 128) &= 0xFEu;
      return 1;
    }
    if ( *(unsigned int *)(v15 + 60) < (unsigned __int64)(unsigned int)v36 )
    {
      v20 = 0;
      *(_DWORD *)(v15 + 56) = 0;
      sub_25D6060(v15 + 48, v15 + 64, v19, 8);
      v18 = ptr;
      v28 = (unsigned int)v36;
      v23 = (char *)ptr;
    }
    else
    {
      if ( !*(_DWORD *)(v15 + 56) )
      {
        v22 = 8LL * (unsigned int)v36;
        v23 = (char *)src;
LABEL_24:
        memcpy((void *)(v20 + *(_QWORD *)(v15 + 48)), v23, v22 - v20);
        v18 = ptr;
LABEL_25:
        *(_DWORD *)(v15 + 56) = v21;
LABEL_26:
        if ( v18 != src )
          free(v18);
        goto LABEL_28;
      }
      v20 *= 8LL;
      if ( v20 == 8 )
      {
        **(_QWORD **)(v15 + 48) = src[0];
        v18 = ptr;
        v28 = (unsigned int)v36;
        v23 = (char *)ptr + 8;
      }
      else
      {
        memmove(*(void **)(v15 + 48), ptr, v20);
        v18 = ptr;
        v28 = (unsigned int)v36;
        v23 = (char *)ptr + v20;
      }
    }
    v22 = 8 * v28;
    if ( v22 == v20 )
      goto LABEL_25;
    goto LABEL_24;
  }
LABEL_9:
  v11 = *(_QWORD *)(a2 + 24);
  if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 47 > 2 )
  {
    if ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x1E )
    {
      sub_826230(a1->m128i_i64[0], a2, 110);
      return 0;
    }
    v24 = *(__int64 **)(v11 + 56);
    v25 = a1->m128i_i64[0];
    v31 = a1->m128i_i64[1];
    v26 = &v24[*(unsigned int *)(v11 + 64)];
    if ( v24 != v26 )
    {
      v27 = *(__int64 **)(v11 + 56);
      while ( (unsigned __int8)sub_825C70(v25, a2, v31, *v27) )
      {
        if ( v26 == ++v27 )
          goto LABEL_11;
      }
      return 0;
    }
  }
  else if ( !(unsigned __int8)sub_825C70(a1->m128i_i64[0], a2, a1->m128i_i64[1], *(_QWORD *)(a2 + 24)) )
  {
    return 0;
  }
LABEL_11:
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 48)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 42 > 1 )
    return 1;
  v33.m128i_i8[4] &= ~1u;
  v12 = a1->m128i_i64[1];
  v33.m128i_i32[0] = 0;
  result = sub_85F440(a1->m128i_i64[0], (_DWORD *)a2, *(_QWORD *)(v11 + 48), v12, (__int64)&v33, 0);
  if ( (_BYTE)result )
  {
    v29 = result;
    sub_824D00(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v33);
    result = v29;
  }
  if ( v33.m128i_i32[0] > 1u )
  {
    v30 = result;
    sub_69F740((__int64)&v33);
    return v30;
  }
  return result;
}

