/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A2D4
// Address: 0x0002A2D4

//----- (0002A2D4) --------------------------------------------------------
bool __fastcall sub_2A2D4(int a1)
{
  __int64 v2; // r0
  int v3; // r0
  int v4; // r1
  bool v5; // zf
  unsigned __int64 v6; // r10
  __int64 v7; // r0
  unsigned __int64 v8; // r6
  bool v9; // cf
  _BOOL4 v10; // r6
  __int64 v11; // r2
  void *v13; // r0
  int v14; // r2
  unsigned __int64 v15; // [sp+8h] [bp-24h]
  __int64 v17; // [sp+18h] [bp-14h]

  LODWORD(v2) = sub_74D98(*(_DWORD *)(a1 + 364), 0, 1);
  v17 = v2 - *(_QWORD *)(a1 + 368);
  v3 = sub_74D98(*(_DWORD *)(a1 + 364), *(_QWORD *)(a1 + 368), 0);
  v5 = ++v4 == 0;
  if ( !v4 )
    v5 = v3 == -1;
  if ( v5 )
    goto LABEL_8;
  v6 = *(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 368);
  LODWORD(v7) = sub_74D98(*(_DWORD *)(a1 + 364), 0, 1);
  v8 = v7 - *(_QWORD *)(a1 + 368);
  if ( v8 >= v6 )
    goto LABEL_8;
  v9 = 1;
  if ( (_DWORD)v6 == (_DWORD)v8 )
    v9 = (unsigned int)(v6 - v8) >= 0x10;
  if ( v9
    && (v13 = memset((void *)(a1 + 388), 0, 0x48u), sub_74B94(*(_DWORD *)(a1 + 364), v13, 16) == 16)
    && *(_DWORD *)(a1 + 388) == 1179403647 )
  {
    if ( *(_BYTE *)(a1 + 481) )
      v14 = 64;
    else
      v14 = 52;
    HIDWORD(v15) = v6 - v8;
    LODWORD(v15) = v6 - v8;
    v10 = v15 >= (unsigned int)v14;
  }
  else
  {
LABEL_8:
    v10 = 0;
  }
  LODWORD(v11) = v17;
  HIDWORD(v11) = *(_DWORD *)(a1 + 372);
  sub_74D98(*(_DWORD *)(a1 + 364), v11 + __PAIR64__(HIDWORD(v17), *(_DWORD *)(a1 + 368)), 0);
  return v10;
}
// 2A322: variable 'v2' is possibly undefined
// 2A32A: variable 'v4' is possibly undefined
// 2A364: variable 'v7' is possibly undefined
