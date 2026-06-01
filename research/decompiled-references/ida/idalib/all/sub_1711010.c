void __fastcall sub_1711010(__int64 a1, __int64 a2, char a3)
{
  char *v3; // rax
  char *v6; // rdi
  _QWORD *v7; // r15
  _QWORD *v8; // rbp
  _QWORD *v9; // rdi
  char *v10; // rdi
  char *v11; // rax
  __m128i v12; // xmm2
  _QWORD *v13; // r15
  _QWORD *v14; // rbp
  _QWORD *v15; // rdi
  char *v16; // rdi
  const char *v17; // rax
  __m128i v18; // xmm3
  _QWORD *v19; // r15
  _QWORD *v20; // rbp
  _QWORD *v21; // rdi
  char *v22; // rax
  __m128i v23; // xmm4
  __int64 v24; // [rsp+0h] [rbp-98h] BYREF
  void *v25; // [rsp+8h] [rbp-90h]
  __m128i si128; // [rsp+10h] [rbp-88h]
  int v27; // [rsp+20h] [rbp-78h]
  void *v28[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v29; // [rsp+38h] [rbp-60h]
  char v30; // [rsp+40h] [rbp-58h]
  __int64 v31; // [rsp+48h] [rbp-50h]
  __int64 v32; // [rsp+50h] [rbp-48h]
  __int64 v33; // [rsp+58h] [rbp-40h]

  v3 = "@private";
  v6 = *(char **)(a2 + 8);
  if ( !a3 )
    v3 = "private";
  *(_OWORD *)v28 = 0;
  v24 = 0;
  v25 = v3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
  v27 = 0;
  v29 = 0;
  v30 = v30 & 0x80 | 0x40;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  if ( v6 == *(char **)(a2 + 16) )
  {
    sub_1706840(a2, v6, (__int64)&v24);
  }
  else
  {
    sub_17048E0((__int64)v6, (__int64)&v24);
    *(_QWORD *)(a2 + 8) += 96LL;
  }
  v7 = v28[1];
  v8 = v28[0];
  if ( v28[1] != v28[0] )
  {
    do
    {
      while ( 1 )
      {
        v9 = (_QWORD *)v8[3];
        if ( v9 == v8 + 5 )
          break;
        operator delete(v9);
        v8 += 8;
        if ( v8 == v7 )
          goto LABEL_8;
      }
      v8 += 8;
    }
    while ( v7 != v8 );
LABEL_8:
    v8 = v28[0];
  }
  if ( v8 )
    operator delete(v8);
  v10 = *(char **)(a2 + 8);
  v11 = "@protected";
  v12 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
  v24 = 0;
  if ( !a3 )
    v11 = "protected";
  *(_OWORD *)v28 = 0;
  si128 = v12;
  v25 = v11;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v30 = v30 & 0x80 | 0x40;
  v32 = 0;
  v33 = 0;
  if ( v10 == *(char **)(a2 + 16) )
  {
    sub_1706840(a2, v10, (__int64)&v24);
  }
  else
  {
    sub_17048E0((__int64)v10, (__int64)&v24);
    *(_QWORD *)(a2 + 8) += 96LL;
  }
  v13 = v28[1];
  v14 = v28[0];
  if ( v28[1] != v28[0] )
  {
    do
    {
      while ( 1 )
      {
        v15 = (_QWORD *)v14[3];
        if ( v15 == v14 + 5 )
          break;
        operator delete(v15);
        v14 += 8;
        if ( v14 == v13 )
          goto LABEL_18;
      }
      v14 += 8;
    }
    while ( v13 != v14 );
LABEL_18:
    v14 = v28[0];
  }
  if ( v14 )
    operator delete(v14);
  v16 = *(char **)(a2 + 8);
  v17 = "@public";
  v18 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
  v24 = 0;
  if ( !a3 )
    v17 = "public";
  *(_OWORD *)v28 = 0;
  si128 = v18;
  v25 = (void *)v17;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v30 = v30 & 0x80 | 0x40;
  v32 = 0;
  v33 = 0;
  if ( v16 == *(char **)(a2 + 16) )
  {
    sub_1706840(a2, v16, (__int64)&v24);
  }
  else
  {
    sub_17048E0((__int64)v16, (__int64)&v24);
    *(_QWORD *)(a2 + 8) += 96LL;
  }
  v19 = v28[1];
  v20 = v28[0];
  if ( v28[1] != v28[0] )
  {
    do
    {
      while ( 1 )
      {
        v21 = (_QWORD *)v20[3];
        if ( v21 == v20 + 5 )
          break;
        operator delete(v21);
        v20 += 8;
        if ( v19 == v20 )
          goto LABEL_28;
      }
      v20 += 8;
    }
    while ( v19 != v20 );
LABEL_28:
    v20 = v28[0];
  }
  if ( v20 )
    operator delete(v20);
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    v22 = "@package";
    v23 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v24 = 0;
    if ( !a3 )
      v22 = "package";
    *(_OWORD *)v28 = 0;
    si128 = v23;
    v25 = v22;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v30 = v30 & 0x80 | 0x40;
    v32 = 0;
    v33 = 0;
    sub_1706C30(a2, (__int64)&v24);
    sub_1705410((__int64)v28);
  }
}
