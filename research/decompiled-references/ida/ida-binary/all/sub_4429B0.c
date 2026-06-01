__int64 __fastcall sub_4429B0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // r12
  size_t v6; // rbp
  int v7; // eax
  void *v8; // rax
  const void *v9; // rsi
  const void *v10; // r13
  int v11; // r12d
  void *v12; // rdi
  __int64 v13; // rax

  if ( *a3 == -1 )
  {
    result = 0;
    if ( !a3[1] )
      return sub_4427E0(a1, a2, a3);
  }
  else
  {
    if ( *(_OWORD *)a3 != 0 )
      return sub_4427E0(a1, a2, a3);
    v5 = *(_QWORD *)(a1 + 400);
    v6 = *(_QWORD *)(v5 + 32);
    if ( v6 )
    {
      v8 = (void *)qalloc_or_throw(*(_QWORD *)(v5 + 32));
      v9 = *(const void **)(v5 + 24);
      v10 = v8;
      memcpy(v8, v9, v6);
      if ( a2 )
      {
        v11 = *(_DWORD *)(v5 + 84);
        if ( v6 == 1 )
        {
          *(_QWORD *)(a2 + 8) = 0;
        }
        else
        {
          v12 = *(void **)a2;
          if ( *(_QWORD *)(a2 + 16) < v6 )
          {
            v13 = qvector_reserve(a2, *(_QWORD *)a2, v6, 1);
            *(_QWORD *)a2 = v13;
            v12 = (void *)v13;
          }
          *(_QWORD *)(a2 + 8) = v6;
          v9 = v10;
          memmove(v12, v10, v6 - 1);
          *(_BYTE *)(*(_QWORD *)a2 + v6 - 1) = 0;
        }
        *(_DWORD *)(a2 + 24) = v11;
      }
      if ( v10 )
        qfree(v10, (const char *)v9);
    }
    else if ( a2 )
    {
      v7 = *(_DWORD *)(v5 + 84);
      *(_QWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 24) = v7;
    }
    return 1;
  }
  return result;
}
