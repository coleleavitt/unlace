__int64 __fastcall sub_BE7600(__int64 a1, _QWORD *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // r14d
  _QWORD *v9; // r12
  __int64 v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  unsigned __int8 v18; // al
  __int64 result; // rax

  v7 = a6;
  v9 = (_QWORD *)a4;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x35;
  if ( unk_2CAD564 )
    sub_EC5E10(53);
  *(_WORD *)(a1 + 1) &= 0xF801u;
  v11 = a1 + 16;
  v12 = 0;
  v13 = nullptr;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  if ( (_DWORD)a5 )
  {
    sub_BE7320(a1 + 16, a2, (unsigned int)a5, a4, v11, a6);
    v13 = *(_QWORD **)(a1 + 24);
    v11 = a1 + 16;
    v12 = (__int64)v13 - *(_QWORD *)(a1 + 16);
  }
  v14 = a5;
  *(_DWORD *)(a1 + 44) = v7;
  *(_BYTE *)(a1 + 2) &= ~8u;
  v15 = (v14 * 8) >> 3;
  *(_DWORD *)(a1 + 40) = a3;
  *(_QWORD *)(a1 + 48) = 4;
  *(_QWORD *)(a1 + 56) = 0;
  if ( (v14 * 8) >> 3 )
  {
    if ( v15 > (__int64)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF8LL) - (_QWORD)v13) >> 3 )
    {
      sub_BE7320(v11, a2, v15 + (v12 >> 3), a4, v11, a6);
      v13 = *(_QWORD **)(a1 + 24);
    }
    if ( v14 > 0 )
    {
      if ( v14 <= 1 )
        goto LABEL_13;
      v16 = 0;
      do
      {
        *(__m128i *)&v13[v16] = _mm_loadu_si128((const __m128i *)(a4 + v16 * 8));
        v16 += 2;
      }
      while ( v16 != 2 * (v15 >> 1) );
      v17 = 8 * (v15 & 0xFFFFFFFFFFFFFFFELL);
      v9 = (_QWORD *)(a4 + v17);
      v13 = (_QWORD *)((char *)v13 + v17);
      if ( (v15 & 0xFFFFFFFFFFFFFFFELL) != v15 )
LABEL_13:
        *v13 = *v9;
      v13 = *(_QWORD **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 24) = &v13[v14];
  }
  v18 = sub_B40AB0(a1);
  *(_BYTE *)(a1 + 1) = (v18 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v18 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

