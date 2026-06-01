/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eltoe64
// Address: 0x00000000000B9FD0

//----- (00000000000B9FD0) ----------------------------------------------------
unsigned __int64 __fastcall eltoe64(__int64 a1, _WORD *a2)
{
  __int16 v3; // cx
  __int16 v4; // r8
  __int16 v5; // r9
  __int16 v6; // r10
  __int16 v7; // di
  __int16 v8; // ax
  __int16 v9; // dx
  __int16 v10; // si
  _BYTE v12[22]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  memset(v12, 0, sizeof(v12));
  if ( a1 < 0 )
  {
    a1 = -a1;
    *(_WORD *)v12 = -1;
  }
  else if ( !a1 )
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    goto LABEL_7;
  }
  *(_WORD *)&v12[4] = HIWORD(a1);
  *(_WORD *)&v12[6] = WORD2(a1);
  *(_WORD *)&v12[8] = WORD1(a1);
  *(_WORD *)&v12[10] = a1;
  v3 = 16430 - sub_B8110((__int64)v12);
  *(_WORD *)&v12[2] = v3;
  v4 = *(_WORD *)&v12[6];
  v5 = *(_WORD *)&v12[8];
  v6 = *(_WORD *)&v12[10];
  v7 = *(_WORD *)&v12[12];
  v8 = *(_WORD *)&v12[14];
  v9 = *(_WORD *)&v12[16];
  v10 = *(_WORD *)&v12[18];
  if ( *(_WORD *)v12 )
    v3 |= 0x8000u;
LABEL_7:
  a2[7] = v3;
  a2[6] = v4;
  a2[5] = v5;
  a2[4] = v6;
  a2[3] = v7;
  a2[2] = v8;
  a2[1] = v9;
  *a2 = v10;
  return __readfsqword(0x28u);
}
