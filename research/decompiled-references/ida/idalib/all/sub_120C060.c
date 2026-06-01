__int64 __fastcall sub_120C060(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_21B7850(a2, 1915, 1463, 1);
  if ( !(_BYTE)result )
  {
    result = *(unsigned int *)(a3 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, result + 1, 8);
      result = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-fno-use-init-array";
    ++*(_DWORD *)(a3 + 8);
  }
  return result;
}
