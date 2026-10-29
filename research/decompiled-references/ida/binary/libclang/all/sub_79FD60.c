unsigned __int64 __fastcall sub_79FD60(unsigned __int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  int v9; // r9d
  unsigned int v10; // edx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rdx
  int v15; // eax
  int v16; // eax
  _QWORD **v17; // r12
  _BYTE *v18; // r13
  _QWORD *v19; // rsi
  int v20; // r10d
  __int64 v21; // rax
  _BYTE *v22; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+8h] [rbp-40h]
  _BYTE v24[56]; // [rsp+10h] [rbp-38h] BYREF

  while ( 1 )
  {
    v4 = *(_BYTE *)(a1 + 8) & 0x7F;
    if ( v4 != 4 )
      break;
LABEL_5:
    v6 = *(_QWORD *)(a1 - 24);
    a1 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 4) != 0 )
      a1 = *(_QWORD *)a1;
  }
  while ( 1 )
  {
    if ( v4 == 6 )
      goto LABEL_5;
    v5 = sub_79CC40(a1);
    if ( a1 == v5 )
      break;
    a1 = v5;
    v4 = *(_BYTE *)(v5 + 8) & 0x7F;
    if ( v4 == 4 )
      goto LABEL_5;
  }
  if ( (*(_BYTE *)(a1 + 9) & 4) != 0 )
  {
    v22 = v24;
    v23 = 0x200000000LL;
    sub_79DDC0(a1, (__int64)&v22);
    v17 = (_QWORD **)v22;
    v18 = &v22[8 * (unsigned int)v23];
    if ( v22 != v18 )
    {
      do
      {
        v19 = *v17++;
        sub_79FBA0(a1, v19, *(_BYTE *)(a1 + 9) & 1);
      }
      while ( v18 != (_BYTE *)v17 );
      v18 = v22;
    }
    *(_BYTE *)(a1 + 9) &= ~4u;
    if ( v18 != v24 )
      free(v18);
  }
  v7 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v8 = v7 + 8;
    v9 = 3;
    v10 = ((unsigned __int8)((unsigned int)a2 >> 4) ^ (unsigned __int8)((unsigned int)a2 >> 9)) & 3;
    v11 = (__int64 *)(v7
                    + 8
                    + 16LL * (((unsigned __int8)((unsigned int)a2 >> 4) ^ (unsigned __int8)((unsigned int)a2 >> 9)) & 3));
    v12 = *v11;
    if ( a2 == *v11 )
    {
LABEL_11:
      v13 = (__int64 *)(v8 + 64);
      goto LABEL_12;
    }
LABEL_14:
    v15 = 1;
    while ( v12 != -1 )
    {
      v20 = v15 + 1;
      v21 = v9 & (v10 + v15);
      v10 = v21;
      v11 = (__int64 *)(v8 + 16 * v21);
      v12 = *v11;
      if ( a2 == *v11 )
      {
        if ( (*(_BYTE *)v7 & 1) == 0 )
          goto LABEL_19;
        goto LABEL_11;
      }
      v15 = v20;
    }
    return 0;
  }
  v16 = *(_DWORD *)(v7 + 16);
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v16 )
    return 0;
  v9 = v16 - 1;
  v10 = (v16 - 1) & (((unsigned int)a2 >> 4) ^ ((unsigned int)a2 >> 9));
  v11 = (__int64 *)(v8 + 16LL * v10);
  v12 = *v11;
  if ( a2 != *v11 )
    goto LABEL_14;
LABEL_19:
  v13 = (__int64 *)(v8 + 16LL * *(unsigned int *)(v7 + 16));
LABEL_12:
  if ( v11 != v13 )
    return v11[1] & 0xFFFFFFFFFFFFFFFCLL;
  return 0;
}

