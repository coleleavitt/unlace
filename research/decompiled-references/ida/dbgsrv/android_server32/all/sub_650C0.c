/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_650C0
// Address: 0x000650C0

//----- (000650C0) --------------------------------------------------------
int __fastcall sub_650C0(int a1, const char *a2)
{
  unsigned int v3; // r7
  int result; // r0
  int v5; // r5
  int v6; // r6
  int v7; // r4
  int v8; // [sp+0h] [bp-Ch]

  v3 = *(_DWORD *)(a1 + 48);
  result = -1;
  if ( v3 )
  {
    v8 = a1;
    v5 = *(_DWORD *)(a1 + 44);
    v6 = 0;
    v7 = 0;
    while ( strcmp(a2, *(const char **)(v5 + v6)) )
    {
      v6 += 4;
      if ( ++v7 >= v3 )
        return -1;
    }
    return *(_DWORD *)(*(_DWORD *)(v8 + 32) + v6);
  }
  return result;
}
