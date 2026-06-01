/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A648
// Address: 0x0003A648

//----- (0003A648) --------------------------------------------------------
_BYTE *__fastcall sub_3A648(int a1, unsigned int a2, unsigned int a3)
{
  char v4; // r8
  int v5; // r5
  unsigned int v7; // r1
  char v8; // r4
  int v9; // r3
  _BYTE *v10; // r0
  _BYTE *result; // r0
  char v12; // r4
  int v13; // r3
  _BYTE *v14; // r0
  int v15; // r4
  int v16; // r3
  char v17; // r4
  int v18; // r3

  v4 = a3;
  v5 = *(_DWORD *)(a1 + 112);
  if ( a3 <= 0xF )
  {
    v17 = a2 + a3;
    *(_BYTE *)(a1 + 120) = a2 + a3;
    v18 = *(_DWORD *)(v5 + 4);
    if ( (unsigned int)(v18 + 1) > *(_DWORD *)(v5 + 8) )
    {
      result = sub_78018(v5, *(void **)v5, v18 + 1, 1u);
      v18 = *(_DWORD *)(v5 + 4);
      *(_DWORD *)v5 = result;
    }
    else
    {
      result = *(_BYTE **)v5;
    }
    result[v18] = v17;
    ++*(_DWORD *)(v5 + 4);
    ++*(_DWORD *)(a1 + 116);
  }
  else
  {
    v7 = a2 >> 3;
    if ( (unsigned __int8)a3 == a3 )
    {
      v12 = v7 | 0x80;
      *(_BYTE *)(a1 + 120) = v7 | 0x80;
      v13 = *(_DWORD *)(v5 + 4);
      if ( (unsigned int)(v13 + 1) > *(_DWORD *)(v5 + 8) )
      {
        v14 = sub_78018(v5, *(void **)v5, v13 + 1, 1u);
        v13 = *(_DWORD *)(v5 + 4);
        *(_DWORD *)v5 = v14;
      }
      else
      {
        v14 = *(_BYTE **)v5;
      }
      v14[v13] = v12;
      ++*(_DWORD *)(v5 + 4);
      v15 = *(_DWORD *)(a1 + 112);
      ++*(_DWORD *)(a1 + 116);
      v16 = *(_DWORD *)(v15 + 4);
      if ( (unsigned int)(v16 + 1) > *(_DWORD *)(v15 + 8) )
      {
        result = sub_78018(v15, *(void **)v15, v16 + 1, 1u);
        v16 = *(_DWORD *)(v15 + 4);
        *(_DWORD *)v15 = result;
      }
      else
      {
        result = *(_BYTE **)v15;
      }
      result[v16] = v4;
      ++*(_DWORD *)(v15 + 4);
      ++*(_DWORD *)(a1 + 116);
    }
    else
    {
      v8 = v7 - 127;
      *(_BYTE *)(a1 + 120) = v7 - 127;
      v9 = *(_DWORD *)(v5 + 4);
      if ( (unsigned int)(v9 + 1) > *(_DWORD *)(v5 + 8) )
      {
        v10 = sub_78018(v5, *(void **)v5, v9 + 1, 1u);
        v9 = *(_DWORD *)(v5 + 4);
        *(_DWORD *)v5 = v10;
      }
      else
      {
        v10 = *(_BYTE **)v5;
      }
      v10[v9] = v8;
      ++*(_DWORD *)(v5 + 4);
      ++*(_DWORD *)(a1 + 116);
      return sub_39CA8(a1, a3);
    }
  }
  return result;
}
