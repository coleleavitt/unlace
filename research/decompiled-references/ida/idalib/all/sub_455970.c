__int64 __fastcall sub_455970(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  _QWORD *v4; // rdx
  const char *v5; // rax
  const char *v6; // rbp
  size_t v7; // rax
  size_t v8; // r12
  void *v9; // rdi
  size_t v10; // r13
  __int64 v11; // rax

  result = 0;
  if ( a3 < *(_QWORD *)(a1 + 96) )
  {
    v4 = (_QWORD *)(*(_QWORD *)(a1 + 88) + 24 * a3);
    if ( v4[1] > 1u )
    {
      if ( a2 )
      {
        v5 = (const char *)qbasename(*v4);
        v6 = v5;
        if ( v5 && (v7 = strlen(v5), (v8 = v7) != 0) )
        {
          v9 = (void *)*a2;
          v10 = v7 + 1;
          if ( a2[2] < v7 + 1 )
          {
            v11 = qvector_reserve(a2, *a2, v7 + 1, 1);
            *a2 = v11;
            v9 = (void *)v11;
          }
          a2[1] = v10;
          memmove(v9, v6, v8);
          *(_BYTE *)(*a2 + v8) = 0;
        }
        else
        {
          a2[1] = 0;
        }
      }
      return 1;
    }
  }
  return result;
}
