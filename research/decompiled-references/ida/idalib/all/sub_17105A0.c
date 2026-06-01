void __fastcall sub_17105A0(_WORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __m128i si128; // xmm1
  char v5; // al
  char *v6; // rdi
  _QWORD *v7; // r15
  _QWORD *v8; // rbp
  _QWORD *v9; // rdi
  char *v10; // rdi
  _QWORD *v11; // r15
  _QWORD *v12; // rbp
  _QWORD *v13; // rdi
  __int64 v14; // [rsp+0h] [rbp-98h] BYREF
  const char *v15; // [rsp+8h] [rbp-90h]
  __m128i v16; // [rsp+10h] [rbp-88h]
  int v17; // [rsp+20h] [rbp-78h]
  void *v18[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h]
  char v20; // [rsp+40h] [rbp-58h]
  __int64 v21; // [rsp+48h] [rbp-50h]
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+58h] [rbp-40h]

  v3 = operator new(0x28u);
  *(_QWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  std::__detail::_List_node_base::_M_hook(
    (std::__detail::_List_node_base *)v3,
    (std::__detail::_List_node_base *)(a2 + 29));
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA9B0);
  v15 = "__PRETTY_FUNCTION__";
  v5 = v20;
  ++a2[31];
  v6 = (char *)a2[1];
  v14 = 0;
  v16 = si128;
  v17 = 0;
  *(_OWORD *)v18 = 0;
  v19 = 0;
  v20 = v5 & 0x80 | 0x40;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( v6 == (char *)a2[2] )
  {
    sub_1706840((__int64)a2, v6, (__int64)&v14);
  }
  else
  {
    sub_17048E0((__int64)v6, (__int64)&v14);
    a2[1] += 96LL;
  }
  v7 = v18[1];
  v8 = v18[0];
  if ( v18[1] != v18[0] )
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
          goto LABEL_6;
      }
      v8 += 8;
    }
    while ( v7 != v8 );
LABEL_6:
    v8 = v18[0];
  }
  if ( v8 )
    operator delete(v8);
  v14 = 0;
  v15 = "__FUNCTION__";
  v16 = _mm_load_si128((const __m128i *)&xmmword_23AA9B0);
  v10 = (char *)a2[1];
  *(_OWORD *)v18 = 0;
  v17 = 0;
  v19 = 0;
  v20 = v20 & 0x80 | 0x40;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( v10 == (char *)a2[2] )
  {
    sub_1706840((__int64)a2, v10, (__int64)&v14);
  }
  else
  {
    sub_17048E0((__int64)v10, (__int64)&v14);
    a2[1] += 96LL;
  }
  v11 = v18[1];
  v12 = v18[0];
  if ( v18[1] != v18[0] )
  {
    do
    {
      while ( 1 )
      {
        v13 = (_QWORD *)v12[3];
        if ( v13 == v12 + 5 )
          break;
        operator delete(v13);
        v12 += 8;
        if ( v12 == v11 )
          goto LABEL_14;
      }
      v12 += 8;
    }
    while ( v11 != v12 );
LABEL_14:
    v12 = v18[0];
  }
  if ( v12 )
    operator delete(v12);
  if ( (*a1 & 0x1001) != 0 )
  {
    v15 = "__func__";
    v14 = 0;
    *(_OWORD *)v18 = 0;
    v16 = _mm_load_si128((const __m128i *)&xmmword_23AA9B0);
    v17 = 0;
    v19 = 0;
    v20 = v20 & 0x80 | 0x40;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    sub_1706C30((__int64)a2, (__int64)&v14);
    sub_1705410((__int64)v18);
  }
  sub_16FF8C0((__int64)(a2 + 29), a2[30]);
}
