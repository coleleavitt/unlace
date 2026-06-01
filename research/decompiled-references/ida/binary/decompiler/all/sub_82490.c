__int64 __fastcall sub_82490(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // r13
  unsigned __int64 v5; // rbp
  size_t v6; // r14
  __int64 v7; // r13
  size_t v8; // r15
  __int64 v9; // rsi
  void *v11; // rax
  __int64 v12; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    v11 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)a1 = v11;
    memcpy(v11, *(const void **)a2, v4);
    *(_QWORD *)(a1 + 8) = v4;
  }
  v5 = *(_QWORD *)(a3 + 8);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v5 != 1 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v8 = v5 - 1;
      if ( v7 )
      {
        --v7;
        v8 = v6 + v7;
        v5 += v7;
      }
      v9 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v5 )
      {
        v12 = qvector_reserve();
        *(_QWORD *)a1 = v12;
        v9 = v12;
      }
      *(_QWORD *)(a1 + 8) = v5;
      *(_BYTE *)(v9 + v8) = 0;
      memcpy((void *)(v7 + *(_QWORD *)a1), *(const void **)a3, v6);
    }
  }
  return a1;
}
