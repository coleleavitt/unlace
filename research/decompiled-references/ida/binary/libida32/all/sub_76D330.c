__int64 __fastcall sub_76D330(_QWORD *a1, const char *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbx
  size_t v7; // rax
  size_t v8; // r12
  __int64 v9; // rax
  void *v10; // rdi
  size_t v11; // r13
  __int64 v12; // rax

  if ( !a2 )
    return 0;
  result = sub_76D090((__int64)a1, a2);
  if ( !result )
  {
    v4 = a1[12];
    v5 = a1[11];
    if ( a1[13] < (unsigned __int64)(v4 + 1) )
    {
      v9 = qvector_reserve(a1 + 11, v5, v4 + 1, 56);
      v4 = a1[12];
      a1[11] = v9;
      v5 = v9;
    }
    v6 = v5 + 56 * v4;
    *(_OWORD *)(v6 + 8) = 0;
    *(_QWORD *)v6 = 0;
    *(_BYTE *)(v6 + 24) = 2;
    *(_QWORD *)(v6 + 48) = 0;
    *(_OWORD *)(v6 + 32) = 0;
    ++a1[12];
    v7 = strlen(a2);
    v8 = v7;
    if ( v7 )
    {
      v10 = *(void **)v6;
      v11 = v7 + 1;
      if ( *(_QWORD *)(v6 + 16) < v7 + 1 )
      {
        v12 = qvector_reserve(v6, *(_QWORD *)v6, v7 + 1, 1);
        *(_QWORD *)v6 = v12;
        v10 = (void *)v12;
      }
      *(_QWORD *)(v6 + 8) = v11;
      memmove(v10, a2, v8);
      *(_BYTE *)(*(_QWORD *)v6 + v8) = 0;
    }
    else
    {
      *(_QWORD *)(v6 + 8) = 0;
    }
    return v6 + 24;
  }
  return result;
}

