/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_class_name
// Address: 0x00046330

//----- (00046330) --------------------------------------------------------
int __fastcall get_idcv_class_name(int a1, int a2)
{
  int v3; // r6
  int v4; // r0
  unsigned int v5; // r6
  unsigned int v6; // r5
  const void *v7; // r7
  void *v8; // r0

  if ( !a2 || *(_BYTE *)a2 != 5 )
    return set_qerrno(1532);
  v3 = 0;
  if ( a1 )
  {
    v4 = sub_40F30(*(_DWORD *)(*(_DWORD *)(a2 + 8) + 16));
    if ( v4 + 20 != a1 )
    {
      v5 = *(_DWORD *)(v4 + 24);
      v6 = v5 - 1;
      if ( v5 < 2 )
      {
        v3 = 0;
        *(_DWORD *)(a1 + 4) = 0;
      }
      else
      {
        v7 = *(const void **)(v4 + 20);
        if ( *(_DWORD *)(a1 + 8) >= v5 )
        {
          v8 = *(void **)a1;
        }
        else
        {
          v8 = qvector_reserve(a1, *(void **)a1, v5, 1u);
          *(_DWORD *)a1 = v8;
        }
        *(_DWORD *)(a1 + 4) = v5;
        memmove(v8, v7, v5 - 1);
        v3 = 0;
        *(_BYTE *)(*(_DWORD *)a1 + v6) = 0;
      }
    }
  }
  return v3;
}
