/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_942D4
// Address: 0x000942D4

//----- (000942D4) --------------------------------------------------------
_DWORD *__fastcall sub_942D4(__int64 *a1, int *a2, _BYTE *a3)
{
  int v6; // r6
  _DWORD *v7; // r0
  __int64 v8; // kr00_8
  unsigned __int8 **v9; // r2
  int v10; // r1
  _DWORD *result; // r0
  unsigned int v12; // r2
  char *v13; // r2
  __int64 *v14; // r3
  char v15; // [sp+2h] [bp-1Eh] BYREF
  char v16; // [sp+3h] [bp-1Dh] BYREF

  if ( *(_BYTE *)(*a2 + 4) == 36 )
  {
    v6 = *(_DWORD *)(*a2 + 8);
    if ( (unsigned int)(v6 - 2) <= 3 )
    {
      v7 = sub_93AC6((int)(a1 + 46), 12);
      *v7 = &off_DC380;
      v7[1] = 16843043;
      v7[2] = v6;
      *a2 = (int)v7;
    }
  }
  v8 = *a1;
  if ( (_DWORD)v8 == HIDWORD(v8) || *(_BYTE *)v8 != 67 )
  {
    if ( HIDWORD(v8) != (_DWORD)v8 )
    {
      result = nullptr;
      if ( HIDWORD(v8) - (_DWORD)v8 != 1 && *(_BYTE *)v8 == 68 )
      {
        v12 = *(unsigned __int8 *)(v8 + 1) - 48;
        result = nullptr;
        if ( v12 <= 5 && ((1 << v12) & 0x27) != 0 )
        {
          v13 = &v15;
          *(_DWORD *)a1 = v8 + 2;
          if ( a3 )
            *a3 = 1;
          v15 = 1;
          return sub_97CB8((int)a1, a2, v13);
        }
      }
      return result;
    }
    return nullptr;
  }
  v9 = (unsigned __int8 **)(v8 + 1);
  *(_DWORD *)a1 = v8 + 1;
  if ( (_DWORD)v8 + 1 == HIDWORD(v8) )
    return nullptr;
  if ( *(_BYTE *)v9 == 73 )
  {
    v9 = (unsigned __int8 **)(v8 + 2);
    v10 = 1;
    *(_DWORD *)a1 = v8 + 2;
  }
  else
  {
    v10 = 0;
  }
  if ( (unsigned __int8 **)HIDWORD(v8) == v9 )
    return nullptr;
  v14 = (__int64 *)(*(unsigned __int8 *)v9 - 49);
  result = nullptr;
  if ( (unsigned int)v14 <= 4 && *(_BYTE *)v9 != 52 )
  {
    *(_DWORD *)a1 = (char *)v9 + 1;
    if ( a3 )
      *a3 = 1;
    if ( !v10 || sub_933A4(a1, (unsigned int)a3, v9, v14) )
    {
      v13 = &v16;
      v16 = 0;
      return sub_97CB8((int)a1, a2, v13);
    }
    return nullptr;
  }
  return result;
}
// DC380: using guessed type _UNKNOWN *off_DC380;
