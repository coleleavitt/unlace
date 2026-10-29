/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806BDC0
// Address: 0x0806BDC0

//----- (0806BDC0) --------------------------------------------------------
int __cdecl sub_806BDC0(int a1, int a2, bool *a3)
{
  int result; // eax
  int v4; // ebx
  int v5; // ecx
  int v6; // esi
  int v7; // [esp-Ch] [ebp-18h]
  int v8; // [esp-8h] [ebp-14h]
  int v9; // [esp-4h] [ebp-10h]

  if ( !*(_BYTE *)(a1 + 136) )
  {
    sub_8068EB0();
    goto LABEL_16;
  }
  if ( a3 )
    *a3 = 0;
  if ( !a2 )
  {
LABEL_16:
    if ( !byte_811F8A1 )
      sub_80CFF40(20056, v7, v8, v9);
    JUMPOUT(0x804CBAC);
  }
  result = *(_DWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 20) << 6;
  v5 = result + v4;
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    if ( *(_DWORD *)(result + 44) == a2 )
    {
      v6 = *(_DWORD *)(result + 4);
      if ( v6 == 9 || v6 == 4 )
        break;
    }
    result += 64;
    if ( result == v5 )
      return 0;
  }
  if ( a3 )
    *a3 = v6 == 4;
  return result;
}
// 806BE44: control flows out of bounds to 804CBAC
// 806BE52: variable 'v7' is possibly undefined
// 806BE52: variable 'v8' is possibly undefined
// 806BE52: variable 'v9' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
