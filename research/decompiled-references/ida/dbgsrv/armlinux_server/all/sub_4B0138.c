/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0138
// Address: 0x00000000004B0138

//----- (00000000004B0138) ----------------------------------------------------
__int64 __fastcall sub_4B0138(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x3
  _BYTE *v5; // x0
  _BYTE *v6; // x1
  _BYTE *v7; // t1
  __int64 v8; // x2
  size_t v10; // x2

  v4 = *(_BYTE **)a1;
  v7 = *(_BYTE **)a2;
  v6 = (_BYTE *)(a2 + 16);
  v5 = v7;
  if ( v6 == v7 )
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
    *(_QWORD *)a1 = v5;
    if ( v4 == (_BYTE *)(a1 + 16) )
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
      v8 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
      if ( v4 )
      {
        *(_QWORD *)a2 = v4;
        *(_QWORD *)(a2 + 8) = 0;
        *(_QWORD *)(a2 + 16) = v8;
        *v4 = 0;
        return a1;
      }
    }
    *(_QWORD *)a2 = v6;
    *(_QWORD *)(a2 + 8) = 0;
    *v6 = 0;
    return a1;
  }
}
