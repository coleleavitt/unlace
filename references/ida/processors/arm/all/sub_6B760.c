__int64 __fastcall sub_6B760(__int64 a1)
{
  char v3; // si
  char v4; // cl
  const __m128i *v5; // rdi
  __int8 v6; // cl
  __int16 v7; // si
  unsigned int *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  __m128i *v13; // rdx

  if ( *(_WORD *)(a1 + 40) != 14
    || (*(_BYTE *)(a1 + 48) & 0xF) != 0xE
    || *(_BYTE *)(a1 + 57) != 1
    || *(_WORD *)(a1 + 62) != 15 )
  {
    return 0;
  }
  v3 = *(_BYTE *)(a1 + 137);
  v4 = *(_BYTE *)(a1 + 97);
  v5 = (const __m128i *)(a1 + 96);
  if ( v3 )
  {
    if ( v4 != 1 || *(_WORD *)(a1 + 102) != 15 )
      return 0;
    v5 = (const __m128i *)(a1 + 136);
    v4 = v3;
  }
  if ( v4 != 1 )
  {
    if ( v4 == 8 && !v5[2].m128i_i8[1] && v5->m128i_i64[1] == 2 )
    {
      v6 = v5->m128i_i8[5];
      v7 = v5->m128i_i16[3];
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v7;
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v6;
      v8 = *(unsigned int **)(a1 + 376);
      v9 = *v8 & 0xFFFFFE7F;
      BYTE1(v9) |= 1u;
      *v8 = v9;
      *(_BYTE *)(a1 + 513) = 1;
      goto LABEL_15;
    }
    return 0;
  }
  v13 = *(__m128i **)(a1 + 864);
  *v13 = _mm_loadu_si128(v5);
  v13[1] = _mm_loadu_si128(v5 + 1);
  v13[2].m128i_i32[0] = v5[2].m128i_i32[0];
LABEL_15:
  v10 = *(_QWORD *)(a1 + 376);
  v11 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 888) + 212LL) && (unsigned __int64)(get_sreg(v11, 20) - 1) > 0xFFFFFFFFFFFFFFFDLL )
    v12 = 8;
  else
    v12 = 4;
  *(_DWORD *)v10 |= 0x200u;
  *(_QWORD *)(v10 + 56) = v12 + v11;
  return 1;
}
