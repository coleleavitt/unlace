__m128i *__fastcall sub_1E0A080(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int16 v8; // ax
  __int64 v10; // rax
  __int64 v11; // r8
  const void *v12; // r13
  __m128i *v13; // r12
  __m128i *v14; // r12
  void *v15; // r13
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-30h]

  v8 = *(_WORD *)(a1 + 36);
  if ( v8 > 0x118u )
  {
    if ( v8 > 0x181u )
    {
      if ( v8 > 0x199u )
      {
        if ( v8 == 410 )
          return sub_B38480((const __m128i *)a1, a2);
        if ( v8 > 0x1BAu )
          sub_2EADCC();
      }
      else if ( v8 < 0x183u )
      {
        return sub_B33830((const __m128i *)a1, (__int64)a2);
      }
    }
    else if ( v8 < 0x14Fu )
    {
      if ( v8 > 0x14Du )
      {
        v15 = sub_1DD4AE0(a3, *(void ***)(a1 + 40), a4, *(_DWORD *)(a1 + 24), *(_QWORD *)a1, 0, a5, a6);
        if ( v15 )
        {
          v14 = (__m128i *)sub_1E083C0(a2 + 294, 48, 3u);
          sub_B17640(v14, (__int64)a2, (const __m128i *)a1, (__int64)v15);
          return v14;
        }
      }
      else if ( v8 < 0x11Au )
      {
        v10 = a2[294];
        v11 = *(unsigned int *)(a1 + 40);
        v12 = *(const void **)(a1 + 48);
        a2[304] += 56;
        v13 = (__m128i *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( a2[295] >= (unsigned __int64)&v13[3].m128i_u64[1] && v10 )
        {
          a2[294] = (__int64)&v13[3].m128i_i64[1];
        }
        else
        {
          v17 = v11;
          v16 = sub_986170((__int64)(a2 + 294), 56, 56, 3, v11, a8);
          v11 = v17;
          v13 = (__m128i *)v16;
        }
        sub_B2EFA0(v13, (__int64)a2, (const __m128i *)a1, v12, v11);
        return v13;
      }
    }
    return nullptr;
  }
  if ( v8 >= 0xD4u )
    return nullptr;
  if ( v8 > 0xC6u )
  {
    if ( v8 <= 0xD2u )
    {
      if ( v8 < 0xC8u )
        return (__m128i *)sub_B2E3D0((const __m128i *)a1, (__int64)a2);
      return nullptr;
    }
    return sub_B254D0((const __m128i *)a1, (__int64)a2);
  }
  if ( v8 >= 0xA3u )
    return nullptr;
  if ( v8 != 161 )
  {
    if ( v8 > 0xA1u )
      return sub_B23F50((const __m128i *)a1, (__int64)a2);
    return nullptr;
  }
  return sub_B23EE0((const __m128i *)a1, (__int64)a2);
}
