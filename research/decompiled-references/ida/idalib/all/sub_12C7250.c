void __fastcall sub_12C7250(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // r15
  __int64 v13; // rax
  size_t v14; // rbx
  const void *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // rdi
  char *v19; // [rsp+0h] [rbp-198h] BYREF
  __int16 v20; // [rsp+20h] [rbp-178h]
  const char *v21; // [rsp+30h] [rbp-168h] BYREF
  __int16 v22; // [rsp+50h] [rbp-148h]
  _BYTE v23[32]; // [rsp+60h] [rbp-138h] BYREF
  __int16 v24; // [rsp+80h] [rbp-118h]
  _QWORD v25[4]; // [rsp+90h] [rbp-108h] BYREF
  __int16 v26; // [rsp+B0h] [rbp-E8h]
  void *ptr; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-D0h]
  _BYTE v29[192]; // [rsp+D8h] [rbp-C0h] BYREF

  LODWORD(ptr) = 3053;
  v5 = sub_21B6DA0(a2, &ptr, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 == v8 )
    goto LABEL_5;
  while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3053) )
  {
    if ( v8 == ++v7 )
      goto LABEL_5;
  }
  if ( v8 == v7 )
  {
LABEL_5:
    LODWORD(ptr) = 3033;
    v9 = sub_21B6DA0(a2, &ptr, 1);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = (_QWORD *)(v10 + 8LL * (unsigned int)v9);
    v12 = (_QWORD *)(v10 + 8 * HIDWORD(v9));
    if ( v11 != v12 )
    {
      while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 3033) )
      {
        if ( v12 == ++v11 )
          goto LABEL_9;
      }
      if ( v11 != v12 )
      {
        do
        {
          v17 = *(_QWORD *)(*v11 + 16LL);
          if ( !v17 )
            v17 = *v11;
          ++v11;
          *(_BYTE *)(v17 + 44) |= 1u;
          if ( v11 == v12 )
            break;
          while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 3033) )
          {
            if ( v12 == ++v11 )
              goto LABEL_13;
          }
        }
        while ( v11 != v12 );
        goto LABEL_13;
      }
    }
LABEL_9:
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(_QWORD *)(v13 + 256);
    v15 = *(const void **)(v13 + 248);
    ptr = v29;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v14 > 0x80 )
    {
      sub_2236E10(&ptr, v29, v14, 1);
      v18 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v14 )
        goto LABEL_11;
      v18 = v29;
    }
    memcpy(v18, v15, v14);
    v14 += si128.m128i_i64[0];
LABEL_11:
    si128.m128i_i64[0] = v14;
    v26 = 257;
    v21 = "ppc_wrappers";
    v24 = 257;
    v22 = 259;
    v20 = 259;
    v19 = "include";
    sub_228A3B0(&ptr, &v19, &v21, v23, v25);
    v26 = 261;
    v25[0] = ptr;
    v25[1] = si128.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)v25);
    if ( ptr != v29 )
      free(ptr);
    goto LABEL_13;
  }
  do
  {
    v16 = *v7;
    if ( *(_QWORD *)(*v7 + 16LL) )
      v16 = *(_QWORD *)(*v7 + 16LL);
    ++v7;
    *(_BYTE *)(v16 + 44) |= 1u;
    if ( v7 == v8 )
      break;
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3053) )
    {
      if ( v8 == ++v7 )
        goto LABEL_13;
    }
  }
  while ( v8 != v7 );
LABEL_13:
  sub_1206980(a1, a2, a3);
}
