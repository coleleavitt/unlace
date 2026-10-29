/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_947F8
// Address: 0x000947F8

//----- (000947F8) --------------------------------------------------------
int __fastcall sub_947F8(int a1)
{
  int result; // r0
  int v3; // r0

  result = *(unsigned __int8 *)(a1 + 16);
  if ( !result )
  {
    v3 = *(_DWORD *)(a1 + 12);
    *(_BYTE *)(a1 + 16) = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 16))(v3);
    *(_BYTE *)(a1 + 16) = 0;
    return 0;
  }
  return result;
}
