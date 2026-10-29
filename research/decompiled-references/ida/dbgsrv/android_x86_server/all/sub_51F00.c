/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51F00
// Address: 0x00051F00

//----- (00051F00) --------------------------------------------------------
unsigned int __cdecl sub_51F00(int a1, void *src, size_t n)
{
  int v3; // edi
  char v5; // [esp+7h] [ebp-15h] BYREF
  unsigned int v6; // [esp+8h] [ebp-14h]

  v6 = __readgsdword(0x14u);
  if ( n )
  {
    v3 = *(_DWORD *)(a1 + 4);
    v5 = 0;
    sub_43860((char **)a1, v3 + n, &v5);
    memcpy((void *)(*(_DWORD *)a1 + v3), src, n);
  }
  return __readgsdword(0x14u);
}
