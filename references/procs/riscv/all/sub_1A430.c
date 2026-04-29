__int64 __fastcall sub_1A430(__int64 a1, _QWORD *a2, __int64 **a3)
{
  unsigned int v3; // r13d
  __int64 v5; // r14
  unsigned __int8 v9; // r14
  unsigned __int8 v10; // al
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  unsigned __int8 v12; // al
  bool v13; // cl
  bool v14; // cc
  bool v15; // al
  int v16; // edx
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rdx
  int v21; // edx
  __int64 *v22; // rcx
  __int64 *v23; // rdi
  __int64 v24; // rsi
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 *v27; // rcx
  __m128i *v28; // rcx
  __int64 v29; // rdx
  _QWORD v30[9]; // [rsp+10h] [rbp-48h] BYREF

  v30[1] = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 28 )
    return 0;
  v5 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v5 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v3 )
    return 0;
  v9 = *(_BYTE *)(v5 + 5);
  v10 = *(_BYTE *)(a1 + 61);
  if ( v10 > 0xF9u )
  {
    if ( v9 <= 0xF9u || v10 < v9 )
      goto LABEL_12;
  }
  else if ( v9 <= 0xF9u && v10 < v9 && (!*(_BYTE *)(a1 + 8) || v10 != 2) )
  {
LABEL_12:
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v11 == sub_14E20 )
      return 0;
    v12 = v11(a1, a1 + 56);
    v13 = v9 <= 0xF9u || v12 < v9;
    v14 = v12 <= 0xF9u;
    v15 = v9 <= 0xF9u && v12 < v9;
    if ( !v14 )
      v15 = v13;
    if ( v15 )
      return 0;
  }
  v16 = *(unsigned __int16 *)(a1 + 102);
  v17 = *(unsigned __int16 *)(a1 + 142);
  if ( (_WORD)v16 != (_WORD)v17 )
  {
    v18 = v16 | (v17 << 16);
    v19 = *(_QWORD *)(a1 + 888);
    v20 = *(_QWORD *)(a1 + 32);
    v30[0] = _mm_unpacklo_epi16(_mm_cvtsi32_si128(v18), (__m128i)0LL).m128i_u64[0];
    v21 = sub_266C0(v19, a3, v20, v30);
    if ( v21 != -1 && (unsigned __int8)(*((_BYTE *)a3 + 24) - 10) <= 1u )
    {
      v22 = *a3;
      v23 = a3[1];
      v24 = **a3;
      if ( v23 == (__int64 *)((char *)&dword_0 + 1)
        || (v25 = v22 + 3, v26 = 3LL * (_QWORD)v23, v27 = &v22[v26], v26 == 3) )
      {
LABEL_23:
        *a2 = v24;
        v28 = *(__m128i **)(a1 + 864);
        v29 = a1 + 40LL * (2 - v21);
        *v28 = _mm_loadu_si128((const __m128i *)(v29 + 56));
        v28[1] = _mm_loadu_si128((const __m128i *)(v29 + 72));
        v28[2].m128i_i32[0] = *(_DWORD *)(v29 + 88);
        return v3;
      }
      while ( *v25 == v24 )
      {
        v25 += 3;
        if ( v27 == v25 )
          goto LABEL_23;
      }
    }
  }
  return 0;
}
