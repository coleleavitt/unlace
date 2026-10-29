__int64 __fastcall sub_5871C0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v6)(__int64); // rax
  unsigned __int64 *v7; // rax
  __int64 (__fastcall *v8)(__int64, unsigned __int64, int); // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // r9
  const char *v19; // rax
  const char *v20; // rbp
  size_t v21; // rax
  size_t v22; // r12
  void *v24; // rdi
  size_t v25; // r13
  __int64 v26; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v6 == sub_3DB7B0 )
    v7 = (unsigned __int64 *)(a2 + 16);
  else
    v7 = (unsigned __int64 *)v6(a2);
  if ( a3 < *v7 || a3 >= v7[1] )
    return a1;
  v8 = *(__int64 (__fastcall **)(__int64, unsigned __int64, int))(*(_QWORD *)a2 + 40LL);
  if ( v8 != sub_586780 )
  {
    v15 = v8(a2, a3, 0);
LABEL_14:
    if ( a3 == v15 )
    {
      switch_dbctx(*(int *)(a2 + 8));
      v16 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 1856LL);
      v17 = (unsigned int)sub_587160(v16, a3);
      if ( !v17 )
        sub_586870(v16, a3, 0);
      v19 = (const char *)sub_64DFD0(v18, 0, v17, 0);
      v20 = v19;
      if ( v19 && (v21 = strlen(v19), (v22 = v21) != 0) )
      {
        v24 = *(void **)a1;
        v25 = v21 + 1;
        if ( *(_QWORD *)(a1 + 16) < v21 + 1 )
        {
          v26 = qvector_reserve(a1, *(_QWORD *)a1, v21 + 1, 1);
          *(_QWORD *)a1 = v26;
          v24 = (void *)v26;
        }
        *(_QWORD *)(a1 + 8) = v25;
        memmove(v24, v20, v22);
        *(_BYTE *)(*(_QWORD *)a1 + v22) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
      }
    }
    return a1;
  }
  v9 = *(_QWORD **)(*(_QWORD *)(a2 + 40) + 1856LL);
  if ( v9[7] )
  {
    v10 = v9 + 3;
    v11 = (_QWORD *)v9[4];
    if ( v11 )
    {
      v12 = v10;
      do
      {
        while ( 1 )
        {
          v13 = v11[2];
          v14 = v11[3];
          if ( v11[4] >= a3 )
            break;
          v11 = (_QWORD *)v11[3];
          if ( !v14 )
            goto LABEL_12;
        }
        v12 = v11;
        v11 = (_QWORD *)v11[2];
      }
      while ( v13 );
LABEL_12:
      if ( v12 != v10 )
      {
        v15 = v12[4];
        goto LABEL_14;
      }
    }
  }
  return a1;
}
