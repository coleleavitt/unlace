__int64 __fastcall sub_678790(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v7; // rsi
  unsigned int v8; // r13d
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v12; // rax
  char v13; // al
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-C0h]
  _BYTE v22[176]; // [rsp+18h] [rbp-B0h] BYREF

  sub_658320(a1, a2, a3, *(double *)a4.m128i_i64, a5, a6);
  if ( !(unsigned __int8)sub_674AD0(a1, a2, a3, a4, a5, a6) )
    goto LABEL_5;
  v7 = a2 + 64;
  if ( !a2 )
    v7 = 0;
  v8 = sub_66F3A0(a1, v7, a3, a4, a5, a6);
  if ( (_BYTE)v8 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v14 = nullptr;
      v15 = sub_79A2B0(a2);
      v16 = *(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8);
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v14 = *(__int64 **)sub_79A2B0(a2);
      while ( (__int64 *)v16 != v14 )
      {
        if ( !(unsigned __int8)sub_6777E0(a1, *v14, a3, a4, a5, a6) )
          goto LABEL_5;
        ++v14;
      }
    }
  }
  else
  {
LABEL_5:
    v8 = 0;
  }
  v9 = *(_QWORD *)(a2 + 40);
  if ( (v9 & 7) == 0 && (v10 = v9 & 0xFFFFFFFFFFFFFFF8LL) != 0 && **(_DWORD **)(v10 + 16)
    || (v12 = *(_QWORD *)(a2 + 120), (v12 & 4) == 0)
    && (v17 = v12 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && (v18 = *(_QWORD *)(v17 + 40), (v18 & 7) == 0)
    && (v19 = v18 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && **(_DWORD **)(v19 + 16)
    || (v13 = *(_BYTE *)(a2 + 74), (v13 & 4) == 0)
    || (v13 & 8) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 75) & 1) != 0 )
    {
      ptr = v22;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
      sub_11240B0(a2, &ptr);
      sub_FC9040(a1[1], ptr, si128.m128i_i64[0]);
      if ( ptr != v22 )
        free(ptr);
    }
  }
  return v8;
}

