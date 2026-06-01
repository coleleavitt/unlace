/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ediv
// Address: 0x00000000000B9140

//----- (00000000000B9140) ----------------------------------------------------
__int64 __fastcall ediv(__int16 *a1, _WORD *a2, __int64 a3, double a4, __m128 a5)
{
  __int16 v5; // bp
  int v6; // ebp
  __int16 v7; // bx
  int v8; // ebx
  __int64 result; // rax
  _BOOL4 v11; // eax
  bool v12; // cl
  __int16 v13; // dx
  _WORD v14[16]; // [rsp+0h] [rbp-68h] BYREF
  __int16 v15; // [rsp+20h] [rbp-48h] BYREF
  __int16 v16; // [rsp+22h] [rbp-46h]
  __int16 v17; // [rsp+24h] [rbp-44h]
  __int16 v18; // [rsp+26h] [rbp-42h]
  __int16 v19; // [rsp+28h] [rbp-40h]
  __int16 v20; // [rsp+2Ah] [rbp-3Eh]
  __int16 v21; // [rsp+2Ch] [rbp-3Ch]
  __int16 v22; // [rsp+2Eh] [rbp-3Ah]
  __int16 v23; // [rsp+30h] [rbp-38h]
  __int16 v24; // [rsp+32h] [rbp-36h]
  __int16 v25; // [rsp+34h] [rbp-34h]
  unsigned __int64 v26; // [rsp+40h] [rbp-28h]

  v26 = __readfsqword(0x28u);
  v5 = a1[7];
  v15 = v5 >> 15;
  v6 = v5 & 0x7FFF;
  v16 = v6;
  v17 = 0;
  v18 = a1[6];
  v19 = a1[5];
  v20 = a1[4];
  v21 = a1[3];
  v22 = a1[2];
  v23 = a1[1];
  v24 = *a1;
  v25 = 0;
  v7 = a2[7];
  v14[0] = v7 >> 15;
  v8 = v7 & 0x7FFF;
  v14[1] = v8;
  v14[2] = 0;
  v14[3] = a2[6];
  v14[4] = a2[5];
  v14[5] = a2[4];
  v14[6] = a2[3];
  v14[7] = a2[2];
  v14[8] = a2[1];
  v14[9] = *a2;
  v14[10] = 0;
  *(_OWORD *)a3 = 0;
  if ( !(_WORD)v8 )
    return 4;
  result = 1;
  if ( (_WORD)v6 )
  {
    v11 = sub_B9320((__int64)v14, (__int64)&v15);
    v12 = emdnorm((__int64)&v15, v11, 0, v6 + 0x3FFF - v8, 112, 0.0, a5);
    result = 2;
    if ( v12 )
    {
      v13 = v16 | 0x8000;
      if ( v15 == v14[0] )
        v13 = v16;
      v15 = -(v15 != v14[0]);
      *(_WORD *)(a3 + 14) = v13;
      *(_WORD *)(a3 + 12) = v18;
      *(_WORD *)(a3 + 10) = v19;
      *(_WORD *)(a3 + 8) = v20;
      *(_WORD *)(a3 + 6) = v21;
      *(_WORD *)(a3 + 4) = v22;
      *(_WORD *)(a3 + 2) = v23;
      *(_WORD *)a3 = v24;
      return 1;
    }
  }
  return result;
}
