__int64 __fastcall sub_FD77C0(__int64 a1, __int64 a2)
{
  size_t v4; // rbp
  void *v5; // r13
  unsigned int v6; // r15d
  size_t v8; // r15
  void *v9; // rax
  size_t v10; // r13
  void *v11; // rdi
  char *v12; // rax
  size_t v13; // rdx
  char *v14; // rsi
  char *v15; // rdi
  size_t v16; // rdx
  void *v17; // [rsp+8h] [rbp-1A0h]
  char v18[32]; // [rsp+10h] [rbp-198h] BYREF
  __int16 v19; // [rsp+30h] [rbp-178h]
  char v20[32]; // [rsp+40h] [rbp-168h] BYREF
  __int16 v21; // [rsp+60h] [rbp-148h]
  char v22[32]; // [rsp+70h] [rbp-138h] BYREF
  __int16 v23; // [rsp+90h] [rbp-118h]
  _QWORD v24[4]; // [rsp+A0h] [rbp-108h] BYREF
  __int16 v25; // [rsp+C0h] [rbp-E8h]
  void *src; // [rsp+D0h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+D8h] [rbp-D0h]
  __int64 v28; // [rsp+E8h] [rbp-C0h] BYREF
  __int16 v29; // [rsp+F0h] [rbp-B8h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(void **)a2;
  if ( !*(_QWORD *)(a1 + 24) )
    goto LABEL_2;
  src = *(void **)a2;
  v29 = 261;
  n[0] = v4;
  if ( (unsigned __int8)sub_228B020(&src, 0) )
  {
    v5 = *(void **)a2;
    v4 = *(_QWORD *)(a2 + 8);
LABEL_2:
    v6 = 0;
    goto LABEL_3;
  }
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(void **)(a1 + 16);
  src = &v28;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v8 > 0x80 )
  {
    v17 = v9;
    sub_2236E10(&src, &v28, v8, 1);
    v9 = v17;
    v15 = (char *)src + n[0];
LABEL_19:
    memcpy(v15, v9, v8);
    v8 += n[0];
    goto LABEL_10;
  }
  if ( v8 )
  {
    v15 = (char *)&v28;
    goto LABEL_19;
  }
LABEL_10:
  v19 = 257;
  v21 = 257;
  v23 = 257;
  v25 = 261;
  v24[0] = v5;
  v24[1] = v4;
  n[0] = v8;
  sub_228A3B0(&src, v24, v22, v20, v18);
  v4 = n[0];
  v10 = *(_QWORD *)(a2 + 8);
  if ( n[0] <= v10 )
  {
    v12 = (char *)src;
    if ( n[0] )
    {
      memmove(*(void **)a2, src, n[0]);
      v12 = (char *)src;
    }
  }
  else
  {
    if ( n[0] > *(_QWORD *)(a2 + 16) )
    {
      v16 = n[0];
      *(_QWORD *)(a2 + 8) = 0;
      v10 = 0;
      sub_2236E10(a2, a2 + 24, v16, 1);
      v12 = (char *)src;
      v13 = n[0];
      v11 = *(void **)a2;
      v14 = (char *)src;
    }
    else
    {
      v11 = *(void **)a2;
      v12 = (char *)src;
      if ( v10 )
      {
        memmove(v11, src, *(_QWORD *)(a2 + 8));
        v12 = (char *)src;
        v13 = n[0];
        v11 = (void *)(v10 + *(_QWORD *)a2);
        v14 = (char *)src + v10;
      }
      else
      {
        v14 = (char *)src;
        v13 = n[0];
      }
    }
    if ( v14 != &v12[v13] )
    {
      memcpy(v11, v14, v13 - v10);
      v12 = (char *)src;
    }
  }
  *(_QWORD *)(a2 + 8) = v4;
  if ( v12 == (char *)&v28 )
  {
    v5 = *(void **)a2;
    v6 = 1;
  }
  else
  {
    v6 = 1;
    free(v12);
    v5 = *(void **)a2;
    v4 = *(_QWORD *)(a2 + 8);
  }
LABEL_3:
  src = v5;
  v29 = 261;
  n[0] = v4;
  if ( !(unsigned __int8)sub_228B020(&src, 0) )
  {
    v6 = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 112LL))(*(_QWORD *)(a1 + 8), a2);
  }
  return v6;
}
