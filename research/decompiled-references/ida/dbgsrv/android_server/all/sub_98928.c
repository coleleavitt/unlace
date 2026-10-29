/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98928
// Address: 0x0000000000098928

//----- (0000000000098928) ----------------------------------------------------
__int64 __fastcall sub_98928(__int64 a1, __int64 a2)
{
  int v3; // w8
  void *v5; // x0
  size_t v6; // x21
  void *v7; // x0

  if ( a1 != a2 )
  {
    v3 = *(_DWORD *)a1;
    if ( *(int *)a2 < -1 )
    {
      if ( v3 >= -1 )
      {
        v5 = *(void **)(a1 + 8);
        if ( v5 )
        {
          *(_QWORD *)(a1 + 16) = 0;
          qfree(v5);
          *(_QWORD *)(a1 + 8) = 0;
          *(_QWORD *)(a1 + 24) = 0;
        }
      }
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    }
    else if ( v3 < -1 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      v6 = *(_QWORD *)(a2 + 16);
      if ( v6 )
      {
        v7 = qalloc_or_throw(*(_QWORD *)(a2 + 16));
        *(_QWORD *)(a1 + 8) = v7;
        *(_QWORD *)(a1 + 24) = v6;
        memcpy(v7, *(const void **)(a2 + 8), v6);
        *(_QWORD *)(a1 + 16) = v6;
      }
    }
    else
    {
      sub_989E0(a1 + 8, a2 + 8);
    }
    *(_DWORD *)a1 = *(_DWORD *)a2;
  }
  return a1;
}
