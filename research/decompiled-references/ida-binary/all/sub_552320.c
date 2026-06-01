__int64 __fastcall sub_552320(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v4; // rdi
  unsigned __int64 v5; // r12
  __int64 result; // rax
  unsigned __int64 v7; // r12
  const void *v8; // rbp
  void *v9; // rax
  const void *v10; // r14
  void *v11; // rax

  v2 = *(_BYTE *)(a2 + 32);
  v4 = a1 + 32;
  *(_BYTE *)(v4 - 32) = v2;
  *(_BYTE *)(v4 - 31) = v2 ^ 1;
  if ( a2 != v4 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    if ( v5 > 1 )
    {
      v10 = *(const void **)a2;
      v11 = *(void **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < v5 )
      {
        v11 = (void *)qvector_reserve(v4, *(_QWORD *)(a1 + 32), *(_QWORD *)(a2 + 8), 1);
        *(_QWORD *)(a1 + 32) = v11;
      }
      *(_QWORD *)(a1 + 40) = v5;
      memmove(v11, v10, v5 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v5 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 40) = 0;
    }
  }
  *(_QWORD *)(a1 + 56) = *(unsigned __int16 *)(a2 + 24);
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 26);
  result = a2 + 40;
  if ( a1 + 8 != a2 + 40 )
  {
    v7 = *(_QWORD *)(a2 + 48);
    if ( v7 > 1 )
    {
      v8 = *(const void **)(a2 + 40);
      v9 = *(void **)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) < v7 )
      {
        v9 = (void *)qvector_reserve(a1 + 8, *(_QWORD *)(a1 + 8), v7, 1);
        *(_QWORD *)(a1 + 8) = v9;
      }
      *(_QWORD *)(a1 + 16) = v7;
      memmove(v9, v8, v7 - 1);
      result = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(result + v7 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
  return result;
}
