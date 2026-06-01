/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DF41
// Address: 0x0047DF41

//----- (0047DF41) --------------------------------------------------------
char __cdecl sub_47DF41(int a1, int a2)
{
  int i; // esi
  void (__cdecl *v3)(_DWORD); // edi

  for ( i = a2; i != a1; i -= 8 )
  {
    v3 = *(void (__cdecl **)(_DWORD))(i - 4);
    if ( v3 )
      v3(0);
  }
  return 1;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
