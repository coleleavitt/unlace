/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476EFE
// Address: 0x00476EFE

//----- (00476EFE) --------------------------------------------------------
int __thiscall sub_476EFE(char *this, int (__cdecl *a2)(char *))
{
  char *v2; // esi
  char *v3; // edi
  int result; // eax

  v2 = this;
  v3 = this + 4;
  while ( v2 != v3 )
  {
    result = a2(v2);
    v2 += 4;
  }
  return result;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
