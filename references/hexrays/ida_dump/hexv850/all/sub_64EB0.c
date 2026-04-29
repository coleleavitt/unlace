__int64 __fastcall sub_64EB0(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  _DWORD *v20; // rax
  _DWORD *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v26; // rax
  __int64 v27; // rax

  v5 = *(_DWORD *)(a2 + 72);
  v6 = v5 + 1;
  v7 = sub_64040(a1, v5 + 1, 0);
  *(_DWORD *)(v7 + 24) |= 2u;
  v8 = v7;
  *(_DWORD *)(v7 + 76) = *(_DWORD *)(a2 + 76);
  v9 = *(_QWORD *)(a2 + 368);
  *(_DWORD *)(a2 + 76) = 3;
  v10 = *(_QWORD *)(v7 + 368);
  *(_QWORD *)(v8 + 368) = v9;
  v11 = _mm_loadu_si128((const __m128i *)(v8 + 376));
  *(_QWORD *)(v8 + 376) = *(_QWORD *)(a2 + 376);
  *(_QWORD *)(v8 + 384) = *(_QWORD *)(a2 + 384);
  *(_QWORD *)(a2 + 368) = v10;
  *(__m128i *)(a2 + 376) = v11;
  v12 = *(_QWORD *)(v8 + 352);
  v13 = *(_QWORD *)(v8 + 344);
  if ( *(_QWORD *)(v8 + 360) < (unsigned __int64)(v12 + 1) )
  {
    v26 = qvector_reserve(v8 + 344, v13, v12 + 1, 4);
    *(_QWORD *)(v8 + 344) = v26;
    v13 = v26;
    v12 = *(_QWORD *)(v8 + 352);
  }
  *(_DWORD *)(v13 + 4 * v12) = v5;
  ++*(_QWORD *)(v8 + 352);
  v14 = *(_QWORD *)(a2 + 376);
  v15 = *(_QWORD *)(a2 + 368);
  if ( *(_QWORD *)(a2 + 384) < (unsigned __int64)(v14 + 1) )
  {
    v27 = qvector_reserve(a2 + 368, v15, v14 + 1, 4);
    *(_QWORD *)(a2 + 368) = v27;
    v15 = v27;
    v14 = *(_QWORD *)(a2 + 376);
  }
  *(_DWORD *)(v15 + 4 * v14) = v6;
  v16 = *(_QWORD *)(a2 + 512);
  ++*(_QWORD *)(a2 + 376);
  sub_1D0140(v8, v16);
  *(_QWORD *)(v8 + 32) = *(_QWORD *)(a3 + 24);
  if ( *(int *)(v8 + 376) > 0 )
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = *(unsigned int *)(*(_QWORD *)(v8 + 368) + 4 * v17);
      if ( (unsigned int)v18 >= *(_DWORD *)(a1 + 64) )
        break;
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v18);
      v20 = *(_DWORD **)(v19 + 344);
      v21 = &v20[*(_QWORD *)(v19 + 352)];
      if ( v20 == v21 )
      {
LABEL_19:
        if ( !under_debugger )
          sub_37CFE0(51656);
        goto LABEL_21;
      }
      while ( v5 != *v20 )
      {
        if ( v21 == ++v20 )
          goto LABEL_19;
      }
      *v20 = v6;
      if ( *(_DWORD *)(v8 + 376) <= (int)++v17 )
        goto LABEL_13;
    }
    if ( !under_debugger )
      sub_37CFE0(52719);
LABEL_21:
    BUG();
  }
LABEL_13:
  *(_QWORD *)(v8 + 48) = a3;
  *(_QWORD *)(v8 + 56) = *(_QWORD *)(a2 + 56);
  v22 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 56) = v22;
  if ( v22 )
    *(_QWORD *)(v22 + 8) = 0;
  else
    *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a3 + 16) = 0;
  v23 = *(_DWORD *)(a2 + 24);
  BYTE1(v23) &= ~2u;
  LOBYTE(v23) = v23 | 0x80;
  *(_DWORD *)(a2 + 24) = v23;
  v24 = *(_DWORD *)(v8 + 24);
  BYTE1(v24) &= ~2u;
  LOBYTE(v24) = v24 | 0x80;
  *(_DWORD *)(v8 + 24) = v24;
  sub_32B430(v8);
  return v8;
}
