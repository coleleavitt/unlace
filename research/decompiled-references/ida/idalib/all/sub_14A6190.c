void __fastcall sub_14A6190(__int64 a1, __int64 a2, char a3)
{
  char v3; // al
  char *v4; // r13
  __int64 v5; // rcx
  size_t v6; // rax
  _BYTE *v7; // rdi
  unsigned __int64 v8; // rdx
  size_t v9; // rdx
  __int8 *v10; // [rsp+0h] [rbp-F0h] BYREF
  void *src; // [rsp+8h] [rbp-E8h] BYREF
  size_t n; // [rsp+10h] [rbp-E0h]
  _QWORD v13[2]; // [rsp+18h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+28h] [rbp-C8h] BYREF
  char v15; // [rsp+30h] [rbp-C0h]
  __int64 v16; // [rsp+34h] [rbp-BCh]
  char v17; // [rsp+3Ch] [rbp-B4h]
  void *dest; // [rsp+40h] [rbp-B0h]
  __m128 v19; // [rsp+48h] [rbp-A8h] BYREF
  char v20; // [rsp+60h] [rbp-90h]
  unsigned __int8 *v21[17]; // [rsp+68h] [rbp-88h] BYREF

  v3 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL);
  if ( (v3 & 0x10) == 0 )
    return;
  if ( a3 )
  {
    v4 = (char *)"noexcept";
    v5 = 2138;
  }
  else
  {
    v4 = "noexcept(false)";
    v5 = (v3 & 0x40) == 0 ? 2138 : 1970;
  }
  sub_1564820(v21, a1, (unsigned int)a2, v5);
  v14 = a2;
  v15 = 1;
  sub_AEC610((__int64 *)v21, &v14);
  sub_AEA040((__int64)v21);
  sub_1564820(v21, a1, (unsigned int)a2, 2030);
  sub_149E970(v21, (__int64)v4);
  v6 = strlen(v4);
  v14 = a2;
  dest = &v19.m128_u16[4];
  v10 = &v19.m128_i8[8];
  v16 = 0;
  v17 = 0;
  v19.m128_u64[0] = 0;
  v19.m128_i8[8] = 0;
  v20 = 0;
  v15 = 1;
  src = v13;
  sub_149EBB0(&src, v4, (__int64)&v4[v6]);
  v7 = dest;
  if ( src == v13 )
  {
    v9 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v13[0];
      else
        memcpy(dest, src, n);
      v9 = n;
      v7 = dest;
    }
    v19.m128_u64[0] = v9;
    v7[v9] = 0;
    v7 = src;
    goto LABEL_8;
  }
  if ( dest == v10 )
  {
    v10 = (__int8 *)v13[0];
    dest = src;
    v19 = _mm_loadh_ps((const double *)&v10);
    goto LABEL_24;
  }
  v10 = (__int8 *)v13[0];
  v8 = v19.m128_u64[1];
  dest = src;
  v19 = _mm_loadh_ps((const double *)&v10);
  if ( !v7 )
  {
LABEL_24:
    v7 = v13;
    src = v13;
    goto LABEL_8;
  }
  src = v7;
  v13[0] = v8;
LABEL_8:
  n = 0;
  *v7 = 0;
  if ( src != v13 )
    operator delete(src);
  if ( (_DWORD)v14 && HIDWORD(v14) )
    sub_14A2370((__int64 *)v21, (unsigned __int64)&v14);
  if ( dest != &v19.m128_u16[4] )
    operator delete(dest);
  sub_AEA040((__int64)v21);
}
