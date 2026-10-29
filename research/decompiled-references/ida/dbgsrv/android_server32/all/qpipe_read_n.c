/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qpipe_read_n
// Address: 0x00084C7C

//----- (00084C7C) --------------------------------------------------------
int __fastcall qpipe_read_n(int a1, int a2, size_t a3)
{
  unsigned int v6; // r2
  unsigned int v7; // r4
  int result; // r0
  char *v9; // r0
  char *v10; // r7
  ssize_t v11; // r0
  int v12; // r0
  int v13; // [sp+8h] [bp-10h]
  _BYTE v14[4]; // [sp+10h] [bp-8h] BYREF

  v6 = *(_DWORD *)(a2 + 4);
  v7 = v6 + a3;
  result = 1;
  if ( v6 >= v6 + a3 )
  {
    if ( !a3 )
      return result;
    v13 = *(_DWORD *)(a2 + 4);
    v14[0] = 0;
    sub_370F6((void **)a2, v7, v14);
  }
  else
  {
    v13 = *(_DWORD *)(a2 + 4);
    if ( *(_DWORD *)(a2 + 8) >= v7 )
    {
      v9 = *(char **)a2;
    }
    else
    {
      v9 = (char *)qvector_reserve(a2, *(void **)a2, v6 + a3, 1u);
      *(_DWORD *)a2 = v9;
    }
    memset(&v9[*(_DWORD *)(a2 + 4)], 0, v7 - *(_DWORD *)(a2 + 4));
    *(_DWORD *)(a2 + 4) = v7;
    if ( !a3 )
      return 1;
  }
  v10 = (char *)(*(_DWORD *)a2 + v13);
  while ( 1 )
  {
    v11 = read(a1, v10, a3);
    if ( !v11 )
      break;
    while ( v11 < 0 )
    {
      v12 = *(_DWORD *)_errno(v11);
      if ( v12 == 11 || v12 == 4 )
      {
        v11 = read(a1, v10, a3);
        if ( v11 )
          continue;
      }
      return 0;
    }
    a3 -= v11;
    v10 += v11;
    if ( !a3 )
      return 1;
  }
  return 0;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
