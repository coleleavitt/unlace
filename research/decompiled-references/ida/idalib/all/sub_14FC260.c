void __fastcall sub_14FC260(__int64 a1)
{
  __int64 v2; // rsi
  void *v3; // rdi
  __int16 v4; // ax
  __int64 v5; // rbp
  int v6; // eax
  _QWORD *v7; // rax
  _BYTE *v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned int v11; // eax
  size_t v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-E0h] BYREF
  void *src; // [rsp+10h] [rbp-D8h]
  size_t n; // [rsp+18h] [rbp-D0h]
  _QWORD v16[2]; // [rsp+20h] [rbp-C8h] BYREF
  int v17; // [rsp+30h] [rbp-B8h] BYREF
  int v18; // [rsp+34h] [rbp-B4h]
  char v19; // [rsp+38h] [rbp-B0h]
  __int64 v20; // [rsp+3Ch] [rbp-ACh]
  char v21; // [rsp+44h] [rbp-A4h]
  void *dest; // [rsp+48h] [rbp-A0h]
  __m128 v23; // [rsp+50h] [rbp-98h] BYREF
  char v24; // [rsp+68h] [rbp-80h]
  unsigned __int8 *v25[15]; // [rsp+70h] [rbp-78h] BYREF

  v2 = *(_QWORD *)a1;
  if ( *(_BYTE *)(a1 + 104) )
    goto LABEL_2;
  sub_14F8800((__int64 *)a1, *(_DWORD *)(v2 + 16));
  v2 = *(_QWORD *)a1;
  v4 = *(_WORD *)(*(_QWORD *)a1 + 32LL);
  if ( v4 != 1 && (unsigned __int16)(v4 - 456) > 2u && v4 != 460 )
    goto LABEL_2;
  sub_1564840(v25, v2, v2 + 16, 1765);
  v19 = 0;
  v5 = j__strlen("\n@end\n");
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 16LL);
  v21 = 0;
  v20 = 0;
  v17 = v6;
  v18 = v6;
  v7 = v16;
  dest = &v23.m128_u16[4];
  v23.m128_u64[0] = 0;
  v23.m128_i8[8] = 0;
  v24 = 0;
  src = v16;
  if ( (unsigned __int64)v5 > 0xF )
  {
    if ( v5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v7 = (_QWORD *)operator new(v5 + 1);
    v16[0] = v5;
    src = v7;
LABEL_25:
    memcpy(v7, "\n@end\n", v5);
    v7 = src;
    goto LABEL_11;
  }
  if ( v5 == 1 )
  {
    LOBYTE(v16[0]) = 10;
    goto LABEL_11;
  }
  if ( v5 )
    goto LABEL_25;
LABEL_11:
  n = v5;
  *((_BYTE *)v7 + v5) = 0;
  v8 = dest;
  if ( src == v16 )
  {
    v12 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v16[0];
      else
        memcpy(dest, src, n);
      v12 = n;
      v8 = dest;
    }
    v23.m128_u64[0] = v12;
    v8[v12] = 0;
    v8 = src;
    goto LABEL_15;
  }
  if ( dest == &v23.m128_u16[4] )
  {
    v13 = v16[0];
    dest = src;
    v23 = _mm_loadh_ps((const double *)&v13);
    goto LABEL_34;
  }
  v13 = v16[0];
  v9 = v23.m128_u64[1];
  dest = src;
  v23 = _mm_loadh_ps((const double *)&v13);
  if ( !v8 )
  {
LABEL_34:
    v8 = v16;
    src = v16;
    goto LABEL_15;
  }
  src = v8;
  v16[0] = v9;
LABEL_15:
  n = 0;
  *v8 = 0;
  if ( src != v16 )
    operator delete(src);
  v24 = 0;
  if ( v17 && v18 )
    sub_14FA6F0((__int64 *)v25, (unsigned __int64)&v17);
  if ( dest != &v23.m128_u16[4] )
    operator delete(dest);
  sub_AEA040((__int64)v25);
  v10 = *(_QWORD *)a1;
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  sub_1564820(v25, v10, v11, 2040);
  sub_AE9DF0(v25, 4, 2u);
  sub_AEA040((__int64)v25);
  v2 = *(_QWORD *)a1;
LABEL_2:
  *(_QWORD *)(v2 + 2072) = 0;
  v3 = *(void **)(a1 + 24);
  if ( v3 != (void *)(a1 + 40) )
    free(v3);
}
