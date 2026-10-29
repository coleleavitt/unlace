_QWORD *__fastcall sub_11C0CF0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  __int64 v7; // r13
  void **v8; // rax
  void *v9; // rax
  size_t v10; // r14
  __m128i v11; // xmm4
  _BYTE *v12; // rdi
  size_t v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm2
  size_t v19; // r12
  size_t v20; // rax
  __m128i v21; // xmm0
  void *v22; // rdx
  char *v23; // r12
  char *v24; // rdx
  size_t v25; // rdx
  __m128i si128; // [rsp+0h] [rbp-1E8h] BYREF
  void **v27; // [rsp+10h] [rbp-1D8h]
  void *s1; // [rsp+18h] [rbp-1D0h]
  __int64 v29; // [rsp+20h] [rbp-1C8h]
  void *dest; // [rsp+28h] [rbp-1C0h]
  _QWORD v31[4]; // [rsp+30h] [rbp-1B8h] BYREF
  __int16 v32; // [rsp+50h] [rbp-198h]
  _BYTE v33[32]; // [rsp+60h] [rbp-188h] BYREF
  __int16 v34; // [rsp+80h] [rbp-168h]
  void *v35[2]; // [rsp+90h] [rbp-158h] BYREF
  _WORD v36[16]; // [rsp+A0h] [rbp-148h] BYREF
  void *v37[2]; // [rsp+C0h] [rbp-128h] BYREF
  _BYTE v38[16]; // [rsp+D0h] [rbp-118h] BYREF
  __int16 v39; // [rsp+E0h] [rbp-108h]
  void *ptr; // [rsp+110h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+118h] [rbp-D0h]
  _BYTE v42[192]; // [rsp+128h] [rbp-C0h] BYREF

  v29 = a4;
  v27 = a5;
  v7 = sub_10DCD30(a2, 0xCA5u);
  dest = a1 + 3;
  if ( v7 )
  {
    ptr = v42;
    v8 = *(void ***)(v7 + 48);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v9 = *v8;
    *(__m128i *)n = si128;
    s1 = v9;
    if ( v9 )
    {
      v10 = j__strlen((const char *)v9);
      if ( j__strlen("obj") != v10 )
      {
LABEL_16:
        if ( j__strlen("cwd") != v10 )
          goto LABEL_7;
        if ( !v10 )
          goto LABEL_19;
        goto LABEL_18;
      }
      if ( v10 && memcmp(s1, "obj", v10) )
      {
        if ( v10 != j__strlen("cwd") )
        {
LABEL_7:
          sub_FC70B0((__int64)v37, (__int64)*v27, 0, 400);
          v27 = v35;
          sub_21B5FF0(v35, v7, a2);
          sub_AEC220((unsigned __int8 **)v37, (_BYTE *)v35[0], (signed __int64)v35[1]);
          sub_AEC220((unsigned __int8 **)v37, s1, v10);
          if ( v35[0] != v36 )
            operator delete(v35[0]);
          sub_AEA040((__int64)v37);
          memset(a1, 0, 0x98u);
          v11 = _mm_load_si128(&si128);
          v12 = ptr;
          *a1 = a1 + 3;
          *(__m128i *)(a1 + 1) = v11;
          goto LABEL_10;
        }
LABEL_18:
        if ( memcmp(s1, "cwd", v10) )
          goto LABEL_7;
        goto LABEL_19;
      }
    }
    else
    {
      v10 = j__strlen("obj");
      if ( v10 )
      {
        if ( j__strlen("cwd") )
        {
          v10 = 0;
          goto LABEL_7;
        }
        goto LABEL_19;
      }
    }
    if ( *(_DWORD *)(a3 + 8) == 1 )
    {
      v23 = *(char **)a3;
      v24 = nullptr;
      if ( v23 )
        v24 = &v23[j__strlen(v23)];
      sub_A1FE50(&ptr, v23, v24);
      sub_228A5F0(&ptr, 0);
LABEL_19:
      v14 = 0;
      v15 = *(_QWORD *)(v29 + 32);
      if ( v15 )
        v14 = j__strlen(*(const char **)(v29 + 32));
      v16 = sub_228AA60(v15, v14, 0);
      v39 = 257;
      v36[8] = 257;
      v34 = 257;
      v32 = 261;
      v31[1] = v17;
      v31[0] = v16;
      sub_228A3B0(&ptr, v31, v33, v35, v37);
      v39 = 259;
      v37[0] = (void *)"stats";
      sub_228A730(&ptr, v37, 0);
      goto LABEL_22;
    }
    goto LABEL_16;
  }
  if ( ((_BYTE)v27[115] & 8) == 0 )
  {
    v21 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    memset(a1, 0, 0x98u);
    *a1 = a1 + 3;
    *(__m128i *)(a1 + 1) = v21;
    return a1;
  }
  ptr = v42;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v22 = v27[94];
  *(__m128i *)n = si128;
  if ( v22 )
  {
    v37[0] = v38;
    sub_11BA820(v37, v27[93], (__int64)v22 + (_QWORD)v27[93]);
  }
  else
  {
    sub_11BA9A0(v37, "-");
  }
  n[0] = 0;
  sub_A1FE50(&ptr, (_BYTE *)v37[0], (_BYTE *)v37[0] + (unsigned __int64)v37[1]);
  if ( v37[0] != v38 )
    operator delete(v37[0]);
LABEL_22:
  v18 = _mm_load_si128(&si128);
  v19 = n[0];
  *a1 = a1 + 3;
  v12 = ptr;
  *(__m128i *)(a1 + 1) = v18;
  if ( v19 )
  {
    if ( v12 != v42 )
    {
      v20 = n[1];
      *a1 = v12;
      a1[1] = v19;
      a1[2] = v20;
      return a1;
    }
    v25 = v19;
    if ( v19 <= 0x80 || (sub_2236E10(a1, a1 + 3, v19, 1), v25 = n[0], v12 = ptr, dest = (void *)*a1, n[0]) )
    {
      memcpy(dest, v12, v25);
      v12 = ptr;
    }
    a1[1] = v19;
  }
LABEL_10:
  if ( v12 != v42 )
    free(v12);
  return a1;
}
