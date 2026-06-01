void __fastcall sub_534680(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v7; // rax
  const char *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax

  v3 = a1[1];
  if ( v3 )
    return;
  if ( a1[2] < a3 )
  {
    *a1 = qvector_reserve(a1, *a1, a3, 24);
    while ( 1 )
    {
LABEL_7:
      v8 = *(const char **)a2;
      if ( !*(_QWORD *)a2 )
        goto LABEL_10;
      v9 = sub_534430(*(const char **)a2);
      if ( v9 )
        break;
LABEL_6:
      ++v3;
      a2 += 24;
      if ( a3 == v3 )
        return;
    }
    v8 = *(const char **)(v9 + 192);
LABEL_10:
    v10 = a1[1];
    v11 = *a1;
    v12 = v10 + 1;
    if ( a1[2] < (unsigned __int64)(v10 + 1) )
    {
      v13 = qvector_reserve(a1, v11, v10 + 1, 24);
      v10 = a1[1];
      *a1 = v13;
      v11 = v13;
      v12 = v10 + 1;
    }
    a1[1] = v12;
    v7 = v11 + 24 * v10;
    *(_QWORD *)v7 = v8;
    *(_QWORD *)(v7 + 8) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v7 + 16) = *(_DWORD *)(a2 + 8);
    goto LABEL_6;
  }
  if ( a3 )
    goto LABEL_7;
}
