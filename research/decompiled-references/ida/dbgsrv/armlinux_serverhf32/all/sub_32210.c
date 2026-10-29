/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32210
// Address: 0x00032210

//----- (00032210) --------------------------------------------------------
_DWORD *__fastcall sub_32210(_DWORD *a1, int a2)
{
  char *v4; // r0
  char *v5; // r9
  size_t v6; // r6
  void *v7; // r0

  v4 = sub_2AEA8(a2);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( v4 )
  {
    v5 = v4;
    v6 = strlen(v4);
    v7 = sub_77EB0((int)a1, nullptr, v6 + 1, 1u);
    *a1 = v7;
    a1[1] = v6 + 1;
    memmove(v7, v5, v6);
    *(_BYTE *)(*a1 + v6) = 0;
    if ( a1[1] > 1u )
      return a1;
  }
  sub_1873C((int)a1, "Unknown CPU [%u]", *(unsigned __int16 *)(a2 + 406));
  return a1;
}
