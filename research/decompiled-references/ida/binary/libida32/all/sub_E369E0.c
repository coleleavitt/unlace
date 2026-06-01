void __fastcall sub_E369E0(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  __int64 v4; // r13
  const char *v5; // rsi
  size_t v6; // rax
  size_t v7; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-A8h] BYREF
  void *v9; // [rsp+10h] [rbp-98h] BYREF
  __int64 v10; // [rsp+18h] [rbp-90h]
  __int64 v11; // [rsp+20h] [rbp-88h] BYREF
  __m128i v12; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v14[11]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (*(_WORD *)(a2 + 18) >> 6) & 7;
  if ( ((*(_WORD *)(a2 + 18) >> 6) & 7) == 1 )
  {
    v4 = a1 + 1048;
    v5 = "static";
    goto LABEL_3;
  }
  v4 = a1 + 1048;
  v5 = "*";
  if ( (_BYTE)v3 == 2 )
  {
LABEL_3:
    sub_E35B80((__int64)v14, v5);
    v6 = j__strlen("sizeModifier");
    v12.m128i_i64[0] = (__int64)v14;
    v12.m128i_i64[1] = v4;
    sub_E34890(v4, (__int64)"sizeModifier", v6, (__int64)sub_E34840, &v12);
    sub_2207560(v14);
  }
  v14[0] = (*(_BYTE *)(a2 + 18) >> 3) & 7;
  sub_F4DEF0(&v9, v14);
  if ( v10 )
  {
    v12.m128i_i64[0] = (__int64)v13;
    sub_E34980(&v12, v9, (__int64)v9 + v10);
    sub_E35650((__int64)v14, &v12);
    v7 = j__strlen("indexTypeQualifiers");
    v8[0] = v14;
    v8[1] = a1 + 1048;
    sub_E34890(a1 + 1048, (__int64)"indexTypeQualifiers", v7, (__int64)sub_E34840, v8);
    sub_2207560(v14);
    if ( (_BYTE *)v12.m128i_i64[0] != v13 )
      operator delete((void *)v12.m128i_i64[0]);
  }
  if ( v9 != &v11 )
    operator delete(v9);
}

