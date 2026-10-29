/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463D5D
// Address: 0x00463D5D

//----- (00463D5D) --------------------------------------------------------
_DWORD *__cdecl sub_463D5D(_DWORD *a1)
{
  _DWORD *result; // eax
  int v2; // ecx
  int (__thiscall *v3)(int); // edx

  result = a1;
  if ( a1 && *a1 == -529697949 && a1[4] == 3 && (a1[5] == 429065504 || a1[5] == 429065505 || a1[5] == 429065506) )
  {
    v2 = a1[7];
    if ( v2 )
    {
      v3 = *(int (__thiscall **)(int))(v2 + 4);
      if ( v3 )
      {
        return (_DWORD *)sub_463E05(a1[6], v3);
      }
      else if ( (*(_BYTE *)v2 & 0x10) != 0 )
      {
        result = (_DWORD *)a1[6];
        if ( *result )
          return (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*result + 8))(
                             *(_DWORD *)(*(_DWORD *)*result + 8),
                             *result);
      }
    }
  }
  return result;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
