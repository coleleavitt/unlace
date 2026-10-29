/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424B8
// Address: 0x000424B8

//----- (000424B8) --------------------------------------------------------
void __fastcall sub_424B8(int a1, unsigned __int8 *a2)
{
  void *v4; // r0

  if ( a2 )
  {
    sub_424B8(a1, *(_DWORD **)a2);
    sub_424B8(a1, *((_DWORD **)a2 + 1));
    free_idcv(a2 + 32);
    v4 = *((void **)a2 + 4);
    if ( v4 )
    {
      *((_DWORD *)a2 + 5) = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}
