/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DB40
// Address: 0x0008DB40

//----- (0008DB40) --------------------------------------------------------
int __cdecl sub_8DB40(int a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // edi
  size_t v4; // edx
  void **v5; // eax
  void *v6; // eax
  int result; // eax
  const void *v8; // [esp+8h] [ebp-14h]

  v2 = a1;
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 124);
  if ( a1 + 124 != a2 )
  {
    v3 = *(_DWORD *)(a1 + 136);
    if ( !v3 || (v4 = v3 - 1, v3 == 1) )
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
    else
    {
      v5 = (void **)(a2 + 8);
      v8 = *(const void **)(a1 + 132);
      if ( *(_DWORD *)(a2 + 16) >= v3 )
      {
        v6 = *v5;
      }
      else
      {
        v6 = qvector_reserve(a2 + 8, *v5, v3, 1u);
        v4 = v3 - 1;
        *(_DWORD *)(a2 + 8) = v6;
      }
      *(_DWORD *)(a2 + 12) = v3;
      memmove(v6, v8, v4);
      *(_BYTE *)(*(_DWORD *)(a2 + 8) + v3 - 1) = 0;
      v2 = a1;
    }
  }
  result = *(_DWORD *)(v2 + 144);
  *(_DWORD *)(a2 + 20) = result;
  return result;
}
