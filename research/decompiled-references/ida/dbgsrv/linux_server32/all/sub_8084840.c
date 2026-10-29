/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8084840
// Address: 0x08084840

//----- (08084840) --------------------------------------------------------
int __cdecl sub_8084840(void **a1, int a2)
{
  int v3; // eax
  unsigned int v4; // esi
  const void *v5; // ebp
  void *v6; // eax

  if ( !a2 || *(_BYTE *)a2 != 5 )
    return sub_80C7880(1532);
  if ( !a1 )
    return 0;
  v3 = sub_8080DD0(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 28));
  if ( a1 == (void **)(v3 + 32) )
    return 0;
  v4 = *(_DWORD *)(v3 + 36);
  if ( v4 <= 1 )
  {
    a1[1] = nullptr;
    return 0;
  }
  v5 = *(const void **)(v3 + 32);
  v6 = *a1;
  if ( (unsigned int)a1[2] < v4 )
  {
    v6 = sub_80CF920((int)a1, v6, v4, 1u);
    *a1 = v6;
  }
  a1[1] = (void *)v4;
  memmove(v6, v5, v4 - 1);
  *((char *)*a1 + v4 - 1) = 0;
  return 0;
}
