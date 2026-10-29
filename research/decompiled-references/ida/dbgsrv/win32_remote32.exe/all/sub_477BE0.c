/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477BE0
// Address: 0x00477BE0

//----- (00477BE0) --------------------------------------------------------
int (__thiscall *__cdecl sub_477BE0(_DWORD *a1, unsigned int a2))(_DWORD)
{
  int (__thiscall **v2)(_DWORD); // esi
  int (__thiscall *v3)(_DWORD); // edi
  int (__thiscall *result)(_DWORD); // eax
  int (__thiscall *v5)(_DWORD); // ebx

  v2 = (int (__thiscall **)(_DWORD))a1;
  v3 = nullptr;
  result = (int (__thiscall *)(_DWORD))((a2 - (unsigned int)a1 + 3) >> 2);
  v5 = a2 >= (unsigned int)a1 ? result : nullptr;
  if ( v5 )
  {
    do
    {
      result = *v2;
      if ( *v2 )
        result = (int (__thiscall *)(_DWORD))(*v2)(result);
      ++v2;
      v3 = (int (__thiscall *)(_DWORD))((char *)v3 + 1);
    }
    while ( v3 != v5 );
  }
  return result;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
