/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79670
// Address: 0x00079670

//----- (00079670) --------------------------------------------------------
char __cdecl sub_79670(int a1, _DWORD *a2, unsigned int off)
{
  int v3; // edx
  int v4; // edx
  _DWORD *v5; // esi
  unsigned int v6; // edi

  if ( !a2 || (v3 = off, *a2 != 3) )
  {
    v4 = *(_DWORD *)(a1 + 8) - 1;
    if ( v4 < 0 )
      goto LABEL_12;
    v5 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 16 * *(_DWORD *)(a1 + 8) - 8);
    while ( 1 )
    {
      v6 = *(v5 - 2);
      if ( v6 <= off && *(v5 - 1) > off )
        break;
      v5 -= 4;
      if ( --v4 < 0 )
        goto LABEL_12;
    }
    v3 = *v5 + off - v6;
  }
  if ( v3 != -1 )
  {
    qlseek((int)a2, (unsigned int)v3, 0);
    return 1;
  }
LABEL_12:
  qlseek((int)a2, off, 0);
  return 0;
}
