__int64 __fastcall sub_24FA30(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  int v6; // ecx
  __int64 result; // rax
  const void *v8; // r12
  size_t v9; // rax
  size_t v10; // rbp
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax

  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 64 )
    return sub_1CDDD0(a2, *(_QWORD *)(a1 + 24), a4, a3);
  result = 0;
  if ( v6 == 68 )
  {
    v8 = *(const void **)(a1 + 24);
    if ( v8 && (v9 = strlen(*(const char **)(a1 + 24)), (v10 = v9) != 0) )
    {
      v11 = (void *)*a2;
      v12 = v9 + 1;
      if ( a2[2] < v9 + 1 )
      {
        v13 = qvector_reserve(a2, *a2, v9 + 1, 1);
        *a2 = v13;
        v11 = (void *)v13;
      }
      a2[1] = v12;
      memmove(v11, v8, v10);
      *(_BYTE *)(*a2 + v10) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    return 1;
  }
  return result;
}
