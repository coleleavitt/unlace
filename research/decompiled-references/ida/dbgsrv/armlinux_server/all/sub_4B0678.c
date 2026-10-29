/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0678
// Address: 0x00000000004B0678

//----- (00000000004B0678) ----------------------------------------------------
__int64 __fastcall sub_4B0678(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x3
  _BYTE *v5; // x0
  _BYTE *v6; // x1
  __int64 v7; // x2
  _BYTE *v9; // x3
  size_t v10; // x2

  v4 = *(_BYTE **)a1;
  v5 = (_BYTE *)(a2 + 16);
  v6 = *(_BYTE **)a2;
  if ( v6 == v5 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    if ( v10 )
    {
      if ( v10 == 1 )
        *v4 = *(_BYTE *)(a2 + 16);
      else
        memcpy(v4, v6, v10);
      v4 = *(_BYTE **)a1;
      v10 = *(_QWORD *)(a2 + 8);
    }
    *(_QWORD *)(a1 + 8) = v10;
    v4[v10] = 0;
    *(_QWORD *)(a2 + 8) = 0;
    **(_BYTE **)a2 = 0;
    return a1;
  }
  else
  {
    *(_QWORD *)a1 = v6;
    if ( v4 == (_BYTE *)(a1 + 16) )
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
      v7 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
      if ( v4 )
      {
        *(_QWORD *)a2 = v4;
        *(_QWORD *)(a2 + 8) = 0;
        *(_QWORD *)(a2 + 16) = v7;
        *v4 = 0;
        return a1;
      }
    }
    v9 = v5;
    *(_QWORD *)a2 = v5;
    *(_QWORD *)(a2 + 8) = 0;
    *v9 = 0;
    return a1;
  }
}
