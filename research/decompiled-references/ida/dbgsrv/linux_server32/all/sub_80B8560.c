/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B8560
// Address: 0x080B8560

//----- (080B8560) --------------------------------------------------------
int __cdecl sub_80B8560(void **a1, unsigned int *a2)
{
  const char *v2; // ebp
  unsigned int v3; // eax
  int result; // eax
  size_t v5; // eax
  size_t v6; // edx
  unsigned int v7; // ecx
  void *v8; // eax
  size_t v9; // [esp+0h] [ebp-24h]
  unsigned int v10; // [esp+0h] [ebp-24h]
  size_t v11; // [esp+4h] [ebp-20h]

  v2 = (const char *)*a2;
  v3 = *a2;
  do
  {
    if ( v3 >= a2[1] )
      goto LABEL_4;
    ++v3;
  }
  while ( *(_BYTE *)(v3 - 1) );
  *a2 = v3;
  if ( !v2 || (v5 = strlen(v2), (v6 = v5) == 0) )
  {
LABEL_4:
    a1[1] = nullptr;
    goto LABEL_5;
  }
  v7 = v5 + 1;
  v8 = *a1;
  if ( (unsigned int)a1[2] < v7 )
  {
    v11 = v6;
    v10 = v7;
    v8 = sub_80CF920((int)a1, v8, v7, 1u);
    v6 = v11;
    v7 = v10;
    *a1 = v8;
  }
  a1[1] = (void *)v7;
  v9 = v6;
  memmove(v8, v2, v6);
  *((_BYTE *)*a1 + v9) = 0;
LABEL_5:
  a1[3] = (void *)(sub_80CE010(a2, a2[1]) - 1);
  a1[4] = (void *)(sub_80CE010(a2, a2[1]) - 1);
  result = sub_80CE010(a2, a2[1]) - 1;
  a1[5] = (void *)result;
  return result;
}
