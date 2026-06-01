/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eltoe64
// Address: 0x00077B14

//----- (00077B14) --------------------------------------------------------
int __fastcall eltoe64(__int64 a1, _WORD *a2)
{
  unsigned int v3; // r3
  unsigned int v4; // r6
  unsigned int v5; // r2
  __int16 v6; // r1
  __int16 v7; // r7
  __int16 v8; // r3
  __int16 v9; // r6
  __int16 v10; // r0
  __int16 v11; // r2
  __int16 v13; // [sp+8h] [bp-28h]
  __int16 v14; // [sp+Ch] [bp-24h]
  __int16 v15; // [sp+10h] [bp-20h]
  int v16; // [sp+14h] [bp-1Ch] BYREF
  int v17; // [sp+18h] [bp-18h]
  int v18; // [sp+1Ch] [bp-14h]
  int v19; // [sp+20h] [bp-10h]
  int v20; // [sp+24h] [bp-Ch]
  __int16 v21; // [sp+28h] [bp-8h]
  int v22; // [sp+2Ch] [bp-4h]

  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  if ( a1 < 0 )
  {
    LOWORD(v16) = -1;
    v5 = (unsigned __int64)-a1 >> 32;
    LODWORD(a1) = -(int)a1;
    v3 = WORD1(a1) + (v5 << 16);
    v4 = HIWORD(v5);
  }
  else
  {
    v3 = WORD1(a1) + (HIDWORD(a1) << 16);
    v4 = HIWORD(HIDWORD(a1));
    if ( !a1 )
    {
      v6 = 0;
      v11 = 0;
      v10 = 0;
      v9 = 0;
      v8 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
LABEL_8:
      v7 = v6;
      goto LABEL_9;
    }
    LOWORD(v5) = WORD2(a1);
  }
  HIWORD(v17) = v5;
  LOWORD(v17) = v4;
  LOWORD(v18) = v3;
  HIWORD(v18) = a1;
  v6 = 16430 - sub_764F8((unsigned __int16 *)&v16);
  HIWORD(v16) = v6;
  v7 = v6 | 0x8000;
  v15 = HIWORD(v20);
  v14 = v20;
  v13 = HIWORD(v19);
  v8 = v19;
  v9 = HIWORD(v18);
  v10 = v18;
  v11 = HIWORD(v17);
  if ( !(_WORD)v16 )
    goto LABEL_8;
LABEL_9:
  a2[6] = v11;
  a2[7] = v7;
  a2[5] = v10;
  a2[4] = v9;
  a2[3] = v8;
  a2[2] = v13;
  a2[1] = v14;
  *a2 = v15;
  return _stack_chk_guard - v22;
}
