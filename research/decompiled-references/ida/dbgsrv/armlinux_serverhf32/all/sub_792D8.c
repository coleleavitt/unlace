/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_792D8
// Address: 0x000792D8

//----- (000792D8) --------------------------------------------------------
void *__fastcall sub_792D8(int a1)
{
  int v2; // r4
  char *v3; // r0
  char *v4; // r6
  size_t v5; // r0
  void *v6; // r3
  size_t v7; // r5
  size_t v9; // r7

  v2 = sub_70C68();
  v3 = strerror(a1);
  if ( v3 )
  {
    v4 = v3;
    v5 = strlen(v3);
    v6 = *(void **)v2;
    v7 = v5;
    if ( v5 )
    {
      v9 = v5 + 1;
      if ( v5 + 1 > *(_DWORD *)(v2 + 8) )
      {
        v6 = sub_77EB0(v2, *(void **)v2, v5 + 1, 1u);
        *(_DWORD *)v2 = v6;
      }
      *(_DWORD *)(v2 + 4) = v9;
      memmove(v6, v4, v7);
      *(_BYTE *)(*(_DWORD *)v2 + v7) = 0;
      return *(void **)v2;
    }
    else
    {
      *(_DWORD *)(v2 + 4) = 0;
      return v6;
    }
  }
  else
  {
    sub_1873C(v2, "Unknown error, code: 0x%08X", a1);
    return *(void **)v2;
  }
}
