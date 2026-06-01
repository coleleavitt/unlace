__m128 __fastcall irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_11(__int64 a1, const char *a2)
{
  int v3; // ebp
  void *v4; // rdi
  int v5; // eax
  char **v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // ecx
  char i; // al
  char v11; // dl
  __m128 v12; // xmm2
  __int64 v14; // rsi
  char v15; // r12
  void *v16; // rbx
  const char *v17; // rdi
  char *v18; // rbp
  int v19; // eax
  float v20; // xmm0_4
  int v21; // eax
  float v22; // [rsp+Ch] [rbp-5Ch]
  unsigned int v23; // [rsp+Ch] [rbp-5Ch]
  char *endptr; // [rsp+18h] [rbp-50h] BYREF
  void *v25[9]; // [rsp+20h] [rbp-48h] BYREF

  v25[3] = (void *)__readfsqword(0x28u);
  if ( !a2 )
    return 0;
  if ( *a2 )
  {
    v3 = strlen(a2 + 1) + 2;
    v4 = (void *)operator new[](v3);
    if ( v3 <= 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 1;
    v4 = (void *)operator new[](1u);
  }
  v4 = memcpy(v4, a2, (unsigned int)v3);
LABEL_5:
  v5 = *(_DWORD *)(a1 + 124);
  if ( v5 <= 0 )
  {
LABEL_14:
    if ( v4 )
      operator delete[](v4);
    return 0;
  }
  v6 = *(char ***)(a1 + 112);
  v7 = (__int64)&v6[4 * (unsigned int)(v5 - 1) + 4];
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    for ( i = **v6; i; i = (*v6)[v9] )
    {
      v11 = *((_BYTE *)v4 + v8);
      if ( !v11 )
        break;
      if ( v11 != i )
        goto LABEL_13;
      v8 = ++v9;
    }
    if ( v3 == *((_DWORD *)v6 + 3) )
      break;
LABEL_13:
    v6 += 4;
    if ( v6 == (char **)v7 )
      goto LABEL_14;
  }
  if ( v4 )
    operator delete[](v4);
  if ( !v6 )
    return 0;
  v14 = (__int64)v6[2];
  v15 = 0;
  v25[1] = nullptr;
  v25[0] = nullptr;
  sub_1CADA0((__int64)v25, v14);
  v16 = v25[0];
  v17 = (const char *)v25[0];
  if ( *(_BYTE *)v25[0] == 45 )
  {
    v17 = (char *)v25[0] + 1;
    v15 = 1;
  }
  v12 = 0;
  v12.m128_f32[0] = (float)(int)strtol(v17, &endptr, 10);
  if ( *endptr == 46 )
  {
    v18 = endptr + 1;
    v22 = v12.m128_f32[0];
    v19 = strtol(endptr + 1, &endptr, 10);
    v12 = (__m128)v12.m128_u32[0];
    v20 = (float)v19 * flt_5E0620[endptr - v18];
    v12.m128_f32[0] = v12.m128_f32[0] + v20;
    if ( *endptr == 101 )
    {
      *(float *)&v23 = v22 + v20;
      v21 = strtol(endptr + 1, &endptr, 10);
      v12 = (__m128)v23;
      v12.m128_f32[0] = *(float *)&v23 * powf(10.0, (float)v21);
    }
  }
  if ( v15 )
    v12 = _mm_xor_ps(v12, (__m128)xmmword_5DC5D0);
  if ( v16 )
  {
    operator delete[](v16);
    return (__m128)v12.m128_u32[0];
  }
  return v12;
}
