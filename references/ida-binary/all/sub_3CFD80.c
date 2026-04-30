void __fastcall sub_3CFD80(__int64 a1, const char *a2, const char *a3, const char *a4, const char *a5)
{
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // rax
  size_t v12; // r12
  __int64 v13; // rdi
  size_t v14; // rax
  size_t v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdi
  void *v18; // rdi
  size_t v19; // r15
  void *v20; // rdi
  size_t v21; // r13
  void *v22; // rdi
  size_t v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  if ( a2 )
  {
    copy_tinfo_t(a1, a2, a3);
    if ( a3 && (v9 = strlen(a3), (v10 = v9) != 0) )
    {
      v18 = *(void **)(a1 + 8);
      v19 = v9 + 1;
      if ( *(_QWORD *)(a1 + 24) < v9 + 1 )
      {
        v24 = qvector_reserve(a1 + 8, *(_QWORD *)(a1 + 8), v19, 1);
        *(_QWORD *)(a1 + 8) = v24;
        v18 = (void *)v24;
      }
      *(_QWORD *)(a1 + 16) = v19;
      a2 = a3;
      memmove(v18, a3, v10);
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + v10) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0;
    }
    if ( a4 )
    {
      v11 = strlen(a4);
      v12 = v11;
      if ( v11 )
      {
        v22 = *(void **)(a1 + 32);
        v23 = v11 + 1;
        if ( *(_QWORD *)(a1 + 48) < v11 + 1 )
        {
          v26 = qvector_reserve(a1 + 32, *(_QWORD *)(a1 + 32), v23, 1);
          *(_QWORD *)(a1 + 32) = v26;
          v22 = (void *)v26;
        }
        *(_QWORD *)(a1 + 40) = v23;
        a2 = a4;
        memmove(v22, a4, v12);
        *(_BYTE *)(*(_QWORD *)(a1 + 32) + v12) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 40) = 0;
      }
      goto LABEL_8;
    }
    a2 = *(const char **)a1;
    if ( *(_QWORD *)a1 > 0xFFu && (unsigned int)get_tinfo_pdata(a1 + 32, a2, 5) )
      goto LABEL_8;
  }
  else
  {
    clear_tinfo_t(a1);
    v17 = *(_QWORD *)(a1 + 8);
    if ( v17 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree(v17, nullptr);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
  }
  v16 = *(_QWORD *)(a1 + 32);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v16, a2);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
LABEL_8:
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 64) = 0;
    qfree(v13, a2);
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 72) = 0;
  }
  if ( a5 )
  {
    v14 = strlen(a5);
    v15 = v14;
    if ( v14 )
    {
      v20 = *(void **)(a1 + 56);
      v21 = v14 + 1;
      if ( *(_QWORD *)(a1 + 72) < v14 + 1 )
      {
        v25 = qvector_reserve(a1 + 56, *(_QWORD *)(a1 + 56), v21, 1);
        *(_QWORD *)(a1 + 56) = v25;
        v20 = (void *)v25;
      }
      *(_QWORD *)(a1 + 64) = v21;
      memmove(v20, a5, v15);
      *(_BYTE *)(*(_QWORD *)(a1 + 56) + v15) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 64) = 0;
    }
  }
}
