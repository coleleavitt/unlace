/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_947D2
// Address: 0x000947D2

//----- (000947D2) --------------------------------------------------------
int __fastcall sub_947D2(int a1)
{
  int result; // r0
  int v3; // r0

  result = *(unsigned __int8 *)(a1 + 16);
  if ( !result )
  {
    v3 = *(_DWORD *)(a1 + 12);
    *(_BYTE *)(a1 + 16) = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
    *(_BYTE *)(a1 + 16) = 0;
    return 0;
  }
  return result;
}
