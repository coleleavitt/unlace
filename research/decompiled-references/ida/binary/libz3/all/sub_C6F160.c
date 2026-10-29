__int64 __fastcall sub_C6F160(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned int *a9)
{
  __int64 v11; // r13
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // r10
  __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // r11d
  int v22; // r11d
  __int64 v23; // rsi
  unsigned int v24; // esi
  __int64 v25; // r10
  __int64 v26; // rsi
  __int64 v27; // r15
  __int64 v28; // r12
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // r14
  void *v32; // rdi
  __int64 v33; // rdx
  void *v34; // rbp
  int v35; // eax
  int v36; // eax
  int v38; // ebp
  __int64 v39; // r10
  __int64 v40; // [rsp+8h] [rbp-60h]

  v11 = a4;
  v13 = a7;
  v14 = sub_17E9C90(a1 + 8, 4 * (a2 + 9 * a4 + 20));
  v15 = v14 + 80;
  v16 = 32 * v11;
  *(_OWORD *)(v14 + 48) = 0;
  v17 = v14 + 80 + 32 * v11;
  *(_BYTE *)(v14 + 56) = 1;
  v18 = *(_QWORD *)(a1 + 728);
  v19 = 4LL * a2;
  v20 = v17 + v19;
  *(_OWORD *)v14 = 0;
  *(_OWORD *)(v14 + 16) = 0;
  *(_OWORD *)(v14 + 32) = 0;
  *(_OWORD *)(v14 + 64) = 0;
  if ( v18 && (v21 = *(_DWORD *)(v18 - 4)) != 0 )
  {
    v38 = v21 - 1;
    v22 = *(_DWORD *)(v18 + 4LL * (unsigned int)(v21 - 1));
    *(_DWORD *)(v18 - 4) = v38;
  }
  else
  {
    v22 = *(_DWORD *)(a1 + 720);
    *(_DWORD *)(a1 + 720) = v22 + 1;
  }
  *(_DWORD *)v14 = v22;
  *(_DWORD *)(v14 + 8) = a4;
  *(_QWORD *)(v14 + 16) = v17;
  *(_DWORD *)(v14 + 4) = a2 & 0x1FFFFFFF | (a8 << 29);
  if ( a2 )
  {
    if ( a2 - 1 <= 2 || (unsigned __int64)(v14 + v16 + 80 - (a3 + 4)) <= 8 )
    {
      v39 = 0;
      do
      {
        *(_DWORD *)(v17 + v39) = *(_DWORD *)(a3 + v39);
        v39 += 4;
      }
      while ( v19 != v39 );
      *(_QWORD *)(v14 + 24) = v20;
      *(_QWORD *)(v14 + 32) = v15;
      if ( !a4 )
        goto LABEL_22;
      goto LABEL_14;
    }
    v23 = 0;
    do
    {
      *(__m128i *)(v14 + v16 + 80 + v23) = _mm_loadu_si128((const __m128i *)(a3 + v23));
      v23 += 16;
    }
    while ( v23 != 16LL * (a2 >> 2) );
    v24 = a2 & 0xFFFFFFFC;
    if ( (a2 & 3) != 0 )
    {
      *(_DWORD *)(v17 + 4LL * v24) = *(_DWORD *)(a3 + 4LL * v24);
      v25 = v24 + 1;
      if ( (unsigned int)v25 < a2 )
      {
        v26 = v24 + 2;
        *(_DWORD *)(v17 + 4 * v25) = *(_DWORD *)(a3 + 4 * v25);
        if ( (unsigned int)v26 < a2 )
          *(_DWORD *)(v17 + 4 * v26) = *(_DWORD *)(a3 + 4 * v26);
      }
    }
  }
  *(_QWORD *)(v14 + 24) = v20;
  *(_QWORD *)(v14 + 32) = v15;
  if ( a4 )
  {
LABEL_14:
    v27 = 0;
    v28 = v14;
    v40 = 4 * v11;
    v29 = a6;
    while ( 1 )
    {
      v31 = v15 + 8 * v27;
      *(_DWORD *)(v20 + v27) = *(_DWORD *)(a5 + v27);
      *(_QWORD *)v31 = 0;
      v32 = qword_1C7F2C0;
      *(_QWORD *)(v31 + 8) = 0;
      *(_QWORD *)(v31 + 16) = 1;
      *(_QWORD *)(v31 + 24) = 0;
      if ( (*(_BYTE *)(v29 + 4) & 1) != 0 )
      {
        sub_182C690(v32, v15 + 8 * v27, v29);
        if ( (*(_BYTE *)(v29 + 20) & 1) == 0 )
        {
LABEL_16:
          v30 = *(_DWORD *)(v29 + 16);
          v27 += 4;
          *(_BYTE *)(v31 + 20) &= ~1u;
          v29 += 32;
          *(_DWORD *)(v31 + 16) = v30;
          if ( v40 == v27 )
            goto LABEL_21;
          goto LABEL_17;
        }
      }
      else
      {
        *(_DWORD *)v31 = *(_DWORD *)v29;
        if ( (*(_BYTE *)(v29 + 20) & 1) == 0 )
          goto LABEL_16;
      }
      v33 = v29 + 16;
      v27 += 4;
      v29 += 32;
      sub_182C690(v32, v31 + 16, v33);
      if ( v40 == v27 )
      {
LABEL_21:
        v14 = v28;
        v13 = a7;
        break;
      }
LABEL_17:
      v20 = *(_QWORD *)(v28 + 24);
      v15 = *(_QWORD *)(v28 + 32);
    }
  }
LABEL_22:
  v34 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v13 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v14 + 40, v13);
  }
  else
  {
    v35 = *(_DWORD *)v13;
    *(_BYTE *)(v14 + 44) &= ~1u;
    *(_DWORD *)(v14 + 40) = v35;
  }
  if ( (*(_BYTE *)(v13 + 20) & 1) != 0 )
  {
    sub_182C690(v34, v14 + 56, v13 + 16);
  }
  else
  {
    v36 = *(_DWORD *)(v13 + 16);
    *(_BYTE *)(v14 + 60) &= ~1u;
    *(_DWORD *)(v14 + 56) = v36;
  }
  *(_QWORD *)(v14 + 72) = a9;
  if ( a9 )
    *a9 = (*a9 + 1) & 0x3FFFFFFF | *a9 & 0xC0000000;
  return v14;
}

