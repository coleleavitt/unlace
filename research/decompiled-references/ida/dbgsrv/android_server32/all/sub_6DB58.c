/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DB58
// Address: 0x0006DB58

//----- (0006DB58) --------------------------------------------------------
int __fastcall sub_6DB58(_DWORD *a1, char a2, int a3)
{
  signed int v4; // r6
  int v5; // r7
  int v6; // r5
  __suseconds_t v7; // r0
  unsigned int v8; // r1
  int v9; // r1
  _DWORD *v10; // r0
  int v11; // r1
  _DWORD *v12; // r0
  char *v13; // r0
  unsigned __int8 v17; // [sp+14h] [bp-14h]
  unsigned __int8 v18; // [sp+15h] [bp-13h]
  unsigned __int8 v19; // [sp+16h] [bp-12h]
  unsigned __int8 v20; // [sp+17h] [bp-11h]
  unsigned __int8 v21; // [sp+18h] [bp-10h]
  unsigned __int8 v22; // [sp+19h] [bp-Fh]
  char v23; // [sp+1Ah] [bp-Eh]
  _DWORD v24[3]; // [sp+1Ch] [bp-Ch] BYREF

  v4 = a1[3];
  v5 = 0;
  v6 = 0;
  if ( v4 >= 0 && a1[1] )
  {
    v7 = qtime64();
    v6 = sub_6C66C(v7, v8, v4);
    v5 = v9;
  }
  BYTE2(v24[1]) = v23;
  LOWORD(v24[1]) = (v22 << 8) + v21;
  v24[0] = (((v20 << 8) + v19) << 16) + (v18 << 8) + v17;
  v10 = a1 + 4;
  v11 = a1[5];
  if ( a1[6] >= (unsigned int)(v11 + 1) )
  {
    v12 = (_DWORD *)*v10;
  }
  else
  {
    v12 = qvector_reserve((int)v10, (void *)a1[4], v11 + 1, 0x18u);
    a1[4] = v12;
    v11 = a1[5];
  }
  v12[6 * v11] = a3;
  v13 = (char *)&v12[6 * v11];
  *((_DWORD *)v13 + 1) = 0;
  *((_DWORD *)v13 + 2) = v6;
  *((_DWORD *)v13 + 3) = v5;
  v13[16] = a2;
  qmemcpy(v13 + 17, v24, 7u);
  ++a1[5];
  return _stack_chk_guard - v24[2];
}
// 6DB86: variable 'v8' is possibly undefined
// 6DB8C: variable 'v9' is possibly undefined
// 6DB94: variable 'v23' is possibly undefined
// 6DB98: variable 'v22' is possibly undefined
// 6DB96: variable 'v21' is possibly undefined
// 6DBAA: variable 'v20' is possibly undefined
// 6DBA8: variable 'v19' is possibly undefined
// 6DBA2: variable 'v18' is possibly undefined
// 6DBA0: variable 'v17' is possibly undefined
