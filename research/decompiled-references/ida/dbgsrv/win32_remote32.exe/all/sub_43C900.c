/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C900
// Address: 0x0043C900

//----- (0043C900) --------------------------------------------------------
int sub_43C900(int a1, int a2, ...)
{
  int result; // eax
  int v3; // eax
  va_list va; // [esp+Ch] [ebp+Ch] BYREF

  va_start(va, a2);
  result = a1;
  if ( *(_BYTE *)(a1 + 332) )
  {
    v3 = *(_DWORD *)(a1 + 200);
    if ( !v3 || *(_BYTE *)(v3 + 36) )
      return sub_44D410(0, a2, va);
    else
      return sub_44B840(0, v3, a2, (int)va);
  }
  return result;
}
// 44D410: using guessed type _DWORD __cdecl sub_44D410(_DWORD, _DWORD, _DWORD);
