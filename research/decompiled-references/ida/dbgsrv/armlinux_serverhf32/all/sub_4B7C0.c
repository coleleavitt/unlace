/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B7C0
// Address: 0x0004B7C0

//----- (0004B7C0) --------------------------------------------------------
int __fastcall sub_4B7C0(int a1, int (__fastcall *a2)(_DWORD))
{
  _DWORD *v2; // r4
  int result; // r0

  v2 = *(_DWORD **)(*(_DWORD *)(a1 + 612) + 8);
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    result = a2(v2[1]);
    if ( result )
      break;
    v2 = (_DWORD *)*v2;
    if ( !v2 )
      return 0;
  }
  return result;
}
