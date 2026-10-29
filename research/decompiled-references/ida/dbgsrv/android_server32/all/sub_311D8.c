/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_311D8
// Address: 0x000311D8

//----- (000311D8) --------------------------------------------------------
int __fastcall sub_311D8(
        int a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  int *v8; // r3
  signed __int64 v9; // r6
  unsigned int v10; // r5
  int v11; // r2
  __int64 v13; // r0
  int v14; // r1
  __int64 v15; // r0
  unsigned int v16; // r4
  int result; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3

  v8 = (int *)a1;
  v9 = __PAIR64__(a8, a6);
  v10 = a5;
  v11 = a7;
  if ( (a5 & a6) == 0xFFFFFFFF )
  {
    v13 = qlseek(a1, 0, 1);
    v11 = a7;
    v8 = (int *)a1;
    LODWORD(v9) = HIDWORD(v13);
    v10 = v13;
  }
  if ( !(~a8 | ~v11) )
  {
    v11 = qlsize(v8);
    HIDWORD(v9) = v14;
  }
  HIDWORD(v9) = (__PAIR64__(HIDWORD(v9), v11) - __PAIR64__(v9, v10)) >> 32;
  v15 = 0;
  if ( __SPAIR64__((unsigned int)v9 | HIDWORD(v9), v10 | (v11 - v10)) <= -1 )
    goto LABEL_11;
  v16 = *a2;
  LODWORD(v9) = a3;
  if ( a3 && v16 && 0xFFFFFFFF / v16 < a3 || (result = 0, __SPAIR64__(HIDWORD(v9), v11 - v10) < v16 * a3) )
  {
    v15 = v9 / (unsigned int)v9;
LABEL_11:
    *(_QWORD *)a2 = v15;
    result = sub_375C0();
    if ( result != 1 )
      sub_371F8(0, v18, v19, v20);
  }
  return result;
}
// 31238: variable 'v14' is possibly undefined
// 312B2: variable 'v18' is possibly undefined
// 312B2: variable 'v19' is possibly undefined
// 312B2: variable 'v20' is possibly undefined
