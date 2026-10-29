/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34060
// Address: 0x00034060

//----- (00034060) --------------------------------------------------------
int __fastcall sub_34060(int a1, int *a2, unsigned int a3, int a4)
{
  int v5; // r2
  unsigned int v6; // r4
  unsigned int v7; // r3
  unsigned int v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  unsigned int v14; // r7
  int v15; // r0
  int v16; // r5
  __int64 v17; // kr18_8
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  _DWORD *v23; // r0
  __int64 v28; // [sp+20h] [bp-40h]
  __int64 v29; // [sp+28h] [bp-38h]
  unsigned int v30; // [sp+30h] [bp-30h]
  unsigned int v31; // [sp+34h] [bp-2Ch]
  unsigned int v32; // [sp+40h] [bp-20h]
  unsigned int v33; // [sp+44h] [bp-1Ch]
  __int64 v34; // [sp+48h] [bp-18h]
  int v35; // [sp+50h] [bp-10h]
  __int64 v36; // [sp+54h] [bp-Ch] BYREF
  int v37; // [sp+5Ch] [bp-4h]

  if ( !unpack_xleb128(&v36, 64, 1, (_BYTE **)a1, *(_DWORD *)(a1 + 4)) )
    *(_BYTE *)(a1 + 12) = 0;
  v34 = v36;
  sub_367E8(a2, a3);
  if ( *(_BYTE *)(a1 + 12) )
  {
    v5 = a1;
    v6 = 0;
    v33 = 0;
    v7 = 0;
    v29 = 0;
    v35 = v5;
    while ( 1 )
    {
      v8 = v7;
      if ( !unpack_xleb128(&v36, 64, 1, (_BYTE **)v35, *(_DWORD *)(v5 + 4)) )
        *(_BYTE *)(v35 + 12) = 0;
      v28 = v36;
      v9 = unpack_xleb128(&v36, 64, 1, (_BYTE **)v35, *(_DWORD *)(v35 + 4));
      v5 = v35;
      if ( !v9 )
        *(_BYTE *)(v35 + 12) = 0;
      v10 = v36;
      *(_DWORD *)(v35 + 8) = v36;
      v31 = 0;
      v30 = 0;
      if ( (v10 & 2) != 0 )
      {
        v11 = unpack_xleb128(&v36, 64, 1, (_BYTE **)v35, *(_DWORD *)(v35 + 4));
        v5 = v35;
        if ( !v11 )
          *(_BYTE *)(v35 + 12) = 0;
        v30 = HIDWORD(v36);
        v31 = v36;
        v10 = *(_DWORD *)(v35 + 8);
      }
      if ( v10 << 31 )
      {
        v12 = unpack_xleb128(&v36, 64, 1, (_BYTE **)v35, *(_DWORD *)(v5 + 4));
        v5 = v35;
        if ( !v12 )
          *(_BYTE *)(v35 + 12) = 0;
        v29 = v36;
        v10 = *(_DWORD *)(v35 + 8);
      }
      v32 = v6;
      if ( (v10 & 0xC) == 0xC )
      {
        v13 = unpack_xleb128(&v36, 64, 1, (_BYTE **)v35, *(_DWORD *)(v5 + 4));
        v5 = v35;
        if ( !v13 )
          *(_BYTE *)(v35 + 12) = 0;
        v14 = (v36 + __PAIR64__(v8, v33)) >> 32;
        v33 += v36;
      }
      else
      {
        v15 = v10 << 28 >> 31;
        v14 = v8 & v15;
        v33 &= v15;
      }
      if ( v28 >= 1 )
        break;
      v7 = v14;
LABEL_41:
      v6 = v32;
      if ( !*(_BYTE *)(v5 + 12) )
        return _stack_chk_guard - v37;
    }
    v16 = 24 * v6 + 8;
    v17 = 0;
    while ( 1 )
    {
      v18 = *(_DWORD *)(v5 + 8);
      if ( (v18 & 2) == 0 )
      {
        v19 = unpack_xleb128(&v36, 64, 1, (_BYTE **)v35, *(_DWORD *)(v5 + 4));
        v5 = v35;
        if ( !v19 )
          *(_BYTE *)(v35 + 12) = 0;
        v30 = HIDWORD(v36);
        v31 = v36;
        v18 = *(_DWORD *)(v35 + 8);
      }
      v34 += __PAIR64__(v30, v31);
      if ( !(v18 << 31) )
      {
        v20 = unpack_xleb128(&v36, 64, 1, (_BYTE **)v35, *(_DWORD *)(v5 + 4));
        v5 = v35;
        if ( !v20 )
          *(_BYTE *)(v35 + 12) = 0;
        v29 = v36;
        v18 = *(_DWORD *)(v35 + 8);
      }
      if ( (v18 & 0xC) == 8 )
      {
        v21 = unpack_xleb128(&v36, 64, 1, (_BYTE **)v35, *(_DWORD *)(v5 + 4));
        v5 = v35;
        if ( !v21 )
          *(_BYTE *)(v35 + 12) = 0;
        v7 = (v36 + __PAIR64__(v14, v33)) >> 32;
        v33 += v36;
      }
      else
      {
        v7 = v14;
      }
      if ( !*(_BYTE *)(v5 + 12) )
        break;
      if ( !(v32 ^ a3 | a4) )
        return _stack_chk_guard - v37;
      v22 = *a2;
      *(_DWORD *)(v22 + v16) = v29;
      v23 = (_DWORD *)(v22 + v16);
      *((_QWORD *)v23 - 1) = v34;
      v23[1] = HIDWORD(v29);
      v23[2] = v33;
      v23[3] = v7;
      ++v17;
      v16 += 24;
      ++v32;
      v14 = v7;
      if ( v17 >= v28 )
        goto LABEL_41;
    }
    sub_367E8(a2, v32);
  }
  return _stack_chk_guard - v37;
}
