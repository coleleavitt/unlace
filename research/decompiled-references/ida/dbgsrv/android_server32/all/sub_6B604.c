/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B604
// Address: 0x0006B604

//----- (0006B604) --------------------------------------------------------
int __fastcall sub_6B604(int a1, int a2, char a3)
{
  int v5; // r2
  void **v6; // r5
  __suseconds_t v7; // r0
  int v8; // r1
  int v9; // r0
  size_t v10; // r6
  unsigned int v11; // r2
  void *v12; // r0

  *(_DWORD *)a1 = &off_DA8B0;
  v5 = dword_DE264++;
  *(_DWORD *)(a1 + 68) = a2;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = v5;
  v6 = (void **)(a1 + 72);
  v7 = qtime64();
  *(_BYTE *)(a1 + 96) = a3;
  *(_DWORD *)(a1 + 88) = v7;
  *(_DWORD *)(a1 + 92) = v8;
  if ( !sub_6C726(*(_DWORD *)(a1 + 68)) )
  {
    v9 = _strlen_chk("(unknown)", 10);
    v10 = v9;
    if ( v9 )
    {
      v11 = v9 + 1;
      if ( *(_DWORD *)(a1 + 80) >= (unsigned int)(v9 + 1) )
      {
        v12 = *v6;
      }
      else
      {
        v12 = qvector_reserve(a1 + 72, *v6, v11, 1u);
        *v6 = v12;
        v11 = v10 + 1;
      }
      *(_DWORD *)(a1 + 76) = v11;
      memmove(v12, "(unknown)", v10);
      *(_BYTE *)(*(_DWORD *)(a1 + 72) + v10) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 76) = 0;
    }
  }
  memset((void *)(a1 + 4), 0, 0x40u);
  return a1;
}
// 6B638: variable 'v8' is possibly undefined
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// DA8B0: using guessed type _UNKNOWN *off_DA8B0;
// DE264: using guessed type int dword_DE264;
