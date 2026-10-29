__int64 __fastcall sub_17048E0(__int64 a1, __int64 a2)
{
  signed __int64 v3; // r13
  int v4; // eax
  __int64 v5; // r12
  __m128i v6; // xmm0
  __int64 v7; // r15
  __int64 v8; // r13
  _BYTE *v9; // rax
  _BYTE *v10; // rsi
  signed __int64 v11; // r14
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  __int64 result; // rax
  __m128i src[4]; // [rsp+8h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 48) - *(_QWORD *)(a2 + 40);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  v4 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  if ( v3 >> 6 )
  {
    if ( (unsigned __int64)(v3 >> 6) > 0x3FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v5 = operator new(v3);
  }
  else
  {
    v5 = 0;
  }
  src[0].m128i_i64[0] = v5;
  v6 = _mm_loadl_epi64(src);
  *(_QWORD *)(a1 + 56) = v5 + v3;
  *(__m128i *)(a1 + 40) = _mm_unpacklo_epi64(v6, v6);
  v7 = *(_QWORD *)(a2 + 48);
  v8 = *(_QWORD *)(a2 + 40);
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      *(_QWORD *)v5 = *(_QWORD *)v8;
      *(_DWORD *)(v5 + 8) = *(_DWORD *)(v8 + 8);
      *(_QWORD *)(v5 + 12) = *(_QWORD *)(v8 + 12);
      *(_DWORD *)(v5 + 20) = *(_DWORD *)(v8 + 20);
      *(_QWORD *)(v5 + 24) = v5 + 40;
      v10 = *(_BYTE **)(v8 + 24);
      v11 = *(_QWORD *)(v8 + 32);
      if ( &v10[v11] && !v10 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v11 > 0xF )
        break;
      v9 = *(_BYTE **)(v5 + 24);
      if ( v11 == 1 )
      {
        *v9 = *v10;
        v9 = *(_BYTE **)(v5 + 24);
      }
      else if ( v11 )
      {
        goto LABEL_16;
      }
LABEL_7:
      *(_QWORD *)(v5 + 32) = v11;
      v8 += 64;
      v5 += 64;
      v9[v11] = 0;
      *(_BYTE *)(v5 - 8) = *(_BYTE *)(v8 - 8);
      if ( v7 == v8 )
        goto LABEL_17;
    }
    if ( v11 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src[0].m128i_i64[0] = *(_QWORD *)(v8 + 24);
    v9 = (_BYTE *)operator new(v11 + 1);
    *(_QWORD *)(v5 + 40) = v11;
    v10 = (_BYTE *)src[0].m128i_i64[0];
    *(_QWORD *)(v5 + 24) = v9;
LABEL_16:
    memcpy(v9, v10, v11);
    v9 = *(_BYTE **)(v5 + 24);
    goto LABEL_7;
  }
LABEL_17:
  *(_QWORD *)(a1 + 48) = v5;
  v12 = *(_BYTE *)(a2 + 64) & 1 | *(_BYTE *)(a1 + 64) & 0xFE;
  *(_BYTE *)(a1 + 64) = v12;
  v13 = *(_BYTE *)(a2 + 64) & 2 | v12 & 0xFD;
  *(_BYTE *)(a1 + 64) = v13;
  v14 = *(_BYTE *)(a2 + 64) & 4 | v13 & 0xFB;
  *(_BYTE *)(a1 + 64) = v14;
  v15 = *(_BYTE *)(a2 + 64) & 8 | v14 & 0xF7;
  *(_BYTE *)(a1 + 64) = v15;
  v16 = *(_BYTE *)(a2 + 64) & 0x10 | v15 & 0xEF;
  *(_BYTE *)(a1 + 64) = v16;
  v17 = *(_BYTE *)(a2 + 64) & 0x20 | v16 & 0xDF;
  *(_BYTE *)(a1 + 64) = v17;
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 64) & 0x40 | v17 & 0xBF;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  result = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 88) = result;
  return result;
}
