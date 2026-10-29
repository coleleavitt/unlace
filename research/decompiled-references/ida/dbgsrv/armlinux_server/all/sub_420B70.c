/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420B70
// Address: 0x0000000000420B70

//----- (0000000000420B70) ----------------------------------------------------
bool __fastcall sub_420B70(__int64 a1)
{
  __int64 v2; // x0
  __off64_t v3; // x1
  __int64 v4; // x22
  __int64 v5; // x0
  __int64 v6; // x3
  __int64 v7; // x4
  unsigned __int64 v8; // x20
  __int64 v9; // x0
  unsigned __int64 v10; // x0
  unsigned __int64 v11; // x20
  _BOOL4 v12; // w21
  size_t v13; // x0
  unsigned __int64 v14; // x0

  v2 = sub_48C428(*(_QWORD *)(a1 + 472), 0, 1);
  v3 = *(_QWORD *)(a1 + 480);
  v4 = v2 - v3;
  v5 = sub_48C428(*(_QWORD *)(a1 + 472), v3, 0);
  v7 = *(_QWORD *)(a1 + 472);
  v6 = *(_QWORD *)(a1 + 480);
  if ( v5 == -1
    || (v8 = *(_QWORD *)(a1 + 488) - v6,
        v9 = sub_48C428(*(_QWORD *)(a1 + 472), 0, 1),
        v7 = *(_QWORD *)(a1 + 472),
        v6 = *(_QWORD *)(a1 + 480),
        v10 = v9 - v6,
        v10 >= v8) )
  {
    v12 = 0;
  }
  else
  {
    v11 = v8 - v10;
    v12 = 0;
    if ( v11 > 0xF )
    {
      *(_QWORD *)(a1 + 568) = 0;
      *(_QWORD *)(a1 + 504) = 0;
      *(_QWORD *)(a1 + 512) = 0;
      *(_QWORD *)(a1 + 520) = 0;
      *(_QWORD *)(a1 + 528) = 0;
      *(_QWORD *)(a1 + 536) = 0;
      *(_QWORD *)(a1 + 544) = 0;
      *(_QWORD *)(a1 + 552) = 0;
      *(_QWORD *)(a1 + 560) = 0;
      v13 = sub_48C160(v7, (void *)(a1 + 504), 0x10u);
      v7 = *(_QWORD *)(a1 + 472);
      v6 = *(_QWORD *)(a1 + 480);
      if ( v13 == 16 && *(_DWORD *)(a1 + 504) == 1179403647 )
      {
        v14 = 52;
        if ( *(_BYTE *)(a1 + 617) )
          v14 = 64;
        v12 = v14 <= v11;
      }
    }
  }
  sub_48C428(v7, v4 + v6, 0);
  return v12;
}
