__int64 __fastcall sub_EB5040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rax

  if ( !*(_BYTE *)(a1 + 20) )
  {
    if ( !sub_2212830(a1, a2) )
      goto LABEL_9;
    return 1;
  }
  v6 = *(_QWORD **)a1;
  v7 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 12);
  if ( *(_QWORD *)a1 != v7 )
  {
    while ( a2 != *v6 )
    {
      if ( (_QWORD *)v7 == ++v6 )
        goto LABEL_9;
    }
    return 1;
  }
LABEL_9:
  v9 = sub_A56850(a2, a2, v7, a4, a5, a6);
  v11 = v10;
  v12 = v9;
  if ( v9 == v10 )
    return 0;
  while ( 1 )
  {
    while ( (*(_BYTE *)(v12 + 12) & 1) != 0 )
    {
      v12 += 24LL;
      if ( v11 == v12 )
        return 0;
    }
    v13 = sub_EB2840(*(__int64 **)(v12 + 16));
    v14 = sub_F3F530(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL));
    result = sub_EB5040(a1, v14);
    if ( (_BYTE)result )
      break;
    v12 += 24LL;
    if ( v11 == v12 )
      return 0;
  }
  return result;
}

