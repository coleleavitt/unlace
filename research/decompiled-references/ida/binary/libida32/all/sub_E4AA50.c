void __fastcall sub_E4AA50(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // rax
  _BYTE *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rax
  unsigned __int64 v17; // rax
  size_t v18; // rax
  size_t v19; // rax
  const char *v20; // rsi
  __m128i v21; // [rsp+0h] [rbp-138h] BYREF
  _QWORD v22[2]; // [rsp+10h] [rbp-128h] BYREF
  __m128i v23; // [rsp+20h] [rbp-118h] BYREF
  __int64 v24; // [rsp+30h] [rbp-108h] BYREF
  __m128i v25[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int16 v26; // [rsp+60h] [rbp-D8h]
  __m128i v27[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int16 v28; // [rsp+90h] [rbp-A8h]
  __m128i v29; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v30[32]; // [rsp+B0h] [rbp-88h] BYREF
  __m128i v31; // [rsp+D0h] [rbp-68h] BYREF

  v3 = a1 + 1048;
  sub_E3A830(&v29, a2);
  sub_E35650((__int64)&v31, &v29);
  v4 = j__strlen("id");
  v27[0].m128i_i64[0] = (__int64)&v31;
  v27[0].m128i_i64[1] = a1 + 1048;
  sub_E34890(a1 + 1048, (__int64)"id", v4, (__int64)sub_E34840, v27);
  sub_2207560(&v31);
  if ( (_BYTE *)v29.m128i_i64[0] != v30 )
    operator delete((void *)v29.m128i_i64[0]);
  if ( a2 )
  {
    v27[0].m128i_i64[0] = (__int64)"Decl";
    v28 = 259;
    v5 = (_BYTE *)sub_B64350(a2);
    v26 = 257;
    if ( *v5 )
    {
      v25[0].m128i_i64[0] = (__int64)v5;
      LOBYTE(v26) = 3;
    }
    sub_A1D840(&v29, v25, v27, v6, v7, v8);
    sub_222F820(&v23, &v29);
    sub_E35650((__int64)&v31, &v23);
    v9 = j__strlen("kind");
    v22[0] = &v31;
    v22[1] = a1 + 1048;
    sub_E34890(v3, (__int64)"kind", v9, (__int64)sub_E34840, v22);
    sub_2207560(&v31);
    if ( (__int64 *)v23.m128i_i64[0] != &v24 )
      operator delete((void *)v23.m128i_i64[0]);
    v21.m128i_i64[0] = a1;
    v31 = (__m128i)_mm_loadh_ps((const double *)v21.m128i_i64);
    v21 = v31;
    v10 = j__strlen("loc");
    sub_2206E30(v3, "loc", v10);
    sub_2205CB0(v3);
    sub_E3A1F0(v31.m128i_i64);
    sub_2205E20(v3);
    sub_2205EB0(v3);
    v31 = _mm_load_si128(&v21);
    v11 = j__strlen("range");
    sub_2206E30(v3, "range", v11);
    sub_2205CB0(v3);
    sub_E364C0(&v31);
    sub_2205E20(v3);
    sub_2205EB0(v3);
    v21.m128i_i32[0] = (*(_BYTE *)(a2 + 29) & 2) != 0;
    v12 = j__strlen("isImplicit");
    sub_E35E50(a1, (__int64)"isImplicit", v12, v21.m128i_i8[0]);
    v21.m128i_i32[0] = (unsigned int)*(char *)(a2 + 28) >> 31;
    v13 = j__strlen("isInvalid");
    sub_E35E50(a1, (__int64)"isInvalid", v13, v21.m128i_i8[0]);
    if ( sub_B686C0(a2, 1) )
    {
      v31.m128i_i8[8] = 1;
      v31.m128i_i16[0] = 1;
      v19 = j__strlen("isUsed");
      v29.m128i_i64[0] = (__int64)&v31;
      v29.m128i_i64[1] = a1 + 1048;
      v20 = "isUsed";
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 29) & 8) == 0 )
      {
LABEL_10:
        if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 18 <= 0x3F )
        {
          v21.m128i_i32[0] = (*(_BYTE *)(a2 + 8) & 7u) > 1;
          v14 = j__strlen("isHidden");
          sub_E35E50(a1, (__int64)"isHidden", v14, v21.m128i_i8[0]);
        }
        v15 = *(_QWORD *)(a2 + 16);
        if ( (v15 & 4) != 0 )
        {
          v16 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
          if ( *v16 != v16[1] )
          {
            v17 = sub_B68470(*v16);
            sub_E3A830(&v29, v17);
            sub_E35650((__int64)&v31, &v29);
            v18 = j__strlen("parentDeclContextId");
            v27[0].m128i_i64[0] = (__int64)&v31;
            v27[0].m128i_i64[1] = a1 + 1048;
            sub_E34890(v3, (__int64)"parentDeclContextId", v18, (__int64)sub_E34840, v27);
            sub_2207560(&v31);
            if ( (_BYTE *)v29.m128i_i64[0] != v30 )
              operator delete((void *)v29.m128i_i64[0]);
          }
        }
        sub_E3EB60(a1, a2);
        sub_E4A910(a1, a2);
        return;
      }
      v31.m128i_i8[8] = 1;
      v31.m128i_i16[0] = 1;
      v19 = j__strlen("isReferenced");
      v29.m128i_i64[0] = (__int64)&v31;
      v29.m128i_i64[1] = a1 + 1048;
      v20 = "isReferenced";
    }
    sub_E34890(v3, (__int64)v20, v19, (__int64)sub_E34840, &v29);
    sub_2207560(&v31);
    goto LABEL_10;
  }
}

