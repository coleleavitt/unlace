/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B924
// Address: 0x0002B924

//----- (0002B924) --------------------------------------------------------
unsigned int __fastcall sub_2B924(unsigned int a1, _DWORD *a2)
{
  unsigned int v3; // r0
  __int64 *v4; // r2

  if ( *(_DWORD *)(a1 + 4) <= 1u )
  {
    v3 = a2[54];
    if ( v3 > a1 || v3 + 68 * a2[55] < a1 )
    {
      if ( !under_debugger )
        interr(20086);
      __debugbreak();
    }
    v4 = (__int64 *)(a2 + 58);
    if ( (unsigned int)(-252645135 * ((int)(a1 - v3) >> 2)) >= a2[57] )
      v4 = (__int64 *)(a2 + 66);
    sub_32154((int)a2, (void **)a1, v4, *(_DWORD *)(a1 + 24));
  }
  return a1;
}
// E0550: using guessed type char under_debugger;
