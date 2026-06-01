/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441370
// Address: 0x00441370

//----- (00441370) --------------------------------------------------------
void *__cdecl sub_441370(int a1, _BYTE *a2)
{
  const char *v2; // eax
  unsigned int v3; // ebp
  unsigned int v4; // esi
  void *result; // eax

  v2 = sub_456590(a2);
  v3 = (unsigned int)v2;
  if ( v2 && (v4 = strlen(v2)) != 0 )
  {
    if ( v4 + 1 > *(_DWORD *)(a1 + 8) )
      *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v4 + 1, 1u);
    *(_DWORD *)(a1 + 4) = v4 + 1;
    sub_464310(*(_DWORD *)a1, v3, v4);
    result = *(void **)a1;
    *(_BYTE *)(v4 + *(_DWORD *)a1) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    return (void *)a1;
  }
  return result;
}
