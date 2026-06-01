/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4FDE0
// Address: 0x0004FDE0

//----- (0004FDE0) --------------------------------------------------------
int __cdecl sub_4FDE0(int a1, char a2)
{
  _DWORD *v2; // edx
  int v3; // eax
  void *v4; // eax
  void *v5; // ecx
  int v6; // ecx
  int v7; // edi

  v2 = (_DWORD *)a1;
  v3 = *(_DWORD *)(a1 + 4);
  if ( (unsigned int)(v3 - 1) >= 0x400 && v3 )
  {
    sub_1C900();
    v5 = *(void **)a1;
    v4 = nullptr;
    v2 = (_DWORD *)a1;
    if ( *(_DWORD *)a1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      qfree(v5);
      v4 = nullptr;
      v2 = (_DWORD *)a1;
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
  }
  else
  {
    v4 = *(void **)a1;
  }
  v6 = v2[1];
  v7 = v6 - 1;
  if ( !v6 )
    v7 = 0;
  if ( v2[2] < (unsigned int)(v7 + 2) )
  {
    v4 = qvector_reserve((int)v2, v4, v7 + 2, 1u);
    v2 = (_DWORD *)a1;
    *(_DWORD *)a1 = v4;
  }
  v2[1] = v7 + 2;
  *((_BYTE *)v4 + v7) = a2;
  *(_BYTE *)(*v2 + v7 + 1) = 0;
  return 0;
}
// 4FE0D: conditional instruction was optimized away because eax.4>=401u
