/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453430
// Address: 0x00453430

//----- (00453430) --------------------------------------------------------
char __stdcall sub_453430(int a1)
{
  LPCRITICAL_SECTION v1; // esi
  int v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // ecx
  unsigned int v6; // eax

  v1 = dword_4B70F8;
  if ( !dword_4B70F8 )
  {
    v1 = sub_456280();
    dword_4B70F8 = v1;
    if ( !v1 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(547);
    }
  }
  sub_4562D0(v1);
  v2 = dword_4B70F4;
  if ( !dword_4B70F4 )
  {
    v3 = sub_4539E0(12);
    v2 = (int)v3;
    if ( v3 )
    {
      *v3 = 0;
      v3[1] = 0;
      v3[2] = 0;
    }
    else
    {
      v2 = 0;
    }
    dword_4B70F4 = v2;
  }
  v4 = *(_DWORD **)v2;
  v5 = *(_DWORD *)v2 + 4 * *(_DWORD *)(v2 + 4);
  if ( *(_DWORD *)v2 == v5 )
  {
LABEL_11:
    v6 = *(_DWORD *)(v2 + 4) + 1;
    if ( v6 > *(_DWORD *)(v2 + 8) )
      *(_DWORD *)v2 = sub_453B00(v2, *(void **)v2, v6, 4u);
    *(_DWORD *)(*(_DWORD *)v2 + 4 * (*(_DWORD *)(v2 + 4))++) = a1;
  }
  else
  {
    while ( a1 != *v4 )
    {
      if ( ++v4 == (_DWORD *)v5 )
        goto LABEL_11;
    }
  }
  return sub_4562F0(v1);
}
// 4B70F0: using guessed type char byte_4B70F0;
// 4B70F4: using guessed type int dword_4B70F4;
