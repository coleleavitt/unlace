void __fastcall sub_1A1D150(
        __int64 a1,
        __int64 a2,
        void **a3,
        unsigned __int64 a4,
        __int64 *a5,
        char a6,
        double a7,
        __m128 a8,
        char a9,
        char a10,
        __int64 a11)
{
  _QWORD *v14; // rbp
  _QWORD *v15; // r15
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  char v18; // al
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // r15
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  _BYTE v26[57]; // [rsp+7h] [rbp-39h] BYREF

  *(_BYTE *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 9) = a6;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 10) = a9;
  *(_OWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 11) = a10;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = a11;
  *(_DWORD *)(a1 + 48) = 0;
  if ( a6 )
  {
    v14 = *(_QWORD **)(a4 + 16);
    v15 = *(_QWORD **)(a4 + 24);
    if ( v15 == v14 )
    {
LABEL_7:
      v17 = nullptr;
    }
    else
    {
      v16 = *(_QWORD **)(a4 + 16);
      while ( !*v16 || (*(_WORD *)*v16 & 0x1FF) != 0x44 )
      {
        if ( v15 == ++v16 )
          goto LABEL_7;
      }
      v24 = sub_EEC8C0(a4, a2, 0.0);
      v17 = sub_1A0DE10(a1, *a5, v24, v15 - v14);
      *(_QWORD *)(a1 + 16) = v17;
    }
  }
  else
  {
    v21 = *(_QWORD *)(a4 + 24) - *(_QWORD *)(a4 + 16);
    v22 = sub_EEC8C0(a4, a2, 0.0);
    v23 = (unsigned __int64)sub_1A0DE10(a1, *a5, v22, v21 >> 3);
    *(_QWORD *)(a1 + 16) = v23;
    *(_QWORD *)(v23 + 48) = a4 | *(_QWORD *)(v23 + 48) & 7LL | 4;
    *(_QWORD *)(a4 + 48) = *(_QWORD *)(a4 + 48) & 3LL | v23 & 0xFFFFFFFFFFFFFFFBLL;
    v17 = *(_QWORD **)(a1 + 16);
  }
  sub_1A1C9E0((unsigned int *)a1, a3, (_QWORD *)a4, a5, (__int64)v17, (__m128)0LL, a8);
  v18 = *(_BYTE *)(a1 + 8);
  if ( v18 != 1 )
  {
    if ( a11 )
      goto LABEL_10;
    v25 = *(_QWORD *)(a1 + 16);
    if ( !v25 )
      return;
    v26[0] = 0;
    sub_1A1A320(a1, (const __m128i *)a3, v25, v26, 0, 0, (__m128)0LL, a8, 0);
    if ( !v26[0] )
    {
      v18 = *(_BYTE *)(a1 + 8);
LABEL_10:
      if ( !v18 )
        return;
      goto LABEL_11;
    }
    if ( !*(_BYTE *)(a1 + 8) )
    {
      sub_1A1A320(a1, (const __m128i *)a3, *(_QWORD *)(a1 + 16), v26, 0, 0, (__m128)0LL, a8, 0);
      v18 = *(_BYTE *)(a1 + 8);
      goto LABEL_10;
    }
  }
LABEL_11:
  v19 = *(_QWORD *)(a1 + 16);
  if ( v19 )
  {
    v20 = (unsigned __int8)((*(_DWORD *)v19 >> 14) & 5 | 0x1A) >> 2;
    *(_BYTE *)(v19 + 1) = (((*(_DWORD *)v19 >> 14) & 5 | 0x1A) << 6) | *(_BYTE *)(v19 + 1) & 0x3F;
    *(_BYTE *)(v19 + 2) = *(_BYTE *)(v19 + 2) & 0xF8 | v20;
  }
}
