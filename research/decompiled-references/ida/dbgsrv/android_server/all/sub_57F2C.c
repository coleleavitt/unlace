/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57F2C
// Address: 0x0000000000057F2C

//----- (0000000000057F2C) ----------------------------------------------------
void __fastcall sub_57F2C(__int64 a1, pthread_mutex_t *a2, unsigned __int64 a3)
{
  __int64 align; // x23
  __int64 v7; // x24
  __int64 v8; // x26
  __int64 v9; // x25
  __int64 v10; // x27
  int v11; // w8
  __int64 v12; // x28
  __int64 v13; // x29
  __int64 v14; // x22
  int v15; // w8
  __int64 *v16; // x8
  pthread_mutex_t v17; // [xsp+10h] [xbp-70h] BYREF

  *(&v17.__align + 1) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (unpack_xleb128(&v17, 64, 1, (_BYTE **)a1, *(_QWORD *)(a1 + 8)) & 1) == 0 )
    *(_BYTE *)(a1 + 20) = 0;
  align = v17.__align;
  sub_5B070(a2, a3);
  if ( !*(_BYTE *)(a1 + 20) )
    return;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
LABEL_5:
    if ( (unpack_xleb128(&v17, 64, 1, (_BYTE **)a1, *(_QWORD *)(a1 + 8)) & 1) == 0 )
      *(_BYTE *)(a1 + 20) = 0;
    v10 = v17.__align;
    if ( (unpack_xleb128(&v17, 64, 1, (_BYTE **)a1, *(_QWORD *)(a1 + 8)) & 1) == 0 )
      *(_BYTE *)(a1 + 20) = 0;
    LOBYTE(v11) = v17.__size[0];
    *(_DWORD *)(a1 + 16) = v17.__lock;
    if ( (v11 & 2) == 0 )
    {
      v12 = 0;
      if ( (v11 & 1) == 0 )
        goto LABEL_18;
LABEL_15:
      if ( (unpack_xleb128(&v17, 64, 1, (_BYTE **)a1, *(_QWORD *)(a1 + 8)) & 1) == 0 )
        *(_BYTE *)(a1 + 20) = 0;
      v8 = v17.__align;
      v11 = *(_DWORD *)(a1 + 16);
      goto LABEL_18;
    }
    if ( (unpack_xleb128(&v17, 64, 1, (_BYTE **)a1, *(_QWORD *)(a1 + 8)) & 1) == 0 )
      *(_BYTE *)(a1 + 20) = 0;
    v12 = v17.__align;
    v11 = *(_DWORD *)(a1 + 16);
    if ( (v11 & 1) != 0 )
      goto LABEL_15;
LABEL_18:
    if ( (~(_BYTE)v11 & 0xC) != 0 )
      break;
    if ( (unpack_xleb128(&v17, 64, 1, (_BYTE **)a1, *(_QWORD *)(a1 + 8)) & 1) == 0 )
      *(_BYTE *)(a1 + 20) = 0;
    v9 += v17.__align;
    if ( v10 >= 1 )
      goto LABEL_27;
LABEL_22:
    if ( !*(_BYTE *)(a1 + 20) )
      return;
  }
  if ( (v11 & 8) == 0 )
    v9 = 0;
  if ( v10 < 1 )
    goto LABEL_22;
LABEL_27:
  v13 = 0;
  v14 = 24 * v7;
  do
  {
    v15 = *(_DWORD *)(a1 + 16);
    if ( (v15 & 2) == 0 )
    {
      if ( (unpack_xleb128(&v17, 64, 1, (_BYTE **)a1, *(_QWORD *)(a1 + 8)) & 1) == 0 )
        *(_BYTE *)(a1 + 20) = 0;
      v12 = v17.__align;
      v15 = *(_DWORD *)(a1 + 16);
    }
    if ( (v15 & 1) == 0 )
    {
      if ( (unpack_xleb128(&v17, 64, 1, (_BYTE **)a1, *(_QWORD *)(a1 + 8)) & 1) == 0 )
        *(_BYTE *)(a1 + 20) = 0;
      v8 = v17.__align;
      v15 = *(_DWORD *)(a1 + 16);
    }
    if ( (v15 & 0xC) == 8 )
    {
      if ( (unpack_xleb128(&v17, 64, 1, (_BYTE **)a1, *(_QWORD *)(a1 + 8)) & 1) == 0 )
        *(_BYTE *)(a1 + 20) = 0;
      v9 += v17.__align;
    }
    if ( !*(_BYTE *)(a1 + 20) )
    {
      sub_5B070(a2, v7 + v13);
      return;
    }
    if ( !(v7 - a3 + v13) )
      return;
    ++v13;
    align += v12;
    v16 = (__int64 *)(a2->__align + v14);
    v14 += 24;
    *v16 = align;
    v16[1] = v8;
    v16[2] = v9;
  }
  while ( v13 < v10 );
  v7 += v13;
  if ( *(_BYTE *)(a1 + 20) )
    goto LABEL_5;
}
