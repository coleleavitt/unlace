/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43950
// Address: 0x00043950

//----- (00043950) --------------------------------------------------------
int __cdecl sub_43950(int a1, char *s, int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // esi
  unsigned int v8; // edx
  int v9; // edi
  _BYTE *v10; // eax
  unsigned int v12; // [esp+0h] [ebp-1Ch]

  v3 = qvsnprintf(nullptr, 0, s, a3);
  if ( v3 )
  {
    v4 = v3;
    v5 = *(_DWORD *)(a1 + 4);
    v6 = a1;
    v7 = v5 - 1;
    if ( !v5 )
      v7 = 0;
    v8 = v4 + v7 + 1;
    v9 = v4 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v8 )
    {
      v10 = *(_BYTE **)a1;
    }
    else
    {
      v12 = v8;
      v10 = qvector_reserve(a1, *(void **)a1, v8, 1u);
      v8 = v12;
      v6 = a1;
      *(_DWORD *)a1 = v10;
    }
    *(_DWORD *)(v6 + 4) = v8;
    qvsnprintf(&v10[v7], v9, s, a3);
  }
  return a1;
}
