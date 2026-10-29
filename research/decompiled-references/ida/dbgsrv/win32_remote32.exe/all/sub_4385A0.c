/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4385A0
// Address: 0x004385A0

//----- (004385A0) --------------------------------------------------------
int __userpurge sub_4385A0@<eax>(void **a1@<ebx>, __m128i a2@<xmm0>, int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // ebp
  int v6; // esi
  int v7; // edi
  int v8; // eax

  v5 = a5;
  v6 = a3;
  v7 = a4;
  if ( *(_BYTE *)(a3 + 176) )
    goto LABEL_6;
  while ( 1 )
  {
    a1 = (void **)sub_435670(v6, a2, &a3);
    if ( a3 == -1 || a3 == 34 )
    {
      *(_WORD *)(v7 + 12) = 1;
      return 0;
    }
    if ( a3 )
      return sub_45CC20(a3);
    sub_4378A0((_DWORD *)v6);
    *(_DWORD *)(v6 + 4) = a1;
    *(_DWORD *)v6 = a1;
    *(_BYTE *)(v6 + 176) = 1;
LABEL_6:
    v8 = sub_4360F0(v6, a1, a2, v7, 0, v5);
    if ( *(_DWORD *)(v6 + 32) && !v8 )
      v8 = sub_4345C0((const CHAR **)v6, a1, v7);
    a3 = v8;
    if ( v8 )
      break;
    if ( *(_WORD *)(v7 + 12) == 1 )
      *(_BYTE *)(v6 + 176) = 0;
    if ( *(_BYTE *)(v6 + 176) )
      return 0;
  }
  return sub_45CC20(v8);
}
