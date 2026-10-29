__int64 __fastcall sub_678590(__int64 *a1, __int64 a2, double a3, __m128i a4, __m128i a5, __m128 a6)
{
  __int64 v6; // rax
  char v7; // al
  unsigned int v8; // r13d
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v12; // rax
  char v13; // al
  unsigned __int32 v14; // ebx
  const __m128i *v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-C0h]
  _BYTE v25[176]; // [rsp+28h] [rbp-B0h] BYREF

  sub_65E650(a1, a2);
  v6 = *(_QWORD *)(a2 + 120);
  if ( (v6 & 4) != 0 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = (const __m128i *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v14 >= v15[1].m128i_i32[0] )
        break;
      v16 = v14++;
      sub_673240(a1, *(_QWORD *)(v15[1].m128i_i64[1] + 8 * v16), a3, a4, *(double *)a5.m128i_i64, a6);
      v6 = *(_QWORD *)(a2 + 120);
      if ( (v6 & 4) == 0 )
        goto LABEL_2;
    }
    a5 = _mm_loadu_si128(v15);
    v7 = sub_674510(a1, a5.m128i_i64[0], a5.m128i_i64[1], a3, a4, *(double *)a5.m128i_i64, a6);
  }
  else
  {
LABEL_2:
    a4 = 0;
    v7 = sub_674510(a1, 0, 0, a3, (__m128i)0LL, *(double *)a5.m128i_i64, a6);
  }
  if ( !v7 )
    goto LABEL_5;
  v8 = sub_66F3A0(a1, a2 + 64, a3, a4, *(double *)a5.m128i_i64, a6);
  if ( !(_BYTE)v8 )
    goto LABEL_5;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v17 = nullptr;
    v18 = sub_79A2B0(a2);
    v19 = *(_QWORD *)v18 + 8LL * *(unsigned int *)(v18 + 8);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v17 = *(__int64 **)sub_79A2B0(a2);
    if ( (__int64 *)v19 != v17 )
    {
      while ( (unsigned __int8)sub_6777E0(a1, *v17, a3, a4, *(double *)a5.m128i_i64, a6) )
      {
        if ( (__int64 *)v19 == ++v17 )
          goto LABEL_6;
      }
LABEL_5:
      v8 = 0;
    }
  }
LABEL_6:
  v9 = *(_QWORD *)(a2 + 40);
  if ( (v9 & 7) == 0 && (v10 = v9 & 0xFFFFFFFFFFFFFFF8LL) != 0 && **(_DWORD **)(v10 + 16)
    || (v12 = *(_QWORD *)(a2 + 120), (v12 & 4) == 0)
    && (v20 = v12 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && (v21 = *(_QWORD *)(v20 + 40), (v21 & 7) == 0)
    && (v22 = v21 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && **(_DWORD **)(v22 + 16)
    || (v13 = *(_BYTE *)(a2 + 74), (v13 & 4) == 0)
    || (v13 & 8) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 75) & 1) != 0 )
    {
      ptr = v25;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
      sub_11240B0(a2, &ptr);
      sub_FC9040(a1[1], ptr, si128.m128i_i64[0]);
      if ( ptr != v25 )
        free(ptr);
    }
  }
  return v8;
}

