/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BD54
// Address: 0x0002BD54

//----- (0002BD54) --------------------------------------------------------
int __fastcall sub_2BD54(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v6; // r0
  __int64 v8; // r0
  __int64 v9; // kr00_8
  __int64 v10; // r2
  int v11; // r0
  int v12; // r1
  bool v13; // zf
  int v14; // r7
  __int64 v15; // r2
  int v17; // [sp+Ch] [bp-1Ch] BYREF
  int *v18; // [sp+10h] [bp-18h]
  __int64 v19; // [sp+18h] [bp-10h]

  v6 = *(_DWORD *)(a1 + 364);
  v18 = (int *)a1;
  LODWORD(v8) = sub_74D98(v6, 0, 1);
  v9 = v8 - *(_QWORD *)(a1 + 368);
  LODWORD(v8) = *(_DWORD *)(a1 + 364);
  v10 = __PAIR64__(a4, a3) + *(_QWORD *)(a1 + 368);
  v19 = v9;
  v11 = sub_74D98(v8, v10, 0);
  v13 = ++v12 == 0;
  if ( !v12 )
    v13 = v11 == -1;
  if ( v13 || sub_2A420(a1, &v17, 4, 1) < 0 )
    v14 = 0;
  else
    v14 = v17;
  LODWORD(v15) = v19;
  HIDWORD(v15) = v18[93];
  sub_74D98(v18[91], v15 + __PAIR64__(HIDWORD(v19), v18[92]), 0);
  return v14;
}
// 2BD92: variable 'v8' is possibly undefined
// 2BDB8: variable 'v12' is possibly undefined
