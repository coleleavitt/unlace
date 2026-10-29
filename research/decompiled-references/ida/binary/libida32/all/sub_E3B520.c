void __fastcall sub_E3B520(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned int *v6; // rsi
  size_t v7; // rdx
  const char *v8; // rsi
  __m128i v9; // [rsp+0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v11[88]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a1 + 1048;
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL);
  if ( (v4 & 7) != 0 || (v5 = v4 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v8 = &byte_22CD811;
    v7 = j__strlen(&byte_22CD811);
  }
  else
  {
    v6 = *(unsigned int **)(v5 + 16);
    v7 = *v6;
    v8 = (const char *)(v6 + 4);
  }
  sub_E35AF0((__int64)v11, (__int64)v8, v7);
  sub_2206E30(v3, "name", 4);
  sub_2208D80(v3, v11);
  sub_2205EB0(v3);
  sub_2207560(v11);
  sub_E3A830(&v9, *(_QWORD *)(a2 + 24));
  sub_E35650((__int64)v11, &v9);
  sub_2206E30(v3, "labelDeclId", 11);
  sub_2208D80(v3, v11);
  sub_2205EB0(v3);
  sub_2207560(v11);
  if ( (__int64 *)v9.m128i_i64[0] != &v10 )
    operator delete((void *)v9.m128i_i64[0]);
}

