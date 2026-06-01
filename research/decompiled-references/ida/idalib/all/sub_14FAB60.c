void __fastcall sub_14FAB60(__int64 a1, unsigned int a2)
{
  int v3; // eax
  int v4; // r14d
  __int64 v5; // rax
  int v6; // r9d
  __int64 *v7; // rdi
  __int64 v8; // r15
  size_t v9; // rax
  unsigned int *v10; // rcx
  signed __int64 v11; // rbp
  _QWORD *v12; // rax
  _BYTE *v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  size_t v16; // rdx
  unsigned int *v17; // [rsp+8h] [rbp-F0h] BYREF
  void *src; // [rsp+10h] [rbp-E8h]
  size_t n; // [rsp+18h] [rbp-E0h]
  _QWORD v20[2]; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v21; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-C4h]
  char v23; // [rsp+38h] [rbp-C0h]
  __int64 v24; // [rsp+3Ch] [rbp-BCh]
  char v25; // [rsp+44h] [rbp-B4h]
  void *dest; // [rsp+48h] [rbp-B0h]
  __m128 v27; // [rsp+50h] [rbp-A8h] BYREF
  char v28; // [rsp+68h] [rbp-90h]
  unsigned __int8 *v29[17]; // [rsp+70h] [rbp-88h] BYREF

  v3 = sub_1895420(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL));
  if ( v3 == -1 )
    return;
  v4 = v3;
  v5 = sub_18957D0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL));
  v7 = *(__int64 **)(a1 + 2072);
  v8 = v5;
  if ( v7 )
    sub_14F8800(v7, a2);
  else
    sub_18AB010(
      *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
      a2,
      0,
      0,
      v6,
      0,
      0);
  sub_1564820(v29, a1, a2, 1765);
  v9 = j__strlen("@end\n");
  v10 = &v21;
  v21 = a2;
  v11 = v9;
  v22 = a2;
  dest = &v27.m128_u16[4];
  v12 = v20;
  v24 = 0;
  v25 = 0;
  v27.m128_u64[0] = 0;
  v27.m128_i8[8] = 0;
  v28 = 0;
  v23 = 0;
  src = v20;
  if ( (unsigned __int64)v11 > 0xF )
  {
    if ( v11 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v12 = (_QWORD *)operator new(v11 + 1);
    v20[0] = v11;
    src = v12;
LABEL_25:
    v17 = &v21;
    memcpy(v12, "@end\n", v11);
    v12 = src;
    v10 = &v21;
    goto LABEL_7;
  }
  if ( v11 == 1 )
  {
    LOBYTE(v20[0]) = 64;
    goto LABEL_7;
  }
  if ( v11 )
    goto LABEL_25;
LABEL_7:
  n = v11;
  *((_BYTE *)v12 + v11) = 0;
  v13 = dest;
  if ( src == v20 )
  {
    v16 = n;
    if ( n )
    {
      if ( n == 1 )
      {
        *(_BYTE *)dest = v20[0];
        v16 = n;
        v13 = dest;
      }
      else
      {
        v17 = &v21;
        memcpy(dest, src, n);
        v16 = n;
        v13 = dest;
        v10 = &v21;
      }
    }
    v27.m128_u64[0] = v16;
    v13[v16] = 0;
    v13 = src;
    goto LABEL_11;
  }
  if ( dest == &v27.m128_u16[4] )
  {
    v17 = (unsigned int *)v20[0];
    dest = src;
    v27 = _mm_loadh_ps((const double *)&v17);
    goto LABEL_32;
  }
  v17 = (unsigned int *)v20[0];
  v14 = v27.m128_u64[1];
  dest = src;
  v27 = _mm_loadh_ps((const double *)&v17);
  if ( !v13 )
  {
LABEL_32:
    v13 = v20;
    src = v20;
    goto LABEL_11;
  }
  src = v13;
  v20[0] = v14;
LABEL_11:
  n = 0;
  *v13 = 0;
  if ( src != v20 )
  {
    v17 = &v21;
    operator delete(src);
    v10 = v17;
  }
  v28 = 0;
  if ( v21 && v22 )
  {
    v17 = v10;
    sub_14FA6F0((__int64 *)v29, (unsigned __int64)v10);
    v10 = v17;
  }
  if ( dest != v10 + 10 )
    operator delete(dest);
  sub_AEA040((__int64)v29);
  if ( v8 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    sub_1564820(v29, a1, v15, 2040);
    sub_AE9DF0(v29, v4, 2u);
    sub_AEA040((__int64)v29);
  }
}
