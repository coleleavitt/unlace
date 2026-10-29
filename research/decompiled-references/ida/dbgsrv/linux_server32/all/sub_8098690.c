/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8098690
// Address: 0x08098690

//----- (08098690) --------------------------------------------------------
int __cdecl sub_8098690(int a1)
{
  int v1; // edi
  int result; // eax
  int v3; // eax

  v1 = *(_DWORD *)(a1 + 352);
  result = sub_8097180(a1, v1, 0, nullptr);
  if ( *(_DWORD *)(a1 + 32) )
  {
    if ( result )
      goto LABEL_3;
    result = sub_8098220(a1, v1);
  }
  if ( result )
  {
LABEL_3:
    v3 = sub_80C7850();
    __longjmp_chk(a1 + 196, v3);
  }
  return result;
}
// 804B140: using guessed type void __cdecl __noreturn __longjmp_chk(_DWORD, _DWORD);
