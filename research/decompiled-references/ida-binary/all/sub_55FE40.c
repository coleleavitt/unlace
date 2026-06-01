__int64 __fastcall sub_55FE40(__int64 a1, unsigned int a2, unsigned __int64 a3, __int16 a4)
{
  int v5; // edx
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  _WORD *v9; // r9
  __int64 result; // rax
  int v11; // r11d
  __m128i v12; // xmm0
  int v13; // r12d
  int v14; // eax
  unsigned __int64 v15; // rax
  int v16; // edx
  _DWORD *v17; // r9
  char v18; // r10
  int v19; // r11d
  int v20; // ecx
  unsigned __int64 v21; // rdi
  int v22; // esi
  int v23; // eax
  unsigned __int64 v24; // rdi
  int v25; // edx
  __int64 v26; // rcx
  unsigned int v27; // edx
  int v28; // edx

  if ( a2 >= *(_DWORD *)(a1 + 8) )
    sub_55D3A0();
  v5 = *(_DWORD *)(a1 + 56);
  v7 = *(_QWORD *)a1 + 48LL * a2;
  v8 = *(_QWORD *)v7;
  if ( v5 )
  {
    v26 = *(_QWORD *)(a1 + 48);
    v27 = v5 - 1;
    *(_DWORD *)(a1 + 56) = v27;
    v9 = *(_WORD **)(v26 + 8LL * v27);
  }
  else
  {
    v9 = off_8C52B8(0xE8u);
  }
  result = 0;
  memset(v9, 0, 0xE8u);
  *v9 = a4;
  *((_DWORD *)v9 + 53) = 1;
  if ( !v8 )
  {
    if ( a3 )
    {
LABEL_20:
      *(_QWORD *)v7 = v9;
      return result;
    }
    v13 = 0;
LABEL_19:
    *(_DWORD *)(v7 + 16) = v13;
    goto LABEL_20;
  }
  v9[104] = 1;
  *((__m128i *)v9 + 1) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)a3);
  v11 = *(_DWORD *)(v8 + 224);
  *(_QWORD *)(v9 + 2) = *(_QWORD *)(v8 + 4);
  result = *(unsigned int *)(v8 + 12);
  *((_DWORD *)v9 + 3) = result;
  v12 = _mm_loadl_epi64((const __m128i *)(v8 + 216));
  v13 = *(_DWORD *)(v8 + 220);
  *((_DWORD *)v9 + 56) = v11;
  *((_QWORD *)v9 + 27) = v12.m128i_i64[0];
  if ( !a3 )
    goto LABEL_19;
  v14 = _mm_cvtsi128_si32(v12);
  if ( (a3 & 1) != 0 )
  {
    if ( (a3 & 0x20) != 0 )
      v14 += 610;
  }
  else if ( (*(_BYTE *)(a3 + 45) & 2) != 0 )
  {
    v14 += 610;
  }
  else
  {
    v14 += *(_DWORD *)(a3 + 32);
  }
  *((_DWORD *)v9 + 54) = v14;
  v15 = sub_55C590(a3);
  v20 = v17[2];
  v21 = v15;
  v22 = v16;
  v23 = v17[1] + v15;
  v24 = HIDWORD(v21);
  if ( (_DWORD)v24 )
    v20 += v24;
  else
    v22 = v17[3] + v16;
  v17[1] = v23;
  v17[2] = v20;
  v17[3] = v22;
  if ( v18 )
  {
    result = v13 + ((unsigned int)(a3 >> 1) & 1);
  }
  else
  {
    if ( *(_DWORD *)(a3 + 36) )
    {
      result = *(_DWORD *)(a3 + 56) - ((unsigned int)((*(_BYTE *)(a3 + 44) & 1) == 0) - 1);
      v25 = result + v13 + 1;
      if ( *(_WORD *)(a3 + 40) != 0xFFFE )
        v25 = result + v13;
      v17[55] = v25;
      v19 += *(_DWORD *)(a3 + 60);
      goto LABEL_23;
    }
    v28 = *(_BYTE *)(a3 + 44) & 1;
    result = (unsigned int)(v13 + v28 + 1);
    if ( *(_WORD *)(a3 + 40) != 0xFFFE )
      result = (unsigned int)(v13 + v28);
  }
  v17[55] = result;
LABEL_23:
  v17[56] = v19;
  *(_QWORD *)v7 = v17;
  return result;
}
