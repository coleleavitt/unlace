unsigned __int64 __fastcall sub_C74E10(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, const __m128i *a5, __int64 a6)
{
  unsigned int v8; // r13d
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int16 v17; // ax
  unsigned __int8 v18; // al
  __int64 v20; // rax
  const __m128i *v21; // [rsp+8h] [rbp-50h]
  const __m128i *v22; // [rsp+8h] [rbp-50h]
  _BYTE v23[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v8 = a4;
  if ( a6 )
  {
    v10 = 32LL * *(unsigned int *)(a6 + 8) + 56;
    v11 = 16;
  }
  else
  {
    v10 = 56;
    v11 = 16LL * ((_DWORD)a4 != 0);
  }
  v12 = v10 + v11;
  v13 = a1[294];
  a1[304] += v12;
  v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v15 = v12 + v14;
  if ( a1[295] >= v12 + v14 && v13 )
  {
    a1[294] = v15;
  }
  else
  {
    v22 = a5;
    v20 = sub_962430((__int64)(a1 + 294), v12, v12, 3, (__int64)a5, a6);
    a5 = v22;
    v14 = v20;
  }
  v16 = a1[2384];
  *(_WORD *)v14 = *(_WORD *)v14 & 0xFE00 | 0x45;
  if ( unk_2CAD564 )
  {
    v21 = a5;
    sub_EC5E10(69);
    a5 = v21;
  }
  v17 = *(_WORD *)(v14 + 1);
  *(_QWORD *)(v14 + 8) = v16;
  *(_QWORD *)(v14 + 16) = a2;
  *(_QWORD *)(v14 + 24) = a3;
  *(_WORD *)(v14 + 1) = v17 & 0xF801 | 2;
  *(__m128i *)(v14 + 32) = _mm_loadu_si128(a5);
  *(_QWORD *)(v14 + 48) = a5[1].m128i_i64[0];
  if ( a6 )
  {
    *(_BYTE *)(v14 + 2) |= 8u;
    v23[0] = 0;
    v12 = v8;
    sub_EFA9B0(v14 + 56, v8, a6, v14 + 16LL * ((*(_DWORD *)v14 >> 19) & 1) + 56, v23);
  }
  else if ( v8 )
  {
    *(_BYTE *)(v14 + 2) |= 8u;
    v12 = v8;
    sub_EFA990(v14 + 56, v8);
  }
  else
  {
    *(_BYTE *)(v14 + 2) &= ~8u;
  }
  v18 = sub_B414D0((const __m128i *)v14, v12, v15, a4, (__int64)a5, a6);
  *(_BYTE *)(v14 + 1) = (v18 << 6) | *(_BYTE *)(v14 + 1) & 0x3F;
  *(_BYTE *)(v14 + 2) = *(_BYTE *)(v14 + 2) & 0xF8 | (v18 >> 2) & 7;
  return v14;
}

