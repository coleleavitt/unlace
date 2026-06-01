__int64 __fastcall sub_522D00(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // r12
  const void *v8; // rbp
  void *v9; // rax
  const void *v10; // r14
  void *v11; // rdi
  __int64 v12; // rax

  if ( a2 != a1 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( v3 > 1 )
    {
      v10 = *(const void **)a2;
      v11 = *(void **)a1;
      if ( *(_QWORD *)(a1 + 16) < v3 )
      {
        v12 = qvector_reserve(a1, v11, v3, 1);
        *(_QWORD *)a1 = v12;
        v11 = (void *)v12;
      }
      *(_QWORD *)(a1 + 8) = v3;
      memmove(v11, v10, v3 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v3 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    --*(_DWORD *)(v4 + 12);
  v5 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 24) = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 12);
  result = a2 + 32;
  if ( a1 + 32 == a2 + 32 )
    goto LABEL_11;
  v7 = *(_QWORD *)(a2 + 40);
  if ( v7 <= 1 )
  {
    *(_QWORD *)(a1 + 40) = 0;
LABEL_11:
    *(_BYTE *)(a1 + 64) = 1;
    return result;
  }
  v8 = *(const void **)(a2 + 32);
  v9 = *(void **)(a1 + 32);
  if ( *(_QWORD *)(a1 + 48) < v7 )
  {
    v9 = (void *)qvector_reserve(a1 + 32, *(_QWORD *)(a1 + 32), v7, 1);
    *(_QWORD *)(a1 + 32) = v9;
  }
  *(_QWORD *)(a1 + 40) = v7;
  memmove(v9, v8, v7 - 1);
  result = *(_QWORD *)(a1 + 32);
  *(_BYTE *)(result + v7 - 1) = 0;
  *(_BYTE *)(a1 + 64) = 1;
  return result;
}
