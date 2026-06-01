unsigned __int64 __fastcall sub_2106830(
        __int64 a1,
        char a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        unsigned __int8 a8)
{
  int v8; // r14d
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  size_t v11; // rdx
  __int64 v12; // r15
  _QWORD *v13; // rax
  size_t v14; // rdx
  __int64 *v15; // rax
  __int64 *v16; // r10
  char v17; // dl
  char v18; // r13
  unsigned __int64 v19; // r13
  unsigned __int64 v21; // rax
  __int64 *v22; // [rsp+10h] [rbp-B8h]
  __int64 v23; // [rsp+10h] [rbp-B8h]
  __int64 *v24; // [rsp+28h] [rbp-A0h]
  void *v27; // [rsp+40h] [rbp-88h] BYREF
  __int64 v28; // [rsp+48h] [rbp-80h]
  _BYTE v29[16]; // [rsp+50h] [rbp-78h] BYREF
  __m128i v30; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v31[16]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v32; // [rsp+80h] [rbp-48h]

  v8 = a4;
  v27 = v29;
  sub_2100260(&v27, a3, (__int64)&a3[a4]);
  if ( a7 )
  {
    v9 = j__strlen("/");
    if ( v9 > 0x7FFFFFFFFFFFFFFFLL - v28 )
      goto LABEL_15;
    v10 = sub_9EE560(&v27, "/", v9);
    v11 = *(_QWORD *)(a7 + 160);
    if ( v11 > 0x7FFFFFFFFFFFFFFFLL - v10[1] )
      goto LABEL_15;
    sub_9EE560(v10, *(_BYTE **)(a7 + 152), v11);
    v12 = *(_QWORD *)(a7 + 176);
    if ( !v12 )
      goto LABEL_7;
    v13 = sub_9EE7C0(&v27, "/");
    v14 = *(_QWORD *)(v12 + 160);
    if ( v14 > 0x7FFFFFFFFFFFFFFFLL - v13[1] )
LABEL_15:
      std::__throw_length_error("basic_string::append");
    sub_9EE560(v13, *(_BYTE **)(v12 + 152), v14);
  }
LABEL_7:
  v30.m128i_i64[0] = (__int64)v31;
  sub_2100320(&v30, v27, (__int64)v27 + v28);
  v32 = 0;
  v15 = sub_21063E0((_QWORD *)(a1 + 2048), &v30);
  v16 = v15;
  v18 = v17;
  if ( (_BYTE *)v30.m128i_i64[0] != v31 )
  {
    v22 = v15;
    operator delete((void *)v30.m128i_i64[0]);
    v16 = v22;
  }
  if ( v18 )
  {
    v24 = v16;
    v23 = v16[4];
    v19 = sub_2105F40((__int64 *)(a1 + 768), 200, 3u);
    sub_2113B00(v19, 2, v23, v8, (unsigned __int8)(a2 - 2) <= 1u, a8, 0);
    *(_QWORD *)(v19 + 176) = a7;
    *(_QWORD *)(v19 + 184) = a5;
    *(_QWORD *)v19 = off_2C730A0;
    *(_BYTE *)(v19 + 192) = a6;
    *(_BYTE *)(v19 + 197) = ((unsigned __int8)(a2 - 15) <= 2u) | *(_BYTE *)(v19 + 197) & 0xFE;
    *(_WORD *)(v19 + 196) = *(_WORD *)(v19 + 196) & 0xF900 | 1;
    v24[8] = v19;
    v21 = sub_2105F80(a1);
    *(_QWORD *)(v21 + 8) = v19;
    **(_QWORD **)(v19 + 8) = v21;
    *(_QWORD *)(*(_QWORD *)(v19 + 8) + 8LL) = v21;
  }
  else
  {
    v19 = v16[8];
  }
  if ( v27 != v29 )
    operator delete(v27);
  return v19;
}
