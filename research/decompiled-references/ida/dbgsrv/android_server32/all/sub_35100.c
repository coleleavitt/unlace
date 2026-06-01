/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35100
// Address: 0x00035100

//----- (00035100) --------------------------------------------------------
int __fastcall sub_35100(int a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v6; // r0
  int v7; // r7
  __int64 *v8; // r2
  char *v9; // r0
  unsigned int v10; // r1
  int v11; // r7
  int result; // r0
  int v13; // r1
  void (__fastcall *v14)(_DWORD *, unsigned int, int, int); // r5
  unsigned __int8 *v15; // r2
  void (__fastcall *v16)(_DWORD *, unsigned int, int, _DWORD); // r5
  int v17; // r7
  int v18; // r5
  _DWORD *v19; // r1
  int v20; // r7
  unsigned int v21; // r3
  _DWORD *v22; // r0
  unsigned int v23; // r5
  _DWORD *v24; // r2
  _DWORD *v25; // r2
  _DWORD *v26; // r0
  _DWORD *v27; // r3
  _DWORD *v28; // r1
  _DWORD *v29; // r7
  _DWORD *v30; // r1
  int v31; // r5
  void (__fastcall *v32)(_DWORD *, unsigned int, int, _DWORD); // r7
  int (__fastcall *v33)(_DWORD *, unsigned int, int, _DWORD); // r5
  unsigned __int64 v34; // [sp+8h] [bp-18h]
  int v35; // [sp+10h] [bp-10h]
  int v36; // [sp+14h] [bp-Ch]
  int v37; // [sp+14h] [bp-Ch]
  _BYTE *v38; // [sp+1Ch] [bp-4h]

  if ( *(_DWORD *)(a3 + 4) > 1u )
    goto LABEL_7;
  v6 = a2[54];
  if ( v6 > a3 || v6 + 68 * a2[55] < a3 )
  {
    if ( !under_debugger )
      interr(20086);
    __debugbreak();
  }
  v7 = a1;
  v8 = (__int64 *)(a2 + 58);
  if ( (unsigned int)(-252645135 * ((int)(a3 - v6) >> 2)) >= a2[57] )
    v8 = (__int64 *)(a2 + 66);
  sub_32154((int)a2, (void **)a3, v8, *(_DWORD *)(a3 + 24));
  a1 = v7;
  if ( *(_DWORD *)(a3 + 4) )
  {
LABEL_7:
    v9 = *(char **)a3;
    if ( !*(_DWORD *)a3 )
      goto LABEL_26;
  }
  else
  {
    v9 = &byte_B3CBE;
  }
  if ( *v9 == 36 && v9[1] && (v9[2] == 46 || !v9[2]) )
  {
    v10 = (unsigned __int8)v9[1] - 97;
    if ( v10 <= 0x17 )
    {
      v11 = 1;
      if ( ((1 << v10) & 0x88802B) != 0 )
      {
        *(_BYTE *)(a1 + 36) = 1;
        result = (unsigned __int8)v9[1];
        if ( (unsigned int)(result - 97) <= 0x17 && ((1 << (result - 97)) & 0x880001) != 0 )
        {
          v13 = 1;
          if ( result == 120 || (v13 = 2, result != 97) )
          {
            v11 = v13;
            if ( result == 116 )
              *(_BYTE *)(a3 + 66) |= 1u;
          }
          v14 = *(void (__fastcall **)(_DWORD *, unsigned int, int, int))(a1 + 28);
          if ( v14 )
          {
            v36 = a1;
            v14(a2, a3, v11, 1);
            a1 = v36;
          }
          result = *(unsigned __int8 *)(a1 + 37);
          if ( *(_BYTE *)(a1 + 37) )
            return sub_353A8(a1, a3, v11);
        }
        return result;
      }
    }
  }
LABEL_26:
  result = *(_BYTE *)(a3 + 28) & 0xF;
  if ( ((1 << result) & 0xA004) == 0 || *(unsigned __int8 *)(a3 + 64) > 2u )
    return result;
  *(_DWORD *)(a3 + 56) &= ~1u;
  if ( result != 15 )
  {
    if ( result == 13 )
    {
      *(_BYTE *)(a3 + 65) = 2;
    }
    else if ( !(*(unsigned __int8 *)(a3 + 32) << 31) )
    {
      v15 = (unsigned __int8 *)(a3 + 66);
      goto LABEL_35;
    }
  }
  *(_BYTE *)(a3 + 66) |= 1u;
  v15 = (unsigned __int8 *)(a3 + 66);
  v16 = *(void (__fastcall **)(_DWORD *, unsigned int, int, _DWORD))(a1 + 28);
  if ( v16 )
  {
    v17 = a1;
    v16(a2, a3, 2, 0);
    v15 = (unsigned __int8 *)(a3 + 66);
    a1 = v17;
  }
LABEL_35:
  v18 = *v15;
  if ( v18 << 31 || !*(_BYTE *)(a1 + 37) || (v19 = *(_DWORD **)(a1 + 8), v20 = a1 + 8, !v19) )
  {
LABEL_65:
    result = v18 << 31;
    if ( !(v18 << 31) )
      goto LABEL_66;
    return result;
  }
  v35 = *v15;
  v38 = v15;
  v37 = a1;
  v21 = *(_DWORD *)(a3 + 60);
  v22 = (_DWORD *)v20;
  do
  {
    v23 = v19[4];
    if ( v23 >= v21 )
      v22 = v19;
    v24 = v19 + 1;
    if ( v23 >= v21 )
      v24 = v19;
    v19 = (_DWORD *)*v24;
  }
  while ( *v24 );
  if ( v22 == (_DWORD *)v20 )
    goto LABEL_64;
  if ( v21 < v22[4]
    || (v25 = (_DWORD *)v22[5], v26 = v22 + 6, v25 == v26)
    || (v34 = *(_QWORD *)(a3 + 32), v34 < *((_QWORD *)v25 + 2)) )
  {
    a1 = v37;
    result = v35 << 31;
    if ( v35 << 31 )
      return result;
    goto LABEL_66;
  }
  while ( 1 )
  {
    v27 = v25;
    v28 = (_DWORD *)v25[1];
    if ( !v28 )
      break;
    do
    {
      v25 = v28;
      v28 = (_DWORD *)*v28;
    }
    while ( v28 );
    v29 = v27;
    if ( v25 == v26 )
      goto LABEL_58;
LABEL_57:
    if ( v34 < *((_QWORD *)v25 + 2) )
      goto LABEL_58;
  }
  v30 = v25 + 2;
  v25 = (_DWORD *)v25[2];
  v29 = v27;
  if ( (_DWORD *)*v25 != v27 )
  {
    do
    {
      v31 = *v30;
      v30 = (_DWORD *)(*v30 + 8);
      v25 = *(_DWORD **)(v31 + 8);
    }
    while ( *v25 != v31 );
  }
  if ( v25 != v26 )
    goto LABEL_57;
LABEL_58:
  if ( v29[6] != 2 )
  {
LABEL_64:
    a1 = v37;
    v18 = v35;
    goto LABEL_65;
  }
  v18 = v35 | 1;
  *v38 = v35 | 1;
  a1 = v37;
  v32 = *(void (__fastcall **)(_DWORD *, unsigned int, int, _DWORD))(v37 + 28);
  if ( !v32 )
    goto LABEL_65;
  v32(a2, a3, 2, 0);
  a1 = v37;
  result = (unsigned __int8)*v38 << 31;
  if ( result )
    return result;
LABEL_66:
  v33 = *(int (__fastcall **)(_DWORD *, unsigned int, int, _DWORD))(a1 + 28);
  if ( v33 )
    return v33(a2, a3, 1, 0);
  return result;
}
// 351C8: conditional instruction was optimized away because r0.4==61
// 3534E: conditional instruction was optimized away because r0.4==78
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
