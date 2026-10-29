__int64 __fastcall sub_BD5A80(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        char a9,
        int a10,
        __int64 a11,
        unsigned int a12,
        char a13)
{
  __int64 v13; // r11
  char v15; // cl
  unsigned int v16; // r10d
  __int16 v17; // si
  unsigned __int8 v18; // al
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  __int64 i; // rdx
  unsigned int j; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  __int64 result; // rax
  unsigned int v30; // [rsp+8h] [rbp-50h]
  __int64 v31; // [rsp+10h] [rbp-48h]

  v13 = a3;
  v15 = a13;
  *(_WORD *)a1 = a2 & 0x1FF | *(_WORD *)a1 & 0xFE00;
  if ( unk_2CAD564 )
  {
    v31 = a6;
    v30 = a5;
    sub_EC5E10(a2);
    v15 = a13;
    a6 = v31;
    a5 = v30;
    v13 = a3;
  }
  v16 = a12;
  *(_QWORD *)(a1 + 8) = a6;
  *(_QWORD *)(a1 + 32) = v13;
  *(_BYTE *)(a1 + 1) = (2 * (a9 & 3)) | *(_BYTE *)(a1 + 1) & 0xF9;
  v17 = *(_WORD *)(a1 + 1) & 0xF807;
  *(_DWORD *)(a1 + 20) = a10;
  if ( (unsigned int)a8 >= a12 )
    v16 = a8;
  *(_WORD *)(a1 + 1) = v17;
  v18 = a5 & 1;
  *(_DWORD *)(a1 + 16) = v16;
  *(_BYTE *)(a1 + 2) = (16 * (v15 & 1)) | (8 * (a5 & 1)) & 0xEF | HIBYTE(v17) & 0xE7;
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      v20 = 0;
    }
    else
    {
      v19 = 0;
      do
      {
        *(__m128i *)(a1 + v19 + 40) = _mm_loadu_si128((const __m128i *)(a4 + v19));
        v19 += 16;
      }
      while ( 16LL * (a5 >> 1) != v19 );
      v20 = a5 & 0xFFFFFFFE;
      if ( (_DWORD)v20 == a5 )
        goto LABEL_11;
    }
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v20 + 1) + 32) = *(_QWORD *)(a4 + 8 * v20);
LABEL_11:
    v18 = (*(_BYTE *)(a1 + 2) & 8) != 0;
  }
  if ( a8 )
  {
    v21 = 1;
    *(_QWORD *)(a1 + 8LL * v18 + 40) = *a7;
    for ( i = 1; v21 != a8; i = (unsigned int)++v21 )
      *(_QWORD *)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 8 * i + 32) = a7[i];
    v18 = (*(_BYTE *)(a1 + 2) & 8) != 0;
  }
  if ( (_DWORD)a8 != *(_DWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 8LL * v18 + 8 + 8LL * (unsigned int)a8 + 32) = 0;
    for ( j = a8 + 1; *(_DWORD *)(a1 + 16) != j; *(_QWORD *)(a1 + 8 * (v24 + ((*(_BYTE *)(a1 + 2) & 8) != 0)) + 40) = 0 )
      v24 = j++;
    v18 = (*(_BYTE *)(a1 + 2) & 8) != 0;
  }
  v25 = sub_B40660(a1, (_DWORD **)(a1 + 40), v18);
  v26 = v25 << 6;
  *(_BYTE *)(a1 + 1) = ((_BYTE)v25 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  v27 = ((unsigned __int8)v25 >> 2) & 7;
  LOBYTE(v26) = HIDWORD(a11) != 0;
  v26 *= 32;
  result = v26 | v27 | *(_BYTE *)(a1 + 2) & 0xD8u;
  *(_BYTE *)(a1 + 2) = v26 | v27 | *(_BYTE *)(a1 + 2) & 0xD8;
  *(_WORD *)(a1 + 2) &= 0xFE3Fu;
  if ( (*(_DWORD *)a1 & 0x200000) != 0 )
  {
    result = a1 + 8 * (*(_DWORD *)(a1 + 16) + (unsigned int)((*(_BYTE *)(a1 + 2) & 8) != 0) + 1) + 32;
    *(_QWORD *)result = a11;
  }
  return result;
}

