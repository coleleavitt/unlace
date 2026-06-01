/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477B99
// Address: 0x00477B99

//----- (00477B99) --------------------------------------------------------
int __cdecl sub_477B99(int a1)
{
  int (__cdecl *v1)(int); // esi

  v1 = (int (__cdecl *)(int))__ROR4__(dword_4B7A2C ^ __security_cookie, __security_cookie & 0x1F);
  if ( v1 )
    return v1(a1);
  else
    return 0;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4B7A2C: using guessed type int dword_4B7A2C;
