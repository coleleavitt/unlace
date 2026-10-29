/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A87C
// Address: 0x0003A87C

//----- (0003A87C) --------------------------------------------------------
_BYTE *__fastcall sub_3A87C(int a1, unsigned int a2)
{
  unsigned int v2; // r5
  int v4; // r4
  int v5; // r3
  _BYTE *v6; // r0
  int v7; // r3
  _BYTE *v8; // r0
  int v9; // r3
  int v10; // r3
  _BYTE *v11; // r0
  _BYTE *result; // r0

  v2 = a2;
  if ( a2 <= 0xF )
    v2 = (unsigned __int8)(a2 - 32);
  v4 = *(_DWORD *)(a1 + 112);
  if ( a2 <= 0xF )
  {
    *(_BYTE *)(a1 + 120) = v2;
LABEL_14:
    v9 = *(_DWORD *)(v4 + 4);
    if ( (unsigned int)(v9 + 1) > *(_DWORD *)(v4 + 8) )
    {
      result = sub_78018(v4, *(void **)v4, v9 + 1, 1u);
      v9 = *(_DWORD *)(v4 + 4);
      *(_DWORD *)v4 = result;
    }
    else
    {
      result = *(_BYTE **)v4;
    }
    result[v9] = v2;
    ++*(_DWORD *)(v4 + 4);
    ++*(_DWORD *)(a1 + 116);
    return result;
  }
  if ( (v2 & 0xFFFFFF00) == 0 )
  {
    *(_BYTE *)(a1 + 120) = -96;
    v7 = *(_DWORD *)(v4 + 4);
    if ( (unsigned int)(v7 + 1) > *(_DWORD *)(v4 + 8) )
    {
      v8 = sub_78018(v4, *(void **)v4, v7 + 1, 1u);
      v7 = *(_DWORD *)(v4 + 4);
      *(_DWORD *)v4 = v8;
    }
    else
    {
      v8 = *(_BYTE **)v4;
    }
    v8[v7] = -96;
    ++*(_DWORD *)(v4 + 4);
    v4 = *(_DWORD *)(a1 + 112);
    ++*(_DWORD *)(a1 + 116);
    goto LABEL_14;
  }
  if ( (__int16)v2 == v2 )
  {
    *(_BYTE *)(a1 + 120) = -95;
    v10 = *(_DWORD *)(v4 + 4);
    if ( (unsigned int)(v10 + 1) > *(_DWORD *)(v4 + 8) )
    {
      v11 = sub_78018(v4, *(void **)v4, v10 + 1, 1u);
      v10 = *(_DWORD *)(v4 + 4);
      *(_DWORD *)v4 = v11;
    }
    else
    {
      v11 = *(_BYTE **)v4;
    }
    v11[v10] = -95;
    ++*(_DWORD *)(v4 + 4);
    ++*(_DWORD *)(a1 + 116);
    return sub_39CA8(a1, (unsigned __int16)v2);
  }
  else
  {
    *(_BYTE *)(a1 + 120) = -89;
    v5 = *(_DWORD *)(v4 + 4);
    if ( (unsigned int)(v5 + 1) > *(_DWORD *)(v4 + 8) )
    {
      v6 = sub_78018(v4, *(void **)v4, v5 + 1, 1u);
      v5 = *(_DWORD *)(v4 + 4);
      *(_DWORD *)v4 = v6;
    }
    else
    {
      v6 = *(_BYTE **)v4;
    }
    v6[v5] = -89;
    ++*(_DWORD *)(v4 + 4);
    ++*(_DWORD *)(a1 + 116);
    sub_39CA8(a1, (unsigned __int16)v2);
    return sub_39CA8(a1, HIWORD(v2));
  }
}
