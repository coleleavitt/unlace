/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E470
// Address: 0x000000000009E470

//----- (000000000009E470) ----------------------------------------------------
__int64 __fastcall sub_9E470(__int64 a1, __int64 a2)
{
  int v3; // eax
  void *v4; // rdi
  size_t v5; // r15
  void *v6; // rax

  if ( a1 != a2 )
  {
    v3 = *(_DWORD *)a1;
    if ( *(int *)a2 < -1 )
    {
      if ( v3 >= -1 )
      {
        v4 = *(void **)(a1 + 8);
        if ( v4 )
        {
          *(_QWORD *)(a1 + 16) = 0;
          qfree(v4);
          *(_QWORD *)(a1 + 8) = 0;
          *(_QWORD *)(a1 + 24) = 0;
        }
      }
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    }
    else if ( v3 < -1 )
    {
      *(_OWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      v5 = *(_QWORD *)(a2 + 16);
      if ( v5 )
      {
        v6 = qalloc_or_throw(*(_QWORD *)(a2 + 16));
        *(_QWORD *)(a1 + 8) = v6;
        *(_QWORD *)(a1 + 24) = v5;
        memcpy(v6, *(const void **)(a2 + 8), v5);
        *(_QWORD *)(a1 + 16) = v5;
      }
    }
    else
    {
      sub_9E530(a1 + 8, a2 + 8);
    }
    *(_DWORD *)a1 = *(_DWORD *)a2;
  }
  return a1;
}
