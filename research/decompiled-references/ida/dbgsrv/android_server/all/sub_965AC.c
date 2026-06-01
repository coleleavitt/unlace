/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_965AC
// Address: 0x00000000000965AC

//----- (00000000000965AC) ----------------------------------------------------
void *__fastcall sub_965AC(__int64 a1, __int64 a2, __int64 x2_0, char a4)
{
  bool v7; // zf
  void *result; // x0
  unsigned int v9; // w8
  __int64 v10; // x21
  int v11; // w1
  __int64 v12; // x0
  unsigned __int64 v13; // x8
  void *v14; // x21
  size_t v15; // x0
  void *v16; // x0
  __int64 v17; // x8
  unsigned int v18; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v19; // [xsp+8h] [xbp-38h]
  int8x16x2_t v20; // 0:q0.32

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( x2_0 )
  {
    v7 = qlseek(a2, x2_0, 0) == x2_0;
    result = nullptr;
    if ( !v7 )
      return result;
  }
  if ( qlread(a2, &v18, 4u) != 4 )
    return nullptr;
  v9 = v18;
  if ( (a4 & 1) != 0 )
  {
    v9 = bswap32(v18);
    v18 = v9;
  }
  if ( v9 < 5 )
    return nullptr;
  qlseek(a2, -4, 1);
  v10 = qlseek(a2, 0, 1);
  v12 = qlsize(a2, v11, v20);
  v13 = v12 - v10;
  if ( ((v12 - v10) | v10) < 0 )
  {
    LODWORD(v13) = 0;
    goto LABEL_18;
  }
  if ( v13 < v18 )
  {
LABEL_18:
    v18 = v13;
    return nullptr;
  }
  result = qalloc((void *)(v18 + 1));
  if ( !result )
    return result;
  v14 = result;
  v15 = qlread(a2, result, v18);
  if ( v15 != v18 )
  {
    qfree(v14);
    return nullptr;
  }
  *((_BYTE *)v14 + v15) = 0;
  v16 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v16);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v17 = v18 + 1;
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(a1 + 8) = v17;
  *(_QWORD *)(a1 + 16) = v17;
  return &dword_0 + 1;
}
// 96678: variable 'v11' is possibly undefined
// 96678: variable 'v20' is possibly undefined
// 0: using guessed type int dword_0;
