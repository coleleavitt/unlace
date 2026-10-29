__int64 __fastcall sub_30F80(std::string *a1, __int64 a2, int a3)
{
  int v3; // r15d
  __int64 v4; // r12
  __int64 v5; // rax
  char *v6; // rax
  size_t v7; // rdx
  const char *v8; // r13
  char v9; // al
  __int64 v10; // r15
  __int64 v11; // rax
  _BYTE *v12; // rbx
  __int64 result; // rax
  _BYTE *i; // r13
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rax
  _QWORD *v18; // rdx
  int v19; // [rsp+8h] [rbp-40h]

  v19 = 2 * a3;
  if ( 2 * a3 )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)a1 - 24LL);
      if ( (unsigned __int64)(v4 + 1) > *(_QWORD *)(*(_QWORD *)a1 - 16LL) || *(int *)(*(_QWORD *)a1 - 8LL) > 0 )
        std::string::reserve(a1, v4 + 1);
      *(_BYTE *)(*(_QWORD *)a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL)) = 32;
      v5 = *(_QWORD *)a1;
      if ( (_QWORD *)(*(_QWORD *)a1 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v5 - 8) = 0;
        *(_QWORD *)(v5 - 24) = v4 + 1;
        *(_BYTE *)(v5 + v4 + 1) = 0;
      }
      ++v3;
    }
    while ( v3 != v19 );
  }
  if ( !a2 )
    return std::string::append(a1, "<<NULL>>", 8u);
  std::string::append(a1, "kind=", 5u);
  v6 = sub_304F0(*(unsigned __int16 *)(a2 + 16));
  v7 = 0;
  v8 = v6;
  if ( v6 )
    v7 = strlen(v6);
  std::string::append(a1, v8, v7);
  v9 = *(_BYTE *)(a2 + 18);
  if ( v9 == 1 )
  {
    std::string::append(a1, ", text=\"", 8u);
    std::string::append(a1, *(const char **)a2, *(_QWORD *)(a2 + 8));
    v16 = *(_QWORD *)(*(_QWORD *)a1 - 24LL);
    if ( (unsigned __int64)(v16 + 1) > *(_QWORD *)(*(_QWORD *)a1 - 16LL) || *(int *)(*(_QWORD *)a1 - 8LL) > 0 )
      std::string::reserve(a1, v16 + 1);
    *(_BYTE *)(*(_QWORD *)a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL)) = 34;
    v17 = *(_QWORD *)a1;
    v18 = (_QWORD *)(*(_QWORD *)a1 - 24LL);
    if ( v18 != &std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v17 - 8) = 0;
      *(_QWORD *)(v17 - 24) = v16 + 1;
      *((_BYTE *)v18 + v16 + 25) = 0;
    }
    if ( *(_BYTE *)(a2 + 18) != 2 )
      goto LABEL_14;
  }
  else if ( v9 != 2 )
  {
    goto LABEL_14;
  }
  std::string::append(a1, ", index=", 8u);
  sub_23B50(a1, *(_QWORD *)a2);
LABEL_14:
  v10 = *(_QWORD *)(*(_QWORD *)a1 - 24LL);
  if ( (unsigned __int64)(v10 + 1) > *(_QWORD *)(*(_QWORD *)a1 - 16LL) || *(int *)(*(_QWORD *)a1 - 8LL) > 0 )
    std::string::reserve(a1, v10 + 1);
  *(_BYTE *)(*(_QWORD *)a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL)) = 10;
  v11 = *(_QWORD *)a1;
  if ( (_QWORD *)(*(_QWORD *)a1 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    *(_DWORD *)(v11 - 8) = 0;
    *(_QWORD *)(v11 - 24) = v10 + 1;
    *(_BYTE *)(v11 + v10 + 1) = 0;
  }
  v12 = sub_C020((_BYTE *)a2);
  result = sub_C050(a2);
  for ( i = (_BYTE *)result; i != v12; result = sub_30F80(a1, v15, (unsigned int)(a3 + 1)) )
  {
    v15 = *(_QWORD *)v12;
    v12 += 8;
  }
  return result;
}
