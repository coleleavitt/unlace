/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45340
// Address: 0x00045340

//----- (00045340) --------------------------------------------------------
int __cdecl sub_45340(int a1, int a2)
{
  char *v2; // edi
  size_t v3; // eax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = byte_EF875;
    goto LABEL_5;
  }
  v2 = *(char **)(a1 + 4);
  if ( v2 )
  {
LABEL_5:
    v3 = strlen(v2);
    goto LABEL_6;
  }
  v2 = nullptr;
  v3 = 0;
LABEL_6:
  *(_BYTE *)a2 = 7;
  sub_2DCA0((_DWORD *)(a2 + 4), v2, v3);
  return 0;
}
