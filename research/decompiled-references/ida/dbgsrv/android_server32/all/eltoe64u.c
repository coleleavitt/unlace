/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eltoe64u
// Address: 0x00077BE4

//----- (00077BE4) --------------------------------------------------------
int __fastcall eltoe64u(__int64 a1, _WORD *a2)
{
  __int16 v3; // r7
  __int16 v4; // r2
  __int16 v5; // r3
  __int16 v6; // r6
  __int16 v7; // r0
  __int16 v8; // r1
  __int16 v10; // [sp+8h] [bp-28h]
  __int16 v11; // [sp+Ch] [bp-24h]
  __int16 v12; // [sp+10h] [bp-20h]
  int v13; // [sp+14h] [bp-1Ch] BYREF
  int v14; // [sp+18h] [bp-18h]
  int v15; // [sp+1Ch] [bp-14h]
  int v16; // [sp+20h] [bp-10h]
  int v17; // [sp+24h] [bp-Ch]
  __int16 v18; // [sp+28h] [bp-8h]
  int v19; // [sp+2Ch] [bp-4h]

  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  if ( !a1 )
  {
    v3 = 0;
    v8 = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
LABEL_5:
    v4 = v3;
    goto LABEL_6;
  }
  HIWORD(v15) = a1;
  HIWORD(v14) = WORD2(a1);
  LOWORD(v15) = WORD1(a1);
  LOWORD(v14) = HIWORD(a1);
  v3 = 16430 - sub_764F8((unsigned __int16 *)&v13);
  HIWORD(v13) = v3;
  v4 = v3 | 0x8000;
  v12 = HIWORD(v17);
  v11 = v17;
  v10 = HIWORD(v16);
  v5 = v16;
  v6 = HIWORD(v15);
  v7 = v15;
  v8 = HIWORD(v14);
  if ( !(_WORD)v13 )
    goto LABEL_5;
LABEL_6:
  a2[6] = v8;
  a2[7] = v4;
  a2[5] = v7;
  a2[4] = v6;
  a2[3] = v5;
  a2[2] = v10;
  a2[1] = v11;
  *a2 = v12;
  return _stack_chk_guard - v19;
}
