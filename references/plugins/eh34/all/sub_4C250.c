__int64 __fastcall sub_4C250(__int64 a1, __int64 a2)
{
  int v2; // eax
  _DWORD *v4; // rax
  __int64 v5; // r15
  _DWORD *v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // r13
  int *v12; // rsi
  __m128i *v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // r12
  __int64 v16; // r15
  char v17; // al
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 *v20; // rbp
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // r13
  int *v28; // rsi
  void *v29; // rax

  sub_4C070(a1);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v2 = *(_DWORD *)(a2 + 4);
  switch ( v2 )
  {
    case 2:
      v4 = (_DWORD *)operator new(0x28u);
      v5 = *(_QWORD *)(a2 + 16);
      v6 = v4;
      *v4 = *(_DWORD *)v5;
      LOBYTE(v4) = *(_BYTE *)(v5 + 4);
      *((_QWORD *)v6 + 1) = 0;
      *((_BYTE *)v6 + 4) = (_BYTE)v4;
      *((_OWORD *)v6 + 1) = 0;
      v7 = *(_QWORD *)(v5 + 16);
      if ( v7 )
      {
        v8 = qalloc_or_throw(56 * v7);
        *((_QWORD *)v6 + 1) = v8;
        v9 = v8;
        v10 = 0;
        *((_QWORD *)v6 + 3) = v7;
        while ( 1 )
        {
          v11 = 56 * v10 + v9;
          v12 = (int *)(*(_QWORD *)(v5 + 8) + 56 * v10);
          *(_DWORD *)v11 = 0;
          *(_BYTE *)(v11 + 8) = 0;
          sub_4BD50(v11, v12);
          if ( v7 == ++v10 )
            break;
          v9 = *((_QWORD *)v6 + 1);
        }
        *((_QWORD *)v6 + 2) = v7;
      }
      *((_QWORD *)v6 + 4) = *(_QWORD *)(v5 + 32);
      *(_QWORD *)(a1 + 16) = v6;
      break;
    case 3:
      v13 = (__m128i *)operator new(0x10u);
      v14 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 16));
      *(_QWORD *)(a1 + 16) = v13;
      *v13 = v14;
      v15 = operator new(0x28u);
      v16 = **(_QWORD **)(a2 + 16);
      *(_DWORD *)v15 = *(_DWORD *)v16;
      v17 = *(_BYTE *)(v16 + 4);
      *(_QWORD *)(v15 + 8) = 0;
      *(_BYTE *)(v15 + 4) = v17;
      *(_OWORD *)(v15 + 16) = 0;
      v18 = *(_QWORD *)(v16 + 16);
      if ( v18 )
      {
        v24 = qalloc_or_throw(56 * v18);
        *(_QWORD *)(v15 + 8) = v24;
        v25 = v24;
        v26 = 0;
        *(_QWORD *)(v15 + 24) = v18;
        while ( 1 )
        {
          v27 = 56 * v26 + v25;
          v28 = (int *)(*(_QWORD *)(v16 + 8) + 56 * v26);
          *(_DWORD *)v27 = 0;
          *(_BYTE *)(v27 + 8) = 0;
          sub_4BD50(v27, v28);
          if ( v18 == ++v26 )
            break;
          v25 = *(_QWORD *)(v15 + 8);
        }
        *(_QWORD *)(v15 + 16) = v18;
      }
      *(_QWORD *)(v15 + 32) = *(_QWORD *)(v16 + 32);
      **(_QWORD **)(a1 + 16) = v15;
      break;
    case 1:
      v19 = operator new(0x28u);
      v20 = *(__int64 **)(a2 + 16);
      v21 = v19;
      v22 = *v20;
      *(_OWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 8) = 0;
      *(_QWORD *)v21 = v22;
      v23 = v20[2];
      if ( v23 )
      {
        v29 = (void *)qalloc_or_throw(32 * v23);
        *(_QWORD *)(v21 + 8) = v29;
        *(_QWORD *)(v21 + 24) = v23;
        memcpy(v29, (const void *)v20[1], 32 * v23);
        *(_QWORD *)(v21 + 16) = v23;
      }
      *(_BYTE *)(v21 + 32) = *((_BYTE *)v20 + 32);
      *(_QWORD *)(a1 + 16) = v21;
      break;
  }
  return a1;
}
