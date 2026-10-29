/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E953
// Address: 0x0047E953

//----- (0047E953) --------------------------------------------------------
int __usercall sub_47E953@<eax>(int a1@<ebx>)
{
  int v1; // eax
  signed __int32 *v2; // edi
  int v3; // esi

  v1 = sub_4782C6();
  v2 = (signed __int32 *)(v1 + 76);
  if ( (dword_4B6858 & *(_DWORD *)(v1 + 848)) == 0 || (v3 = *v2) == 0 )
  {
    sub_47A78B(4);
    v3 = sub_47E9D4(v2, dword_4B7A54);
    sub_47A7D3(4);
    if ( !v3 )
      sub_467F38(a1, v2, 0);
  }
  return v3;
}
// 4B6858: using guessed type int dword_4B6858;
// 4B7A54: using guessed type int dword_4B7A54;
