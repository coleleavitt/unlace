void __fastcall sub_567030(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  int v9; // eax
  unsigned int v10; // r14d
  unsigned __int16 v11; // bx
  unsigned int v12; // edx
  __int64 v13; // rbx
  unsigned __int16 *v14; // r14
  unsigned __int16 *v15; // r12
  unsigned __int16 v16; // r13
  __int64 v17; // rax
  unsigned int v18; // ecx
  char *v19; // rdi
  unsigned int v20; // edx
  unsigned int v21; // ebp
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __m128i *v24; // rdx
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edx
  _QWORD *v29; // rax
  __int64 v30; // rax
  int v31; // eax
  unsigned int v32; // [rsp+0h] [rbp-34h] BYREF
  unsigned int v33; // [rsp+4h] [rbp-30h] BYREF
  _BYTE v34[44]; // [rsp+8h] [rbp-2Ch] BYREF

  if ( (*(_BYTE *)(a2 + 15) & 0x40) != 0 )
    return;
  v9 = *(_DWORD *)(a2 + 4);
  v10 = *(_DWORD *)(a1 + 80);
  v11 = v9;
  v12 = (unsigned __int16)v9;
  if ( v9 != 0xFFFF )
  {
LABEL_3:
    if ( v12 < *(_DWORD *)(a1 + 80) )
    {
      v13 = *(_QWORD *)(a1 + 72) + 16LL * v11;
      if ( v13 )
        goto LABEL_5;
LABEL_28:
      *(_BYTE *)(a2 + 15) |= 0x40u;
      return;
    }
    goto LABEL_33;
  }
  v25 = *(_DWORD *)(a1 + 108);
  if ( v25 && (_WORD)v10 )
  {
    v26 = *(_QWORD *)(a1 + 72);
    v11 = 0;
    while ( *(_DWORD *)(v26 + 8) != -1 )
    {
      ++v11;
      v26 += 16;
      if ( v11 == (_WORD)v10 )
        goto LABEL_25;
    }
    v12 = v11;
    *(_DWORD *)(v26 + 8) = 0;
    *(_DWORD *)(a1 + 108) = v25 - 1;
    *(_DWORD *)(a2 + 4) = v11;
    goto LABEL_3;
  }
LABEL_25:
  if ( v10 < *(_DWORD *)(a1 + 104) )
  {
    sub_55ECB0(a1 + 72, 16);
    v27 = *(unsigned int *)(a1 + 80);
    v28 = v27 + 1;
    v29 = (_QWORD *)(*(_QWORD *)(a1 + 72) + 16 * v27);
    *(_DWORD *)(a1 + 80) = v28;
    v12 = (unsigned __int16)v10;
    *v29 = 0;
    v29[1] = 0;
    *(_DWORD *)(a2 + 4) = (unsigned __int16)v10;
    if ( (unsigned __int16)v10 != 0xFFFF )
    {
      v11 = v10;
      goto LABEL_3;
    }
  }
  *(_BYTE *)(a1 + 207) = 1;
  if ( !(unsigned __int8)sub_566DA0(a1, &v32, &v33, (__int64)v34, nullptr) || v32 == -1 )
    goto LABEL_28;
  v30 = *(_QWORD *)(a1 + 40) + 16LL * v32;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v30 + 4);
  *(_DWORD *)(v30 + 4) = 0xFFFF;
  *(_BYTE *)(v30 + 15) |= 0x40u;
  v31 = *(_DWORD *)(a2 + 4);
  if ( (unsigned int)(unsigned __int16)v31 >= *(_DWORD *)(a1 + 80) )
LABEL_33:
    sub_55D1F0();
  v13 = *(_QWORD *)(a1 + 72) + 16LL * (unsigned __int16)v31;
  *(_DWORD *)(v13 + 8) = 0;
LABEL_5:
  v14 = (unsigned __int16 *)(a3 + 6);
  v15 = (unsigned __int16 *)(a3 + 12);
  do
  {
    v16 = *v14;
    if ( *v14 == 0xFFFF )
      break;
    v17 = *(unsigned int *)(v13 + 8);
    v18 = *(_DWORD *)(v13 + 12);
    v19 = *(char **)v13;
    v20 = v17 + 1;
    if ( v18 < (int)v17 + 1 )
    {
      v21 = 2 * v18;
      if ( 2 * v18 < v20 )
        v21 = v17 + 1;
      if ( v21 < 8 )
        v21 = 8;
      if ( v18 < v21 )
      {
        if ( v19 )
          v19 = (char *)off_8C52A8(v19, 40LL * v21);
        else
          v19 = (char *)off_8C52B8(40LL * v21);
        v17 = *(unsigned int *)(v13 + 8);
        *(_QWORD *)v13 = v19;
        *(_DWORD *)(v13 + 12) = v21;
        v20 = v17 + 1;
      }
    }
    v22 = _mm_loadu_si128((const __m128i *)&a7);
    *(_DWORD *)(v13 + 8) = v20;
    ++v14;
    v23 = _mm_loadu_si128((const __m128i *)&a8);
    v24 = (__m128i *)&v19[40 * v17];
    v24[2].m128i_i32[0] = v16;
    *v24 = v22;
    v24[1] = v23;
  }
  while ( v14 != v15 );
}
