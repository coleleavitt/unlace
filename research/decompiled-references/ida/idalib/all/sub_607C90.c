__int64 __fastcall sub_607C90(const char *src, _QWORD *a2, const char *a3, __int64 a4, __int64 a5)
{
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // rax
  size_t v12; // r12
  size_t v13; // rax
  size_t v14; // rbp
  void *v15; // rdi
  size_t v16; // r14
  void *v17; // rdi
  size_t v18; // r15
  void *v19; // rdi
  size_t v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  if ( get_tinfo_property(*a2, 5) )
  {
    if ( *(_QWORD *)(a5 + 32) > 1u )
    {
      if ( *(_BYTE *)(a5 + 72) )
        return 3;
LABEL_16:
      if ( !src )
      {
        if ( !a3 )
        {
LABEL_15:
          copy_tinfo_t(a5 + 72);
          *(_BYTE *)(a5 + 84) = 1;
          return 3;
        }
LABEL_13:
        v11 = strlen(a3);
        v12 = v11;
        if ( v11 )
        {
          v15 = *(void **)(a5 + 48);
          v16 = v11 + 1;
          if ( *(_QWORD *)(a5 + 64) < v11 + 1 )
          {
            v21 = qvector_reserve(a5 + 48, *(_QWORD *)(a5 + 48), v16, 1);
            *(_QWORD *)(a5 + 48) = v21;
            v15 = (void *)v21;
          }
          *(_QWORD *)(a5 + 56) = v16;
          memmove(v15, a3, v12);
          *(_BYTE *)(*(_QWORD *)(a5 + 48) + v12) = 0;
        }
        else
        {
          *(_QWORD *)(a5 + 56) = 0;
        }
        goto LABEL_15;
      }
LABEL_10:
      v9 = strlen(src);
      v10 = v9;
      if ( v9 )
      {
        v17 = *(void **)a5;
        v18 = v9 + 1;
        if ( *(_QWORD *)(a5 + 16) < v9 + 1 )
        {
          v22 = qvector_reserve(a5, *(_QWORD *)a5, v9 + 1, 1);
          *(_QWORD *)a5 = v22;
          v17 = (void *)v22;
        }
        *(_QWORD *)(a5 + 8) = v18;
        memmove(v17, src, v10);
        *(_BYTE *)(*(_QWORD *)a5 + v10) = 0;
      }
      else
      {
        *(_QWORD *)(a5 + 8) = 0;
      }
      if ( !a3 )
        goto LABEL_15;
      goto LABEL_13;
    }
    if ( src && (v13 = strlen(src), (v14 = v13) != 0) )
    {
      v19 = *(void **)(a5 + 24);
      v20 = v13 + 1;
      if ( *(_QWORD *)(a5 + 40) < v13 + 1 )
      {
        v23 = qvector_reserve(a5 + 24, *(_QWORD *)(a5 + 24), v20, 1);
        *(_QWORD *)(a5 + 24) = v23;
        v19 = (void *)v23;
      }
      *(_QWORD *)(a5 + 32) = v20;
      memmove(v19, src, v14);
      *(_BYTE *)(*(_QWORD *)(a5 + 24) + v14) = 0;
    }
    else
    {
      *(_QWORD *)(a5 + 32) = 0;
    }
  }
  else if ( *(_QWORD *)(a5 + 8) <= 1u || !*(_BYTE *)(a5 + 72) )
  {
    if ( *(_QWORD *)(a5 + 32) <= 1u )
      goto LABEL_16;
    if ( src && !strcmp(*(const char **)(a5 + 24), src) )
      goto LABEL_10;
  }
  return 3;
}
