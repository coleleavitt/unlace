/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005FB50
// Address: 0x000000010005FB50

//----- (000000010005FB50) ----------------------------------------------------
__int64 __fastcall sub_10005FB50(__int64 a1, __int64 a2)
{
  int v3; // eax
  _OWORD *v4; // r13
  size_t v5; // r15
  void *v6; // r12
  void *v7; // rdi
  size_t v8; // r15
  void *v9; // rax
  void *v10; // rdi

  if ( a1 != a2 )
  {
    v3 = *(_DWORD *)a1;
    if ( *(int *)a2 < -1 )
    {
      if ( v3 >= -1 )
      {
        v7 = *(void **)(a1 + 8);
        if ( v7 )
        {
          *(_QWORD *)(a1 + 16) = 0;
          qfree(v7);
          *(_QWORD *)(a1 + 8) = 0;
          *(_QWORD *)(a1 + 24) = 0;
        }
      }
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    }
    else
    {
      v4 = (_OWORD *)(a1 + 8);
      if ( v3 < -1 )
      {
        *v4 = 0;
        *(_QWORD *)(a1 + 24) = 0;
        v8 = *(_QWORD *)(a2 + 16);
        if ( v8 )
        {
          v9 = qalloc_or_throw(*(_QWORD *)(a2 + 16));
          *(_QWORD *)(a1 + 8) = v9;
          *(_QWORD *)(a1 + 24) = v8;
          memcpy(v9, *(const void **)(a2 + 8), v8);
          *(_QWORD *)(a1 + 16) = v8;
        }
      }
      else
      {
        v5 = *(_QWORD *)(a2 + 16);
        if ( v5 )
        {
          v6 = qalloc_or_throw(*(_QWORD *)(a2 + 16));
          memcpy(v6, *(const void **)(a2 + 8), v5);
        }
        else
        {
          v6 = nullptr;
        }
        v10 = *(void **)v4;
        if ( *(_QWORD *)v4 )
        {
          *(_QWORD *)(a1 + 16) = 0;
          qfree(v10);
        }
        *(_QWORD *)(a1 + 8) = v6;
        *(_QWORD *)(a1 + 16) = v5;
        *(_QWORD *)(a1 + 24) = v5;
      }
    }
    *(_DWORD *)a1 = *(_DWORD *)a2;
  }
  return a1;
}
