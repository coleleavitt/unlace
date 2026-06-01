__int64 __fastcall sub_8B5080(__int64 *a1, __int64 a2)
{
  const __m128i *v3; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned __int8 v8; // al
  const __m128i *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  _BYTE v12[3]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13; // [rsp+8h] [rbp-20h]

  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0xD )
  {
    sub_857160(*a1, *(_QWORD *)(a2 + 16));
    v5 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v6 = *(_QWORD *)v5;
    if ( *(_BYTE *)(*(_QWORD *)v5 + 16LL) != 7 )
      v6 = sub_B0D320(v6);
    v7 = *(_QWORD *)(v6 + 32);
    *(_WORD *)v12 = *(_WORD *)v12 & 0xFE00 | 0x37;
    if ( byte_4AD234C )
      sub_AC4570(55);
    *(_WORD *)&v12[1] &= 0xF801u;
    v13 = v7;
    v8 = sub_76B710((__int64)v12);
    v12[1] = (v8 << 6) | v12[1] & 0x3F;
    v12[2] = v12[2] & 0xF8 | (v8 >> 2) & 7;
    v9 = (const __m128i *)a1[1];
    v10 = *a1;
    v11 = a1[2];
    if ( v9 )
      return sub_88A010(v11, v10, v9, (unsigned __int64)v12, 0);
    else
      return sub_856400(v11, v10, (unsigned __int64)v12);
  }
  else if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0x3B )
  {
    v3 = (const __m128i *)a1[1];
    if ( v3 )
      return sub_88A010(a1[2], *a1, v3, *(_QWORD *)(a2 + 16), 0);
    else
      return sub_856400(a1[2], *a1, *(_QWORD *)(a2 + 16));
  }
  else
  {
    return sub_8B4B10(a1, a2);
  }
}

