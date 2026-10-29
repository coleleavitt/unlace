/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B280
// Address: 0x0004B280

//----- (0004B280) --------------------------------------------------------
int __cdecl sub_4B280(_DWORD *a1)
{
  char *v1; // eax
  _DWORD *v2; // esi
  void *v3; // edi
  char *v5; // [esp+14h] [ebp-18h]
  int v6; // [esp+18h] [ebp-14h]

  v6 = *(_DWORD *)(a1[47] + 4 * a1[48] - 4);
  if ( a1[6] )
    v1 = (char *)a1[5];
  else
    v1 = byte_EF875;
  v5 = v1;
  v2 = operator new(0x10u);
  v2[3] = 0;
  *v2 = 5;
  v3 = operator new(0xCu);
  sub_1B530((int)v3, v5);
  v2[1] = v3;
  v2[2] = v6;
  *(_DWORD *)(a1[47] + 4 * a1[48] - 4) = v2;
  return 0;
}
