__int64 __fastcall sub_69930(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  _DWORD *v21; // rax
  _DWORD *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  __int64 v27; // rax
  __int64 v28; // rax

  v6 = *(_DWORD *)(a2 + 72);
  v7 = v6 + 1;
  v8 = sub_68AC0(a1, v6 + 1, 0, a4);
  *(_DWORD *)(v8 + 24) |= 2u;
  v9 = v8;
  *(_DWORD *)(v8 + 76) = *(_DWORD *)(a2 + 76);
  v10 = *(_QWORD *)(a2 + 368);
  *(_DWORD *)(a2 + 76) = 3;
  v11 = *(_QWORD *)(v8 + 368);
  *(_QWORD *)(v9 + 368) = v10;
  v12 = _mm_loadu_si128((const __m128i *)(v9 + 376));
  *(_QWORD *)(v9 + 376) = *(_QWORD *)(a2 + 376);
  *(_QWORD *)(v9 + 384) = *(_QWORD *)(a2 + 384);
  *(_QWORD *)(a2 + 368) = v11;
  *(__m128i *)(a2 + 376) = v12;
  v13 = *(_QWORD *)(v9 + 352);
  v14 = *(_QWORD *)(v9 + 344);
  if ( *(_QWORD *)(v9 + 360) < (unsigned __int64)(v13 + 1) )
  {
    v27 = qvector_reserve(v9 + 344, v14, v13 + 1, 4);
    *(_QWORD *)(v9 + 344) = v27;
    v14 = v27;
    v13 = *(_QWORD *)(v9 + 352);
  }
  *(_DWORD *)(v14 + 4 * v13) = v6;
  ++*(_QWORD *)(v9 + 352);
  v15 = *(_QWORD *)(a2 + 376);
  v16 = *(_QWORD *)(a2 + 368);
  if ( *(_QWORD *)(a2 + 384) < (unsigned __int64)(v15 + 1) )
  {
    v28 = qvector_reserve(a2 + 368, v16, v15 + 1, 4);
    *(_QWORD *)(a2 + 368) = v28;
    v16 = v28;
    v15 = *(_QWORD *)(a2 + 376);
  }
  *(_DWORD *)(v16 + 4 * v15) = v7;
  v17 = *(_QWORD *)(a2 + 512);
  ++*(_QWORD *)(a2 + 376);
  sub_1D4F80(v9, v17);
  *(_QWORD *)(v9 + 32) = *(_QWORD *)(a3 + 24);
  if ( *(int *)(v9 + 376) > 0 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = *(unsigned int *)(*(_QWORD *)(v9 + 368) + 4 * v18);
      if ( (unsigned int)v19 >= *(_DWORD *)(a1 + 64) )
        break;
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v19);
      v21 = *(_DWORD **)(v20 + 344);
      v22 = &v21[*(_QWORD *)(v20 + 352)];
      if ( v21 == v22 )
      {
LABEL_19:
        if ( !under_debugger )
          sub_383060(51656);
        goto LABEL_21;
      }
      while ( v6 != *v21 )
      {
        if ( v22 == ++v21 )
          goto LABEL_19;
      }
      *v21 = v7;
      if ( *(_DWORD *)(v9 + 376) <= (int)++v18 )
        goto LABEL_13;
    }
    if ( !under_debugger )
      sub_383060(52719);
LABEL_21:
    BUG();
  }
LABEL_13:
  *(_QWORD *)(v9 + 48) = a3;
  *(_QWORD *)(v9 + 56) = *(_QWORD *)(a2 + 56);
  v23 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 56) = v23;
  if ( v23 )
    *(_QWORD *)(v23 + 8) = 0;
  else
    *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a3 + 16) = 0;
  v24 = *(_DWORD *)(a2 + 24);
  BYTE1(v24) &= ~2u;
  LOBYTE(v24) = v24 | 0x80;
  *(_DWORD *)(a2 + 24) = v24;
  v25 = *(_DWORD *)(v9 + 24);
  BYTE1(v25) &= ~2u;
  LOBYTE(v25) = v25 | 0x80;
  *(_DWORD *)(v9 + 24) = v25;
  sub_330FD0(v9);
  return v9;
}
