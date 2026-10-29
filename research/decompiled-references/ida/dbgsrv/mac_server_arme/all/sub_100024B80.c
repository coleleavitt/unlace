/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024B80
// Address: 0x0000000100024B80

//----- (0000000100024B80) ----------------------------------------------------
__int64 __fastcall sub_100024B80(__int64 a1)
{
  unsigned int v2; // w8
  __int64 v3; // x20
  unsigned __int8 v5[8]; // [xsp+8h] [xbp-38h] BYREF
  __int128 v6; // [xsp+10h] [xbp-30h] BYREF
  __int64 v7; // [xsp+20h] [xbp-20h]

  v5[0] = 2;
  v7 = 0;
  v6 = 0u;
  v2 = *(unsigned __int16 *)(a1 + 64);
  if ( v2 > 4 )
  {
    if ( v2 == 8 )
    {
      v3 = *(_QWORD *)(a1 + 88);
      free_idcv(v5);
      v5[0] = 9;
      *(_QWORD *)&v6 = v3;
      goto LABEL_12;
    }
    if ( v2 == 7 )
    {
      free_idcv(v5);
      v5[0] = 3;
      v6 = *(_OWORD *)(a1 + 88);
      goto LABEL_12;
    }
    if ( v2 != 5 )
    {
LABEL_13:
      if ( under_debugger != 1 )
        goto LABEL_15;
      while ( 1 )
      {
        __break(1u);
LABEL_15:
        interr(1438);
      }
    }
    goto LABEL_9;
  }
  if ( v2 == 3 )
  {
LABEL_9:
    *(_QWORD *)&v6 = *(_QWORD *)(a1 + 72);
    goto LABEL_12;
  }
  if ( v2 != 4 )
    goto LABEL_13;
  free_idcv(v5);
  v5[0] = 7;
  v7 = 0;
  v6 = 0u;
  sub_100024CF0((_QWORD **)&v6, a1 + 40);
LABEL_12:
  sub_10002B5D4((_QWORD *)(a1 + 424), v5);
  free_idcv(v5);
  return 0;
}
// 1000A590D: using guessed type char under_debugger;
