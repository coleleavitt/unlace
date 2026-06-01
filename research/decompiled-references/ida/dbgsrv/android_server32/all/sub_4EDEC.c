/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EDEC
// Address: 0x0004EDEC

//----- (0004EDEC) --------------------------------------------------------
int __fastcall sub_4EDEC(int a1)
{
  void ***v2; // r5
  _BYTE *v3; // r6
  int result; // r0
  char *v5; // r5
  char *v6; // r6
  int v7; // r0
  int v8; // r3

  v2 = (void ***)(a1 + 464);
  v3 = (_BYTE *)(a1 + 488);
  if ( !*(_BYTE *)(a1 + 488) )
    sub_50078(*v2);
  *v2 = nullptr;
  *v3 = 0;
  result = *(_DWORD *)(a1 + 480);
  if ( result )
  {
    v5 = *(char **)(a1 + 476);
    if ( v5 )
    {
      do
      {
        v6 = *(char **)v5;
        sub_55EE0((char **)v5 + 5);
        if ( (unsigned __int8)v5[8] << 31 )
          operator delete(*((void **)v5 + 4));
        operator delete(v5);
        v5 = v6;
      }
      while ( v6 );
    }
    *(_DWORD *)(a1 + 476) = 0;
    v7 = *(_DWORD *)(a1 + 472);
    if ( v7 )
    {
      v8 = 0;
      do
      {
        *(_DWORD *)(*(_DWORD *)(a1 + 468) + v8) = 0;
        v8 += 4;
        --v7;
      }
      while ( v7 );
    }
    *(_DWORD *)(a1 + 480) = 0;
    return 0;
  }
  return result;
}
