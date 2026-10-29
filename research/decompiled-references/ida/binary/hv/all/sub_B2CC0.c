__int64 __fastcall sub_B2CC0(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int16 *a7,
        __int64 a8,
        char a9,
        int a10,
        unsigned int a11)
{
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  unsigned int i; // edx
  int v19; // eax
  int v20; // r15d
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rax
  unsigned int v23; // esi
  unsigned int v24; // r9d
  __int64 v25; // rdi
  int v26; // ecx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // [rsp+Ch] [rbp-3Ch]

  if ( a4 == a5 )
  {
    *a1 = 0;
    return a4 > 2 || a10 == 0;
  }
  if ( a11 <= 3 )
  {
    if ( a10 )
    {
      if ( *a1 != 2 || a5 > 0x3E7 )
      {
        if ( a5 >= (unsigned __int64)(10 - a11) << a9 >> 3 && a5 >> (a9 - 1) <= a4 )
          goto LABEL_8;
        goto LABEL_28;
      }
      return 3;
    }
LABEL_8:
    *a1 = 1;
    return 2;
  }
  v16 = -1;
  if ( a10 )
  {
    v17 = 0;
    for ( i = 0; i <= a3; ++i )
    {
      v19 = *(__int16 *)(a8 + 2LL * i);
      v20 = *(_DWORD *)(a2 + 4LL * i);
      if ( *(_WORD *)(a8 + 2LL * i) == 0xFFFF )
        v19 = 1;
      v17 += (unsigned int)(*((_DWORD *)qword_135220 + (unsigned int)(v19 << (8 - a9))) * v20);
    }
    v16 = v17 >> 8;
  }
  v21 = -1;
  if ( *a1 )
  {
    v31 = a6;
    v30 = sub_B2B80(a7, a2, a3);
    a6 = v31;
    v21 = v30;
  }
  v22 = sub_B2480(a2, a3, a5, a6);
  v23 = 0;
  v24 = 0;
  v25 = 8 * v22;
  do
  {
    while ( 1 )
    {
      v26 = *(_DWORD *)(a2 + 4LL * v24);
      v27 = (unsigned int)(v26 << 8);
      if ( a5 <= v27 || !v26 )
        break;
      ++v24;
      v23 += v26 << 11;
      if ( a3 < v24 )
        goto LABEL_22;
    }
    ++v24;
    v23 += *((_DWORD *)qword_135220 + v27 / a5) * v26;
  }
  while ( a3 >= v24 );
LABEL_22:
  v28 = (v23 >> 8) + v25;
  v29 = v28;
  if ( v21 <= v28 )
    v29 = v21;
  if ( v16 > v29 )
  {
    if ( v21 <= v28 )
      return 3;
    goto LABEL_8;
  }
LABEL_28:
  *a1 = 0;
  return 0;
}

