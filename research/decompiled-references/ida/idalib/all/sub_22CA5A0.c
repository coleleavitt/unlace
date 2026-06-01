_QWORD *__fastcall sub_22CA5A0(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  char *v8; // r13
  __int64 v11; // r11
  unsigned __int64 v12; // rbp
  const void *v13; // rax
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  char *v17; // rdi
  bool v18; // zf
  char v19; // bp
  char *v20; // rax
  const char *v21; // rax
  char *v22; // [rsp+0h] [rbp-248h]
  int v23; // [rsp+0h] [rbp-248h]
  __int64 v24; // [rsp+10h] [rbp-238h]
  const void *v25; // [rsp+18h] [rbp-230h]
  _QWORD v26[4]; // [rsp+20h] [rbp-228h] BYREF
  __int16 v27; // [rsp+40h] [rbp-208h]
  _QWORD v28[4]; // [rsp+50h] [rbp-1F8h] BYREF
  __int16 v29; // [rsp+70h] [rbp-1D8h]
  __m128i v30; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v31; // [rsp+90h] [rbp-1B8h] BYREF
  __int16 v32; // [rsp+A0h] [rbp-1A8h]
  void *v33[2]; // [rsp+B0h] [rbp-198h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-188h] BYREF
  int v35; // [rsp+D0h] [rbp-178h]
  void *ptr; // [rsp+F0h] [rbp-158h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-150h]
  _BYTE v38[320]; // [rsp+108h] [rbp-140h] BYREF

  v11 = a8;
  switch ( a3 )
  {
    case 1:
      v22 = "include";
      switch ( a5 )
      {
        case 1LL:
        case 35LL:
          goto LABEL_40;
        case 3LL:
          goto LABEL_39;
        case 37LL:
          v8 = "x86";
          break;
        case 38LL:
          v8 = "x64";
          break;
        default:
LABEL_54:
          v8 = (char *)&byte_22F0C30;
          break;
      }
      break;
    case 2:
      v22 = (char *)"inc";
      switch ( a5 )
      {
        case 1LL:
        case 35LL:
          goto LABEL_40;
        case 3LL:
          goto LABEL_39;
        case 37LL:
          v8 = (char *)"i386";
          break;
        case 38LL:
          v8 = (char *)"amd64";
          break;
        default:
          goto LABEL_54;
      }
      break;
    case 0:
      v22 = "include";
      if ( (_DWORD)a5 == 3 )
      {
LABEL_39:
        v8 = "arm64";
      }
      else if ( (unsigned int)a5 <= 3 )
      {
        v8 = (char *)"arm";
        if ( (_DWORD)a5 != 1 )
          v8 = (char *)&byte_22F0C30;
      }
      else if ( (_DWORD)a5 == 35 )
      {
LABEL_40:
        v8 = (char *)"arm";
      }
      else
      {
        v8 = (char *)"amd64";
        if ( (_DWORD)a5 != 38 )
          v8 = (char *)&byte_22F0C30;
      }
      break;
  }
  v12 = *(_QWORD *)(a4 + 8);
  v13 = *(const void **)a4;
  ptr = v38;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( v12 > 0x100 )
  {
    v25 = v13;
    sub_2236E10((__int64)&ptr, v38, v12, 1);
    v11 = a8;
    v13 = v25;
    v17 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !v12 )
    {
      si128.m128i_i64[0] = 0;
      if ( !a8 )
        goto LABEL_7;
      goto LABEL_15;
    }
    v17 = v38;
  }
  v24 = v11;
  memcpy(v17, v13, v12);
  v11 = v24;
  si128.m128i_i64[0] += v12;
  if ( !v24 )
  {
LABEL_7:
    if ( a2 != 1 )
      goto LABEL_8;
LABEL_16:
    LOWORD(v35) = 257;
    v18 = *v22 == 0;
    v29 = 257;
    v32 = 257;
    v27 = 257;
    if ( !v18 )
    {
      v26[0] = v22;
      LOBYTE(v27) = 3;
    }
    goto LABEL_18;
  }
LABEL_15:
  LOWORD(v35) = 257;
  v32 = 257;
  v29 = 257;
  v27 = 261;
  v26[0] = a7;
  v26[1] = v11;
  sub_228A3B0(&ptr, v26, v28, &v30, v33);
  if ( a2 == 1 )
    goto LABEL_16;
LABEL_8:
  if ( a2 == 2 )
  {
    v18 = *v8 == 0;
    LOWORD(v35) = 257;
    v32 = 257;
    v29 = 257;
    if ( !v18 )
    {
      v28[0] = v8;
      LOBYTE(v29) = 3;
    }
    v20 = "lib";
    goto LABEL_38;
  }
  if ( a2 )
    goto LABEL_10;
  v19 = *v8;
  if ( a3 != 1 )
  {
    LOWORD(v35) = 257;
    v32 = 257;
    v29 = 257;
    if ( v19 )
    {
      v28[0] = v8;
      LOBYTE(v29) = 3;
    }
    v20 = "bin";
LABEL_38:
    v26[0] = v20;
    v27 = 259;
LABEL_18:
    sub_228A3B0(&ptr, v26, v28, &v30, v33);
    goto LABEL_10;
  }
  sub_22A4A80(&v30);
  sub_22B9ED0((__int64)v33, &v30);
  v23 = v35;
  if ( v33[0] != &v34 )
    operator delete(v33[0]);
  if ( (__int64 *)v30.m128i_i64[0] != &v31 )
    operator delete((void *)v30.m128i_i64[0]);
  v21 = "Hostx64";
  v32 = 257;
  if ( v23 != 38 )
    v21 = "Hostx86";
  LOWORD(v35) = 257;
  if ( v19 )
  {
    v30.m128i_i64[0] = (__int64)v8;
    LOBYTE(v32) = 3;
  }
  v28[0] = v21;
  v26[0] = "bin";
  v29 = 259;
  v27 = 259;
  sub_228A3B0(&ptr, v26, v28, &v30, v33);
LABEL_10:
  v14 = ptr;
  v15 = si128.m128i_i64[0];
  *a1 = a1 + 2;
  sub_22C9310(a1, v14, (__int64)&v14[v15]);
  if ( ptr != v38 )
    free(ptr);
  return a1;
}
