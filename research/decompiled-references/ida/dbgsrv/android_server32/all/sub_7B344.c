/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B344
// Address: 0x0007B344

//----- (0007B344) --------------------------------------------------------
int __fastcall sub_7B344(int a1)
{
  int v2; // r5
  int v3; // r2
  int v4; // r1
  int result; // r0

  v2 = a1 + 68;
  v3 = *(_DWORD *)(a1 + 24) - (a1 + 68);
  if ( v3 + *(_DWORD *)(a1 + 28) != 0x8000 )
  {
    if ( !under_debugger )
      interr(3334);
    __debugbreak();
  }
  if ( v3 )
  {
    v4 = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 8))(*(_DWORD *)(a1 + 8), v2);
    result = 0;
    if ( !v4 )
      return result;
    *(_DWORD *)(a1 + 24) = v2;
    *(_DWORD *)(a1 + 28) = 0x8000;
  }
  return 1;
}
// E0550: using guessed type char under_debugger;
