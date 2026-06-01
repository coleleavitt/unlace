/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69180
// Address: 0x00069180

//----- (00069180) --------------------------------------------------------
void __cdecl sub_69180(_DWORD *a1)
{
  int v1; // eax
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // [esp+8h] [ebp-14h]

  v1 = a1[7];
  v2 = a1[8];
  v5 = v2 - 1;
  v3 = 27 * (v2 - 1);
  v4 = v2 + v3 - 1;
  *a1 = *(_DWORD *)(v1 + v4 + 12);
  a1[1] = *(_DWORD *)(v1 + v4 + 16);
  a1[10] = *(_DWORD *)(v1 + v4 + 24);
  if ( v2 )
  {
    a1[8] = v5;
    sub_1BC40((char **)(v5 + v3 + v1));
  }
}
