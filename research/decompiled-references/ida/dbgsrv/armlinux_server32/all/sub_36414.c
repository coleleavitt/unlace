/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36414
// Address: 0x00036414

//----- (00036414) --------------------------------------------------------
int __fastcall sub_36414(int a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v6; // r0
  int v7; // r7
  int result; // r0
  int v9; // r3
  bool v10; // zf
  _BOOL4 v11; // r2
  int v12; // r7
  int (__fastcall *v13)(_DWORD *, unsigned int, int, int); // r8
  char v14; // r3
  int v15; // r2
  int v16; // r3
  bool v17; // zf
  int v18; // r1
  char v19; // r7
  int (__fastcall *v20)(_DWORD *, unsigned int, int, _DWORD); // r5
  int (__fastcall *v21)(_DWORD *, unsigned int, int, _DWORD); // r7
  int (__fastcall *v22)(_DWORD *, unsigned int, int, _DWORD); // r7

  v6 = sub_327C8(a3, a2);
  if ( !*(_DWORD *)(v6 + 4) )
  {
    result = sub_30A30(a1, &dword_8DB98);
    if ( result )
    {
      *(_BYTE *)(a1 + 60) = 1;
      return result;
    }
LABEL_19:
    v14 = *(_BYTE *)(a3 + 28);
    v15 = v14 & 0xF;
    v16 = v14 & 0xD;
    v17 = v15 == 2;
    if ( v15 != 2 )
      v17 = v16 == 13;
    result = !v17;
    if ( v17 && *(unsigned __int8 *)(a3 + 64) <= 2u )
    {
      v18 = *(_DWORD *)(a3 + 56);
      if ( v15 == 13 )
        v16 = 2;
      v19 = *(_BYTE *)(a3 + 66);
      if ( v15 == 13 )
        *(_BYTE *)(a3 + 65) = v16;
      *(_DWORD *)(a3 + 56) = v18 & 0xFFFFFFFE;
      if ( v15 == 13 || v16 == 13 || result | *(_DWORD *)(a3 + 32) & 1 )
      {
        *(_BYTE *)(a3 + 66) = v19 | 1;
        v21 = *(int (__fastcall **)(_DWORD *, unsigned int, int, _DWORD))(a1 + 52);
        if ( !v21 )
          return result;
        result = v21(a2, a3, 2, 0);
        v19 = *(_BYTE *)(a3 + 66);
      }
      if ( (v19 & 1) == 0 )
      {
        if ( !*(_BYTE *)(a1 + 61)
          || (result = sub_30ACC(a1, a3), result != 2)
          || (*(_BYTE *)(a3 + 66) = v19 | 1,
              (v22 = *(int (__fastcall **)(_DWORD *, unsigned int, int, _DWORD))(a1 + 52)) != nullptr)
          && (result = v22(a2, a3, 2, 0), (*(_BYTE *)(a3 + 66) & 1) == 0) )
        {
          v20 = *(int (__fastcall **)(_DWORD *, unsigned int, int, _DWORD))(a1 + 52);
          if ( v20 )
            return v20(a2, a3, 1, 0);
        }
      }
    }
    return result;
  }
  v7 = *(_DWORD *)v6;
  result = sub_30A30(a1, *(_BYTE **)v6);
  if ( !result )
    goto LABEL_19;
  *(_BYTE *)(a1 + 60) = 1;
  v9 = *(unsigned __int8 *)(v7 + 1);
  v10 = v9 == 97;
  if ( v9 != 97 )
    v10 = v9 == 116;
  v11 = v9 == 97;
  if ( v10 )
  {
    if ( v9 == 120 )
      v11 = 1;
    if ( v11 )
      v12 = 1;
    else
      v12 = 2;
    if ( v9 == 116 )
      *(_BYTE *)(a3 + 66) |= 1u;
  }
  else
  {
    if ( v9 != 120 )
      return result;
    v12 = 1;
  }
  v13 = *(int (__fastcall **)(_DWORD *, unsigned int, int, int))(a1 + 52);
  if ( v13 )
    result = v13(a2, a3, v12, 1);
  if ( *(_BYTE *)(a1 + 61) )
    return sub_36034((_DWORD *)a1, a3, v12);
  return result;
}
// 8DB98: using guessed type int dword_8DB98;
