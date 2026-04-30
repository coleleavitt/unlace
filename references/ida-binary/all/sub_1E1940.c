__int64 __fastcall sub_1E1940(__int64 a1)
{
  int v1; // eax
  const __m128i *v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // [rsp+Ch] [rbp-7Ch] BYREF
  char v9[8]; // [rsp+10h] [rbp-78h] BYREF
  int v10; // [rsp+18h] [rbp-70h]
  __int64 v11; // [rsp+1Ch] [rbp-6Ch]
  int v12; // [rsp+24h] [rbp-64h]
  _OWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+50h] [rbp-38h]
  char *v15; // [rsp+58h] [rbp-30h]
  unsigned __int64 v16; // [rsp+68h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  sub_1E1330((__int64)v9, a1, 0);
  v8 = -1;
  v1 = sub_1E0C20((__int64)v9, a1 + 1000, &v8);
  if ( v8 == -1 )
    return sub_200790(a1);
  if ( v1 != (unsigned int)sub_1EBFA0(a1, 0)
    || (result = sub_1E0D60((__int64)v9, *(_QWORD **)(a1 + 728)), (_BYTE)result) )
  {
    v2 = (const __m128i *)sub_1EA6A0(a1 + 384);
    v15 = v9;
    v13[0] = _mm_loadu_si128(v2);
    v3 = _mm_loadu_si128(v2 + 1);
    v4 = v2[2].m128i_i64[0];
    v13[1] = v3;
    v14 = v4;
    v5 = qalloc_or_throw(24);
    *(_DWORD *)(v5 + 8) = v10;
    v6 = v11;
    *(_QWORD *)v5 = dbgreg_place_t___vtable;
    *(_QWORD *)(v5 + 12) = v6;
    *(_DWORD *)(v5 + 20) = v12;
    v15 = (char *)v5;
    sub_1FFC10(a1, v13, 1, 0);
    if ( v15 )
      qfree(v15, (const char *)v13);
    return 1;
  }
  return result;
}
