/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431268
// Address: 0x0000000000431268

//----- (0000000000431268) ----------------------------------------------------
__int64 __fastcall sub_431268(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  char *v9; // x1
  char v11; // [xsp+0h] [xbp-10h]

  if ( *(_QWORD *)(a2 + 8) == 3 )
  {
    if ( a1[6] )
      v9 = (char *)a1[5];
    else
      v9 = (char *)&qword_4B2D48;
    *(_QWORD *)(a2 + 8) = (unsigned int)sub_44D010((__int64)a1, v9, a1 + 8, 0, a5, a6, a7, a8, v11) == 0;
    return 0;
  }
  else
  {
    sub_486A58(0, "setattr");
    return sub_4869C8(56);
  }
}
// 431294: variable 'v11' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
