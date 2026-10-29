/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457E28
// Address: 0x0000000000457E28

//----- (0000000000457E28) ----------------------------------------------------
__int64 __fastcall sub_457E28(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // x0
  int v6; // w0
  __int64 v8; // x0
  char v9[8]; // [xsp+38h] [xbp-18h] BYREF
  __int64 v10; // [xsp+40h] [xbp-10h]
  __int64 v11; // [xsp+48h] [xbp-8h]

  sub_457CC8(a1, a2, a3);
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 672);
    v9[0] = 1;
    v10 = 0;
    v6 = *(unsigned __int16 *)(v5 + 24);
    if ( v6 != 43 )
      break;
LABEL_6:
    sub_457CC8(a1, (__int64)v9, 1);
    *(_QWORD *)(a2 + 8) += v10;
  }
  while ( v6 == 45 )
  {
    sub_457CC8(a1, (__int64)v9, 1);
    v8 = *(_QWORD *)(a2 + 8);
    v9[0] = 1;
    *(_QWORD *)(a2 + 8) = v8 - v10;
    v10 = 0;
    v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 672) + 24LL);
    if ( v6 == 43 )
      goto LABEL_6;
  }
  return v11 ^ _stack_chk_guard;
}
