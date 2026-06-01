/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D490
// Address: 0x0045D490

//----- (0045D490) --------------------------------------------------------
int __userpurge sub_45D490@<eax>(int a1@<ebx>, int a2, int a3)
{
  int v3; // ebp
  _DWORD *v4; // edi
  unsigned int v5; // eax
  int v6; // ebx
  unsigned int v7; // edi
  int v8; // eax
  __int16 *v9; // eax
  unsigned int v11; // edi
  void *v12; // [esp-4h] [ebp-14h]
  void *v13; // [esp-4h] [ebp-14h]

  v3 = 0;
  v4 = (_DWORD *)a3;
  *(_DWORD *)(a2 + 4) = 0;
  if ( sub_4752BF(a1, a3, a3) )
    return -1;
  while ( 1 )
  {
    v5 = *(_DWORD *)(a2 + 4);
    v6 = v5 + 1023;
    if ( !v5 )
      v6 = 1024;
    if ( v6 )
    {
      v7 = v6 + 1;
      if ( v6 + 1 <= v5 )
      {
        if ( v6 + 1 == v5 || v6 + 1 >= v5 )
          goto LABEL_14;
      }
      else
      {
        if ( v7 > *(_DWORD *)(a2 + 8) )
          *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v6 + 1, 1u);
        sub_464890((__m128i *)(*(_DWORD *)(a2 + 4) + *(_DWORD *)a2), 0, v7 - *(_DWORD *)(a2 + 4));
      }
      *(_DWORD *)(a2 + 4) = v7;
LABEL_14:
      v4 = (_DWORD *)a3;
      *(_BYTE *)(v6 + *(_DWORD *)a2) = 0;
      goto LABEL_15;
    }
    if ( *(_DWORD *)a2 )
    {
      v12 = *(void **)a2;
      *(_DWORD *)(a2 + 4) = 0;
      sub_453A20(v12);
      *(_DWORD *)a2 = 0;
      *(_DWORD *)(a2 + 8) = 0;
    }
LABEL_15:
    v8 = *(_DWORD *)(a2 + 4) - v3;
    if ( v8 < 0 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(1225);
    }
    if ( !v4 )
    {
      sub_45CC20(1);
      *sub_46B984() = 9;
      sub_45CC20(1);
LABEL_30:
      if ( !v3 )
        return -1;
      goto LABEL_31;
    }
    if ( !sub_476310(v6, v3 + *(_DWORD *)a2, v8, v4) )
      goto LABEL_30;
    v3 += strlen((const char *)(*(_DWORD *)a2 + v3));
    if ( v3 )
    {
      if ( *(_DWORD *)(a2 + 4) || (v9 = &word_4B69CE, v3 != 1) )
        v9 = (__int16 *)(*(_DWORD *)a2 + v3 - 1);
      if ( *(_BYTE *)v9 == 10 )
        break;
    }
    v4 = (_DWORD *)a3;
    if ( sub_4752BF(v6, a3, a3) )
      goto LABEL_26;
  }
  --v3;
LABEL_26:
  if ( !v3 )
  {
    if ( *(_DWORD *)a2 )
    {
      v13 = *(void **)a2;
      *(_DWORD *)(a2 + 4) = 0;
      sub_453A20(v13);
      *(_DWORD *)a2 = 0;
      *(_DWORD *)(a2 + 8) = 0;
      return 0;
    }
    return v3;
  }
LABEL_31:
  v11 = v3 + 1;
  if ( (unsigned int)(v3 + 1) <= *(_DWORD *)(a2 + 4) )
  {
    if ( v3 + 1 != *(_DWORD *)(a2 + 4) && (unsigned int)(v3 + 1) < *(_DWORD *)(a2 + 4) )
      *(_DWORD *)(a2 + 4) = v11;
    *(_BYTE *)(*(_DWORD *)a2 + v3) = 0;
    return v3;
  }
  if ( v11 > *(_DWORD *)(a2 + 8) )
    *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v3 + 1, 1u);
  sub_464890((__m128i *)(*(_DWORD *)(a2 + 4) + *(_DWORD *)a2), 0, v11 - *(_DWORD *)(a2 + 4));
  *(_DWORD *)(a2 + 4) = v11;
  *(_BYTE *)(*(_DWORD *)a2 + v3) = 0;
  return v3;
}
// 4B69CE: using guessed type __int16 word_4B69CE;
// 4B70F0: using guessed type char byte_4B70F0;
