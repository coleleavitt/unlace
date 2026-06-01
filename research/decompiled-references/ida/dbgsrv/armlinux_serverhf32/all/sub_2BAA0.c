/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BAA0
// Address: 0x0002BAA0

//----- (0002BAA0) --------------------------------------------------------
bool __fastcall sub_2BAA0(int a1, void *a2)
{
  __int64 v4; // kr00_8
  __int64 v5; // r0
  int v6; // r0
  int v7; // r1
  bool v8; // zf
  _BOOL4 v9; // r6
  __int64 v10; // r2
  __int64 v12; // r2
  int v13; // r0
  int v14; // r1
  bool v15; // zf
  __int64 v17; // [sp+10h] [bp-10h]
  int v18; // [sp+18h] [bp-8h] BYREF

  v4 = *(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 368);
  LODWORD(v5) = sub_74C30(*(_DWORD *)(a1 + 364), 0, 1);
  v17 = v5 - *(_QWORD *)(a1 + 368);
  v6 = sub_74C30(
         *(_DWORD *)(a1 + 364),
         __PAIR64__((unsigned int)(*(_DWORD *)(a1 + 368) >= 4u) + *(_DWORD *)(a1 + 372) - 1, *(_DWORD *)(a1 + 368) - 4)
       + v4,
         0);
  v8 = ++v7 == 0;
  if ( !v7 )
    v8 = v6 == -1;
  if ( v8 || sub_74A28(*(_DWORD *)(a1 + 364), &v18, 4) != 4 || v18 != 541413968 )
    goto LABEL_5;
  LODWORD(v12) = v4 - 8;
  HIDWORD(v12) = ((unsigned int)v4 >= 8) + HIDWORD(v4) - 1;
  v13 = sub_74C30(*(_DWORD *)(a1 + 364), v12, 0);
  v15 = ++v14 == 0;
  if ( !v14 )
    v15 = v13 == -1;
  if ( v15 )
LABEL_5:
    v9 = 0;
  else
    v9 = sub_2A280(a1, a2, 4, 1) >= 0;
  LODWORD(v10) = v17;
  HIDWORD(v10) = *(_DWORD *)(a1 + 372);
  sub_74C30(*(_DWORD *)(a1 + 364), v10 + __PAIR64__(HIDWORD(v17), *(_DWORD *)(a1 + 368)), 0);
  return v9;
}
// 2BB16: variable 'v5' is possibly undefined
// 2BB1E: variable 'v7' is possibly undefined
// 2BB8A: variable 'v14' is possibly undefined
