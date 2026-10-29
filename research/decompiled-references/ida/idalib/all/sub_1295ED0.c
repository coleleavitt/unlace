void __fastcall sub_1295ED0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
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
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  char *v22; // rdi
  void *v23[2]; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v24; // [rsp+10h] [rbp-1A8h] BYREF
  _QWORD v25[4]; // [rsp+20h] [rbp-198h] BYREF
  __int16 v26; // [rsp+40h] [rbp-178h]
  _BYTE v27[32]; // [rsp+50h] [rbp-168h] BYREF
  __int16 v28; // [rsp+70h] [rbp-148h]
  _BYTE v29[32]; // [rsp+80h] [rbp-138h] BYREF
  __int16 v30; // [rsp+A0h] [rbp-118h]
  _QWORD v31[4]; // [rsp+B0h] [rbp-108h] BYREF
  __int16 v32; // [rsp+D0h] [rbp-E8h]
  void *ptr; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-D0h]
  _WORD v35[96]; // [rsp+F8h] [rbp-C0h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
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
      if ( v12 != v11 )
      {
        do
        {
          v20 = *v11;
          if ( *(_QWORD *)(*v11 + 16LL) )
            v20 = *(_QWORD *)(*v11 + 16LL);
          ++v11;
          *(_BYTE *)(v20 + 44) |= 1u;
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
    v13 = *(_QWORD *)(v4 + 256);
    v14 = *(const void **)(v4 + 248);
    ptr = v35;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v13 > 0x80 )
    {
      sub_2236E10(&ptr, v35, v13, 1);
      v22 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v13 )
        goto LABEL_11;
      v22 = (char *)v35;
    }
    memcpy(v22, v14, v13);
    v13 += si128.m128i_i64[0];
LABEL_11:
    si128.m128i_i64[0] = v13;
    v28 = 257;
    v25[0] = "include";
    v32 = 257;
    v30 = 257;
    v26 = 259;
    sub_228A3B0(&ptr, v25, v27, v29, v31);
    v32 = 261;
    v31[0] = ptr;
    v31[1] = si128.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)v31);
    if ( ptr != v35 )
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
    if ( v18 == v17 )
    {
LABEL_17:
      v32 = 257;
      v28 = 257;
      v30 = 257;
      v25[0] = "/usr/include";
      v26 = 259;
      sub_1130220(
        v23,
        *(_BYTE **)(v4 + 488),
        *(_QWORD *)(v4 + 496),
        (__int64)v25,
        (__int64)v27,
        (__int64)v29,
        (__int64)v31);
      v35[4] = 260;
      ptr = v23;
      sub_112FAC0(a2, a3, (__int64)&ptr);
      if ( v23[0] != &v24 )
        operator delete(v23[0]);
    }
    else
    {
      do
      {
        v21 = *v17;
        if ( *(_QWORD *)(*v17 + 16LL) )
          v21 = *(_QWORD *)(*v17 + 16LL);
        ++v17;
        *(_BYTE *)(v21 + 44) |= 1u;
        if ( v17 == v18 )
          break;
        while ( !*v17 || !(unsigned __int8)sub_21B9810(*v17, 3055) )
        {
          if ( v18 == ++v17 )
            return;
        }
      }
      while ( v17 != v18 );
    }
    return;
  }
  do
  {
    v19 = *v7;
    if ( *(_QWORD *)(*v7 + 16LL) )
      v19 = *(_QWORD *)(*v7 + 16LL);
    ++v7;
    *(_BYTE *)(v19 + 44) |= 1u;
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
