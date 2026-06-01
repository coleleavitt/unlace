/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B2C0
// Address: 0x0003B2C0

//----- (0003B2C0) --------------------------------------------------------
int __fastcall sub_3B2C0(int a1, int a2)
{
  __int64 v3; // kr00_8
  int v5; // r9
  int v6; // r5
  _DWORD *v7; // r6
  size_t v8; // r5
  void **v9; // r0
  int v10; // r7
  __int64 v11; // r2
  int v13; // r8
  unsigned int v14; // r11
  __int64 v15; // r2
  size_t v16; // r3
  int v17; // r6
  unsigned int v18; // r5
  unsigned int v19; // r2
  unsigned int v20; // r3
  char *v21; // r0
  int v22; // r2
  char *v23; // r0
  int v24; // [sp+4h] [bp-8h]

  v3 = *(_QWORD *)(a1 + 144);
  v5 = *(_DWORD *)(v3 + 4 * (HIDWORD(v3) + 0x3FFFFFFF));
  if ( HIDWORD(v3) )
    *(_DWORD *)(a1 + 148) = HIDWORD(v3) - 1;
  v6 = *(_DWORD *)(a1 + 116);
  v7 = sub_808A4(0x10u);
  v8 = v6 - v5;
  *v7 = a2;
  v7[3] = 0;
  v9 = (void **)sub_77FEC(12);
  *v9 = nullptr;
  v9[1] = nullptr;
  v10 = (int)v9;
  v9[2] = nullptr;
  v7[1] = v9;
  if ( !v8 )
  {
    v11 = *(_QWORD *)(a1 + 192);
    HIDWORD(v11) += 0x3FFFFFFF;
    v7[2] = *(_DWORD *)(v11 + 4 * HIDWORD(v11));
    *(_DWORD *)(v11 + 4 * HIDWORD(v11)) = v7;
    goto LABEL_5;
  }
  v13 = (int)v9[1];
  v14 = v8 + v13;
  v24 = **(_DWORD **)(a1 + 112);
  if ( __CFADD__(v8, v13) )
  {
    if ( (unsigned int)v13 > 0x7FFFFFFE )
    {
      if ( v13 < 0 )
        v9[1] = (void *)0x7FFFFFFF;
      goto LABEL_8;
    }
    v14 = 0x7FFFFFFF;
    goto LABEL_20;
  }
  if ( v13 < v8 + v13 )
  {
LABEL_20:
    v20 = (unsigned int)v9[2];
    v21 = (char *)*v9;
    if ( v14 > v20 )
    {
      v21 = (char *)sub_78018(v10, *(void **)v10, v14, 1u);
      v22 = *(_DWORD *)(v10 + 4);
      *(_DWORD *)v10 = v21;
    }
    else
    {
      v22 = v13;
    }
    memset(&v21[v22], 0, v14 - v22);
    *(_DWORD *)(v10 + 4) = v14;
  }
LABEL_8:
  memcpy((void *)(*(_DWORD *)v10 + v13), (const void *)(v24 + v5), v8);
  v15 = *(_QWORD *)(a1 + 192);
  HIDWORD(v15) += 0x3FFFFFFF;
  v7[2] = *(_DWORD *)(v15 + 4 * HIDWORD(v15));
  *(_DWORD *)(v15 + 4 * HIDWORD(v15)) = v7;
  v16 = *(_DWORD *)(a1 + 116);
  if ( v8 > v16 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(708);
  }
  v17 = *(_DWORD *)(a1 + 112);
  v18 = v16 - v8;
  *(_DWORD *)(a1 + 116) = v18;
  v19 = *(_DWORD *)(v17 + 4);
  if ( v18 > v19 )
  {
    v23 = *(char **)v17;
    if ( v18 > *(_DWORD *)(v17 + 8) )
    {
      v23 = (char *)sub_78018(v17, *(void **)v17, v18, 1u);
      v19 = *(_DWORD *)(v17 + 4);
      *(_DWORD *)v17 = v23;
    }
    memset(&v23[v19], 0, v18 - v19);
    *(_DWORD *)(v17 + 4) = v18;
  }
  else if ( v18 < v19 )
  {
    *(_DWORD *)(v17 + 4) = v18;
  }
LABEL_5:
  *(_BYTE *)(a1 + 120) = -87;
  return 0;
}
// D6C20: using guessed type char under_debugger;
