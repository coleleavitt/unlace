__int64 __fastcall sub_D22030(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // r12
  __m128i v7; // xmm0
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __m128i *v15; // rdx
  __m128i v16; // rax
  __m128i *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rsi
  __m128i v20; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-A0h]
  unsigned int v22; // [rsp+24h] [rbp-94h]
  __int64 v23; // [rsp+28h] [rbp-90h]
  char v24; // [rsp+3Fh] [rbp-79h] BYREF
  void *v25; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-70h]
  char v27; // [rsp+4Ch] [rbp-6Ch]
  __m128i v28; // [rsp+50h] [rbp-68h] BYREF
  __m128i v29[5]; // [rsp+60h] [rbp-58h] BYREF

  result = 1;
  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return result;
  v5 = *a4;
  v6 = *(_QWORD *)(a1 + 560);
  v22 = a3;
  *(_QWORD *)(a1 + 1240) = v5;
  v23 = a1 + 384;
  v21 = *(_QWORD *)(a1 + 1232);
  v20 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v6, 16));
  sub_DFDA50(v6, 16);
  v7 = _mm_load_si128(&v20);
  v26 = a2;
  v28 = v7;
  if ( a2 > 0x40 )
    sub_21E1730(&v25, 0, 0);
  else
    v25 = nullptr;
  v27 = 1;
  sub_CDADA0((__int64)v29, (__int64)&v28);
  v8 = sub_21DEE60(v29, &v25, 0, &v24);
  sub_971860(v29);
  if ( (v8 & 1) != 0 )
  {
    sub_CDADA0((__int64)v29, (__int64)&v28);
    v14 = sub_21D5390(v29, &v28, v13);
    v15 = v29;
    if ( v29[0].m128i_i64[0] == v14 )
      v15 = (__m128i *)v29[0].m128i_i64[1];
    if ( (v15[1].m128i_i8[4] & 7u) > 1 )
    {
      sub_971860(v29);
      sub_CDADA0((__int64)v29, (__int64)&v28);
      v20.m128i_i8[0] = sub_CDA110(v23, v21, v29);
      sub_971860(v29);
      result = v20.m128i_u8[0];
      goto LABEL_12;
    }
    sub_971860(v29);
  }
  v16.m128i_i64[0] = sub_D21CE0((_QWORD *)(a1 + 384), a2, v9, v10, v11, v12);
  v29[0] = v16;
  sub_CCCB10((void **)v29, (__int64)&v25);
  v17 = (__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16);
  v18 = v22;
  v19 = v21;
  *v17 = _mm_load_si128(v29);
  result = sub_DA7060(a1 + 384, v19, &v28, v8, v18);
LABEL_12:
  if ( v26 > 0x40 )
  {
    if ( v25 )
    {
      v20.m128i_i8[0] = result;
      operator delete[](v25);
      return v20.m128i_u8[0];
    }
  }
  return result;
}

