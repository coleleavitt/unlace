__int64 __fastcall sub_979400(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __m128i v5; // xmm0
  __int64 v8; // rax
  char v9; // al
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __m128i si128; // xmm0
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __m128i v18; // xmm0

  v2 = *(_DWORD *)(a2 + 32);
  if ( v2 == 1 )
  {
    v13 = sub_186B270(0x40u);
    *(_DWORD *)(v13 + 16) = 2;
    *(_QWORD *)(v13 + 8) = 0x80000000ALL;
    v14 = (_QWORD *)sub_186B270(0xA0u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_18B66F0);
    *(_QWORD *)(v13 + 48) = 0;
    *v14 = 1;
    v14[2] = 1;
    v14[4] = 1;
    v14[6] = 1;
    v14[8] = 1;
    v14[10] = 1;
    v14[12] = 1;
    v14[14] = 1;
    v14[16] = 1;
    v14[18] = 1;
    *(_QWORD *)v13 = v14;
    *(_QWORD *)(v13 + 40) = v14 + 16;
    *(_QWORD *)(v13 + 56) = 0;
    *(__m128i *)(v13 + 20) = si128;
    return v13;
  }
  else
  {
    if ( v2 != 2 )
    {
LABEL_3:
      v3 = sub_186B270(0x40u);
      *(_DWORD *)(v3 + 16) = 2;
      *(_QWORD *)(v3 + 8) = 0x80000000ALL;
      v4 = (_QWORD *)sub_186B270(0xA0u);
      v5 = _mm_load_si128((const __m128i *)&xmmword_18B66F0);
      *v4 = 1;
      v4[2] = 1;
      v4[4] = 1;
      v4[6] = 1;
      v4[8] = 1;
      v4[10] = 1;
      v4[12] = 1;
      v4[14] = 1;
      v4[16] = 1;
      v4[18] = 1;
      *(_QWORD *)v3 = v4;
      *(_QWORD *)(v3 + 40) = v4 + 16;
      *(_QWORD *)(v3 + 48) = 0;
      *(_QWORD *)(v3 + 56) = 0;
      *(__m128i *)(v3 + 20) = v5;
      return v3 | 3;
    }
    v8 = *(_QWORD *)(a2 + 24);
    if ( v8 )
    {
      v9 = *(_BYTE *)(v8 + 17);
      if ( (v9 & 4) != 0 )
        goto LABEL_3;
      if ( (v9 & 8) != 0 )
      {
        v16 = sub_186B270(0x48u);
        *(_QWORD *)v16 = a1 + 8;
        *(_DWORD *)(v16 + 24) = 2;
        *(_QWORD *)(v16 + 16) = 0x80000000ALL;
        v17 = (_QWORD *)sub_186B270(0xA0u);
        v18 = _mm_load_si128((const __m128i *)&xmmword_18B66F0);
        *(_QWORD *)(v16 + 56) = 0;
        *v17 = 1;
        v17[2] = 1;
        v17[4] = 1;
        v17[6] = 1;
        v17[8] = 1;
        v17[10] = 1;
        v17[12] = 1;
        v17[14] = 1;
        v17[16] = 1;
        v17[18] = 1;
        *(_QWORD *)(v16 + 8) = v17;
        *(_QWORD *)(v16 + 48) = v17 + 16;
        *(_QWORD *)(v16 + 64) = 0;
        *(__m128i *)(v16 + 28) = v18;
        return v16 | 2;
      }
    }
    v10 = sub_186B270(0x40u);
    *(_DWORD *)(v10 + 16) = 2;
    *(_QWORD *)(v10 + 8) = 0x80000000ALL;
    v11 = (_QWORD *)sub_186B270(0xA0u);
    v12 = _mm_load_si128((const __m128i *)&xmmword_18B66F0);
    *(_QWORD *)(v10 + 48) = 0;
    *v11 = 1;
    v11[2] = 1;
    v11[4] = 1;
    v11[6] = 1;
    v11[8] = 1;
    v11[10] = 1;
    v11[12] = 1;
    v11[14] = 1;
    v11[16] = 1;
    v11[18] = 1;
    *(_QWORD *)v10 = v11;
    *(_QWORD *)(v10 + 40) = v11 + 16;
    *(_QWORD *)(v10 + 56) = 0;
    *(__m128i *)(v10 + 20) = v12;
    return v10 | 1;
  }
}

