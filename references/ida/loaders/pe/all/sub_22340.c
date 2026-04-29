__int64 __fastcall sub_22340(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rsi
  unsigned __int64 v8; // r10
  _DWORD *v9; // r12
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  _DWORD *v12; // rax
  char v13; // di
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // cf
  __int64 v19; // r13
  unsigned __int8 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // zf
  unsigned __int8 *v24; // rbp
  unsigned __int8 v25; // al
  _BYTE *v26; // r15
  unsigned int v27; // r14d
  int v28; // eax
  char v29; // [rsp+0h] [rbp-48h]
  unsigned int i; // [rsp+Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a1 + 24);
  if ( (int)v3 <= 0 )
  {
LABEL_26:
    v4 = 0;
  }
  else
  {
    v4 = *(unsigned int **)(a1 + 16);
    v5 = (__int64)&v4[11 * (unsigned int)(v3 - 1) + 11];
    while ( v4[10] != 5 )
    {
      v4 += 11;
      if ( (unsigned int *)v5 == v4 )
        goto LABEL_26;
    }
  }
  v6 = *(_QWORD *)a1;
  v7 = *v4 + a2;
  if ( (unsigned __int64)(v7 + 6) < *(_QWORD *)a1 )
    return 0;
  v8 = v6 + *(_QWORD *)(a1 + 8);
  if ( v8 < v7 + 7 )
    return 0;
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(v7 + 6);
  if ( v7 + 8 < v6 )
    return 0;
  if ( v8 < v7 + 16 )
    return 0;
  if ( v7 + 16 < v6 )
    return 0;
  v9 = (_DWORD *)(v7 + 24);
  if ( v8 < v7 + 24 )
    return 0;
  v10 = *(_QWORD *)(v7 + 8);
  v11 = *(_QWORD *)(v7 + 16);
  v12 = (_DWORD *)(a1 + 76);
  v13 = 0;
  do
  {
    *((_BYTE *)v12 - 4) = v10;
    v14 = v10 & 1;
    *((_BYTE *)v12 - 3) = v11;
    *((_BYTE *)v12 - 4) &= 1u;
    v13 += v14;
    *((_BYTE *)v12 - 3) &= 1u;
    if ( (v10 & 1) != 0 )
    {
      if ( (unsigned __int64)v9 < v6 )
        return 0;
      v14 = (unsigned __int64)(v9 + 1);
      if ( v8 < (unsigned __int64)(v9 + 1) )
        return 0;
      if ( v12 )
        *v12 = *v9;
      ++v9;
    }
    else
    {
      *v12 = 0;
    }
    v10 >>= 1;
    v12 += 10;
    v11 >>= 1;
  }
  while ( v12 != (_DWORD *)(a1 + 1876) );
  *(_BYTE *)(a1 + 65) = v13;
  v19 = a1 + 81;
  for ( i = 0; i != 45; ++i )
  {
    v20 = (unsigned __int8 *)sub_28F60(i, v14, v10, v11);
    v23 = *(_BYTE *)(v19 - 9) == 0;
    *(_QWORD *)(v19 + 23) = v20;
    v24 = v20;
    if ( !v23 )
    {
      v25 = *v20;
      if ( v25 == 0x8A )
      {
        v15 = *(_QWORD *)a1;
        if ( (unsigned __int64)v9 < *(_QWORD *)a1 )
          return 0;
        v11 = (unsigned __int64)v9;
        LOBYTE(v27) = 0;
      }
      else
      {
        v26 = (_BYTE *)v19;
        v27 = 0;
        do
        {
          if ( v25 > 0x2Cu )
            v28 = sub_220A0(a1, v25, v10, v11, v21, v22, v29);
          else
            v28 = sub_21F90(a1, 0, 1, v25, v21, v22, v29);
          ++v24;
          *v26 = v28;
          v27 += v28;
          ++v26;
          v25 = *v24;
        }
        while ( *v24 != 0x8A );
        v14 = *(unsigned int *)(v19 - 5);
        if ( v27 )
        {
          if ( (_DWORD)v14 )
          {
            LODWORD(v10) = ((unsigned int)v14 * (unsigned __int64)v27) >> 32;
            if ( !is_mul_ok(v14, v27) )
              return 0;
          }
        }
        v15 = *(_QWORD *)a1;
        if ( (unsigned __int64)v9 < *(_QWORD *)a1 )
          return 0;
        v16 = (unsigned int)v14 * v27;
        v17 = __CFADD__(v9, v16);
        v11 = (unsigned __int64)v9 + v16;
        if ( v17 )
          return 0;
      }
      if ( *(_QWORD *)(a1 + 8) + v15 < v11 )
        return 0;
      *(_QWORD *)(v19 + 15) = v9;
      v9 = (_DWORD *)v11;
      *(_BYTE *)(v19 - 1) = v27;
    }
    v19 += 40;
  }
  return 1;
}
