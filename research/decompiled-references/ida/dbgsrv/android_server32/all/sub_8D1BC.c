/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D1BC
// Address: 0x0008D1BC

//----- (0008D1BC) --------------------------------------------------------
int __fastcall sub_8D1BC(int a1)
{
  int result; // r0
  int v3; // r5

  result = -102;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 224);
    if ( v3 )
    {
      free(*(void **)v3);
      *(_DWORD *)v3 = 0;
      if ( *(_DWORD *)(v3 + 72) == 8 )
        sub_8A494((_DWORD *)(v3 + 4));
      free((void *)v3);
      *(_DWORD *)(a1 + 224) = 0;
    }
    (*(void (__fastcall **)(_DWORD, _DWORD))(a1 + 20))(*(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 48));
    free((void *)a1);
    return 0;
  }
  return result;
}
