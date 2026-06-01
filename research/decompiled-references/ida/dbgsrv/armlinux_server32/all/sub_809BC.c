/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809BC
// Address: 0x000809BC

//----- (000809BC) --------------------------------------------------------
int __fastcall sub_809BC(int a1, int a2, int a3, unsigned int a4)
{
  int result; // r0

  result = sub_80FC8(a1, a2);
  if ( !result && a4 <= 3 )
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 20))(a2, a1, a3);
  return result;
}
