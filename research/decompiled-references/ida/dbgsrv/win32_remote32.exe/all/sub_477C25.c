/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477C25
// Address: 0x00477C25

//----- (00477C25) --------------------------------------------------------
int __cdecl sub_477C25(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  while ( a1 != a2 )
  {
    if ( *a1 )
    {
      result = ((int (__thiscall *)(_DWORD))*a1)(*a1);
      if ( result )
        return result;
    }
    ++a1;
  }
  return 0;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
