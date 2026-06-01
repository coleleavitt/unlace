/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66C94
// Address: 0x00066C94

//----- (00066C94) --------------------------------------------------------
void *__fastcall sub_66C94(int a1, char *s)
{
  void **v3; // r4
  size_t v5; // r0
  size_t v6; // r7
  unsigned int v7; // r2
  void *v8; // r0
  void *result; // r0

  v3 = (void **)(a1 + 132);
  if ( s && (v5 = strlen(s)) != 0 )
  {
    v6 = v5;
    v7 = v5 + 1;
    if ( *(_DWORD *)(a1 + 140) >= v5 + 1 )
    {
      v8 = *v3;
    }
    else
    {
      v8 = qvector_reserve((int)v3, *v3, v7, 1u);
      v7 = v6 + 1;
      *v3 = v8;
    }
    *(_DWORD *)(a1 + 136) = v7;
    memmove(v8, s, v6);
    result = *v3;
    *((_BYTE *)*v3 + v6) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 136) = 0;
    return &dword_88;
  }
  return result;
}
// 88: using guessed type int;
