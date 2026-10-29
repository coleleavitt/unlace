__int64 __fastcall sub_7D3980(__int64 a1, const char *a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rbx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-40h]

  v2 = qalloc_or_throw(24, a2);
  *(_QWORD *)v2 = 0;
  *(_OWORD *)(v2 + 8) = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, const char *, const char *, _QWORD, __int64))(*(_QWORD *)a1 + 24LL))(
         a1,
         a2 + 48,
         a2,
         0,
         -1);
  v4 = *(_QWORD *)(v2 + 8);
  v5 = *(_QWORD *)v2;
  v15 = v3;
  if ( !v4 )
  {
LABEL_9:
    if ( *(_QWORD *)(v2 + 16) < (unsigned __int64)(v4 + 1) )
    {
      v13 = qvector_reserve(v2, v5, v4 + 1, 40);
      v4 = *(_QWORD *)(v2 + 8);
      *(_QWORD *)v2 = v13;
      v5 = v13;
    }
    v11 = v5 + 40 * v4;
    *(_QWORD *)v11 = 0;
    *(_OWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 32) = 0;
    ++*(_QWORD *)(v2 + 8);
    v12 = *(_QWORD *)v11;
    if ( *(_QWORD *)(v11 + 16) <= 6u )
    {
      v14 = qvector_reserve(v5 + 40 * v4, v12, 7, 1);
      *(_QWORD *)v11 = v14;
      v12 = v14;
    }
    *(_QWORD *)(v11 + 8) = 7;
    v9 = v11 + 24;
    *(_DWORD *)v12 = 1852143205;
    *(_WORD *)(v12 + 4) = 29556;
    *(_BYTE *)(*(_QWORD *)(v9 - 24) + 6LL) = 0;
    if ( !*(_DWORD *)v9 )
      goto LABEL_7;
LABEL_8:
    jvalue_t_clear(v9);
    goto LABEL_7;
  }
  v6 = *(_QWORD *)v2;
  v7 = 0;
  while ( !*(_QWORD *)(v6 + 8) || strcmp(*(const char **)v6, "events") )
  {
    ++v7;
    v6 += 40;
    if ( v4 == v7 )
      goto LABEL_9;
  }
  v8 = *(_DWORD *)(v6 + 24);
  v9 = v6 + 24;
  if ( v8 )
    goto LABEL_8;
LABEL_7:
  *(_DWORD *)v9 = 4;
  *(_QWORD *)(v9 + 8) = v15;
  return v2;
}

