/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027DD0
// Address: 0x0000000100027DD0

//----- (0000000100027DD0) ----------------------------------------------------
__int64 __fastcall sub_100027DD0(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int8 v3[8]; // [rsp+8h] [rbp-38h] BYREF
  __int128 v4; // [rsp+10h] [rbp-30h] BYREF
  __int64 v5; // [rsp+20h] [rbp-20h]

  v3[0] = 2;
  v4 = 0;
  v5 = 0;
  switch ( *(_WORD *)(a1 + 64) )
  {
    case 3:
    case 5:
      *(_QWORD *)&v4 = *(_QWORD *)(a1 + 72);
      break;
    case 4:
      free_idcv(v3);
      v3[0] = 7;
      v4 = 0;
      v5 = 0;
      sub_100027F20((__int64)&v4, a1 + 40);
      break;
    case 7:
      free_idcv(v3);
      v3[0] = 3;
      v4 = *(_OWORD *)(a1 + 88);
      break;
    case 8:
      v1 = *(_QWORD *)(a1 + 88);
      free_idcv(v3);
      v3[0] = 9;
      *(_QWORD *)&v4 = v1;
      break;
    default:
      if ( under_debugger != 1 )
        interr(0x59Eu);
      BUG();
  }
  sub_10002E260((char **)(a1 + 424), v3);
  free_idcv(v3);
  return 0;
}
// 1000AE23D: using guessed type char under_debugger;
