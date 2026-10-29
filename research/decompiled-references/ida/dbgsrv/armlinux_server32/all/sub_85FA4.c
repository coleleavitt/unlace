/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85FA4
// Address: 0x00085FA4

//----- (00085FA4) --------------------------------------------------------
_DWORD *__fastcall sub_85FA4(int a1)
{
  unsigned __int8 *v1; // r3
  unsigned int v3; // r5
  unsigned int v4; // r7
  int v5; // r0
  int v6; // r1
  int v7; // r3
  char *v8; // r12
  unsigned int v9; // lr
  bool v10; // cc
  _DWORD *result; // r0
  unsigned int v12; // r12
  __int64 v13; // kr00_8
  _DWORD *v15; // r0
  __int64 v16; // kr08_8
  _DWORD *v17; // r2
  int v18; // r5
  bool v19; // zf
  __int64 v20; // kr10_8
  _DWORD *v21; // r0

  v1 = *(unsigned __int8 **)(a1 + 12);
  v3 = *v1;
  if ( !*v1 || (*(_DWORD *)(a1 + 12) = v1 + 1, v3 = *v1, !v1[1]) )
  {
    v4 = 0;
LABEL_4:
    v5 = 67;
    v6 = 0;
    while ( 1 )
    {
      v7 = v6 + (v5 - v6) / 2;
      v8 = off_D20B0[4 * v7];
      v9 = (unsigned __int8)*v8;
      v10 = v9 > v3;
      if ( v9 == v3 )
      {
        v12 = (unsigned __int8)v8[1];
        v10 = v12 > v4;
        if ( v12 == v4 )
          break;
      }
      if ( v10 )
        v5 = v6 + (v5 - v6) / 2;
      else
        v6 = v7 + 1;
      if ( v6 == v5 )
        return nullptr;
    }
    v13 = *(_QWORD *)(a1 + 20);
    if ( (int)v13 < SHIDWORD(v13) )
    {
      result = (_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * v13);
      result[1] = 0;
      *(_DWORD *)(a1 + 20) = v13 + 1;
      *result = 49;
      result[2] = &off_D20B0[4 * v7];
      return result;
    }
    return nullptr;
  }
  *(_DWORD *)(a1 + 12) = v1 + 2;
  v4 = v1[1];
  if ( v3 == 118 )
  {
    if ( (unsigned __int8)(v4 - 48) > 9u )
      goto LABEL_4;
    v15 = sub_844C8(a1);
    v16 = *(_QWORD *)(a1 + 20);
    v17 = v15;
    if ( (int)v16 >= SHIDWORD(v16) )
      return nullptr;
    v18 = *(_DWORD *)(a1 + 16);
    result = (_DWORD *)(v18 + 16 * v16);
    result[1] = 0;
    *(_DWORD *)(a1 + 20) = v16 + 1;
    if ( !v17 )
      return nullptr;
    result[1] = 0;
    *(_DWORD *)(v18 + 16 * v16) = 50;
    result[2] = v4 - 48;
    result[3] = v17;
  }
  else
  {
    v19 = v3 == 99;
    if ( v3 == 99 )
      v19 = v4 == 118;
    if ( !v19 )
      goto LABEL_4;
    v20 = *(_QWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 56) = v20 == 0;
    v21 = sub_857B4(a1);
    if ( *(_DWORD *)(a1 + 56) )
      result = (_DWORD *)sub_841E0(a1, 52, (unsigned int)v21);
    else
      result = (_DWORD *)sub_841E0(a1, 51, (unsigned int)v21);
    *(_DWORD *)(a1 + 56) = HIDWORD(v20);
  }
  return result;
}
// D20B0: using guessed type char *off_D20B0[2];
