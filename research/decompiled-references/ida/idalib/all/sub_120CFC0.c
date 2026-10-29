void __fastcall sub_120CFC0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r13
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // r15
  size_t v13; // rbx
  const void *v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rbx
  _QWORD *v18; // r15
  size_t v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // rdi
  const void *v24; // r13
  char *v25; // rdi
  _QWORD v26[4]; // [rsp+0h] [rbp-198h] BYREF
  __int16 v27; // [rsp+20h] [rbp-178h]
  _BYTE v28[32]; // [rsp+30h] [rbp-168h] BYREF
  __int16 v29; // [rsp+50h] [rbp-148h]
  _BYTE v30[32]; // [rsp+60h] [rbp-138h] BYREF
  __int16 v31; // [rsp+80h] [rbp-118h]
  void *v32; // [rsp+90h] [rbp-108h] BYREF
  __int64 v33; // [rsp+98h] [rbp-100h]
  __int16 v34; // [rsp+B0h] [rbp-E8h]
  void *ptr; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-D0h]
  _BYTE v37[192]; // [rsp+D8h] [rbp-C0h] BYREF

  v4 = *(_QWORD **)(a1 + 8);
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
          v21 = *v11;
          if ( *(_QWORD *)(*v11 + 16LL) )
            v21 = *(_QWORD *)(*v11 + 16LL);
          ++v11;
          *(_BYTE *)(v21 + 44) |= 1u;
          if ( v11 == v12 )
            break;
          while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 3033) )
          {
            if ( v12 == ++v11 )
              goto LABEL_13;
          }
        }
        while ( v12 != v11 );
        goto LABEL_13;
      }
    }
LABEL_9:
    v13 = v4[32];
    v14 = (const void *)v4[31];
    ptr = v37;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v13 > 0x80 )
    {
      sub_2236E10(&ptr, v37, v13, 1);
      v25 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v13 )
        goto LABEL_11;
      v25 = v37;
    }
    memcpy(v25, v14, v13);
    v13 += si128.m128i_i64[0];
LABEL_11:
    si128.m128i_i64[0] = v13;
    v34 = 257;
    v29 = 257;
    v31 = 257;
    v26[0] = "include";
    v27 = 259;
    sub_228A3B0(&ptr, v26, v28, v30, &v32);
    v34 = 261;
    v32 = ptr;
    v33 = si128.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)&v32);
    if ( ptr != v37 )
      free(ptr);
LABEL_13:
    LODWORD(ptr) = 3055;
    v15 = sub_21B6DA0(a2, &ptr, 1);
    v16 = *(_QWORD *)(a2 + 8);
    v17 = (_QWORD *)(v16 + 8LL * (unsigned int)v15);
    v18 = (_QWORD *)(v16 + 8 * HIDWORD(v15));
    if ( v17 == v18 )
      goto LABEL_17;
    while ( !*v17 || !(unsigned __int8)sub_21B9810(*v17, 3055) )
    {
      if ( v18 == ++v17 )
        goto LABEL_17;
    }
    if ( v17 == v18 )
    {
LABEL_17:
      v19 = v4[62];
      if ( v19 )
      {
        v23 = v37;
        v24 = (const void *)v4[61];
        ptr = v37;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        if ( v19 > 0x80 )
        {
          sub_2236E10(&ptr, v37, v19, 1);
          v23 = (char *)ptr + si128.m128i_i64[0];
        }
        memcpy(v23, v24, v19);
        si128.m128i_i64[0] += v19;
        v34 = 257;
        v29 = 257;
        v31 = 257;
        v27 = 259;
        v26[0] = "include";
        sub_228A3B0(&ptr, v26, v28, v30, &v32);
        v34 = 261;
        v32 = ptr;
        v33 = si128.m128i_i64[0];
        sub_112FAC0(a2, a3, (__int64)&v32);
        if ( ptr != v37 )
          free(ptr);
      }
    }
    else
    {
      do
      {
        v22 = *v17;
        if ( *(_QWORD *)(*v17 + 16LL) )
          v22 = *(_QWORD *)(*v17 + 16LL);
        ++v17;
        *(_BYTE *)(v22 + 44) |= 1u;
        if ( v17 == v18 )
          break;
        while ( !*v17 || !(unsigned __int8)sub_21B9810(*v17, 3055) )
        {
          if ( v18 == ++v17 )
            return;
        }
      }
      while ( v18 != v17 );
    }
    return;
  }
  do
  {
    v20 = *v7;
    if ( *(_QWORD *)(*v7 + 16LL) )
      v20 = *(_QWORD *)(*v7 + 16LL);
    ++v7;
    *(_BYTE *)(v20 + 44) |= 1u;
    if ( v7 == v8 )
      break;
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3053) )
    {
      if ( v8 == ++v7 )
        return;
    }
  }
  while ( v7 != v8 );
}
