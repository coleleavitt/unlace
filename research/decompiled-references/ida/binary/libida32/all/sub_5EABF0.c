__int64 __fastcall sub_5EABF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 *v4; // rbx
  unsigned __int64 v5; // r12
  __int64 result; // rax
  unsigned __int64 v7; // r12
  const void *v8; // rbp
  void *v9; // rax
  const void *v10; // r14
  void *v11; // rdi
  __int64 v12; // rax

  v3 = 48 * a3 + *(_QWORD *)(a2 + 40);
  v4 = (__int64 *)(*(_QWORD *)(a1 + 40) + 48 * a3);
  if ( (__int64 *)v3 != v4 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    if ( v5 > 1 )
    {
      v10 = *(const void **)v3;
      v11 = (void *)*v4;
      if ( v4[2] < v5 )
      {
        v12 = qvector_reserve(v4, *v4, *(_QWORD *)(v3 + 8), 1);
        *v4 = v12;
        v11 = (void *)v12;
      }
      v4[1] = v5;
      memmove(v11, v10, v5 - 1);
      *(_BYTE *)(*v4 + v5 - 1) = 0;
    }
    else
    {
      v4[1] = 0;
    }
  }
  result = v3 + 24;
  if ( v4 + 3 != (__int64 *)(v3 + 24) )
  {
    v7 = *(_QWORD *)(v3 + 32);
    if ( v7 > 1 )
    {
      v8 = *(const void **)(v3 + 24);
      v9 = (void *)v4[3];
      if ( v4[5] < v7 )
      {
        v9 = (void *)qvector_reserve(v4 + 3, v4[3], v7, 1);
        v4[3] = (__int64)v9;
      }
      v4[4] = v7;
      memmove(v9, v8, v7 - 1);
      result = v4[3];
      *(_BYTE *)(result + v7 - 1) = 0;
    }
    else
    {
      v4[4] = 0;
    }
  }
  return result;
}

