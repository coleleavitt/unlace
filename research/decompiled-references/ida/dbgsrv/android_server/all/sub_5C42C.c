/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C42C
// Address: 0x000000000005C42C

//----- (000000000005C42C) ----------------------------------------------------
unsigned __int64 __fastcall sub_5C42C(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x9
  unsigned __int64 v3; // x8
  unsigned __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x9
  __int64 v10; // x23
  __int64 v11; // x24

  v2 = a1[8];
  v3 = a1[4];
  if ( v2 && v3 && 0xFFFFFFFFFFFFFFFFLL / v3 < v2 || a2 && v3 && 0xFFFFFFFFFFFFFFFFLL / v3 < a2 )
    return 0;
  v7 = a1[1];
  v8 = qlseek(*(_QWORD *)(v7 + 472), 0, 1);
  v9 = *(_QWORD *)(v7 + 480);
  v10 = v8 - v9;
  v6 = 0;
  if ( qlseek(*(_QWORD *)(v7 + 472), a1[2] + v9 + a1[4] * a1[8], 0) != -1 && a2 )
  {
    v11 = 0;
    v6 = 0;
    do
    {
      if ( !sub_581E4((__int64)a1, (_QWORD *)(a1[5] + v11)) )
        break;
      ++v6;
      v11 += 16;
    }
    while ( v6 < a2 );
  }
  qlseek(*(_QWORD *)(v7 + 472), *(_QWORD *)(v7 + 480) + v10, 0);
  return v6;
}
