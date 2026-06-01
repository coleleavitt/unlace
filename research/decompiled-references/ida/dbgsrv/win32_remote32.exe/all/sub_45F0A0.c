/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F0A0
// Address: 0x0045F0A0

//----- (0045F0A0) --------------------------------------------------------
int __stdcall sub_45F0A0(_DWORD *a1, _WORD *a2, char a3)
{
  int result; // eax
  int v4; // [esp+0h] [ebp-8h] BYREF

  result = sub_45D7E0(&v4, a2, 31, a3);
  if ( result == 1 )
    *a1 = v4;
  return result;
}
