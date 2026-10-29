/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ABDA0
// Address: 0x00000000000ABDA0

//----- (00000000000ABDA0) ----------------------------------------------------
__int64 __fastcall sub_ABDA0(_QWORD *a1, unsigned int a2)
{
  int *v2; // x9
  __int64 v3; // x10
  __int64 v4; // x9

  if ( (int)a2 > 0 && a2 < 0x148 )
  {
    v2 = &dword_118CDC[2 * a2];
    v3 = (unsigned int)*v2;
    v4 = (unsigned int)(v2[1] + 1);
    *a1 = v3;
    a1[1] = v4;
  }
  return ((int)a2 > 0) & (unsigned __int8)(a2 < 0x148);
}
// 118CDC: using guessed type int dword_118CDC[];
