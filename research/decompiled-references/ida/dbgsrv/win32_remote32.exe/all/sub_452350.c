/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452350
// Address: 0x00452350

//----- (00452350) --------------------------------------------------------
char __thiscall sub_452350(int *this, int a2, int a3)
{
  int v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // edi
  int v7; // eax

  if ( sub_44D590(*(this + 4), a3) <= 0 )
    goto LABEL_13;
  v4 = 1024;
  if ( (unsigned int)*(this + 17) > 0x400 )
    v4 = *(this + 17);
  *(this + 17) = 0;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = v5 + v4;
  if ( v6 > v5 )
  {
    if ( v6 > *(_DWORD *)(a2 + 8) )
      *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v6, 1u);
    sub_464890((__m128i *)(*(_DWORD *)(a2 + 4) + *(_DWORD *)a2), 0, v6 - *(_DWORD *)(a2 + 4));
    goto LABEL_10;
  }
  if ( v6 != v5 && v6 < v5 )
LABEL_10:
    *(_DWORD *)(a2 + 4) = v6;
  v7 = sub_44D5A0(*(this + 4), v5 + *(_DWORD *)a2, *(_DWORD *)(a2 + 4) - v5);
  if ( v7 > 0 )
  {
    sub_4028B0(a2, v5 + v7);
    return 1;
  }
LABEL_13:
  *(this + 8) = (int)&dword_48FD78;
  return 0;
}
// 48FD78: using guessed type int dword_48FD78;
