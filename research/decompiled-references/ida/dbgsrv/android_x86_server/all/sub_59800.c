/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59800
// Address: 0x00059800

//----- (00059800) --------------------------------------------------------
int __cdecl sub_59800(int a1, int a2, char *a3)
{
  int v3; // ecx
  int v4; // edi
  _DWORD *v5; // eax

  v3 = *(_DWORD *)(a1 + 40);
  v4 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 44) >= (unsigned int)(v3 + 1) )
  {
    v5 = *(_DWORD **)(a1 + 36);
  }
  else
  {
    v5 = qvector_reserve(a1 + 36, *(void **)(a1 + 36), v3 + 1, 4u);
    *(_DWORD *)(a1 + 36) = v5;
    v3 = *(_DWORD *)(a1 + 40);
  }
  v5[v3] = v4;
  ++*(_DWORD *)(a1 + 40);
  sub_4E740(a1 + 12, a3);
  return sub_5E940((void **)a1, nullptr, nullptr, a2);
}
