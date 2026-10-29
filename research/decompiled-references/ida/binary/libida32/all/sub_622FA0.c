__int64 __fastcall sub_622FA0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r15
  unsigned __int64 v5; // r14
  __int64 v6; // rsi
  const char *v7; // rdi
  __int64 result; // rax
  __int64 v9; // rbp
  __int64 v10; // rax

  v2 = qword_2CA1698;
  v3 = *(_QWORD *)(qword_2CA1698 + 8);
  if ( v3 )
  {
    v4 = v3 + 3;
    v5 = v3 + 4;
    v6 = *(_QWORD *)qword_2CA1698;
    --v3;
    if ( *(_QWORD *)(qword_2CA1698 + 16) >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *(_QWORD *)qword_2CA1698;
    v5 = 5;
    v4 = 4;
    if ( *(_QWORD *)(qword_2CA1698 + 16) >= 5u )
      goto LABEL_3;
  }
  v10 = qvector_reserve(qword_2CA1698, v6, v5, 1);
  *(_QWORD *)v2 = v10;
  v6 = v10;
LABEL_3:
  *(_QWORD *)(v2 + 8) = v5;
  v7 = haystack;
  *(_BYTE *)(v6 + v4) = 0;
  *(_DWORD *)(*(_QWORD *)v2 + v3) = 1953721390;
  if ( *(_QWORD *)(v2 + 8) )
    v7 = *(const char **)v2;
  result = qfopen(v7, "w");
  v9 = result;
  if ( result )
  {
    sub_38CDA0();
    if ( a1 )
      qvfprintf();
    qfclose(v9);
    *(_DWORD *)(v2 + 72) |= 1u;
    qexit(0);
  }
  return result;
}

