/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A03F0
// Address: 0x080A03F0

//----- (080A03F0) --------------------------------------------------------
int sub_80A03F0(int a1, char *a2, ...)
{
  int result; // eax
  int v3; // eax
  va_list va; // [esp+10h] [ebp+Ch] BYREF

  va_start(va, a2);
  result = a1;
  if ( *(_BYTE *)(a1 + 412) )
  {
    v3 = *(_DWORD *)(a1 + 248);
    if ( v3 && !*(_BYTE *)(v3 + 36) )
      return sub_80BC4A0(0, v3);
    else
      return sub_80BF8E0(0, a2, (int)va);
  }
  return result;
}
