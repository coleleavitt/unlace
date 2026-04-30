__int64 __fastcall sub_5521F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  __int64 result; // rax
  unsigned __int64 v5; // r12
  const void *v6; // rbp
  void *v7; // rax
  const void *v8; // r14
  void *v9; // rdi
  __int64 v10; // rax

  *(_BYTE *)(a2 + 32) = *(_BYTE *)a1;
  if ( a2 != a1 + 32 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 > 1 )
    {
      v8 = *(const void **)(a1 + 32);
      v9 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v3 )
      {
        v10 = qvector_reserve(a2, *(_QWORD *)a2, v3, 1);
        *(_QWORD *)a2 = v10;
        v9 = (void *)v10;
      }
      *(_QWORD *)(a2 + 8) = v3;
      memmove(v9, v8, v3 - 1);
      *(_BYTE *)(*(_QWORD *)a2 + v3 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  *(_WORD *)(a2 + 24) = *(_QWORD *)(a1 + 56);
  *(_BYTE *)(a2 + 26) = *(_BYTE *)(a1 + 2);
  result = a1 + 8;
  if ( a2 + 40 != a1 + 8 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 > 1 )
    {
      v6 = *(const void **)(a1 + 8);
      v7 = *(void **)(a2 + 40);
      if ( *(_QWORD *)(a2 + 56) < v5 )
      {
        v7 = (void *)qvector_reserve(a2 + 40, *(_QWORD *)(a2 + 40), v5, 1);
        *(_QWORD *)(a2 + 40) = v7;
      }
      *(_QWORD *)(a2 + 48) = v5;
      memmove(v7, v6, v5 - 1);
      result = *(_QWORD *)(a2 + 40);
      *(_BYTE *)(result + v5 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 48) = 0;
    }
  }
  return result;
}
