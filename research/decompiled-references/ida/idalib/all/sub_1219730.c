void __fastcall sub_1219730(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  _BYTE *v6; // rsi
  unsigned __int64 v7; // rax
  void *v10[2]; // [rsp+10h] [rbp-108h] BYREF
  _BYTE v11[16]; // [rsp+20h] [rbp-F8h] BYREF
  void *v12[2]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v14; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v16; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+80h] [rbp-98h] BYREF
  __m128i v18; // [rsp+90h] [rbp-88h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-78h] BYREF
  __m128i *v20; // [rsp+B0h] [rbp-68h] BYREF
  __int16 v21; // [rsp+D0h] [rbp-48h]

  if ( *(_BYTE *)(a1 + 2384) )
  {
    v5 = *(_QWORD *)(a1 + 2496);
    v6 = *(_BYTE **)(a1 + 2488);
    v10[0] = v11;
    sub_1213C40(v10, v6, (__int64)&v6[v5]);
    v12[0] = v13;
    sub_1213B80(v12, (_BYTE *)v10[0], (__int64)v10[0] + (unsigned __int64)v10[1]);
    v7 = j__strlen("/../");
    if ( v7 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v12[1] )
      std::__throw_length_error("basic_string::append");
    sub_9EE560(v12, "/../", v7);
    sub_12182E0(&v14, v12, a1 + 2392);
    sub_10E1980(&v16, &v14, "/lib");
    sub_12182E0(&v18, &v16, a1 + 2552);
    v20 = &v18;
    v21 = 260;
    sub_11C52D0(a2, (__int64)&v20, a5);
    if ( (__int64 *)v18.m128i_i64[0] != &v19 )
      operator delete((void *)v18.m128i_i64[0]);
    if ( (__int64 *)v16.m128i_i64[0] != &v17 )
      operator delete((void *)v16.m128i_i64[0]);
    if ( (__int64 *)v14.m128i_i64[0] != &v15 )
      operator delete((void *)v14.m128i_i64[0]);
    if ( v12[0] != v13 )
      operator delete(v12[0]);
    if ( v10[0] != v11 )
      operator delete(v10[0]);
  }
}
