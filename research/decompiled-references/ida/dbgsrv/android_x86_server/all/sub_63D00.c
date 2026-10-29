/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63D00
// Address: 0x00063D00

//----- (00063D00) --------------------------------------------------------
int __fastcall sub_63D00(int a1, int a2)
{
  int v4; // ecx
  int result; // eax
  int v6; // ecx
  bool v7; // sf
  bool v8; // of
  int v9; // eax
  size_t v10; // edx
  int v11; // eax
  size_t v12; // ecx
  size_t v13; // eax
  size_t v14; // esi
  int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  unsigned int v20; // esi
  const void *v21; // [esp-10h] [ebp-2Ch]
  size_t v22; // [esp+8h] [ebp-14h]

  v4 = sub_63B60((char *)a1, a2);
  result = 1;
  switch ( v4 )
  {
    case 2:
    case 6:
      v6 = *(_DWORD *)(a2 + 4);
      v8 = __OFSUB__(*(_DWORD *)(a1 + 4), v6);
      v7 = *(_DWORD *)(a1 + 4) - v6 < 0;
      if ( *(_DWORD *)(a1 + 4) <= v6 )
        goto LABEL_19;
      break;
    case 3:
      result = ecmp((unsigned __int16 *)(a1 + 4), (unsigned __int16 *)(a2 + 4));
      break;
    case 5:
      result = *(_DWORD *)(a1 + 4) != *(_DWORD *)(a2 + 4);
      break;
    case 7:
      v9 = *(_DWORD *)(a1 + 8);
      v10 = v9 - 1;
      if ( !v9 )
        v10 = 0;
      v22 = v10;
      v11 = *(_DWORD *)(a2 + 8);
      v12 = v11 - 1;
      if ( !v11 )
        v12 = 0;
      v13 = v12;
      if ( v10 < v12 )
        v13 = v10;
      v21 = *(const void **)(a1 + 4);
      v14 = v12;
      v15 = memcmp(v21, *(const void **)(a2 + 4), v13);
      result = v15 == 0 ? -1 : v15;
      if ( v22 >= v14 && !v15 )
        result = v22 > v14;
      break;
    case 8:
      v16 = *(_DWORD *)(a2 + 4);
      if ( *(_DWORD *)(a1 + 4) <= v16 )
        result = -(*(_DWORD *)(a1 + 4) < v16);
      break;
    case 9:
      v17 = *(_DWORD *)(a1 + 4);
      v18 = *(_DWORD *)(a1 + 8);
      v19 = *(_DWORD *)(a2 + 4);
      v20 = *(_DWORD *)(a2 + 8);
      if ( *(_QWORD *)(a2 + 4) >= __SPAIR64__(v18, v17) )
      {
        v8 = __OFSUB__(__PAIR64__(v18, v17), __PAIR64__(v20, v19));
        v7 = (((__PAIR64__(v18, v17) - __PAIR64__(v20, v19)) >> 32) & 0x80000000) != 0LL;
LABEL_19:
        result = -(v7 ^ v8);
      }
      break;
    default:
      return result;
  }
  return result;
}
