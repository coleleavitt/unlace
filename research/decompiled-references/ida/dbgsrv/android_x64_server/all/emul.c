/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emul
// Address: 0x00000000000B8B10

//----- (00000000000B8B10) ----------------------------------------------------
__int64 __fastcall emul(_WORD *a1, __int16 *a2, __int64 a3, double a4, __m128 a5)
{
  __int16 v5; // r12
  int v6; // r12d
  __int16 v7; // bx
  int v8; // ebx
  __int64 result; // rax
  int v11; // eax
  bool v12; // cl
  __int16 v13; // dx
  int v14; // [rsp+0h] [rbp-68h] BYREF
  __int16 v15; // [rsp+4h] [rbp-64h]
  __int16 v16; // [rsp+6h] [rbp-62h]
  __int16 v17; // [rsp+8h] [rbp-60h]
  __int16 v18; // [rsp+Ah] [rbp-5Eh]
  __int16 v19; // [rsp+Ch] [rbp-5Ch]
  __int16 v20; // [rsp+Eh] [rbp-5Ah]
  __int16 v21; // [rsp+10h] [rbp-58h]
  __int16 v22; // [rsp+12h] [rbp-56h]
  __int16 v23; // [rsp+14h] [rbp-54h]
  _WORD v24[16]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-28h]

  v25 = __readfsqword(0x28u);
  v5 = a1[7];
  v24[0] = v5 >> 15;
  v6 = v5 & 0x7FFF;
  v24[1] = v6;
  v24[2] = 0;
  v24[3] = a1[6];
  v24[4] = a1[5];
  v24[5] = a1[4];
  v24[6] = a1[3];
  v24[7] = a1[2];
  v24[8] = a1[1];
  v24[9] = *a1;
  v24[10] = 0;
  v7 = a2[7];
  LOWORD(v14) = v7 >> 15;
  v8 = v7 & 0x7FFF;
  HIWORD(v14) = v8;
  v15 = 0;
  v16 = a2[6];
  v17 = a2[5];
  v18 = a2[4];
  v19 = a2[3];
  v20 = a2[2];
  v21 = a2[1];
  v22 = *a2;
  v23 = 0;
  *(_OWORD *)a3 = 0;
  result = 1;
  if ( (_WORD)v6 )
  {
    if ( (_WORD)v8 )
    {
      v11 = sub_B8CF0((__int64)v24, &v14);
      v12 = emdnorm((__int64)&v14, v11 != 0, 0, v6 + v8 - 16382, 112, 0.0, a5);
      result = 2;
      if ( v12 )
      {
        v13 = HIWORD(v14) | 0x8000;
        if ( v24[0] == (_WORD)v14 )
          v13 = HIWORD(v14);
        *(_WORD *)(a3 + 14) = v13;
        *(_WORD *)(a3 + 12) = v16;
        *(_WORD *)(a3 + 10) = v17;
        *(_WORD *)(a3 + 8) = v18;
        *(_WORD *)(a3 + 6) = v19;
        *(_WORD *)(a3 + 4) = v20;
        *(_WORD *)(a3 + 2) = v21;
        *(_WORD *)a3 = v22;
        return 1;
      }
    }
  }
  return result;
}
