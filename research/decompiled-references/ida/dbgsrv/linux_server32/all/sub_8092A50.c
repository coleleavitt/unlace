/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8092A50
// Address: 0x08092A50

//----- (08092A50) --------------------------------------------------------
int __cdecl sub_8092A50(_DWORD *a1, _DWORD *a2, int **a3, int a4)
{
  int *v4; // edx
  int v5; // edx
  int *v6; // eax
  int v7; // ecx
  int result; // eax

  if ( !a1[41] )
  {
    v4 = &dword_80DDFD8;
    if ( a4 > 0 )
      goto LABEL_3;
LABEL_11:
    v7 = a1[39];
    result = a1[38];
    goto LABEL_5;
  }
  v4 = (int *)a1[40];
  if ( a4 <= 0 )
    goto LABEL_11;
LABEL_3:
  v5 = a1[35] - a4;
  if ( v5 < 0 )
    return 0;
  v6 = (int *)(a1[34] + 24 * v5);
  v4 = (int *)"#include ...";
  v7 = v6[4];
  result = *v6;
LABEL_5:
  if ( a2 )
    *a2 = v7;
  if ( a3 )
    *a3 = v4;
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
