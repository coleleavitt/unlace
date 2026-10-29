/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8057800
// Address: 0x08057800

//----- (08057800) --------------------------------------------------------
int __cdecl sub_8057800(int a1, __int64 a2, char *s)
{
  void **v5; // edi
  size_t v6; // eax
  size_t v7; // esi
  unsigned int v8; // ebp
  void *v9; // eax

  if ( a2 != 14 )
    return 0;
  v5 = *(void ***)(a1 + 8);
  if ( s && (v6 = strlen(s), (v7 = v6) != 0) )
  {
    v8 = v6 + 1;
    v9 = *v5;
    if ( (unsigned int)v5[2] < v8 )
    {
      v9 = sub_80CF920((int)v5, v9, v8, 1u);
      *v5 = v9;
    }
    v5[1] = (void *)v8;
    memmove(v9, s, v7);
    *((_BYTE *)*v5 + v7) = 0;
  }
  else
  {
    v5[1] = nullptr;
  }
  return 1;
}
