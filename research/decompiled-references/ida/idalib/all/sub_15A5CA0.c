unsigned __int64 __fastcall sub_15A5CA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 result; // rax
  int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // r11
  unsigned __int64 v14; // rdi
  unsigned int v15; // r8d
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rcx
  char v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  unsigned int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 i; // rdx

  v7 = *(__int64 **)a1;
  v8 = *v7;
  v9 = 8 * (*(unsigned int *)(a1 + 136) + 2LL * *(unsigned int *)(a1 + 56) + 4);
  v7[10] += v9;
  result = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v7[1] >= v9 + result && v8 )
    *v7 = v9 + result;
  else
    result = sub_986170((__int64)v7, v9, v9, 3, a5, a6);
  v11 = *(_DWORD *)(a1 + 20);
  v12 = *(_QWORD *)(a1 + 48);
  v13 = *(unsigned int *)(a1 + 56);
  v14 = *(_QWORD *)(a1 + 128);
  v15 = *(_DWORD *)(a1 + 136);
  v16 = *(_QWORD *)(a1 + 24);
  v17 = *(_QWORD *)(a1 + 32);
  v18 = *(_QWORD *)(a1 + 40);
  *(_WORD *)(result + 4) = *(_DWORD *)(a1 + 16);
  v19 = v11;
  LOBYTE(v11) = *(_BYTE *)(result + 6);
  *(_WORD *)result = v13;
  *(_WORD *)(result + 2) = v15;
  *(_QWORD *)(result + 8) = v16;
  *(_QWORD *)(result + 16) = v17;
  *(_BYTE *)(result + 6) = v19 & 3 | v11 & 0xFC;
  *(_QWORD *)(result + 24) = v18;
  if ( (_DWORD)v13 )
  {
    v20 = 0;
    do
    {
      *(__m128i *)(result + v20 + 32) = _mm_loadu_si128((const __m128i *)(v12 + v20));
      v20 += 16;
    }
    while ( v20 != 16 * ((unsigned int)(v13 - 1) + 1LL) );
  }
  v21 = 16 * v13;
  if ( !v15 )
    goto LABEL_14;
  v22 = result + v21 + 32;
  v23 = v15 - 1;
  if ( (v22 >= v14 + 16 || v14 >= result + v21 + 48) && v23 > 1 )
  {
    v24 = 0;
    do
    {
      *(__m128i *)(v22 + v24) = _mm_loadu_si128((const __m128i *)(v14 + v24));
      v24 += 16;
    }
    while ( v24 != 16LL * (v15 >> 1) );
    v25 = v15 & 0xFFFFFFFE;
    if ( v15 != (_DWORD)v25 )
      *(_QWORD *)(result + v21 + 8 * v25 + 32) = *(_QWORD *)(v14 + 8 * v25);
LABEL_14:
    *(_DWORD *)(a1 + 56) = 0;
    return result;
  }
  v26 = v23;
  for ( i = 0; ; ++i )
  {
    *(_QWORD *)(result + v21 + 8 * i + 32) = *(_QWORD *)(v14 + 8 * i);
    if ( v26 == i )
      break;
  }
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
