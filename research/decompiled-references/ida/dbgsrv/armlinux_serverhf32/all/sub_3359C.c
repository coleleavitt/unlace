/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3359C
// Address: 0x0003359C

//----- (0003359C) --------------------------------------------------------
_DWORD *__fastcall sub_3359C(_DWORD *a1, int a2, unsigned int a3)
{
  char *v5; // r0
  char *v6; // r9
  size_t v7; // r6
  void *v8; // r0

  v5 = sub_2C4FC(a2, a3);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( v5 )
  {
    v6 = v5;
    v7 = strlen(v5);
    v8 = sub_77EB0((int)a1, nullptr, v7 + 1, 1u);
    *a1 = v8;
    a1[1] = v7 + 1;
    memmove(v8, v6, v7);
    *(_BYTE *)(*a1 + v7) = 0;
    if ( a1[1] > 1u )
      return a1;
  }
  sub_1873C((int)a1, "%08X", a3);
  return a1;
}
