__int64 __fastcall sub_8DD1F0(int *a1, __int16 *a2, unsigned int a3, unsigned int a4, __int64 a5, unsigned __int64 a6)
{
  char v6; // bl
  unsigned __int64 v7; // rax
  bool v8; // cf
  bool v9; // zf
  __int64 result; // rax
  bool v11; // bp
  __int64 v12; // r10
  int *v13; // r9
  int v14; // r14d
  int v15; // r12d
  unsigned int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // eax
  bool v19; // cc
  __int64 v20; // r11
  signed __int16 v21; // r11
  __int64 v22; // r11
  unsigned int v23; // r10d
  int i; // r12d
  int j; // r11d
  __int64 v26; // r14
  __int64 v27; // rax
  _WORD *v28; // rdx
  unsigned int v29; // ecx
  __int64 v30; // r10
  __int64 v31; // r15
  __int64 v32; // r12
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  _BYTE *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  int v41; // [rsp+Ch] [rbp-4Ch]
  int v42; // [rsp+10h] [rbp-48h]
  __int64 v43; // [rsp+10h] [rbp-48h]
  _BYTE *v44; // [rsp+18h] [rbp-40h]
  unsigned __int16 v45; // [rsp+24h] [rbp-34h]

  v6 = a4;
  v7 = (1LL << a4) + 2LL * (a3 + 1) + 8;
  v8 = v7 < a6;
  v9 = v7 == a6;
  result = -46;
  v11 = a3 > 0xFF || !v8 && !v9;
  if ( v11 )
    return result;
  result = -44;
  if ( a4 > 0xC )
    return result;
  v12 = 0;
  v44 = (_BYTE *)(a5 + 2 * (a3 + 1LL));
  v13 = a1 + 1;
  v14 = 1;
  v15 = 1 << (a4 - 1);
  v16 = (1 << a4) - 1;
  v41 = 1 << a4;
  v45 = a4;
  v42 = (unsigned __int16)a4 | 0x10000;
  v17 = ((unsigned int)(1 << a4) >> 1) + ((unsigned int)(1 << a4) >> 3) + 3;
  v18 = (1 << v6) - 1;
  while ( 1 )
  {
    v21 = a2[v12];
    if ( v21 != -1 )
      break;
    v22 = v18--;
    BYTE2(v13[v22]) = v12;
    v20 = v12 + 1;
    *(_WORD *)(a5 + 2 * v12) = 1;
    if ( a3 == v12 )
      goto LABEL_10;
LABEL_7:
    v12 = v20;
  }
  v19 = v21 < (signed __int16)v15;
  *(_WORD *)(a5 + 2 * v12) = v21;
  v20 = v12 + 1;
  if ( !v19 )
  {
    v11 = 1;
    v14 = 0;
  }
  if ( a3 != v12 )
    goto LABEL_7;
LABEL_10:
  if ( v11 )
    v42 = (v14 << 16) | v45;
  *a1 = v42;
  if ( v18 == v16 )
  {
    v43 = ((unsigned int)(1 << v6) >> 1) + ((unsigned int)(1 << v6) >> 3) + 3;
    v26 = v18;
    v30 = 0;
    v31 = (__int64)&a2[a3 + 1];
    v32 = 0;
    do
    {
      v33 = *a2;
      v34 = 8;
      for ( *(_QWORD *)&v44[v32] = v30; (int)v33 > v34; *(_QWORD *)&v44[v32 + v35] = v30 )
      {
        v35 = v34;
        v34 += 8;
      }
      ++a2;
      v32 += v33;
      v30 += 0x101010101010101LL;
    }
    while ( (__int16 *)v31 != a2 );
    v36 = v44;
    v37 = 0;
    while ( 1 )
    {
      v38 = v37 & v26;
      v39 = v43 + v37;
      BYTE2(v13[v38]) = *v36;
      BYTE2(v13[v39 & v26]) = v36[1];
      v37 = v26 & (v43 + v39);
      if ( &v44[(v41 - 1LL) & 0xFFFFFFFFFFFFFFFELL] == v36 )
        break;
      v36 += 2;
    }
    do
    {
LABEL_21:
      v27 = *((unsigned __int8 *)v13++ + 2);
      v28 = (_WORD *)(a5 + 2 * v27);
      LODWORD(v27) = (unsigned __int16)*v28;
      *v28 = v27 + 1;
      _BitScanReverse(&v29, v27);
      LOBYTE(v29) = v6 + (v29 ^ 0x1F) - 31;
      *((_BYTE *)v13 - 1) = v29;
      *((_WORD *)v13 - 2) = ((_WORD)v27 << v29) - v41;
    }
    while ( &a1[v26 + 2] != v13 );
    return 0;
  }
  else
  {
    v23 = 0;
    for ( i = 0; ; ++i )
    {
      for ( j = 0; *a2 > j; ++j )
      {
        BYTE2(v13[v23]) = i;
        do
          v23 = v16 & (v17 + v23);
        while ( v18 < v23 );
      }
      ++a2;
      if ( a3 == i )
        break;
    }
    result = -1;
    v26 = v16;
    if ( !v23 )
      goto LABEL_21;
  }
  return result;
}

