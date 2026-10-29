__m128i *__fastcall sub_180ABB0(__int64 a1, __int64 a2, __int64 a3, const void *a4, size_t a5, __int64 a6)
{
  const __m128i *v8; // rbp
  unsigned __int8 v9; // al
  int v10; // eax
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __m128i *v15; // r14
  __int64 v17; // r14
  unsigned int v18; // edx
  int v19; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v20[184]; // [rsp+10h] [rbp-B8h] BYREF

  v8 = (const __m128i *)a3;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 )
  {
    v9 = *(_BYTE *)(a3 + 34);
    a3 = v9 & 0xF0;
    v10 = (v9 & 0xF0) == 0xF0 ? sub_FA77D0(v8) : v9 >> 4;
    if ( v10 == 3 && (unsigned __int8)sub_B77A80(a2) )
      return nullptr;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v11 = sub_B8C3D0(a2, a2, a3, (__int64)a4, a5, a6);
    v12 = *v11;
    v13 = *v11 + 8LL * *((unsigned int *)v11 + 2);
    if ( v12 < v13 )
    {
      v14 = v12;
      while ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 356 )
      {
        v14 += 8LL;
        if ( v13 == v14 )
          goto LABEL_10;
      }
      if ( v13 == v14 )
        goto LABEL_10;
      while ( 1 )
      {
        v17 = *(_QWORD *)v12;
        if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 356 )
          break;
LABEL_17:
        v12 += 8LL;
      }
LABEL_19:
      if ( *(_DWORD *)(v17 + 40) != a5 || a5 && memcmp(*(const void **)(v17 + 48), a4, a5) )
      {
        v18 = *(_DWORD *)(v17 + 24);
        v15 = nullptr;
        sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), v18, 0x1BBCu, 0);
        v19 = 1;
        sub_1587D10((__int64)v20, &v19);
        sub_15F7200(v20);
        sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), v8[1].m128i_u32[2], 0x1889u, 0);
        sub_15F7200(v20);
        return v15;
      }
      return nullptr;
    }
    if ( v12 != v13 )
    {
      while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 356 )
      {
        v13 += 8LL;
        if ( v12 == v13 )
          goto LABEL_10;
      }
      v17 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 356 )
        goto LABEL_17;
      goto LABEL_19;
    }
  }
LABEL_10:
  v15 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
  sub_B2FE80(v15, *(_QWORD *)(a1 + 248), v8, a4, a5);
  return v15;
}
