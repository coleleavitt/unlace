/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451B90
// Address: 0x00451B90

//----- (00451B90) --------------------------------------------------------
int __thiscall sub_451B90(int this)
{
  int v2; // eax

  v2 = strcmp(*(const char **)(this + 32), (const char *)&dword_48FD78);
  if ( v2 )
    v2 = v2 < 0 ? -1 : 1;
  if ( v2 )
    return *(_DWORD *)(this + 36);
  else
    return sub_44D520(*(_DWORD *)(this + 16));
}
// 48FD78: using guessed type int dword_48FD78;
