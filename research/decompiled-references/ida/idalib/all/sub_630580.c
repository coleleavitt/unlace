__int64 __fastcall sub_630580(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v4; // r12
  unsigned __int64 v5; // rbp
  size_t v8; // r14
  __int64 v9; // r13
  size_t v10; // r15
  __int64 v11; // rsi
  size_t v12; // rdx
  __int64 v13; // rax
  const void *v14; // r14
  void *v15; // rdi
  __int64 v16; // rax

  v4 = (__int64 *)(*(_QWORD *)(a1 + 16) + *(_QWORD *)(a3 + 8));
  if ( (*(_BYTE *)(a3 + 56) & 0x20) != 0 )
  {
    if ( a2 && a2 != v4 )
    {
      v5 = v4[1];
      if ( v5 > 1 )
      {
        v14 = (const void *)*v4;
        v15 = (void *)*a2;
        if ( a2[2] < v5 )
        {
          v16 = qvector_reserve(a2, *a2, v4[1], 1);
          *a2 = v16;
          v15 = (void *)v16;
        }
        a2[1] = v5;
        memmove(v15, v14, v5 - 1);
        *(_BYTE *)(*a2 + v5 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    return v4[1];
  }
  else
  {
    if ( a2 )
    {
      v8 = *(_QWORD *)(a3 + 16);
      v9 = a2[1];
      v10 = v8;
      if ( v9 )
        v10 = --v9 + v8;
      v11 = *a2;
      v12 = v10 + 1;
      if ( a2[2] < v10 + 1 )
      {
        v13 = qvector_reserve(a2, v11, v12, 1);
        v12 = v10 + 1;
        *a2 = v13;
        v11 = v13;
      }
      a2[1] = v12;
      *(_BYTE *)(v11 + v10) = 0;
      memmove((void *)(v9 + *a2), v4, v8);
    }
    return *(_QWORD *)(a3 + 16);
  }
}
