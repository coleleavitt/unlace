unsigned __int64 __fastcall sub_528970(__int64 a1, __int64 a2, __int64 (__fastcall **a3)(__int64, __int64))
{
  __int64 v3; // rsi
  __int64 v5; // r12
  __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 (__fastcall *v10)(__int64, __int64); // r8
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __m128i v13; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v3 = a2 - a1;
  v14 = __readfsqword(0x28u);
  if ( v3 > 24 )
  {
    v5 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 3);
    v6 = (v5 - 2) / 2;
    v7 = a1 + 8 * (v6 + ((v5 - 2 + ((unsigned __int64)(v5 - 2) >> 63)) & 0xFFFFFFFFFFFFFFFELL));
    while ( 1 )
    {
      v8 = *(_QWORD *)v7;
      v9 = _mm_loadu_si128((const __m128i *)(v7 + 8));
      *(_QWORD *)v7 = 0;
      *(_OWORD *)(v7 + 8) = 0;
      v10 = *a3;
      v12 = v8;
      v13 = v9;
      sub_5285F0(a1, (const char *)v6, v5, (__int64)&v12, v10);
      if ( v12 )
        qfree(v12, (const char *)v6);
      v7 -= 24LL;
      if ( !v6 )
        break;
      --v6;
    }
  }
  return v14 - __readfsqword(0x28u);
}
