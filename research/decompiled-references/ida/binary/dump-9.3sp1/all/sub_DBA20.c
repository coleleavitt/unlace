__int64 __fastcall sub_DBA20(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // esi
  __int64 v5; // r12
  __int64 v7; // r13
  unsigned int v8; // edi
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v13; // rdx
  __int64 v14; // rax
  _BYTE v15[24]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]

  v1 = *(_DWORD *)(a1 + 132);
  v16 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)v15 = 1;
  v3 = *(_QWORD *)(v2 + 64);
  v4 = *(_DWORD *)(v2 + 352);
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 480) + 112LL);
  *(_QWORD *)&v15[4] = _mm_unpacklo_epi32(
                         _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v3 + 1504) + 80LL)),
                         _mm_cvtsi32_si128(v1)).m128i_u64[0];
  if ( v4 <= 0 )
  {
LABEL_18:
    v11 = 1;
    goto LABEL_15;
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(v2 + 344) + 4 * v7);
    if ( v8 >= *(_DWORD *)(v3 + 64) )
    {
      if ( !under_debugger )
        sub_383060(52719);
      goto LABEL_27;
    }
    v9 = *(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * v8);
    if ( !*(_QWORD *)(v9 + 56) )
    {
      v9 = v2;
      while ( 1 )
      {
        if ( *(_DWORD *)(v9 + 352) != 1 )
          goto LABEL_14;
        v13 = *(_QWORD *)(v9 + 64);
        v14 = **(unsigned int **)(v9 + 344);
        if ( (unsigned int)v14 >= *(_DWORD *)(v13 + 64) )
          break;
        v9 = *(_QWORD *)(*(_QWORD *)(v13 + 528) + 8 * v14);
        if ( *(_QWORD *)(v9 + 48) )
          goto LABEL_11;
      }
      if ( !under_debugger )
        sub_383060(52719);
LABEL_27:
      BUG();
    }
LABEL_11:
    if ( !v9 )
      goto LABEL_14;
    v10 = *(_QWORD *)(v9 + 56);
    if ( *(_DWORD *)v10 != 44 )
      break;
    if ( *(_DWORD *)(v2 + 72) - 1 != v8 )
      goto LABEL_14;
LABEL_5:
    if ( *(_BYTE *)(v10 + 32) == 1 && *(_DWORD *)(a1 + 132) == *(_DWORD *)(v10 + 40) )
    {
      if ( *(_DWORD *)(v2 + 352) <= (int)++v7 )
        goto LABEL_18;
    }
    else
    {
      if ( !(unsigned __int8)sub_12EA80(v5, v9, v10, (unsigned int)v15, *(_QWORD *)(v9 + 56), (int)v10 + 32, 0) )
        goto LABEL_14;
      v2 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v2 + 352) <= (int)++v7 )
        goto LABEL_18;
    }
    v3 = *(_QWORD *)(v2 + 64);
  }
  if ( *(_DWORD *)v10 == 43 && *(_DWORD *)(v10 + 72) == *(_DWORD *)(v2 + 72) )
    goto LABEL_5;
LABEL_14:
  v11 = 0;
LABEL_15:
  sub_11CDA0(v15);
  return v11;
}
