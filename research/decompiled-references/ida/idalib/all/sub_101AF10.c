__int64 __fastcall sub_101AF10(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  const char *v3; // rbp
  size_t v4; // rax
  _BYTE *v5; // rdi
  size_t v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // rax
  _WORD *v10; // rdx

  v2 = a2;
  if ( *(_DWORD *)(a1 + 24) )
  {
    sub_101AC40((unsigned int *)(a1 + 24), a2, *(_QWORD *)(a1 + 16));
    v10 = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v10 > 1u )
    {
      *v10 = 8250;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
    else
    {
      sub_227BF10(a2, ": ", 2);
    }
  }
  v3 = *(const char **)(a1 + 32);
  if ( !v3 )
    goto LABEL_5;
  v4 = strlen(v3);
  v5 = *(_BYTE **)(a2 + 32);
  v6 = v4;
  v7 = *(_QWORD *)(a2 + 24);
  if ( v6 > v7 - (unsigned __int64)v5 )
  {
    v2 = sub_227BF10(a2, v3, v6);
LABEL_5:
    v5 = *(_BYTE **)(v2 + 32);
    v7 = *(_QWORD *)(v2 + 24);
    goto LABEL_6;
  }
  if ( v6 )
  {
    memcpy(v5, v3, v6);
    v9 = *(_QWORD *)(a2 + 24);
    v5 = (_BYTE *)(v6 + *(_QWORD *)(a2 + 32));
    *(_QWORD *)(a2 + 32) = v5;
    if ( (unsigned __int64)v5 < v9 )
      goto LABEL_7;
    return sub_227BA10(v2, 10);
  }
LABEL_6:
  if ( (unsigned __int64)v5 < v7 )
  {
LABEL_7:
    *(_QWORD *)(v2 + 32) = v5 + 1;
    *v5 = 10;
    return (__int64)(v5 + 1);
  }
  return sub_227BA10(v2, 10);
}
