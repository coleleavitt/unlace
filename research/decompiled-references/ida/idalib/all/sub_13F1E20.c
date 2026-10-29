__int64 __fastcall sub_13F1E20(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // al
  __m128i *v5; // rdx
  _BYTE *v6; // rax
  __m128i *v7; // rdx
  __int64 v8; // rdi
  char *v9; // rsi
  const char *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rdi
  char v13; // r12
  char v14; // dl
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbp
  size_t v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  __m128i *v22; // rdx
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __m128i si128; // xmm0
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // edx
  __int64 v31; // rdi

  v3 = sub_227D6D0(a1, a2);
  v4 = *(_BYTE *)(a1 + 12) & 3;
  if ( v4 == 1 )
  {
    v22 = *(__m128i **)(v3 + 32);
    if ( *(_QWORD *)(v3 + 24) - (_QWORD)v22 > 0x12u )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA590);
      v22[1].m128i_i8[2] = 101;
      v22[1].m128i_i16[0] = 30313;
      *v22 = si128;
      v6 = (_BYTE *)(*(_QWORD *)(v3 + 32) + 19LL);
      *(_QWORD *)(v3 + 32) = v6;
    }
    else
    {
      sub_227BF10(v3, "UndefMacroDirective", 19);
      v6 = *(_BYTE **)(v3 + 32);
    }
    goto LABEL_9;
  }
  if ( v4 )
  {
    if ( v4 == 2 )
    {
      v5 = *(__m128i **)(v3 + 32);
      if ( *(_QWORD *)(v3 + 24) - (_QWORD)v5 > 0x17u )
      {
        v24 = _mm_load_si128((const __m128i *)&xmmword_23AA5A0);
        v5[1].m128i_i64[0] = 0x6576697463657269LL;
        *v5 = v24;
        v6 = (_BYTE *)(*(_QWORD *)(v3 + 32) + 24LL);
        *(_QWORD *)(v3 + 32) = v6;
      }
      else
      {
        sub_227BF10(v3, "VisibilityMacroDirective", 24);
        v6 = *(_BYTE **)(v3 + 32);
      }
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v7 = *(__m128i **)(v3 + 32);
  if ( *(_QWORD *)(v3 + 24) - (_QWORD)v7 <= 0x10u )
  {
    sub_227BF10(v3, "DefMacroDirective", 17);
LABEL_8:
    v6 = *(_BYTE **)(v3 + 32);
    goto LABEL_9;
  }
  v23 = _mm_load_si128((const __m128i *)&xmmword_23AA580);
  v7[1].m128i_i8[0] = 101;
  *v7 = v23;
  v6 = (_BYTE *)(*(_QWORD *)(v3 + 32) + 17LL);
  *(_QWORD *)(v3 + 32) = v6;
LABEL_9:
  if ( *(_BYTE **)(v3 + 24) == v6 )
  {
    v8 = sub_227BF10(v3, " ", 1);
  }
  else
  {
    *v6 = 32;
    v8 = v3;
    ++*(_QWORD *)(v3 + 32);
  }
  v9 = (char *)a1;
  sub_227B9B0(v8, a1);
  v10 = *(const char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v11 = *(_QWORD *)(v3 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v3 + 24) - v11) > 5 )
    {
      *(_DWORD *)v11 = 1701998624;
      v12 = v3;
      *(_WORD *)(v11 + 4) = 8310;
      *(_QWORD *)(v3 + 32) += 6LL;
    }
    else
    {
      v12 = sub_227BF10(v3, " prev ", 6);
    }
    v9 = (char *)v10;
    sub_227B9B0(v12, v10);
  }
  v13 = *(_BYTE *)(a1 + 12);
  if ( (v13 & 4) != 0 )
  {
    v21 = *(_QWORD *)(v3 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v3 + 24) - v21) > 8 )
    {
      *(_BYTE *)(v21 + 8) = 104;
      *(_QWORD *)v21 = 0x63705F6D6F726620LL;
      v13 = *(_BYTE *)(a1 + 12);
      *(_QWORD *)(v3 + 32) += 9LL;
    }
    else
    {
      v9 = " from_pch";
      sub_227BF10(v3, " from_pch", 9);
      v13 = *(_BYTE *)(a1 + 12);
    }
  }
  v14 = v13 & 3;
  if ( (v13 & 3) == 2 )
  {
    v9 = " private";
    if ( (v13 & 8) != 0 )
      v9 = " public";
    v19 = strlen(v9);
    v16 = *(_QWORD *)(v3 + 24);
    v20 = *(_QWORD **)(v3 + 32);
    if ( v19 > v16 - (__int64)v20 )
    {
      sub_227BF10(v3, v9, v19);
      result = *(_QWORD *)(v3 + 32);
      v13 = *(_BYTE *)(a1 + 12);
      v16 = *(_QWORD *)(v3 + 24);
LABEL_29:
      v14 = v13 & 3;
      goto LABEL_18;
    }
    if ( (unsigned int)v19 >= 8 )
    {
      v26 = (unsigned __int64)(v20 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v20 = *(_QWORD *)v9;
      *(_QWORD *)((char *)v20 + (unsigned int)v19 - 8) = *(_QWORD *)&v9[(unsigned int)v19 - 8];
      v27 = (__int64)v20 - v26;
      v9 -= v27;
      v28 = (v19 + v27) & 0xFFFFFFF8;
      if ( v28 >= 8 )
      {
        v29 = v28 & 0xFFFFFFF8;
        v30 = 0;
        do
        {
          v31 = v30;
          v30 += 8;
          *(_QWORD *)(v26 + v31) = *(_QWORD *)&v9[v31];
        }
        while ( v30 < v29 );
      }
    }
    else
    {
      if ( (v19 & 4) != 0 )
      {
        *(_DWORD *)v20 = *(_DWORD *)v9;
        v9 = (char *)*(unsigned int *)&v9[(unsigned int)v19 - 4];
        *(_DWORD *)((char *)v20 + (unsigned int)v19 - 4) = (_DWORD)v9;
        v13 = *(_BYTE *)(a1 + 12);
        v20 = *(_QWORD **)(v3 + 32);
        v16 = *(_QWORD *)(v3 + 24);
        goto LABEL_47;
      }
      if ( !(_DWORD)v19 )
      {
LABEL_47:
        result = (__int64)v20 + v19;
        *(_QWORD *)(v3 + 32) = result;
        goto LABEL_29;
      }
      *(_BYTE *)v20 = *v9;
      if ( (v19 & 2) != 0 )
      {
        v9 = (char *)*(unsigned __int16 *)&v9[(unsigned int)v19 - 2];
        *(_WORD *)((char *)v20 + (unsigned int)v19 - 2) = (_WORD)v9;
        v13 = *(_BYTE *)(a1 + 12);
        v20 = *(_QWORD **)(v3 + 32);
        v16 = *(_QWORD *)(v3 + 24);
        goto LABEL_47;
      }
    }
    v13 = *(_BYTE *)(a1 + 12);
    v20 = *(_QWORD **)(v3 + 32);
    v16 = *(_QWORD *)(v3 + 24);
    goto LABEL_47;
  }
  result = *(_QWORD *)(v3 + 32);
  v16 = *(_QWORD *)(v3 + 24);
LABEL_18:
  v17 = v16;
  if ( !v14 )
  {
    v18 = *(_QWORD *)(a1 + 16);
    if ( v18 )
    {
      if ( (unsigned __int64)(v16 - result) > 2 )
      {
        *(_BYTE *)(result + 2) = 32;
        *(_WORD *)result = 8202;
        *(_QWORD *)(v3 + 32) += 3LL;
      }
      else
      {
        v9 = "\n  ";
        sub_227BF10(v3, "\n  ", 3);
      }
      sub_13F1510(v18, (__int64)v9);
      v17 = *(_QWORD *)(v3 + 24);
      result = *(_QWORD *)(v3 + 32);
    }
  }
  if ( result == v17 )
    return sub_227BF10(v3, "\n", 1);
  *(_BYTE *)result = 10;
  ++*(_QWORD *)(v3 + 32);
  return result;
}
