__int64 __fastcall sub_312A0(__int64 a1, _QWORD *a2)
{
  __int16 v3; // ax
  unsigned int v4; // ebp
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned __int8 v8; // r13
  unsigned __int8 v9; // al
  bool v10; // r15
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  unsigned __int8 v12; // al
  bool v13; // dl
  int v14; // eax
  int v15; // edx
  __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 *v22; // rax
  __m128i *v23; // rax
  const __m128i *v24; // rdx
  __int64 *v25; // [rsp+0h] [rbp-68h] BYREF
  __int128 v26; // [rsp+8h] [rbp-60h]
  char v27; // [rsp+18h] [rbp-50h]
  _QWORD v28[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_WORD *)(a1 + 40);
  v28[1] = __readfsqword(0x28u);
  if ( v3 != 2 && v3 != 5 )
    return 0;
  v6 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v6 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v7 = a1 + 56;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v4 )
    return 0;
  v8 = *(_BYTE *)(v6 + 5);
  v9 = *(_BYTE *)(a1 + 61);
  v10 = v8 <= 0xF9u;
  if ( v9 > 0xF9u )
  {
    if ( v9 >= v8 && v8 > 0xF9u )
      goto LABEL_17;
  }
  else if ( v9 >= v8 || v8 > 0xF9u || *(_BYTE *)(a1 + 8) && v9 == 2 )
  {
    goto LABEL_17;
  }
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v11 == sub_288C0 )
    return 0;
  v12 = v11(a1, a1 + 56);
  v13 = v10 || v12 < v8;
  if ( v12 <= 0xF9u )
    v13 = v12 < v8 && v10;
  if ( v13 )
    return 0;
LABEL_17:
  if ( *(_BYTE *)(a1 + 137) )
    v7 = a1 + 96;
  v14 = *(unsigned __int16 *)(v7 + 6);
  v15 = *(unsigned __int16 *)(v7 + 46);
  v16 = *(_QWORD *)(a1 + 888);
  v25 = nullptr;
  v27 = 0;
  v17 = v15 | (v14 << 16);
  v18 = *(_QWORD *)(a1 + 32);
  v28[0] = _mm_unpacklo_epi16(_mm_cvtsi32_si128(v17), (__m128i)0LL).m128i_u64[0];
  v26 = 0;
  v19 = sub_48E60(v16, &v25, v18, v28);
  v20 = v19;
  if ( v19 == -1 || (unsigned __int8)(v27 - 10) > 1u )
  {
LABEL_26:
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
    return 0;
  }
  v21 = *v25;
  if ( (_QWORD)v26 != 1 )
  {
    v22 = v25 + 3;
    if ( 24LL * (_QWORD)v26 != 24 )
    {
      while ( *v22 == v21 )
      {
        v22 += 3;
        if ( &v25[3 * (_QWORD)v26] == v22 )
          goto LABEL_28;
      }
      goto LABEL_26;
    }
  }
LABEL_28:
  *a2 = v21;
  sub_48A10(*(_QWORD *)(a1 + 888), a1 + 840, &v25);
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  v23 = *(__m128i **)(a1 + 864);
  v24 = (const __m128i *)(v7 + 40 * v20);
  *v23 = _mm_loadu_si128(v24);
  v23[1] = _mm_loadu_si128(v24 + 1);
  v23[2].m128i_i32[0] = v24[2].m128i_i32[0];
  return v4;
}
