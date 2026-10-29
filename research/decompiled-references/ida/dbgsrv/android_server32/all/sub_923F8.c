/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_923F8
// Address: 0x000923F8

//----- (000923F8) --------------------------------------------------------
int __fastcall sub_923F8(unsigned __int8 *a1, int a2)
{
  int result; // r0

  (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 12))(a1);
  result = a1[5];
  if ( result != 1 )
    return (*(int (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)a1 + 16))(a1, a2);
  return result;
}
