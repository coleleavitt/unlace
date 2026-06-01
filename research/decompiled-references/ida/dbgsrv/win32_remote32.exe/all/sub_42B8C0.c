/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B8C0
// Address: 0x0042B8C0

//----- (0042B8C0) --------------------------------------------------------
int __stdcall sub_42B8C0(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  unsigned int v4; // ebx
  LPVOID v5; // eax
  unsigned int v6; // eax

  v1 = sub_4627C2(0x10u);
  v2 = v1;
  if ( v1 )
  {
    *v1 = 0;
    v1[3] = 0;
  }
  else
  {
    v2 = nullptr;
  }
  *v2 = 1;
  v3 = sub_4627C2(0xCu);
  if ( v3 )
  {
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v4 = *(_DWORD *)(a1 + 20);
    if ( v4 )
    {
      v5 = sub_4539E0(*(_DWORD *)(a1 + 20));
      *v3 = v5;
      v3[2] = v4;
      sub_464310((unsigned int)v5, *(_DWORD *)(a1 + 16), v4);
      v3[1] = v4;
    }
  }
  else
  {
    v3 = nullptr;
  }
  v2[2] = v3;
  v6 = *(_DWORD *)(a1 + 188) + 1;
  if ( v6 > *(_DWORD *)(a1 + 192) )
    *(_DWORD *)(a1 + 184) = sub_453B00(a1 + 184, *(void **)(a1 + 184), v6, 4u);
  *(_DWORD *)(*(_DWORD *)(a1 + 184) + 4 * (*(_DWORD *)(a1 + 188))++) = v2;
  return 0;
}
