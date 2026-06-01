__int64 __fastcall sub_56A260(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4, __int16 a5)
{
  int v6; // edx
  __int64 v9; // rbp
  unsigned __int64 v10; // r12
  _WORD *v11; // r9
  __int64 result; // rax
  int v13; // r11d
  __m128i v14; // xmm0
  int v15; // r12d
  int v16; // eax
  unsigned __int64 v17; // rax
  int v18; // edx
  char v19; // r10
  int v20; // r11d
  int v21; // ecx
  unsigned __int64 v22; // rdi
  int v23; // esi
  int v24; // eax
  unsigned __int64 v25; // rdi
  int v26; // edx
  __int64 v27; // rcx
  unsigned int v28; // edx
  int v29; // edx

  if ( a2 >= *(_DWORD *)(a1 + 8) )
    sub_55D3A0();
  v6 = *(_DWORD *)(a1 + 56);
  v9 = *(_QWORD *)a1 + 48LL * a2;
  v10 = *(_QWORD *)v9;
  if ( v6 )
  {
    v27 = *(_QWORD *)(a1 + 48);
    v28 = v6 - 1;
    *(_DWORD *)(a1 + 56) = v28;
    v11 = *(_WORD **)(v27 + 8LL * v28);
  }
  else
  {
    v11 = off_8C52B8(0xE8u);
  }
  result = 0;
  memset(v11, 0, 0xE8u);
  *v11 = a5;
  *((_DWORD *)v11 + 53) = 1;
  if ( v10 )
  {
    *((_BYTE *)v11 + 32) = a4;
    v11[104] = 1;
    *((__m128i *)v11 + 1) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)a3);
    v13 = *(_DWORD *)(v10 + 224);
    *(_QWORD *)(v11 + 2) = *(_QWORD *)(v10 + 4);
    result = *(unsigned int *)(v10 + 12);
    *((_DWORD *)v11 + 3) = result;
    v14 = _mm_loadl_epi64((const __m128i *)(v10 + 216));
    v15 = *(_DWORD *)(v10 + 220);
    *((_DWORD *)v11 + 56) = v13;
    *((_QWORD *)v11 + 27) = v14.m128i_i64[0];
    if ( a3 )
    {
      v16 = _mm_cvtsi128_si32(v14);
      if ( (a3 & 1) != 0 )
      {
        if ( (a3 & 0x20) != 0 )
          v16 += 610;
      }
      else if ( (*(_BYTE *)(a3 + 45) & 2) != 0 )
      {
        v16 += 610;
      }
      else
      {
        v16 += *(_DWORD *)(a3 + 32);
      }
      *((_DWORD *)v11 + 54) = v16;
      v17 = sub_55C590(a3);
      v21 = *((_DWORD *)v11 + 2);
      v22 = v17;
      v23 = v18;
      v24 = *((_DWORD *)v11 + 1) + v17;
      v25 = HIDWORD(v22);
      if ( (_DWORD)v25 )
        v21 += v25;
      else
        v23 = *((_DWORD *)v11 + 3) + v18;
      *((_DWORD *)v11 + 1) = v24;
      *((_DWORD *)v11 + 2) = v21;
      *((_DWORD *)v11 + 3) = v23;
      if ( v19 )
      {
        result = v15 + ((unsigned int)(a3 >> 1) & 1);
      }
      else
      {
        if ( *(_DWORD *)(a3 + 36) )
        {
          result = *(_DWORD *)(a3 + 56) - ((unsigned int)((*(_BYTE *)(a3 + 44) & 1) == 0) - 1);
          v26 = v15 + result + 1;
          if ( *(_WORD *)(a3 + 40) != 0xFFFE )
            v26 = v15 + result;
          *((_DWORD *)v11 + 55) = v26;
          v20 += *(_DWORD *)(a3 + 60);
          goto LABEL_23;
        }
        v29 = *(_BYTE *)(a3 + 44) & 1;
        result = (unsigned int)(v15 + v29 + 1);
        if ( *(_WORD *)(a3 + 40) != 0xFFFE )
          result = (unsigned int)(v15 + v29);
      }
      *((_DWORD *)v11 + 55) = result;
LABEL_23:
      *((_DWORD *)v11 + 56) = v20;
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  if ( !a3 )
  {
    v15 = 0;
LABEL_19:
    *(_DWORD *)(v9 + 16) = v15;
  }
LABEL_20:
  *(_QWORD *)v9 = v11;
  return result;
}
