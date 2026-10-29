__int64 __fastcall sub_FB3800(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  size_t v4; // r13
  void *v5; // r14
  const void *v6; // r15
  size_t v7; // rbp
  size_t v8; // rbp
  size_t v9; // r13
  void *v10; // rdi
  char *v11; // rcx
  size_t v12; // rdx
  char *v13; // rsi
  char *v14; // rdi
  size_t v15; // rdx
  _QWORD v16[4]; // [rsp+2h] [rbp-198h] BYREF
  __int16 v17; // [rsp+22h] [rbp-178h]
  char v18[32]; // [rsp+32h] [rbp-168h] BYREF
  __int16 v19; // [rsp+52h] [rbp-148h]
  char v20[32]; // [rsp+62h] [rbp-138h] BYREF
  __int16 v21; // [rsp+82h] [rbp-118h]
  char v22[32]; // [rsp+92h] [rbp-108h] BYREF
  __int16 v23; // [rsp+B2h] [rbp-E8h]
  void *src; // [rsp+C2h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+CAh] [rbp-D0h]
  _WORD v26[96]; // [rsp+DAh] [rbp-C0h] BYREF

  if ( !*(_QWORD *)(a1 + 24) )
    return 0;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(void **)a2;
  v26[4] = 261;
  src = v5;
  n[0] = v4;
  if ( (unsigned __int8)sub_22672E0(&src, 0) )
    return 0;
  v6 = *(const void **)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24);
  src = v26;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  if ( v7 > 0x80 )
  {
    sub_22130D0(&src, v26, v7, 1);
    v14 = (char *)src + n[0];
LABEL_17:
    memcpy(v14, v6, v7);
    v7 += n[0];
    goto LABEL_6;
  }
  if ( v7 )
  {
    v14 = (char *)v26;
    goto LABEL_17;
  }
LABEL_6:
  v21 = 257;
  v19 = 257;
  v17 = 261;
  n[0] = v7;
  v16[1] = v4;
  v23 = 257;
  v16[0] = v5;
  sub_2266670(&src, v16, v18, v20, v22);
  v8 = n[0];
  v9 = *(_QWORD *)(a2 + 8);
  if ( n[0] <= v9 )
  {
    v11 = (char *)src;
    if ( n[0] )
    {
      memmove(*(void **)a2, src, n[0]);
      v11 = (char *)src;
    }
  }
  else
  {
    if ( n[0] > *(_QWORD *)(a2 + 16) )
    {
      v15 = n[0];
      *(_QWORD *)(a2 + 8) = 0;
      v9 = 0;
      sub_22130D0(a2, a2 + 24, v15, 1);
      v11 = (char *)src;
      v12 = n[0];
      v10 = *(void **)a2;
      v13 = (char *)src;
    }
    else
    {
      v10 = *(void **)a2;
      v11 = (char *)src;
      if ( v9 )
      {
        memmove(v10, src, *(_QWORD *)(a2 + 8));
        v11 = (char *)src;
        v12 = n[0];
        v10 = (void *)(v9 + *(_QWORD *)a2);
        v13 = (char *)src + v9;
      }
      else
      {
        v13 = (char *)src;
        v12 = n[0];
      }
    }
    if ( v13 != &v11[v12] )
    {
      memcpy(v10, v13, v12 - v9);
      v11 = (char *)src;
    }
  }
  *(_QWORD *)(a2 + 8) = v8;
  result = 1;
  if ( v11 != (char *)v26 )
  {
    free(v11);
    return 1;
  }
  return result;
}

