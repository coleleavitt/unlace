void __fastcall sub_1165B20(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  char *v9; // rax
  size_t v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // r14
  _QWORD *v14; // r15
  __int64 v15; // r9
  size_t v16; // r15
  void *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // r12
  _QWORD *v23; // r15
  size_t v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  char *v28; // rdi
  char *v29; // rdi
  size_t n; // [rsp+8h] [rbp-1B0h]
  _QWORD *v31; // [rsp+10h] [rbp-1A8h]
  void *v32; // [rsp+10h] [rbp-1A8h]
  char *src; // [rsp+18h] [rbp-1A0h]
  _QWORD v34[4]; // [rsp+20h] [rbp-198h] BYREF
  __int16 v35; // [rsp+40h] [rbp-178h]
  _QWORD v36[4]; // [rsp+50h] [rbp-168h] BYREF
  __int16 v37; // [rsp+70h] [rbp-148h]
  _BYTE v38[32]; // [rsp+80h] [rbp-138h] BYREF
  __int16 v39; // [rsp+A0h] [rbp-118h]
  __int64 v40; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-100h]
  __int16 v42; // [rsp+D0h] [rbp-E8h]
  void *ptr; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-D0h]
  _BYTE v45[192]; // [rsp+F8h] [rbp-C0h] BYREF

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
    v9 = sub_1165840(a1, a2);
    LODWORD(ptr) = 3033;
    src = v9;
    n = v10;
    v31 = *(_QWORD **)(a1 + 8);
    v11 = sub_21B6DA0(a2, &ptr, 1);
    v12 = *(_QWORD *)(a2 + 8);
    v13 = (_QWORD *)(v12 + 8LL * (unsigned int)v11);
    v14 = (_QWORD *)(v12 + 8 * HIDWORD(v11));
    if ( v13 != v14 )
    {
      while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 3033) )
      {
        if ( v14 == ++v13 )
          goto LABEL_9;
      }
      if ( v13 != v14 )
      {
        do
        {
          v26 = *v13;
          if ( *(_QWORD *)(*v13 + 16LL) )
            v26 = *(_QWORD *)(*v13 + 16LL);
          ++v13;
          *(_BYTE *)(v26 + 44) |= 1u;
          if ( v13 == v14 )
            break;
          while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 3033) )
          {
            if ( v14 == ++v13 )
              goto LABEL_13;
          }
        }
        while ( v14 != v13 );
LABEL_13:
        if ( (unsigned __int8)sub_21B79D0(a2, 1563, 1562, 1265, 0, v15) )
          sub_1165970(a1, a2, a3);
        LODWORD(ptr) = 3055;
        v20 = sub_21B6DA0(a2, &ptr, 1);
        v21 = *(_QWORD *)(a2 + 8);
        v22 = (_QWORD *)(v21 + 8LL * (unsigned int)v20);
        v23 = (_QWORD *)(v21 + 8 * HIDWORD(v20));
        if ( v22 != v23 )
        {
          while ( !*v22 || !(unsigned __int8)sub_21B9810(*v22, 3055) )
          {
            if ( v23 == ++v22 )
              goto LABEL_19;
          }
          if ( v22 != v23 )
          {
            do
            {
              v27 = *v22;
              if ( *(_QWORD *)(*v22 + 16LL) )
                v27 = *(_QWORD *)(*v22 + 16LL);
              ++v22;
              *(_BYTE *)(v27 + 44) |= 1u;
              if ( v22 == v23 )
                break;
              while ( !*v22 || !(unsigned __int8)sub_21B9810(*v22, 3055) )
              {
                if ( v23 == ++v22 )
                  return;
              }
            }
            while ( v23 != v22 );
            return;
          }
        }
LABEL_19:
        ptr = v45;
        v24 = n;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        if ( n > 0x80 )
        {
          sub_2236E10(&ptr, v45, n, 1);
          v28 = (char *)ptr + si128.m128i_i64[0];
        }
        else
        {
          if ( !n )
            goto LABEL_21;
          v28 = v45;
        }
        memcpy(v28, src, n);
        v24 = n + si128.m128i_i64[0];
LABEL_21:
        si128.m128i_i64[0] = v24;
        v42 = 257;
        v39 = 257;
        v37 = 257;
        v35 = 259;
        v34[0] = "/usr/include";
        sub_228A3B0(&ptr, v34, v36, v38, &v40);
        v42 = 261;
        v40 = (__int64)ptr;
        v41 = si128.m128i_i64[0];
        sub_112FA80(a2, a3, (__int64)&v40);
        if ( ptr != v45 )
          free(ptr);
        return;
      }
    }
LABEL_9:
    v16 = v31[32];
    v17 = (void *)v31[31];
    ptr = v45;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v16 > 0x80 )
    {
      v32 = v17;
      sub_2236E10(&ptr, v45, v16, 1);
      v17 = v32;
      v29 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v16 )
        goto LABEL_11;
      v29 = v45;
    }
    memcpy(v29, v17, v16);
    v16 += si128.m128i_i64[0];
LABEL_11:
    si128.m128i_i64[0] = v16;
    v36[0] = "ppc_wrappers";
    v42 = 257;
    v39 = 257;
    v37 = 259;
    v35 = 259;
    v34[0] = "include";
    sub_228A3B0(&ptr, v34, v36, v38, &v40);
    v42 = 261;
    v40 = (__int64)ptr;
    v41 = si128.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)&v40);
    v18 = sub_228A4B0(ptr, si128.m128i_i64[0], 0);
    v41 = v19;
    v40 = v18;
    v42 = 261;
    sub_112FA80(a2, a3, (__int64)&v40);
    if ( ptr != v45 )
      free(ptr);
    goto LABEL_13;
  }
  do
  {
    v25 = *v7;
    if ( *(_QWORD *)(*v7 + 16LL) )
      v25 = *(_QWORD *)(*v7 + 16LL);
    ++v7;
    *(_BYTE *)(v25 + 44) |= 1u;
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
