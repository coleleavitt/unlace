__int64 __fastcall sub_531EC0(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128 v10; // xmm0
  __int64 v11; // rax
  char **v13; // r14
  char *v14; // rdi
  char *v15; // r13
  char *i; // rbp
  char *v17; // rbx
  void *v18; // rdi
  void *v19; // rdi

  v4 = *a2;
  if ( !(_BYTE)v4 )
    return 0;
  if ( a3 )
  {
    if ( (unsigned __int8)sub_51A590(*(_QWORD *)a3, *(_QWORD *)(a3 + 8)) )
    {
      v6 = sub_531B70(*a1, a2, 1);
      v7 = v6;
      if ( *(_QWORD *)(a3 + 8) )
      {
        v8 = *(_QWORD *)(v6 + 40);
        if ( !v8 )
        {
          v8 = qalloc_or_throw(24, (const char *)a2);
          *(_QWORD *)v8 = 0;
          *(_OWORD *)(v8 + 8) = 0;
          *(_QWORD *)(v7 + 40) = v8;
        }
        v9 = *(_QWORD *)a3;
        v10 = _mm_loadh_ps((const double *)(a3 + 16));
        *(_QWORD *)a3 = *(_QWORD *)v8;
        *(_QWORD *)(a3 + 8) = *(_QWORD *)(v8 + 8);
        *(_QWORD *)(a3 + 16) = *(_QWORD *)(v8 + 16);
        *(_QWORD *)v8 = v9;
        *(__m128 *)(v8 + 8) = v10;
        return 1;
      }
LABEL_14:
      v13 = *(char ***)(v7 + 40);
      if ( v13 )
      {
        v14 = *v13;
        if ( *v13 )
        {
          v15 = v13[1];
          if ( v15 )
          {
            for ( i = nullptr; i != v15; ++i )
            {
              v17 = &v14[48 * (_QWORD)i];
              v18 = *((void **)v17 + 3);
              if ( v18 )
              {
                *((_QWORD *)v17 + 4) = 0;
                qfree(v18);
              }
              v19 = *(void **)v17;
              if ( *(_QWORD *)v17 )
              {
                *((_QWORD *)v17 + 1) = 0;
                qfree(v19);
              }
              v14 = *v13;
            }
          }
          v13[1] = nullptr;
          qfree(v14);
        }
        qfree(v13);
      }
      *(_QWORD *)(v7 + 40) = 0;
      return 1;
    }
    return 0;
  }
  if ( v4 > 0xFF )
  {
    v11 = sub_51B750(*(_QWORD *)(*a1 + 1632), v4);
    if ( *(_QWORD *)(v11 + 32) && (~(unsigned __int8)*(_WORD *)(v11 + 68) & 0x70) != 0 )
      return 0;
    if ( *(_QWORD *)(v11 + 40) )
    {
      v7 = sub_531B70(*a1, a2, 1);
      goto LABEL_14;
    }
  }
  return 1;
}

