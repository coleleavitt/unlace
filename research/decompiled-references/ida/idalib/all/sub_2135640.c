__int64 __fastcall sub_2135640(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r12
  _DWORD *v5; // rax
  unsigned int v6; // ebp
  _DWORD *v8; // rax
  unsigned __int64 v9; // rax
  __m128i *v10; // rax
  void *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rsi
  _QWORD *v16; // rdx
  __int64 v17; // rax
  void *v18[2]; // [rsp+10h] [rbp-148h] BYREF
  _BYTE v19[16]; // [rsp+20h] [rbp-138h] BYREF
  void *v20[2]; // [rsp+30h] [rbp-128h] BYREF
  __int64 v21; // [rsp+40h] [rbp-118h] BYREF
  void *v22[2]; // [rsp+50h] [rbp-108h] BYREF
  __m128i v23; // [rsp+60h] [rbp-F8h] BYREF
  void *v24[2]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v25[16]; // [rsp+80h] [rbp-D8h] BYREF
  const char *v26; // [rsp+90h] [rbp-C8h] BYREF
  __int16 v27; // [rsp+B0h] [rbp-A8h]
  const char *v28; // [rsp+C0h] [rbp-98h] BYREF
  __int16 v29; // [rsp+E0h] [rbp-78h]
  void **v30; // [rsp+F0h] [rbp-68h] BYREF
  __int16 v31; // [rsp+110h] [rbp-48h]

  v19[0] = 0;
  v18[1] = nullptr;
  v18[0] = v19;
  v2 = sub_2153C00(a1);
  v3 = sub_2124B50(v2);
  v27 = 259;
  v4 = v3;
  v26 = "expected string in '.include' directive";
  v5 = (_DWORD *)sub_2153C00(a1);
  if ( (unsigned __int8)sub_2154470(a1, *v5 != 3, &v26)
    || (unsigned __int8)sub_2135140(a1, v18)
    || (v29 = 259,
        v28 = "unexpected token in '.include' directive",
        v8 = (_DWORD *)sub_2153C00(a1),
        (unsigned __int8)sub_2154470(a1, *v8 != 9, &v28)) )
  {
    v6 = 1;
  }
  else
  {
    sub_C05100((__int64)v20, "Could not find include file '", (__int64)v18);
    v9 = j__strlen("'");
    if ( v9 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v20[1] )
      std::__throw_length_error("basic_string::append");
    v10 = (__m128i *)sub_9EE560(v20, "'", v9);
    v22[0] = &v23;
    if ( (__m128i *)v10->m128i_i64[0] == &v10[1] )
    {
      v23 = _mm_loadu_si128(v10 + 1);
    }
    else
    {
      v22[0] = (void *)v10->m128i_i64[0];
      v23.m128i_i64[0] = v10[1].m128i_i64[0];
    }
    v11 = (void *)v10->m128i_i64[1];
    v10[1].m128i_i8[0] = 0;
    v22[1] = v11;
    v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
    v10->m128i_i64[1] = 0;
    v12 = *(_QWORD *)(a1 + 32);
    v13 = *(_QWORD *)(a1 + 184);
    v31 = 260;
    v30 = v22;
    v24[0] = v25;
    v24[1] = nullptr;
    v25[0] = 0;
    v14 = sub_223AD40(v12, v18, v13, v24);
    v15 = 1;
    if ( v14 )
    {
      v16 = *(_QWORD **)(a1 + 32);
      *(_DWORD *)(a1 + 296) = v14;
      v17 = *(_QWORD *)(*v16 + 24LL * (unsigned int)(v14 - 1));
      sub_2124C60(a1 + 48, *(_QWORD *)(v17 + 8), *(_QWORD *)(v17 + 16) - *(_QWORD *)(v17 + 8), 0, 1);
      v15 = 0;
    }
    if ( v24[0] != v25 )
    {
      operator delete(v24[0]);
      v15 = (unsigned int)v15;
    }
    v6 = sub_2154450(a1, v15, v4, &v30);
    if ( v22[0] != &v23 )
      operator delete(v22[0]);
    if ( v20[0] != &v21 )
      operator delete(v20[0]);
  }
  if ( v18[0] != v19 )
    operator delete(v18[0]);
  return v6;
}
