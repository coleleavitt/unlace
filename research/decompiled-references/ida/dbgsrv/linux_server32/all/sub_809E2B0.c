/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809E2B0
// Address: 0x0809E2B0

//----- (0809E2B0) --------------------------------------------------------
int __cdecl sub_809E2B0(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // ebp
  int result; // eax
  size_t v4; // edx
  void *v5; // ecx
  void *v6; // eax
  void *src; // [esp+0h] [ebp-24h]

  *a2 = a1[35];
  a2[1] = a1[36];
  if ( a2 + 2 != a1 + 37 )
  {
    v2 = a1[38];
    if ( !v2 || (v4 = v2 - 1, v2 == 1) )
    {
      a2[3] = 0;
    }
    else
    {
      src = (void *)a1[37];
      v5 = (void *)a2[2];
      if ( a2[4] < v2 )
      {
        v6 = sub_80CF920((int)(a2 + 2), v5, v2, 1u);
        v4 = v2 - 1;
        a2[2] = v6;
        v5 = v6;
      }
      a2[3] = v2;
      memmove(v5, src, v4);
      *(_BYTE *)(a2[2] + v2 - 1) = 0;
    }
  }
  result = a1[40];
  a2[5] = result;
  return result;
}
