__int64 __fastcall sub_56D660(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned __int64 *v6; // rax
  __int64 (__fastcall *v7)(__int64, __int64, int); // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // r9
  const char *v18; // rax
  const char *v19; // rbp
  size_t v20; // rax
  size_t v21; // r12
  void *v23; // rdi
  size_t v24; // r13
  __int64 v25; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v5 == sub_3D58E0 )
    v6 = (unsigned __int64 *)(a2 + 16);
  else
    v6 = (unsigned __int64 *)v5(a2);
  if ( a3 < *v6 || a3 >= v6[1] )
    return a1;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a2 + 40LL);
  if ( v7 != sub_56CC80 )
  {
    v14 = v7(a2, a3, 0);
LABEL_14:
    if ( a3 == v14 )
    {
      switch_dbctx(*(int *)(a2 + 8));
      v15 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 1664LL);
      v16 = sub_56D600(v15, a3);
      if ( !v16 )
        sub_56CD60(v15, (unsigned int)a3, 0);
      v18 = (const char *)sub_6309B0(v17, 0, v16, 0);
      v19 = v18;
      if ( v18 && (v20 = strlen(v18), (v21 = v20) != 0) )
      {
        v23 = *(void **)a1;
        v24 = v20 + 1;
        if ( *(_QWORD *)(a1 + 16) < v20 + 1 )
        {
          v25 = qvector_reserve(a1, *(_QWORD *)a1, v20 + 1, 1);
          *(_QWORD *)a1 = v25;
          v23 = (void *)v25;
        }
        *(_QWORD *)(a1 + 8) = v24;
        memmove(v23, v19, v21);
        *(_BYTE *)(*(_QWORD *)a1 + v21) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
      }
    }
    return a1;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 1664LL);
  if ( *(_QWORD *)(v8 + 56) )
  {
    v9 = v8 + 24;
    v10 = *(_QWORD *)(v8 + 32);
    if ( v10 )
    {
      v11 = v9;
      do
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(v10 + 16);
          v13 = *(_QWORD *)(v10 + 24);
          if ( *(_DWORD *)(v10 + 32) >= (unsigned int)a3 )
            break;
          v10 = *(_QWORD *)(v10 + 24);
          if ( !v13 )
            goto LABEL_12;
        }
        v11 = v10;
        v10 = *(_QWORD *)(v10 + 16);
      }
      while ( v12 );
LABEL_12:
      if ( v11 != v9 )
      {
        v14 = *(unsigned int *)(v11 + 32);
        goto LABEL_14;
      }
    }
  }
  return a1;
}

