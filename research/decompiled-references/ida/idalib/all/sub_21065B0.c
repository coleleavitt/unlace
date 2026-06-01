unsigned __int64 __fastcall sub_21065B0(
        __int64 a1,
        char a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  int v7; // r14d
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  size_t v11; // rdx
  __int64 v12; // r15
  _QWORD *v13; // rax
  size_t v14; // rdx
  __int64 *v15; // r15
  char v16; // dl
  char v17; // r13
  unsigned __int64 v18; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-A0h]
  void *v23; // [rsp+20h] [rbp-88h] BYREF
  __int64 v24; // [rsp+28h] [rbp-80h]
  _BYTE v25[16]; // [rsp+30h] [rbp-78h] BYREF
  __m128i v26; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v27[16]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v28; // [rsp+60h] [rbp-48h]

  v7 = a4;
  v23 = v25;
  sub_2100260(&v23, a3, (__int64)&a3[a4]);
  if ( a6 )
  {
    v9 = j__strlen("/");
    if ( v9 > 0x7FFFFFFFFFFFFFFFLL - v24 )
      goto LABEL_15;
    v10 = sub_9EE560(&v23, "/", v9);
    v11 = *(_QWORD *)(a6 + 160);
    if ( v11 > 0x7FFFFFFFFFFFFFFFLL - v10[1] )
      goto LABEL_15;
    sub_9EE560(v10, *(_BYTE **)(a6 + 152), v11);
    v12 = *(_QWORD *)(a6 + 176);
    if ( !v12 )
      goto LABEL_7;
    v13 = sub_9EE7C0(&v23, "/");
    v14 = *(_QWORD *)(v12 + 160);
    if ( v14 > 0x7FFFFFFFFFFFFFFFLL - v13[1] )
LABEL_15:
      std::__throw_length_error("basic_string::append");
    sub_9EE560(v13, *(_BYTE **)(v12 + 152), v14);
  }
LABEL_7:
  v26.m128i_i64[0] = (__int64)v27;
  sub_2100320(&v26, v23, (__int64)v23 + v24);
  v28 = 0;
  v15 = sub_21063E0((_QWORD *)(a1 + 2048), &v26);
  v17 = v16;
  if ( (_BYTE *)v26.m128i_i64[0] != v27 )
    operator delete((void *)v26.m128i_i64[0]);
  if ( v17 )
  {
    v21 = v15[4];
    v18 = sub_2105F40((__int64 *)(a1 + 768), 200, 3u);
    sub_2113B00(v18, 2, v21, v7, (unsigned __int8)(a2 - 2) <= 1u, a7, 0);
    *(_QWORD *)(v18 + 176) = a6;
    *(_QWORD *)v18 = off_2C730A0;
    *(_QWORD *)(v18 + 184) = a5;
    *(_BYTE *)(v18 + 197) = ((unsigned __int8)(a2 - 15) <= 2u) | *(_BYTE *)(v18 + 197) & 0xFE;
    *(_WORD *)(v18 + 196) = *(_WORD *)(v18 + 196) & 0xF900 | 3;
    v15[8] = v18;
    v20 = sub_2105F80(a1);
    *(_QWORD *)(v20 + 8) = v18;
    **(_QWORD **)(v18 + 8) = v20;
    *(_QWORD *)(*(_QWORD *)(v18 + 8) + 8LL) = v20;
  }
  else
  {
    v18 = v15[8];
  }
  if ( v23 != v25 )
    operator delete(v23);
  return v18;
}
