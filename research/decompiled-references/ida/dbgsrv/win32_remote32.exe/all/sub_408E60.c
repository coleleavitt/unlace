/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408E60
// Address: 0x00408E60

//----- (00408E60) --------------------------------------------------------
char __usercall sub_408E60@<al>(int a1@<edi>, int a2, int *a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ebx
  int v9; // ebp
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // edi
  int v14; // edx
  signed __int64 v15; // kr00_8
  unsigned int v16; // ecx
  unsigned int v17; // ecx

  v8 = a5;
  v9 = a6;
  v10 = a2;
  if ( (a6 & a5) == 0xFFFFFFFF )
  {
    v8 = sub_45C810(a5, a1, a2, 0, 1u);
    v9 = v11;
    v10 = a2;
  }
  v12 = a7;
  v13 = a8;
  if ( (a8 & a7) == 0xFFFFFFFF )
  {
    v12 = sub_45C8B0(v8, a8, v10);
    v13 = v14;
  }
  v15 = __PAIR64__(v13, v12) - __PAIR64__(v9, v8);
  v16 = *a3;
  if ( v9 < 0 || v15 < 0 )
  {
    *a3 = 0;
    return 0;
  }
  else if ( v16 && a4 && a4 > 0xFFFFFFFF / v16 || (v17 = a4 * v16, SHIDWORD(v15) <= 0 && (unsigned int)v15 < v17) )
  {
    *a3 = sub_462A90(v15, a4);
    return 0;
  }
  else
  {
    return 1;
  }
}
// 408EE2: conditional instruction was optimized away because edi.4>=0
// 408E87: variable 'v11' is possibly undefined
// 408EA6: variable 'v14' is possibly undefined
