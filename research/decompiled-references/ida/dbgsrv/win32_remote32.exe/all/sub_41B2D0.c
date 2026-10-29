/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B2D0
// Address: 0x0041B2D0

//----- (0041B2D0) --------------------------------------------------------
int __userpurge sub_41B2D0@<eax>(int a1@<ebx>, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // esi
  unsigned int v4; // edi
  int i; // eax

  v3 = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
  {
    if ( v4 < dword_4B6B24 )
    {
      sub_45CF00(a1, v4, *(_DWORD *)(dword_4B6B20 + 4 * v4));
      *(_DWORD *)(dword_4B6B20 + 4 * v4) = 0;
      for ( i = dword_4B6B24; i; dword_4B6B24 = --i )
      {
        if ( *(_DWORD *)(dword_4B6B20 + 4 * i - 4) )
          break;
        if ( !i )
          break;
      }
    }
  }
  sub_4562F0(v3);
  return 0;
}
// 4B6B20: using guessed type int dword_4B6B20;
// 4B6B24: using guessed type int dword_4B6B24;
