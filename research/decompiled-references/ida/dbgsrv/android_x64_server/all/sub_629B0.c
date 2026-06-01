/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_629B0
// Address: 0x00000000000629B0

//----- (00000000000629B0) ----------------------------------------------------
__int64 __fastcall sub_629B0(__int64 a1, double a2, __m128 a3)
{
  __int128 v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // r14
  char v7[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h] BYREF
  __int64 v9; // [rsp+18h] [rbp-20h]
  unsigned __int64 v10; // [rsp+20h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  v7[0] = 2;
  *(_QWORD *)&v3 = 0;
  v8 = 0;
  v9 = 0;
  switch ( *(_WORD *)(a1 + 64) )
  {
    case 3:
    case 5:
      v4 = *(_QWORD *)(a1 + 72);
      v7[0] = 2;
      *(_QWORD *)&v8 = v4;
      break;
    case 4:
      free_idcv(v7, 0.0, a3);
      v7[0] = 7;
      *(_QWORD *)&v3 = 0;
      v8 = 0;
      v9 = 0;
      sub_62AF0((__int64)&v8, a1 + 40);
      break;
    case 7:
      free_idcv(v7, 0.0, a3);
      v7[0] = 3;
      v3 = *(_OWORD *)(a1 + 88);
      v8 = v3;
      break;
    case 8:
      v5 = *(_QWORD *)(a1 + 88);
      free_idcv(v7, 0.0, a3);
      v7[0] = 9;
      *(_QWORD *)&v8 = v5;
      break;
    default:
      if ( !(_BYTE)under_debugger )
        interr(1438);
      BUG();
  }
  sub_688B0(a1 + 424, v7, *(double *)&v3, a3);
  free_idcv(v7, *(double *)&v3, a3);
  return 0;
}
// 158B40: using guessed type __int64 under_debugger;
