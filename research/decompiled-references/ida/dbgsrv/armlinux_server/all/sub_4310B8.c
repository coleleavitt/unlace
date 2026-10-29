/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4310B8
// Address: 0x00000000004310B8

//----- (00000000004310B8) ----------------------------------------------------
__int64 __fastcall sub_4310B8(__int64 a1, __int64 a2)
{
  __int64 v3; // x2
  const char *v4; // x0
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v8; // x2
  __int64 v9; // [xsp+20h] [xbp-20h] BYREF
  __int64 v10; // [xsp+28h] [xbp-18h]
  __int64 v11; // [xsp+30h] [xbp-10h]

  v3 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( v3 )
    v4 = *(const char **)(a1 + 8);
  else
    v4 = (const char *)&qword_4B2D48;
  sub_4950A8(v4, (__int64)&v9);
  v6 = v9;
  v5 = v10;
  *(_BYTE *)a2 = 7;
  v8 = v11;
  *(_QWORD *)(a2 + 8) = v6;
  *(_QWORD *)(a2 + 16) = v5;
  *(_QWORD *)(a2 + 24) = v8;
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
