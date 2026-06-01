/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98D68
// Address: 0x00098D68

//----- (00098D68) --------------------------------------------------------
int __fastcall sub_98D68(int a1, int a2)
{
  unsigned __int8 *v2; // r6
  int result; // r0

  v2 = *(unsigned __int8 **)(a1 + 8);
  if ( v2[4] != 10 || (result = sub_98DC4((int)v2)) == 0 )
  {
    if ( sub_94836(v2) || sub_9484A(*(unsigned __int8 **)(a1 + 8)) )
      sub_93B8C(a2, ")", "");
    return (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2);
  }
  return result;
}
