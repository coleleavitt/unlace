char *__fastcall sub_1F729A0(__int64 a1, _DWORD *a2)
{
  char *v2; // rbx
  char *v4; // rcx
  signed __int64 v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r15
  char *v9; // rax
  char *v10; // r14
  char *v11; // r15
  void *src; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(char **)(a1 + 8);
  if ( v2 == *(char **)(a1 + 16) )
  {
    v4 = *(char **)a1;
    v5 = (signed __int64)&v2[-*(_QWORD *)a1];
    v6 = v5 >> 2;
    if ( v5 >> 2 )
    {
      v7 = 2 * v6;
      v8 = -4;
      if ( v6 <= 2 * v6 && v7 <= 0x3FFFFFFFFFFFFFFFLL )
      {
        if ( !v7 )
        {
          v11 = nullptr;
          v10 = nullptr;
LABEL_7:
          *(_DWORD *)&v10[v5] = *a2;
          if ( v2 == v4 )
          {
            if ( !v4 )
              goto LABEL_10;
          }
          else
          {
            src = v4;
            memmove(v10, v4, v5);
            v4 = (char *)src;
          }
          operator delete(v4);
LABEL_10:
          v2 = &v10[v5];
          src = &v10[v5 + 4];
          *(_QWORD *)(a1 + 16) = v11;
          *(__m128 *)a1 = _mm_loadh_ps((const double *)&src);
          return v2;
        }
        v8 = 8 * v6;
      }
    }
    else
    {
      v8 = 4;
    }
    src = *(void **)a1;
    v9 = (char *)operator new(v8);
    v4 = (char *)src;
    v10 = v9;
    v11 = &v9[v8];
    goto LABEL_7;
  }
  *(_DWORD *)v2 = *a2;
  *(_QWORD *)(a1 + 8) = v2 + 4;
  return v2;
}
