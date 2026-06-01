/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E60
// Address: 0x00045E60

//----- (00045E60) --------------------------------------------------------
int __fastcall sub_45E60(unsigned __int8 *a1, unsigned int a2)
{
  int result; // r0
  int v4; // r3

  result = (int)sub_45BF0(a1, 0);
  if ( result )
  {
    v4 = *(unsigned __int8 *)result;
    switch ( v4 )
    {
      case 2:
        *(_DWORD *)(result + 8) += a2;
        return 1;
      case 9:
        *(_QWORD *)(result + 8) += (int)a2;
        return 1;
      case 3:
        sub_71A84(result + 8, (int)dword_B41E0, (_DWORD *)(result + 8), a2 >> 31);
        return 1;
      default:
        sub_70B98(61);
        return 0;
    }
  }
  return result;
}
// B41E0: using guessed type int dword_B41E0[3];
