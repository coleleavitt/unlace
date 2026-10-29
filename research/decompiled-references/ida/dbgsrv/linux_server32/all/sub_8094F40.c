/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8094F40
// Address: 0x08094F40

//----- (08094F40) --------------------------------------------------------
void *__cdecl sub_8094F40(int a1)
{
  int v1; // ebp
  _DWORD *v2; // ebx
  _DWORD *v3; // eax
  void *result; // eax

  if ( !*(_BYTE *)(a1 + 404) )
  {
    v1 = *(_DWORD *)(a1 + 372);
    if ( v1 )
    {
      sub_8094E40(*(_DWORD *)(a1 + 372));
      if ( *(_DWORD *)v1 != v1 + 24 )
        operator delete(*(void **)v1, 4 * *(_DWORD *)(v1 + 4));
      operator delete((void *)v1, 0x1Cu);
    }
  }
  v2 = *(_DWORD **)(a1 + 384);
  *(_BYTE *)(a1 + 404) = 0;
  *(_DWORD *)(a1 + 372) = 0;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_DWORD *)*v2;
    sub_80921C0(v3);
  }
  result = memset(*(void **)(a1 + 376), 0, 4 * *(_DWORD *)(a1 + 380));
  *(_DWORD *)(a1 + 388) = 0;
  *(_DWORD *)(a1 + 384) = 0;
  return result;
}
