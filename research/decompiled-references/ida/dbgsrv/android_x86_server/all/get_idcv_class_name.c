/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_class_name
// Address: 0x0005C290

//----- (0005C290) --------------------------------------------------------
int __cdecl get_idcv_class_name(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  size_t v4; // edx
  const void *v5; // ecx
  void *v6; // eax
  const void *v8; // [esp+4h] [ebp-18h]

  if ( !a2 || *(_BYTE *)a2 != 5 )
    return set_qerrno(1532);
  if ( a1 )
  {
    v2 = sub_537A0(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 16));
    if ( v2 + 20 != a1 )
    {
      v3 = *(_DWORD *)(v2 + 24);
      if ( !v3 || (v4 = v3 - 1, v3 == 1) )
      {
        *(_DWORD *)(a1 + 4) = 0;
      }
      else
      {
        v5 = *(const void **)(v2 + 20);
        if ( *(_DWORD *)(a1 + 8) >= v3 )
        {
          v6 = *(void **)a1;
        }
        else
        {
          v8 = *(const void **)(v2 + 20);
          v6 = qvector_reserve(a1, *(void **)a1, v3, 1u);
          v5 = v8;
          v4 = v3 - 1;
          *(_DWORD *)a1 = v6;
        }
        *(_DWORD *)(a1 + 4) = v3;
        memmove(v6, v5, v4);
        *(_BYTE *)(*(_DWORD *)a1 + v3 - 1) = 0;
      }
    }
  }
  return 0;
}
