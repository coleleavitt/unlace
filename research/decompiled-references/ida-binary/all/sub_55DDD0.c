_WORD *__fastcall sub_55DDD0(__int64 a1, unsigned __int64 a2, char a3, __int16 a4, __int64 *a5)
{
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  _WORD *v11; // r9
  __int64 v12; // rax
  int v13; // r11d
  __m128i v14; // xmm0
  int v15; // eax
  unsigned __int64 v16; // rax
  int v17; // edx
  char v18; // r10
  int v19; // r11d
  int v20; // ecx
  unsigned __int64 v21; // rsi
  int v22; // eax
  unsigned __int64 v23; // rdi
  int v24; // esi
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int v29; // eax
  int v30; // ecx

  v8 = *((_DWORD *)a5 + 2);
  if ( v8 )
  {
    v9 = v8 - 1;
    v10 = *a5;
    *((_DWORD *)a5 + 2) = v9;
    v11 = *(_WORD **)(v10 + 8LL * v9);
  }
  else
  {
    v11 = off_8C52B8(0xE8u);
  }
  memset(v11, 0, 0xE8u);
  *v11 = a4;
  *((_DWORD *)v11 + 53) = 1;
  if ( a1 )
  {
    v12 = *(_QWORD *)(a1 + 4);
    v13 = *(_DWORD *)(a1 + 224);
    *((_QWORD *)v11 + 2) = a1;
    v11[104] = 1;
    *(_QWORD *)(v11 + 2) = v12;
    LODWORD(v12) = *(_DWORD *)(a1 + 12);
    *((_QWORD *)v11 + 3) = a2;
    *((_DWORD *)v11 + 3) = v12;
    v14 = _mm_loadl_epi64((const __m128i *)(a1 + 216));
    *((_BYTE *)v11 + 32) = a3;
    *((_DWORD *)v11 + 56) = v13;
    *((_QWORD *)v11 + 27) = v14.m128i_i64[0];
    if ( a2 )
    {
      v15 = _mm_cvtsi128_si32(v14);
      if ( (a2 & 1) != 0 )
      {
        if ( (a2 & 0x20) != 0 )
          v15 += 610;
      }
      else if ( (*(_BYTE *)(a2 + 45) & 2) != 0 )
      {
        v15 += 610;
      }
      else
      {
        v15 += *(_DWORD *)(a2 + 32);
      }
      *((_DWORD *)v11 + 54) = v15;
      v16 = sub_55C590(a2);
      v20 = *((_DWORD *)v11 + 2);
      v21 = v16;
      v22 = *((_DWORD *)v11 + 1) + v16;
      v23 = HIDWORD(v21);
      v24 = v17;
      if ( (_DWORD)v23 )
        v20 += v23;
      else
        v24 = *((_DWORD *)v11 + 3) + v17;
      *((_DWORD *)v11 + 1) = v22;
      v25 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v14, 229));
      *((_DWORD *)v11 + 2) = v20;
      *((_DWORD *)v11 + 3) = v24;
      if ( v18 )
      {
        v29 = v25 + ((a2 >> 1) & 1);
      }
      else
      {
        if ( *(_DWORD *)(a2 + 36) )
        {
          v26 = *(_DWORD *)(a2 + 56);
          if ( (*(_BYTE *)(a2 + 44) & 1) != 0 )
          {
            v27 = v25 + v26 + 2;
            if ( *(_WORD *)(a2 + 40) != 0xFFFE )
              v27 = v25 + v26 + 1;
          }
          else
          {
            v27 = v25 + v26 + 1;
            if ( *(_WORD *)(a2 + 40) != 0xFFFE )
              v27 = v25 + v26;
          }
          *((_DWORD *)v11 + 55) = v27;
          v19 += *(_DWORD *)(a2 + 60);
          goto LABEL_16;
        }
        v30 = *(_BYTE *)(a2 + 44) & 1;
        v29 = v25 + v30 + 1;
        if ( *(_WORD *)(a2 + 40) != 0xFFFE )
          v29 = v25 + v30;
      }
      *((_DWORD *)v11 + 55) = v29;
LABEL_16:
      *((_DWORD *)v11 + 56) = v19;
    }
  }
  return v11;
}
