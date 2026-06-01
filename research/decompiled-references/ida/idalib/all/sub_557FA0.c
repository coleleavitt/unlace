__int64 __fastcall sub_557FA0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v8; // rsi
  __int64 *v9; // rax
  __int64 *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  const void *v15; // r13
  void *v16; // rdi
  __int64 v17; // rax

  v3 = *(_QWORD *)(a1 + 40);
  v4 = (unsigned int)(a3 - 1);
  v5 = 0;
  if ( (unsigned int)v4 >= *(_DWORD *)(v3 + 136) )
    return 0;
  v8 = *(_QWORD *)(qword_2CCB598 + 1656);
  v9 = *(__int64 **)(v8 + 16);
  v10 = &v9[*(_QWORD *)(v8 + 24)];
  if ( v9 != v10 )
  {
    v11 = *(_QWORD *)(v3 + 120);
    while ( 1 )
    {
      v12 = *v9;
      if ( v11 == *(_QWORD *)(*v9 + 48) )
        break;
      if ( v10 == ++v9 )
        return 0;
    }
    if ( !v12 )
      return 0;
    v13 = *(_QWORD *)(v12 + 56) + 24 * v4;
    if ( a2 != (__int64 *)v13 )
    {
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 > 1 )
      {
        v15 = *(const void **)v13;
        v16 = (void *)*a2;
        if ( a2[2] < v14 )
        {
          v17 = qvector_reserve(a2, *a2, *(_QWORD *)(v13 + 8), 1);
          *a2 = v17;
          v16 = (void *)v17;
        }
        a2[1] = v14;
        memmove(v16, v15, v14 - 1);
        *(_BYTE *)(*a2 + v14 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    return 1;
  }
  return v5;
}
