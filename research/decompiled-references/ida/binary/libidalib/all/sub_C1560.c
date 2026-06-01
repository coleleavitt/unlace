void __fastcall sub_C1560(__int64 a1, __int64 a2)
{
  int v3; // eax
  size_t v4; // r12
  void *v5; // rax
  const void *v6; // rsi

  *(_DWORD *)a1 = -2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a1 != a2 )
  {
    v3 = *(_DWORD *)a2;
    if ( *(int *)a2 < -1 )
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
      *(_DWORD *)a1 = v3;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v4 = *(_QWORD *)(a2 + 16);
      if ( v4 )
      {
        v5 = (void *)qalloc_or_throw();
        *(_QWORD *)(a1 + 24) = v4;
        v6 = *(const void **)(a2 + 8);
        *(_QWORD *)(a1 + 8) = v5;
        memcpy(v5, v6, v4);
        *(_QWORD *)(a1 + 16) = v4;
      }
      *(_DWORD *)a1 = *(_DWORD *)a2;
    }
  }
}

