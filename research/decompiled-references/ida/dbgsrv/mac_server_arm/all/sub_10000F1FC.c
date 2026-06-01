/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F1FC
// Address: 0x000000010000F1FC

//----- (000000010000F1FC) ----------------------------------------------------
bool __fastcall sub_10000F1FC(__int64 a1, char a2)
{
  void *v4; // x0
  _QWORD *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x9
  unsigned __int64 v8; // x23
  unsigned __int64 v9; // x22
  int v10; // w8
  int v11; // w24
  unsigned __int64 v12; // x25
  unsigned int v13; // w8
  unsigned int v14; // w10
  _QWORD *v15; // x1
  __int64 v16; // x8

  v5 = (_QWORD *)(a1 + 200);
  v4 = *(void **)(a1 + 200);
  v6 = 28;
  if ( *((_BYTE *)v5 - 39) )
    v6 = 32;
  v7 = *(v5 - 8);
  v8 = v7 + v6;
  v9 = v7 + *(v5 - 7);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v10 = *(_DWORD *)(a1 + 180);
  if ( v8 >= v9 )
  {
    if ( v10 )
    {
      if ( (a2 & 1) != 0 )
        return 0;
LABEL_24:
      sub_10000EA94();
      return 0;
    }
  }
  else if ( v10 )
  {
    v11 = 0;
    v12 = v8;
    while ( 1 )
    {
      if ( v9 - v12 < 8 )
        v13 = 0;
      else
        v13 = *(_DWORD *)(v12 + 4);
      v14 = bswap32(v13);
      if ( *(_BYTE *)(a1 + 160) )
        v13 = v14;
      if ( (v13 & 3) != 0 )
      {
        if ( (a2 & 1) != 0 )
          return 0;
        goto LABEL_24;
      }
      v8 = v12 + v13;
      if ( v8 > v9 )
      {
        if ( (a2 & 1) != 0 )
          return 0;
        goto LABEL_24;
      }
      if ( v12 > v8 )
      {
        if ( (a2 & 1) != 0 )
          return 0;
        goto LABEL_24;
      }
      if ( !v13 )
        break;
      v15 = *(_QWORD **)(a1 + 200);
      v16 = *(_QWORD *)(a1 + 208);
      if ( *(_QWORD *)(a1 + 216) < (unsigned __int64)(v16 + 1) )
      {
        v15 = qvector_reserve(v5, v15, v16 + 1, 8u);
        *(_QWORD *)(a1 + 200) = v15;
        v16 = *(_QWORD *)(a1 + 208);
      }
      v15[v16] = v12;
      ++*(_QWORD *)(a1 + 208);
      if ( (unsigned int)++v11 < *(_DWORD *)(a1 + 180) )
      {
        v12 = v8;
        if ( v8 < v9 )
          continue;
      }
      goto LABEL_26;
    }
    if ( (a2 & 1) != 0 )
      return 0;
    goto LABEL_24;
  }
LABEL_26:
  if ( v9 != v8 && (a2 & 1) == 0 )
    sub_10000EA94();
  *(_BYTE *)(a1 + 440) = 0;
  return *(_QWORD *)(a1 + 208) != 0;
}
