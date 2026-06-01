void __fastcall sub_12B64F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  __int64 v9; // rax
  size_t v10; // rbx
  const void *v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  _QWORD *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // rdi
  char *v19; // [rsp+0h] [rbp-198h] BYREF
  __int16 v20; // [rsp+20h] [rbp-178h]
  _BYTE v21[32]; // [rsp+30h] [rbp-168h] BYREF
  __int16 v22; // [rsp+50h] [rbp-148h]
  _BYTE v23[32]; // [rsp+60h] [rbp-138h] BYREF
  __int16 v24; // [rsp+80h] [rbp-118h]
  void *v25[2]; // [rsp+90h] [rbp-108h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-F8h] BYREF
  __int16 v27; // [rsp+B0h] [rbp-E8h]
  void *ptr; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-D0h]
  _WORD v30[96]; // [rsp+D8h] [rbp-C0h] BYREF

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
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(v9 + 256);
    v11 = *(const void **)(v9 + 248);
    ptr = v30;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v10 > 0x80 )
    {
      sub_2236E10(&ptr, v30, v10, 1);
      v18 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v10 )
        goto LABEL_7;
      v18 = (char *)v30;
    }
    memcpy(v18, v11, v10);
    v10 += si128.m128i_i64[0];
LABEL_7:
    si128.m128i_i64[0] = v10;
    v27 = 257;
    v24 = 257;
    v22 = 257;
    v20 = 259;
    v19 = "include";
    sub_228A3B0(&ptr, &v19, v21, v23, v25);
    v27 = 261;
    v25[0] = ptr;
    v25[1] = (void *)si128.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)v25);
    if ( ptr != v30 )
      free(ptr);
    goto LABEL_9;
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
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3033) )
    {
      if ( v8 == ++v7 )
        goto LABEL_9;
    }
  }
  while ( v8 != v7 );
LABEL_9:
  LODWORD(ptr) = 3055;
  v12 = sub_21B6DA0(a2, &ptr, 1);
  v13 = *(_QWORD *)(a2 + 8);
  v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
  v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
  if ( v14 == v15 )
    goto LABEL_13;
  while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3055) )
  {
    if ( v15 == ++v14 )
      goto LABEL_13;
  }
  if ( v15 == v14 )
  {
LABEL_13:
    sub_1131210((__int64)v25, a1);
    if ( (_BYTE)v27 )
    {
      v30[4] = 260;
      ptr = v25;
      sub_112FA80(a2, a3, (__int64)&ptr);
      if ( (_BYTE)v27 )
      {
        if ( v25[0] != &v26 )
          operator delete(v25[0]);
      }
    }
  }
  else
  {
    do
    {
      v17 = *v14;
      if ( *(_QWORD *)(*v14 + 16LL) )
        v17 = *(_QWORD *)(*v14 + 16LL);
      ++v14;
      *(_BYTE *)(v17 + 44) |= 1u;
      if ( v14 == v15 )
        break;
      while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3055) )
      {
        if ( v15 == ++v14 )
          return;
      }
    }
    while ( v15 != v14 );
  }
}
