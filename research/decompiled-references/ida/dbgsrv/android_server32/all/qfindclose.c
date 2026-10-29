/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindclose
// Address: 0x0007D038

//----- (0007D038) --------------------------------------------------------
int __fastcall qfindclose(int a1)
{
  void **v1; // r4
  _DWORD *v2; // r5
  int v3; // r6
  int v4; // r7

  v1 = (void **)(a1 + 8224);
  v2 = (_DWORD *)(a1 + 8232);
  if ( *(int *)(a1 + 8232) >= 1 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      free(*(void **)((char *)*v1 + v3));
      v3 += 4;
      ++v4;
    }
    while ( v4 < *v2 );
  }
  free(*v1);
  *v2 = 0;
  *v1 = nullptr;
  return 0;
}
