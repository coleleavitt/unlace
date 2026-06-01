/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A610
// Address: 0x0009A610

//----- (0009A610) --------------------------------------------------------
int __cdecl sub_9A610(int a1)
{
  char *v1; // eax
  int result; // eax
  int v3; // edx
  int v4; // edi
  int v5; // [esp+8h] [ebp-14h]

  if ( *(_DWORD *)(a1 + 20) >= 2u )
  {
    sub_9A6C0((int)"certificate", *(char **)(a1 + 16), 17);
    if ( *(_DWORD *)(a1 + 32) )
      v1 = *(char **)(a1 + 28);
    else
      v1 = byte_EF875;
    sub_9A6C0((int)"private key", v1, 17);
  }
  result = dword_13C2CC;
  if ( (unsigned int)dword_13C2CC >= 2 )
  {
    v5 = *(_DWORD *)(a1 + 60);
    v3 = *(_DWORD *)(a1 + 64);
    v4 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 60) = dword_13C2C8;
    *(_DWORD *)(a1 + 64) = result;
    *(_DWORD *)(a1 + 68) = dword_13C2D0;
    dword_13C2C8 = v5;
    dword_13C2CC = v3;
    dword_13C2D0 = v4;
    return v5;
  }
  return result;
}
// 13C2C8: using guessed type int dword_13C2C8;
// 13C2CC: using guessed type int dword_13C2CC;
// 13C2D0: using guessed type int dword_13C2D0;
