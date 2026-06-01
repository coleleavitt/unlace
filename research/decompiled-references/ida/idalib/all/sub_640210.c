__int64 __fastcall sub_640210(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  const char *v9; // rdi
  __int64 result; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v4 = qword_2CCB598;
  v5 = *(_QWORD *)(qword_2CCB598 + 8);
  if ( v5 )
  {
    v6 = v5 + 3;
    v7 = v5 + 4;
    v8 = *(_QWORD *)qword_2CCB598;
    --v5;
    if ( *(_QWORD *)(qword_2CCB598 + 16) >= v7 )
      goto LABEL_3;
  }
  else
  {
    v8 = *(_QWORD *)qword_2CCB598;
    v7 = 5;
    v6 = 4;
    if ( *(_QWORD *)(qword_2CCB598 + 16) >= 5u )
      goto LABEL_3;
  }
  v12 = qvector_reserve(qword_2CCB598, v8, v7, 1);
  *(_QWORD *)v4 = v12;
  v8 = v12;
LABEL_3:
  *(_QWORD *)(v4 + 8) = v7;
  v9 = haystack;
  *(_BYTE *)(v8 + v6) = 0;
  *(_DWORD *)(*(_QWORD *)v4 + v5) = 1953721390;
  if ( *(_QWORD *)(v4 + 8) )
    v9 = *(const char **)v4;
  result = qfopen(v9, "w");
  v11 = result;
  if ( result )
  {
    sub_391AE0(result, (__int64)"LOADER FAILURE\n");
    if ( a1 )
      qvfprintf(v11, a1, a2, v13, v14, v15);
    qfclose(v11);
    *(_DWORD *)(v4 + 72) |= 1u;
    qexit(0);
  }
  return result;
}
