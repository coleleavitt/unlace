/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458128
// Address: 0x0000000000458128

//----- (0000000000458128) ----------------------------------------------------
__int64 __fastcall sub_458128(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // x0
  int v6; // w0
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  char v12[8]; // [xsp+48h] [xbp-18h] BYREF
  __int64 v13; // [xsp+50h] [xbp-10h]
  __int64 v14; // [xsp+58h] [xbp-8h]

  sub_458008(a1, a2, a3);
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 672);
    v12[0] = 1;
    v13 = 0;
    v6 = *(unsigned __int16 *)(v5 + 24);
    if ( v6 != 15677 )
      break;
LABEL_6:
    sub_458008(a1, (__int64)v12, 1);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = v13;
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 8) = v10 == v11;
  }
  while ( v6 == 8509 )
  {
    sub_458008(a1, (__int64)v12, 1);
    v8 = v13;
    v9 = *(_QWORD *)(a2 + 8);
    *(_BYTE *)a2 = 0;
    v12[0] = 1;
    *(_QWORD *)(a2 + 8) = v9 != v8;
    v13 = 0;
    v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 672) + 24LL);
    if ( v6 == 15677 )
      goto LABEL_6;
  }
  return v14 ^ _stack_chk_guard;
}
