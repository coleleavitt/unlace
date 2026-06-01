void __fastcall sub_126F670(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  size_t v9; // rbx
  const void *v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *v14; // r14
  void **v15; // r14
  void **v16; // r15
  void **v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // rdi
  char *v22; // [rsp+10h] [rbp-198h] BYREF
  __int16 v23; // [rsp+30h] [rbp-178h]
  _BYTE v24[32]; // [rsp+40h] [rbp-168h] BYREF
  __int16 v25; // [rsp+60h] [rbp-148h]
  void **v26; // [rsp+70h] [rbp-138h] BYREF
  void *v27; // [rsp+78h] [rbp-130h]
  __int16 v28; // [rsp+90h] [rbp-118h]
  void *v29[2]; // [rsp+A0h] [rbp-108h] BYREF
  _BYTE v30[16]; // [rsp+B0h] [rbp-F8h] BYREF
  __int16 v31; // [rsp+C0h] [rbp-E8h]
  void *ptr; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-D0h]
  _WORD v34[96]; // [rsp+E8h] [rbp-C0h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  LODWORD(ptr) = 3033;
  v5 = sub_21B6DA0(a2, &ptr, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 == v8 )
    goto LABEL_5;
  while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3033) )
  {
    if ( v8 == ++v7 )
      goto LABEL_5;
  }
  if ( v8 == v7 )
  {
LABEL_5:
    v9 = *(_QWORD *)(v4 + 256);
    v10 = *(const void **)(v4 + 248);
    ptr = v34;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v9 > 0x80 )
    {
      sub_2236E10(&ptr, v34, v9, 1);
      v20 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v9 )
        goto LABEL_7;
      v20 = (char *)v34;
    }
    memcpy(v20, v10, v9);
    v9 += si128.m128i_i64[0];
LABEL_7:
    si128.m128i_i64[0] = v9;
    v31 = 257;
    v28 = 257;
    v25 = 257;
    v23 = 259;
    v22 = "include";
    sub_228A3B0(&ptr, &v22, v24, &v26, v29);
    v31 = 261;
    v29[0] = ptr;
    v29[1] = (void *)si128.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)v29);
    if ( ptr != v34 )
      free(ptr);
    goto LABEL_9;
  }
  do
  {
    v18 = *v7;
    if ( *(_QWORD *)(*v7 + 16LL) )
      v18 = *(_QWORD *)(*v7 + 16LL);
    ++v7;
    *(_BYTE *)(v18 + 44) |= 1u;
    if ( v7 == v8 )
      break;
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3033) )
    {
      if ( v8 == ++v7 )
        goto LABEL_9;
    }
  }
  while ( v7 != v8 );
LABEL_9:
  LODWORD(ptr) = 3055;
  v11 = sub_21B6DA0(a2, &ptr, 1);
  v12 = *(_QWORD *)(a2 + 8);
  v13 = (_QWORD *)(v12 + 8LL * (unsigned int)v11);
  v14 = (_QWORD *)(v12 + 8 * HIDWORD(v11));
  if ( v13 == v14 )
    goto LABEL_13;
  while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 3055) )
  {
    if ( v14 == ++v13 )
      goto LABEL_13;
  }
  if ( v14 == v13 )
  {
LABEL_13:
    if ( *(_QWORD *)(a1 + 2128) )
    {
      (*(void (__fastcall **)(void ***, __int64, __int64))(a1 + 2136))(
        &v26,
        a1 + 2112,
        *(_QWORD *)(a1 + 2176) + 192LL * *(unsigned int *)(a1 + 2184) - 192);
      v15 = (void **)v27;
      if ( v26 != v27 )
      {
        v16 = v26;
        do
        {
          while ( 1 )
          {
            v29[0] = v30;
            sub_126E200(v29, *(_BYTE **)(v4 + 104), *(_QWORD *)(v4 + 104) + *(_QWORD *)(v4 + 112));
            sub_9EE560(v29, *v16, (size_t)v16[1]);
            ptr = v29;
            v34[4] = 260;
            sub_112FB90(a2, a3, (__int64)&ptr);
            if ( v29[0] == v30 )
              break;
            operator delete(v29[0]);
            v16 += 4;
            if ( v15 == v16 )
              goto LABEL_18;
          }
          v16 += 4;
        }
        while ( v15 != v16 );
LABEL_18:
        v17 = (void **)v27;
        v15 = v26;
        if ( v27 != v26 )
        {
          do
          {
            while ( *v15 != v15 + 2 )
            {
              operator delete(*v15);
              v15 += 4;
              if ( v17 == v15 )
                goto LABEL_21;
            }
            v15 += 4;
          }
          while ( v17 != v15 );
LABEL_21:
          v15 = v26;
        }
      }
      if ( v15 )
        operator delete(v15);
    }
  }
  else
  {
    do
    {
      v19 = *v13;
      if ( *(_QWORD *)(*v13 + 16LL) )
        v19 = *(_QWORD *)(*v13 + 16LL);
      ++v13;
      *(_BYTE *)(v19 + 44) |= 1u;
      if ( v13 == v14 )
        break;
      while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 3055) )
      {
        if ( v14 == ++v13 )
          return;
      }
    }
    while ( v13 != v14 );
  }
}
