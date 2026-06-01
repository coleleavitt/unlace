__int64 __fastcall sub_898FF0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  unsigned __int8 v6; // al
  const __m128i *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  _BYTE v11[3]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+8h] [rbp-20h]

  v2 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)v2;
  if ( *(_BYTE *)(*(_QWORD *)v2 + 16LL) != 7 )
    v4 = sub_B0D320(v4);
  v5 = *(_QWORD *)(v4 + 32);
  *(_WORD *)v11 = *(_WORD *)v11 & 0xFE00 | 0x37;
  if ( byte_4AD234C )
    sub_AC4570(55);
  *(_WORD *)&v11[1] &= 0xF801u;
  v12 = v5;
  v6 = sub_76B710((__int64)v11);
  v11[1] = (v6 << 6) | v11[1] & 0x3F;
  v11[2] = v11[2] & 0xF8 | (v6 >> 2) & 7;
  v7 = (const __m128i *)a1[1];
  v8 = *a1;
  v9 = a1[2];
  if ( v7 )
    return sub_88A010(v9, v8, v7, (unsigned __int64)v11, 0);
  else
    return sub_856400(v9, v8, (unsigned __int64)v11);
}

