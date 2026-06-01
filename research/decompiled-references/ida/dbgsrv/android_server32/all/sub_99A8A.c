/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99A8A
// Address: 0x00099A8A

//----- (00099A8A) --------------------------------------------------------
bool __fastcall sub_99A8A(_DWORD *a1, int a2, int a3, int a4)
{
  _BOOL4 result; // r0
  int v6; // r0

  if ( *((_BYTE *)a1 + 384) )
    return 0;
  result = sub_99DF4((int)a1, a2, a3, a4);
  if ( result )
  {
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 52))(a1, 1);
    if ( *((_BYTE *)a1 + 384) )
      return 0;
    if ( a1[90] )
    {
      v6 = (*(int (__fastcall **)(_DWORD *, int))(*a1 + 12))(a1, -2);
      (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 16))(a1, -2, a1[90] + v6);
    }
    return 1;
  }
  return result;
}
