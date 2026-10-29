/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457F00
// Address: 0x0000000000457F00

//----- (0000000000457F00) ----------------------------------------------------
__int64 __fastcall sub_457F00(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // x0
  int v6; // w0
  __int64 v8; // x0
  __int64 v9; // x0
  char v10[8]; // [xsp+48h] [xbp-18h] BYREF
  __int64 v11; // [xsp+50h] [xbp-10h]
  __int64 v12; // [xsp+58h] [xbp-8h]

  sub_457E28(a1, a2, a3);
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 672);
    v10[0] = 1;
    v11 = 0;
    v6 = *(unsigned __int16 *)(v5 + 24);
    if ( v6 != 15934 )
      break;
LABEL_6:
    sub_457E28(a1, (__int64)v10, 1);
    if ( *(_BYTE *)a2 )
      v9 = *(_QWORD *)(a2 + 8) >> v11;
    else
      v9 = *(__int64 *)(a2 + 8) >> v11;
    *(_QWORD *)(a2 + 8) = v9;
  }
  while ( v6 == 15420 )
  {
    sub_457E28(a1, (__int64)v10, 1);
    *(_QWORD *)(a2 + 8) <<= v11;
    v10[0] = 1;
    v8 = *(_QWORD *)(a1 + 672);
    v11 = 0;
    v6 = *(unsigned __int16 *)(v8 + 24);
    if ( v6 == 15934 )
      goto LABEL_6;
  }
  return v12 ^ _stack_chk_guard;
}
