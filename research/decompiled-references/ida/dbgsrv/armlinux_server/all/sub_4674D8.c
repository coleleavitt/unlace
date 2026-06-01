/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4674D8
// Address: 0x00000000004674D8

//----- (00000000004674D8) ----------------------------------------------------
__int64 __fastcall sub_4674D8(__int64 a1, __int64 a2, __off64_t a3, unsigned __int8 a4)
{
  int v6; // w22
  unsigned int v7; // w20
  unsigned int v9; // w0
  void *v10; // x0
  _BYTE *v11; // x22
  size_t v12; // x0
  void *v13; // x0
  __int64 v14; // x0
  unsigned int v15; // [xsp+34h] [xbp-Ch] BYREF

  v6 = a4;
  if ( a3 && a3 != sub_48C428(a2, a3, 0) || sub_48C160(a2, &v15, 4u) != 4 )
    return 0;
  v9 = v15;
  if ( v6 )
  {
    v9 = bswap32(v15);
    v15 = v9;
  }
  if ( v9 > 4
    && (sub_48C428(a2, -4, 1), (v7 = (unsigned __int8)sub_467410(a2, &v15, 1u, -1, -1)) != 0)
    && (v10 = sub_491040(v15 + 1), (v11 = v10) != nullptr) )
  {
    v12 = sub_48C160(a2, v10, v15);
    if ( v12 == v15 )
    {
      v11[v15] = 0;
      v13 = *(void **)a1;
      if ( *(_QWORD *)a1 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        j__free(v13);
      }
      v14 = v15 + 1;
      *(_QWORD *)a1 = v11;
      *(_QWORD *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 16) = v14;
    }
    else
    {
      v7 = 0;
      j__free(v11);
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
