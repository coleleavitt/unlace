/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D4E0
// Address: 0x0004D4E0

//----- (0004D4E0) --------------------------------------------------------
int __cdecl sub_4D4E0(int a1)
{
  int v1; // ecx
  int v2; // edx
  _DWORD *v3; // eax

  v1 = *(_DWORD *)(a1 + 204);
  v2 = v1 + 1;
  if ( *(_DWORD *)(a1 + 208) >= (unsigned int)(v1 + 1) )
  {
    v3 = *(_DWORD **)(a1 + 200);
  }
  else
  {
    v3 = qvector_reserve(a1 + 200, *(void **)(a1 + 200), v1 + 1, 0x10u);
    *(_DWORD *)(a1 + 200) = v3;
    v1 = *(_DWORD *)(a1 + 204);
    v2 = v1 + 1;
  }
  *(_DWORD *)(a1 + 204) = v2;
  v3[4 * v1] = *(_DWORD *)(a1 + 112);
  return 0;
}
