__int64 __fastcall sub_118020(_BYTE *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v6; // eax
  _BOOL4 v7; // r11d
  unsigned __int64 v8; // r13
  __int64 v9; // rbp
  char v11; // cl
  int v12; // r8d
  unsigned int v13; // ebx
  int v14; // esi
  int v15; // ecx
  int v16; // r10d
  int v17; // r11d
  unsigned int v18; // r12d
  int v19; // ebp
  int v20; // r15d
  int v21; // r14d
  int v22; // r11d
  unsigned int v23; // r11d
  int v24; // r12d
  unsigned int v25; // eax
  int v26; // r14d
  int v27; // ebp
  int v29; // eax
  int v30; // ecx
  _BYTE *v31; // [rsp+0h] [rbp-40h]
  _BYTE *v32; // [rsp+8h] [rbp-38h]

  v6 = a5 - 5;
  v7 = 0;
  v8 = (unsigned __int64)&a1[a2 - 2];
  v9 = 0;
  v11 = a5;
  v12 = a5 + 1;
  v13 = a4 + 1;
  v31 = &a1[a2];
  v32 = a1;
  v14 = 1 << v11;
  v15 = 4;
  v16 = v14 + 1;
  while ( (unsigned int)v9 < v13 && v16 > 1 )
  {
    if ( v7 )
    {
      v23 = v9;
      do
      {
        if ( *(_WORD *)(a3 + 2LL * v23) )
          break;
        ++v23;
      }
      while ( v13 > v23 );
      if ( v13 == v23 )
        return -1;
      v24 = v9 + 24;
      if ( (int)v9 + 24 <= v23 )
      {
        while ( 1 )
        {
          v25 = (0xFFFF << v15) + v6;
          if ( !a6 && (unsigned __int64)a1 > v8 )
            return -70;
          *a1 = v25;
          a1 += 2;
          *(a1 - 1) = BYTE1(v25);
          v6 = HIWORD(v25);
          if ( v23 < v24 + 24 )
            goto LABEL_25;
          v24 += 24;
        }
      }
      v24 = v9;
LABEL_25:
      v26 = v24 + 3;
      if ( v24 + 3 <= v23 )
      {
        while ( 1 )
        {
          v27 = 3 << v15;
          v15 += 2;
          v6 += v27;
          if ( v23 < v26 + 3 )
            break;
          v26 += 3;
        }
      }
      else
      {
        v26 = v24;
      }
      v6 += (v23 - v26) << v15;
      if ( v15 + 2 <= 16 )
      {
        v9 = v23;
        v15 += 2;
      }
      else
      {
        if ( !a6 && (unsigned __int64)a1 > v8 )
          return -70;
        *(_WORD *)a1 = v6;
        v15 -= 14;
        a1 += 2;
        v6 >>= 16;
        v9 = v23;
      }
    }
    v17 = *(__int16 *)(a3 + 2 * v9);
    v18 = v9 + 1;
    v19 = ~v16 + 2 * v14;
    v20 = v17 >> 31;
    v21 = v17 ^ (v17 >> 31);
    v22 = v17 + 1;
    v16 -= v21 - v20;
    if ( v14 <= v22 )
      v22 += v19;
    v6 += v22 << v15;
    v15 = v12 + v15 - (v22 < v19);
    v7 = v22 == 1;
    if ( v16 <= 0 )
      return -1;
    for ( ; v16 < v14; --v12 )
      v14 >>= 1;
    if ( v15 > 16 )
    {
      if ( !a6 && (unsigned __int64)a1 > v8 )
        return -70;
      *(_WORD *)a1 = v6;
      v15 -= 16;
      a1 += 2;
      v6 >>= 16;
    }
    v9 = v18;
  }
  if ( v16 != 1 )
    return -1;
  if ( !a6 && a1 > v31 - 2 )
    return -70;
  *(_WORD *)a1 = v6;
  v29 = v15 + 14;
  v30 = v15 + 7;
  if ( v30 >= 0 )
    v29 = v30;
  return &a1[v29 >> 3] - v32;
}

