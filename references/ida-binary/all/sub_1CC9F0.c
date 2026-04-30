__int64 __fastcall sub_1CC9F0(__int64 *a1, const char *a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // r15
  const char *v7; // rdi
  unsigned int *v8; // rbp
  __int64 result; // rax
  _QWORD *v10; // rbp
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v14; // [rsp+8h] [rbp-40h]

  v4 = a1[1];
  v14 = *a1;
  if ( v4 )
  {
    v5 = *a1;
    v6 = 0;
    while ( 1 )
    {
      v7 = &s1;
      if ( *(_QWORD *)(v5 + 8) )
        v7 = *(const char **)v5;
      if ( !strcmp(v7, a2) )
        break;
      ++v6;
      v5 += 40;
      if ( v4 == v6 )
        goto LABEL_11;
    }
    v8 = (unsigned int *)(v5 + 24);
  }
  else
  {
LABEL_11:
    if ( a1[2] < (unsigned __int64)(v4 + 1) )
    {
      v12 = qvector_reserve(a1, v14, v4 + 1, 40);
      v4 = a1[1];
      v14 = v12;
      *a1 = v12;
    }
    v10 = (_QWORD *)(v14 + 40 * v4);
    *v10 = 0;
    v11 = v10;
    v8 = (unsigned int *)(v10 + 3);
    *((_OWORD *)v8 - 1) = 0;
    *v8 = 0;
    *((_QWORD *)v8 + 1) = 0;
    ++a1[1];
    sub_1CB2E0(v11, a2);
  }
  result = *v8;
  if ( (_DWORD)result )
    result = jvalue_t_clear(v8);
  *v8 = 1;
  *((_QWORD *)v8 + 1) = a3;
  return result;
}
