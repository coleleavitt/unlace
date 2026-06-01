__int64 __fastcall sub_B5D9A0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v7; // rbx
  char v8; // r9
  unsigned int v9; // edi
  __int64 v10; // r8
  unsigned int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rax
  __int64 *v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 *i; // rax
  __int64 v26; // rcx
  __int64 *v27; // rax
  unsigned int v28; // r12d
  __int64 v29; // r8
  __int64 v30; // r9
  _BYTE *v31; // rax
  _QWORD *v32; // rax
  int v33; // edx
  __int64 v34; // rdx
  unsigned int v35; // esi
  __int64 v36; // rcx
  unsigned __int64 v37; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+8h] [rbp-50h] BYREF
  __m128 v39[4]; // [rsp+10h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v22 = sub_B68690(a2);
  v23 = *(__int64 **)v22;
  v24 = *(_QWORD *)v22 + 8LL * *(unsigned int *)(v22 + 8);
  if ( *(_QWORD *)v22 >= v24 )
  {
    if ( v23 == (__int64 *)v24 )
      goto LABEL_2;
    if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 238 )
    {
      for ( i = (__int64 *)(v24 + 8); v23 != i; ++i )
      {
        v26 = *i;
        if ( *(_WORD *)(v26 + 36) == 238 )
          return 18;
      }
      goto LABEL_2;
    }
    return 18;
  }
  v27 = *(__int64 **)v22;
  while ( *(_WORD *)(*v27 + 36) != 238 )
  {
    if ( (__int64 *)v24 == ++v27 )
      goto LABEL_2;
  }
  if ( (__int64 *)v24 != v27 )
    return 18;
LABEL_2:
  if ( (a3 & 4) != 0 && (*(_BYTE *)(a2 + 32) & 7) != 0 )
    return *(_BYTE *)(a2 + 32) & 7 | 0x10u;
  v7 = a2 & 0xFFFFFFFFFFFFFFF8LL | (2 * ((a3 >> 1) & 1 | (2 * (a3 & 1)))) | (a3 >> 2) & 1;
  v8 = *(_BYTE *)a1 & 1;
  if ( !v8 )
  {
    v9 = *(_DWORD *)(a1 + 16);
    v10 = *(_QWORD *)(a1 + 8);
    v11 = v9;
    if ( !v9 )
      goto LABEL_44;
    v12 = v9 - 1;
    v13 = (v9 - 1) & (v7 ^ (v7 >> 9));
    v14 = (__int64 *)(v10 + 16LL * v13);
    if ( *v14 == v7 )
    {
LABEL_8:
      v15 = 16LL * v11;
LABEL_9:
      sub_B57E70(v39, v14, (__int64 *)(v10 + v15), a1, 1);
      v16 = v39[0].m128_u64[0];
      goto LABEL_10;
    }
    if ( *v14 == -1 )
    {
LABEL_44:
      v20 = 16LL * v9;
      goto LABEL_45;
    }
LABEL_16:
    v21 = 1;
    do
    {
      v13 = v12 & (v21 + v13);
      v14 = (__int64 *)(v10 + 16LL * v13);
      if ( v7 == *v14 )
      {
        if ( !v8 )
        {
          v11 = *(_DWORD *)(a1 + 16);
          goto LABEL_8;
        }
        v15 = 128;
        goto LABEL_9;
      }
      ++v21;
    }
    while ( *v14 != -1 );
    if ( !v8 )
    {
      v9 = *(_DWORD *)(a1 + 16);
      goto LABEL_44;
    }
    v20 = 128;
    goto LABEL_45;
  }
  v10 = a1 + 8;
  v15 = 128;
  v13 = ((unsigned __int8)v7 ^ (unsigned __int8)(v7 >> 9)) & 7;
  v14 = (__int64 *)(a1 + 8 + 16LL * (((unsigned __int8)v7 ^ (unsigned __int8)(v7 >> 9)) & 7));
  v19 = *v14;
  if ( v7 == *v14 )
    goto LABEL_9;
  v20 = 128;
  v12 = 7;
  if ( v19 != -1 )
    goto LABEL_16;
LABEL_45:
  sub_B57E70(v39, (__int64 *)(v10 + v20), (__int64 *)(v10 + v20), a1, 1);
  v16 = v39[0].m128_u64[0];
LABEL_10:
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v17 = a1 + 8;
    v18 = 128;
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 8);
    v18 = 16LL * *(unsigned int *)(a1 + 16);
  }
  sub_B57E70(v39, (__int64 *)(v17 + v18), (__int64 *)(v17 + v18), a1, 1);
  if ( v39[0].m128_u64[0] != v16 )
    return *(unsigned __int8 *)(v16 + 8);
  v37 = a2 & 0xFFFFFFFFFFFFFFF8LL | (2 * ((a3 >> 1) & 1 | (2 * (a3 & 1)))) | (a3 >> 2) & 1;
  v28 = sub_B60000(a1, a2, a3, 0);
  *(_BYTE *)(a2 + 32) = v28 & 7 | *(_BYTE *)(a2 + 32) & 0xF8;
  if ( !(unsigned __int8)sub_B57D70(a1, &v37, &v38) )
  {
    v32 = (_QWORD *)v38;
    v33 = *(_DWORD *)a1 >> 1;
    v39[0].m128_u64[0] = v38;
    v34 = (unsigned int)(v33 + 1);
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v36 = 24;
      v35 = 8;
    }
    else
    {
      v35 = *(_DWORD *)(a1 + 16);
      v36 = 3 * v35;
    }
    if ( 4 * (int)v34 >= (unsigned int)v36 )
    {
      v35 *= 2;
    }
    else
    {
      v36 = v35 >> 3;
      if ( v35 - ((_DWORD)v34 + *(_DWORD *)(a1 + 4)) > (unsigned int)v36 )
      {
LABEL_40:
        *(_DWORD *)a1 = *(_DWORD *)a1 & 1 | (2 * v34);
        if ( *v32 != -1 )
          --*(_DWORD *)(a1 + 4);
        v31 = v32 + 1;
        *((_QWORD *)v31 - 1) = v37;
        *v31 = *v31 & 0xC0 | 0x16;
        goto LABEL_35;
      }
    }
    sub_B5D3F0(a1, v35, v34, v36, v29, v30);
    sub_B57D70(a1, &v37, v39);
    v32 = (_QWORD *)v39[0].m128_u64[0];
    LODWORD(v34) = (*(_DWORD *)a1 >> 1) + 1;
    goto LABEL_40;
  }
  v31 = (_BYTE *)(v38 + 8);
LABEL_35:
  *v31 = v28;
  return v28;
}

