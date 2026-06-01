/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B3EC
// Address: 0x000000000004B3EC

//----- (000000000004B3EC) ----------------------------------------------------
bool __fastcall sub_4B3EC(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x21
  __int64 v5; // x20
  __int64 v6; // x22
  unsigned __int64 v7; // x8
  bool v8; // cf
  unsigned __int64 v9; // x22
  __int64 v10; // x0
  unsigned __int64 v11; // x8
  _BOOL4 v12; // w20

  v2 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v3 = *(_QWORD *)(a1 + 480);
  v4 = v2 - v3;
  if ( qlseek(*(_QWORD *)(a1 + 472), v3, 0) != -1
    && (v6 = *(_QWORD *)(a1 + 480),
        v5 = *(_QWORD *)(a1 + 488),
        v7 = qlseek(*(_QWORD *)(a1 + 472), 0, 1) - v6,
        v8 = v5 - v6 >= v7,
        v9 = v5 - v6 - v7,
        v9 != 0 && v8)
    && v9 >= 0x10
    && (*(_OWORD *)(a1 + 552) = 0u,
        *(_OWORD *)(a1 + 536) = 0u,
        *(_OWORD *)(a1 + 520) = 0u,
        *(_OWORD *)(a1 + 504) = 0u,
        v10 = *(_QWORD *)(a1 + 472),
        *(_QWORD *)(a1 + 568) = 0,
        qlread(v10, (void *)(a1 + 504), 0x10u) == 16)
    && *(_DWORD *)(a1 + 504) == 1179403647 )
  {
    v11 = 52;
    if ( *(_BYTE *)(a1 + 617) )
      v11 = 64;
    v12 = v9 >= v11;
  }
  else
  {
    v12 = 0;
  }
  qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v4, 0);
  return v12;
}
