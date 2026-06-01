/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4ABEC
// Address: 0x0004ABEC

//----- (0004ABEC) --------------------------------------------------------
int __fastcall sub_4ABEC(int a1, int a2)
{
  int v4; // r1
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r0
  size_t v9; // r6
  int v10; // r0
  size_t v11; // r7
  size_t v12; // r2
  int v13; // r1
  unsigned int v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r5
  unsigned int v19; // r4

  v4 = sub_4AAC8((unsigned __int8 *)a1, (unsigned __int8 *)a2) - 2;
  result = 1;
  switch ( v4 )
  {
    case 0:
    case 4:
      v6 = *(_DWORD *)(a2 + 8);
      v7 = *(_DWORD *)(a1 + 8);
      if ( v7 <= v6 )
      {
        result = -1;
        if ( v7 >= v6 )
          goto LABEL_20;
      }
      break;
    case 1:
      result = ecmp((unsigned __int16 *)(a1 + 8), (unsigned __int16 *)(a2 + 8));
      break;
    case 3:
      result = *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8);
      break;
    case 5:
      v8 = *(_DWORD *)(a1 + 12);
      v9 = v8 - 1;
      if ( !v8 )
        v9 = 0;
      v10 = *(_DWORD *)(a2 + 12);
      v11 = v10 - 1;
      if ( !v10 )
        v11 = 0;
      v12 = v9;
      if ( v9 >= v11 )
        v12 = v11;
      result = memcmp(*(const void **)(a1 + 8), *(const void **)(a2 + 8), v12);
      v13 = result;
      if ( !result )
        result = -1;
      if ( v9 >= v11 && !v13 )
        result = v9 > v11;
      break;
    case 6:
      v14 = *(_DWORD *)(a2 + 8);
      v15 = *(_DWORD *)(a1 + 8);
      if ( v15 <= v14 )
      {
        result = -1;
        if ( v15 >= v14 )
LABEL_20:
          result = 0;
      }
      break;
    case 7:
      v16 = *(_DWORD *)(a2 + 8);
      v17 = *(_DWORD *)(a2 + 12);
      v18 = *(_DWORD *)(a1 + 8);
      v19 = *(_DWORD *)(a1 + 12);
      if ( __SPAIR64__(v17, v16) >= __SPAIR64__(v19, v18) )
      {
        result = -1;
        if ( __SPAIR64__(v19, v18) >= __SPAIR64__(v17, v16) )
          result = 0;
      }
      break;
    default:
      return result;
  }
  return result;
}
