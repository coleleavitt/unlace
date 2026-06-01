unsigned __int64 __fastcall sub_156F700(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int16 v2; // bp
  char v3; // cl
  size_t v4; // rax
  int v5; // edx
  _BYTE *v6; // rdi
  unsigned __int64 v7; // rdx
  size_t v8; // rdx
  __int64 v9; // [rsp+8h] [rbp-E0h] BYREF
  void *src; // [rsp+10h] [rbp-D8h] BYREF
  size_t n; // [rsp+18h] [rbp-D0h]
  _QWORD v12[2]; // [rsp+20h] [rbp-C8h] BYREF
  int v13; // [rsp+30h] [rbp-B8h] BYREF
  int v14; // [rsp+34h] [rbp-B4h]
  char v15; // [rsp+38h] [rbp-B0h]
  __int64 v16; // [rsp+3Ch] [rbp-ACh]
  char v17; // [rsp+44h] [rbp-A4h]
  void *dest; // [rsp+48h] [rbp-A0h]
  __m128 v19; // [rsp+50h] [rbp-98h] BYREF
  char v20; // [rsp+68h] [rbp-80h]
  unsigned __int8 *v21[15]; // [rsp+70h] [rbp-78h] BYREF

  result = 0;
  v2 = *(_WORD *)(a1 + 32);
  v3 = v2 - 30;
  if ( (unsigned __int16)(v2 - 30) > 0x23u )
    return result;
  if ( ((1LL << v3) & 0x84B195225LL) == 0 )
    return ((unsigned __int64)(1LL << v3) >> 34) & 1;
  sub_FC70B0((__int64)v21, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 1712);
  sub_AE9DF0(v21, v2, 4u);
  v4 = j__strlen("=");
  v5 = *(_DWORD *)(a1 + 16);
  v17 = 0;
  v13 = v5;
  v14 = v5;
  v16 = 0;
  dest = &v19.m128_u16[4];
  v19.m128_u64[0] = 0;
  v19.m128_i8[8] = 0;
  v20 = 0;
  v15 = 1;
  src = v12;
  sub_1563B60(&src, "=", (__int64)&asc_2336CAF[v4 + 4]);
  v6 = dest;
  if ( src == v12 )
  {
    v8 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v12[0];
      else
        memcpy(dest, src, n);
      v8 = n;
      v6 = dest;
    }
    v19.m128_u64[0] = v8;
    v6[v8] = 0;
    v6 = src;
    goto LABEL_9;
  }
  if ( dest == &v19.m128_u16[4] )
  {
    v9 = v12[0];
    dest = src;
    v19 = _mm_loadh_ps((const double *)&v9);
    goto LABEL_23;
  }
  v9 = v12[0];
  v7 = v19.m128_u64[1];
  dest = src;
  v19 = _mm_loadh_ps((const double *)&v9);
  if ( !v6 )
  {
LABEL_23:
    v6 = v12;
    src = v12;
    goto LABEL_9;
  }
  src = v6;
  v12[0] = v7;
LABEL_9:
  n = 0;
  *v6 = 0;
  if ( src != v12 )
    operator delete(src);
  if ( v13 && v14 )
    sub_1569180((__int64 *)v21, (unsigned __int64)&v13);
  if ( dest != &v19.m128_u16[4] )
    operator delete(dest);
  sub_AEA040((__int64)v21);
  return 1;
}
