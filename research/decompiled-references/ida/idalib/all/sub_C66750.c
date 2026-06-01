__int64 __fastcall sub_C66750(const __m128i *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v7; // ax
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned __int8 **v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 **v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rdi
  unsigned __int8 **v19; // rax

  v7 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 6 )
  {
    if ( (unsigned __int8)sub_C5C820(a1, *(__m128i **)(a2 + 16), a3, a4, a5, a6) )
    {
      v17 = a1->m128i_i64[1];
      if ( (*(_BYTE *)(v17 + 24) & 1) == 0 )
      {
        v18 = a1->m128i_i64[0];
        if ( (*(_BYTE *)(v17 + 128) & 1) == 0 )
          return sub_C30760(v18, a2, a1->m128i_i64[1], v9);
        v19 = (unsigned __int8 **)sub_E33C90(v18, a2, 2461, 0);
        if ( v19 )
          sub_C11320(v19, 1);
        *(_BYTE *)(v17 + 24) |= 1u;
        *(_DWORD *)(v17 + 56) = 0;
      }
    }
    return 0;
  }
  if ( (_BYTE)v7 == 9 )
  {
    if ( (unsigned __int8)sub_C5C820(a1, *(__m128i **)(a2 + 16), a3, a4, a5, a6) )
      return sub_C37170((__int64 *)a1->m128i_i64[0], a2, (__m128i *)a1->m128i_i64[1]);
    return 0;
  }
  if ( (_BYTE)v7 == 2 )
  {
    v10 = (unsigned __int8 **)sub_E33C90(a1->m128i_i64[0], a2, 2417, 0);
    v15 = v10;
    if ( v10 )
    {
      sub_C11320(v10, 2);
      sub_AE9DF0(v15, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 2320LL) + 1LL) & 8) != 0, 3u);
    }
    result = sub_C5C820(a1, *(__m128i **)(a2 + 16), v11, v12, v13, v14);
    if ( (_BYTE)result )
    {
      v16 = a1->m128i_i64[1];
      *(_BYTE *)(v16 + 24) |= 1u;
      *(_DWORD *)(v16 + 56) = 0;
      return result;
    }
    return 0;
  }
  if ( (unsigned int)(unsigned __int8)v7 - 7 > 1 )
    return sub_C664C0(a1, a2, a3, a4, a5, a6);
  if ( !(unsigned __int8)sub_C5C820(a1, *(__m128i **)(a2 + 16), a3, a4, a5, a6) )
    return 0;
  return sub_C2E310(a1->m128i_i64[0], a2, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL), a1->m128i_i64[1]);
}
