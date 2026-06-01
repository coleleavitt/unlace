_QWORD *__fastcall sub_111EA0(
        unsigned __int64 *a1,
        __int16 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  unsigned int v9; // r14d
  _QWORD *result; // rax
  __int64 v11; // rdi
  unsigned int v12; // r15d
  __int64 v13; // rcx
  char v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rbp
  unsigned int v17; // ecx
  bool v18; // cc
  __int64 v19; // r11
  __int16 v20; // r11
  __int64 v21; // r11
  __int64 v22; // r11
  unsigned int v23; // edx
  int v24; // ebp
  int i; // ebx
  unsigned __int8 *v26; // rcx
  __int64 v27; // rdx
  int v28; // r12d
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r11
  __int64 v32; // rdi
  _WORD *v33; // rcx
  unsigned int v34; // edx
  __int64 v35; // rbp
  __int64 v36; // r11
  __int64 v37; // rbx
  __int16 *v38; // rdi
  __int64 v39; // rcx
  int v40; // edx
  __int64 v41; // r15
  __int64 v43; // [rsp+8h] [rbp-58h]
  __int64 v45; // [rsp+18h] [rbp-48h]
  __int64 v46; // [rsp+18h] [rbp-48h]
  __int64 v47; // [rsp+28h] [rbp-38h]

  if ( a9 )
    return sub_10B820(a1, a2, a3, a4, a5, a6, a7);
  v9 = 1 << a6;
  v47 = a7 + 106;
  result = a1 + 1;
  v11 = (unsigned int)((1 << a6) - 1);
  v45 = (a6 << 32) | 1;
  v12 = ((unsigned int)(1 << a6) >> 1) + ((unsigned int)(1 << a6) >> 3) + 3;
  if ( a3 == -1 )
  {
    v35 = (unsigned int)v11;
    *a1 = (a6 << 32) | 1;
    v46 = v12;
    goto LABEL_22;
  }
  v13 = a3;
  v14 = 0;
  v15 = 0;
  v16 = 1;
  v43 = v13;
  v17 = (1 << a6) - 1;
  while ( 1 )
  {
    v20 = a2[v15];
    if ( v20 != -1 )
      break;
    v21 = v17--;
    HIDWORD(result[v21]) = v15;
    *(_WORD *)(a7 + 2 * v15) = 1;
    v19 = v15 + 1;
    if ( v43 == v15 )
      goto LABEL_10;
LABEL_7:
    v15 = v19;
  }
  v18 = (__int16)(1 << (a6 - 1)) <= v20;
  *(_WORD *)(a7 + 2 * v15) = v20;
  v19 = v15 + 1;
  if ( v18 )
  {
    v14 = 1;
    v16 = 0;
  }
  if ( v43 != v15 )
    goto LABEL_7;
LABEL_10:
  if ( v14 )
    v45 = v16 | (a6 << 32);
  *a1 = v45;
  if ( (_DWORD)v11 != v17 )
  {
    v22 = 0;
    v23 = 0;
    while ( 1 )
    {
      v24 = a2[v22];
      if ( v24 > 0 )
      {
        for ( i = 0; i != v24; ++i )
        {
          HIDWORD(result[v23]) = v22;
          do
            v23 = v11 & (v12 + v23);
          while ( v23 > v17 );
        }
      }
      if ( v43 == v22 )
        break;
      ++v22;
    }
LABEL_25:
    if ( v9 )
    {
      v31 = (__int64)&a1[v11 + 2];
      do
      {
        v32 = *((unsigned int *)result++ + 1);
        v33 = (_WORD *)(a7 + 2 * v32);
        v34 = (unsigned __int16)*v33;
        *v33 = v34 + 1;
        _BitScanReverse((unsigned int *)&v33, v34);
        LOBYTE(v33) = a6 + ((unsigned __int8)v33 ^ 0x1F) - 31;
        *((_BYTE *)result - 5) = (_BYTE)v33;
        *((_WORD *)result - 4) = (v34 << (char)v33) - v9;
        *((_BYTE *)result - 6) = *(_BYTE *)(a5 + v32);
        *((_DWORD *)result - 1) = *(_DWORD *)(a4 + 4 * v32);
      }
      while ( (_QWORD *)v31 != result );
    }
    return result;
  }
  v35 = (unsigned int)v11;
  v46 = v12;
  v36 = 0;
  v37 = 0;
  v38 = &a2[v43];
  while ( 1 )
  {
    v39 = *a2;
    v40 = 8;
    for ( *(_QWORD *)(v47 + v36) = v37; (int)v39 > v40; *(_QWORD *)(v47 + v36 + v41) = v37 )
    {
      v41 = v40;
      v40 += 8;
    }
    v36 += v39;
    v37 += 0x101010101010101LL;
    if ( v38 == a2 )
      break;
    ++a2;
  }
  v11 = (unsigned int)((1 << a6) - 1);
LABEL_22:
  if ( v9 )
  {
    v26 = (unsigned __int8 *)(a7 + 106);
    v27 = 0;
    do
    {
      v28 = *v26;
      v26 += 2;
      v29 = v27 & v35;
      v30 = v46 + v27;
      HIDWORD(result[v29]) = v28;
      HIDWORD(result[v30 & v35]) = *(v26 - 1);
      v27 = v35 & (v46 + v30);
    }
    while ( (unsigned __int8 *)(a7 + ((v9 - 1LL) & 0xFFFFFFFFFFFFFFFELL) + 108) != v26 );
    goto LABEL_25;
  }
  return result;
}

