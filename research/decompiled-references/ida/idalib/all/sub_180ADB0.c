__m128i *__fastcall sub_180ADB0(__int64 a1, __int64 a2, const __m128i *a3, const void *a4, size_t a5, __int64 a6)
{
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __m128i *v13; // r14
  __int64 v15; // r14
  int v16; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v17[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 && (unsigned __int8)sub_B77A80(a2) )
    return nullptr;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v9 = sub_B8C3D0(a2, a2, (__int64)a3, (__int64)a4, a5, a6);
    v10 = *v9;
    v11 = *v9 + 8LL * *((unsigned int *)v9 + 2);
    if ( v10 < v11 )
    {
      v12 = v10;
      while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 178 )
      {
        v12 += 8LL;
        if ( v11 == v12 )
          goto LABEL_8;
      }
      if ( v11 == v12 )
        goto LABEL_8;
      goto LABEL_13;
    }
    if ( v10 != v11 )
    {
      while ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 178 )
      {
        v11 += 8LL;
        if ( v10 == v11 )
          goto LABEL_8;
      }
LABEL_13:
      while ( 1 )
      {
        v15 = *(_QWORD *)v10;
        if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) == 178 )
          break;
        v10 += 8LL;
      }
      if ( *(_DWORD *)(v15 + 40) != a5 || a5 && memcmp(*(const void **)(v15 + 48), a4, a5) )
      {
        sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), *(_DWORD *)(v15 + 24), 0x1BBCu, 0);
        v16 = 0;
        sub_1587D10((__int64)v17, &v16);
        sub_15F7200(v17);
        sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1889u, 0);
        sub_15F7200(v17);
      }
      return nullptr;
    }
  }
LABEL_8:
  v13 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
  sub_B2E280(v13, *(_QWORD *)(a1 + 248), a3, a4, a5);
  return v13;
}
