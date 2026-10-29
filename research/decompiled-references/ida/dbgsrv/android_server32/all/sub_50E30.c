/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50E30
// Address: 0x00050E30

//----- (00050E30) --------------------------------------------------------
int __fastcall sub_50E30(int a1, int a2)
{
  int i; // r0
  int v4; // r1
  int v5; // r6
  int result; // r0
  int v7; // r0
  int v8; // r5
  void *v9; // r1

  *(_DWORD *)(a2 + 4) = 0;
  if ( !(*(_DWORD *)(a2 + 8) >> 10) )
    *(_DWORD *)a2 = qvector_reserve(a2, *(void **)a2, 0x400u, 1u);
  for ( i = -1; ; i = 1 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v4 + i;
    v5 = *(unsigned __int8 *)(v4 + i);
    result = v5 << 24;
    if ( ((v5 & 0x80u) != 0 || (result = isalnum(v5)) == 0) && v5 != 95 && v5 != 36 )
      break;
    v7 = *(_DWORD *)(a2 + 4);
    v8 = v7 - 1;
    if ( !v7 )
      v8 = 0;
    v9 = *(void **)a2;
    if ( *(_DWORD *)(a2 + 8) < (unsigned int)(v8 + 2) )
    {
      v9 = qvector_reserve(a2, v9, v8 + 2, 1u);
      *(_DWORD *)a2 = v9;
    }
    *(_DWORD *)(a2 + 4) = v8 + 2;
    *((_BYTE *)v9 + v8) = v5;
    *(_BYTE *)(*(_DWORD *)a2 + v8 + 1) = 0;
  }
  return result;
}
