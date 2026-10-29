void __fastcall sub_1710D30(__int64 a1, __int64 a2, char a3)
{
  char *v3; // rax
  char *v6; // rdi
  _QWORD *v7; // r15
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  char *v10; // rax
  __m128i v11; // xmm2
  char *v12; // rax
  char *v13; // rax
  __m128i v14; // xmm4
  __int64 v15; // [rsp+0h] [rbp-98h] BYREF
  char *v16; // [rsp+8h] [rbp-90h]
  __m128i si128; // [rsp+10h] [rbp-88h]
  int v18; // [rsp+20h] [rbp-78h]
  void *v19[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v20; // [rsp+38h] [rbp-60h]
  char v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  __int64 v23; // [rsp+50h] [rbp-48h]
  __int64 v24; // [rsp+58h] [rbp-40h]

  v3 = "@end";
  v6 = *(char **)(a2 + 8);
  if ( !a3 )
    v3 = "end";
  *(_OWORD *)v19 = 0;
  v15 = 0;
  v16 = v3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
  v18 = 0;
  v20 = 0;
  v21 = v21 & 0x80 | 0x40;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( v6 == *(char **)(a2 + 16) )
  {
    sub_1706840(a2, v6, (__int64)&v15);
  }
  else
  {
    sub_17048E0((__int64)v6, (__int64)&v15);
    *(_QWORD *)(a2 + 8) += 96LL;
  }
  v7 = v19[1];
  v8 = v19[0];
  if ( v19[1] != v19[0] )
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
    v8 = v19[0];
  }
  if ( v8 )
    operator delete(v8);
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    v10 = "@property";
    v11 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    if ( !a3 )
      v10 = "property";
    *(_OWORD *)v19 = 0;
    si128 = v11;
    v16 = v10;
    v15 = 0;
    v18 = 0;
    v20 = 0;
    v21 = v21 & 0x80 | 0x40;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    sub_1706C30(a2, (__int64)&v15);
    sub_1705410((__int64)v19);
    v12 = "@required";
    *(_OWORD *)v19 = 0;
    if ( !a3 )
      v12 = "required";
    v15 = 0;
    v18 = 0;
    v16 = v12;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v20 = 0;
    v22 = 0;
    v21 = v21 & 0x80 | 0x40;
    v23 = 0;
    v24 = 0;
    sub_1706C30(a2, (__int64)&v15);
    sub_1705410((__int64)v19);
    v13 = "@optional";
    v14 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    if ( !a3 )
      v13 = "optional";
    v15 = 0;
    si128 = v14;
    v16 = v13;
    v18 = 0;
    *(_OWORD *)v19 = 0;
    v20 = 0;
    v21 = v21 & 0x80 | 0x40;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    sub_1706C30(a2, (__int64)&v15);
    sub_1705410((__int64)v19);
  }
}
