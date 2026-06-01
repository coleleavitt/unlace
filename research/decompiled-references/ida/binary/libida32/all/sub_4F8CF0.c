__int64 __fastcall sub_4F8CF0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // edx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  const void *v9; // r12
  void *v10; // rdi
  __int64 v11; // rax

  if ( !a2 || !a3 )
    return -1;
  v3 = *(_DWORD *)(a3 + 12);
  if ( !v3 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 1568LL);
  result = 0;
  if ( (unsigned __int64)v3 < *(_QWORD *)(v5 + 144) )
  {
    v7 = *(_QWORD *)(v5 + 136) + 56LL * (int)v3;
    if ( *(_BYTE *)(v7 + 52) || (v8 = *(_QWORD *)(v7 + 8), v8 <= 1) )
      sub_4F58F0();
    if ( a2 != (__int64 *)v7 )
    {
      v9 = *(const void **)v7;
      v10 = (void *)*a2;
      if ( a2[2] < v8 )
      {
        v11 = qvector_reserve(a2, *a2, *(_QWORD *)(v7 + 8), 1);
        *a2 = v11;
        v10 = (void *)v11;
      }
      a2[1] = v8;
      memmove(v10, v9, v8 - 1);
      *(_BYTE *)(*a2 + v8 - 1) = 0;
    }
    return (a2[1] == 0) + a2[1] - 1;
  }
  return result;
}

