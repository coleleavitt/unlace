/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B2D0
// Address: 0x0003B2D0

//----- (0003B2D0) --------------------------------------------------------
int __cdecl sub_3B2D0(int a1, __int64 *a2, unsigned int a3, int a4, int a5, unsigned int a6, int a7, unsigned int a8)
{
  unsigned int v8; // esi
  unsigned int v9; // edi
  int v10; // edx
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // edx
  signed __int64 v14; // kr00_8
  unsigned int v15; // ecx
  unsigned int v16; // edi
  int v17; // edi
  int result; // eax
  __int64 v19; // rax
  int v20; // [esp+0h] [ebp-1Ch]

  v8 = a8;
  v9 = a6;
  v20 = a5;
  v10 = a7;
  if ( (a6 & a5) == 0xFFFFFFFF )
  {
    v20 = qlseek(a1, 0, 1);
    v9 = v11;
    v10 = a7;
  }
  if ( (a8 & v10) == 0xFFFFFFFF )
  {
    v12 = qlsize(a1);
    v8 = v13;
    v10 = v12;
  }
  v14 = __PAIR64__(v8, v10) - __PAIR64__(v9, v20);
  if ( ((((__PAIR64__(v8, v10) - __PAIR64__(v9, v20)) >> 32) | v9) & 0x80000000) != 0LL )
  {
    v19 = 0;
LABEL_12:
    *a2 = v19;
    result = sub_44030();
    if ( result != 1 )
      sub_43A00(0);
    return result;
  }
  v15 = a3;
  v16 = *(_DWORD *)a2;
  if ( a3 && v16 && (v15 = a3, 0xFFFFFFFF / v16 < a3)
    || (v17 = v15 * v16, result = (v14 - (unsigned __int64)(unsigned int)v17) >> 32, v14 < (unsigned int)v17) )
  {
    v19 = v14 / v15;
    goto LABEL_12;
  }
  return result;
}
// 3B322: variable 'v11' is possibly undefined
// 3B33E: variable 'v13' is possibly undefined
