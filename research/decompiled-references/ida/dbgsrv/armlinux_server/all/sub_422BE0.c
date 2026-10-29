/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422BE0
// Address: 0x0000000000422BE0

//----- (0000000000422BE0) ----------------------------------------------------
__int64 __fastcall sub_422BE0(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x21
  unsigned int v7; // w22
  unsigned int v9; // [xsp+34h] [xbp-Ch] BYREF

  v4 = sub_48C428(*(_QWORD *)(a1 + 472), 0, 1);
  v5 = *(_QWORD *)(a1 + 480);
  v6 = v4 - v5;
  if ( sub_48C428(*(_QWORD *)(a1 + 472), a2 + v5, 0) == -1 || (sub_420C98(a1, &v9, 4u, 1u) & 0x80000000) != 0 )
    v7 = 0;
  else
    v7 = v9;
  sub_48C428(*(_QWORD *)(a1 + 472), v6 + *(_QWORD *)(a1 + 480), 0);
  return v7;
}
