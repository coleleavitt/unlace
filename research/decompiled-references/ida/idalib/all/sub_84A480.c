__int64 __fastcall sub_84A480(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rax
  unsigned __int64 v9; // rax
  const char *v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 *v13; // rax
  _DWORD *v14; // rsi
  const void *v15; // r13
  void *v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  const void *v19; // r14
  void *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax

  v6 = *(_QWORD *)(a1 + 192);
  if ( v6 )
  {
    if ( v6 == 1 && *(_BYTE *)(a1 + 265) )
    {
      v13 = *(__int64 **)(a1 + 184);
      if ( a2 != v13 )
      {
        v11 = v13[1];
        if ( v11 > 1 )
        {
          v15 = (const void *)*v13;
          v16 = (void *)*a2;
          if ( a2[2] < v11 )
          {
            v21 = qvector_reserve(a2, *a2, v13[1], 1);
            *a2 = v21;
            v16 = (void *)v21;
          }
          a2[1] = v11;
          memmove(v16, v15, v11 - 1);
          *(_BYTE *)(*a2 + v11 - 1) = 0;
        }
        else
        {
          a2[1] = 0;
        }
      }
      return 1;
    }
    v9 = a2[1];
    if ( v9 > 1 )
      goto LABEL_4;
    if ( a2 != (__int64 *)(a1 + 208) )
    {
      v18 = *(_QWORD *)(a1 + 216);
      if ( v18 <= 1 )
      {
        a2[1] = 0;
        goto LABEL_21;
      }
      v19 = *(const void **)(a1 + 208);
      v20 = (void *)*a2;
      if ( a2[2] < v18 )
      {
        v22 = qvector_reserve(a2, *a2, *(_QWORD *)(a1 + 216), 1);
        *a2 = v22;
        v20 = (void *)v22;
      }
      a2[1] = v18;
      memmove(v20, v19, v18 - 1);
      *(_BYTE *)(*a2 + v18 - 1) = 0;
      v9 = a2[1];
    }
    if ( v9 )
    {
LABEL_4:
      v10 = (const char *)*a2;
      goto LABEL_5;
    }
LABEL_21:
    v10 = haystack;
LABEL_5:
    callui(16, 0, a1, (int)v10, (int)&callui, a6);
  }
  v14 = (_DWORD *)*a2;
  if ( (unsigned __int64)a2[2] <= 4 )
  {
    v17 = qvector_reserve(a2, v14, 5, 1);
    *a2 = v17;
    v14 = (_DWORD *)v17;
  }
  a2[1] = 5;
  *v14 = 1162760014;
  *(_BYTE *)(*a2 + 4) = 0;
  return 0;
}
