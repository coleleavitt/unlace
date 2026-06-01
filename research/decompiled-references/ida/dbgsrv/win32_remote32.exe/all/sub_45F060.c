/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F060
// Address: 0x0045F060

//----- (0045F060) --------------------------------------------------------
int __stdcall sub_45F060(int *a1, _WORD *a2, char a3)
{
  int result; // eax
  int v4; // edx
  int v5[2]; // [esp+0h] [ebp-8h] BYREF

  result = sub_45D7E0(v5, a2, 63, a3);
  if ( result == 1 )
  {
    v4 = v5[0];
    a1[1] = v5[1];
    *a1 = v4;
  }
  return result;
}
