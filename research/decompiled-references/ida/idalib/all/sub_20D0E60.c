char *__fastcall sub_20D0E60(__int64 a1, _QWORD *a2)
{
  char *v3; // rbp
  bool v4; // cf
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  char *v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  size_t v10; // rsi
  char *result; // rax
  unsigned __int64 v12; // rcx
  signed __int64 v13; // rbp
  unsigned int v14; // edx
  __int64 v15; // rsi

  v3 = "true";
  if ( !*(_BYTE *)(a1 + 11) )
    v3 = "false";
  v4 = *(_BYTE *)(a1 + 11) == 0;
  v5 = a2[2];
  v6 = a2[3];
  v7 = (char *)a2[1];
  v8 = v4 - 1LL + 5;
  if ( v8 + v5 > v6 )
  {
    v9 = v8 + v5 + 992;
    v10 = 2 * v6;
    if ( v9 > v10 )
    {
      a2[3] = v9;
      v10 = v8 + v5 + 992;
    }
    else
    {
      a2[3] = v10;
    }
    v7 = (char *)realloc(v7, v10);
    a2[1] = v7;
    if ( !v7 )
      abort();
    v5 = a2[2];
  }
  result = &v7[v5];
  if ( (unsigned int)v8 < 8 )
  {
    if ( (v8 & 4) != 0 )
    {
      *(_DWORD *)result = *(_DWORD *)v3;
      *(_DWORD *)&result[(unsigned int)v8 - 4] = *(_DWORD *)&v3[(unsigned int)v8 - 4];
    }
    else if ( (_DWORD)v8 )
    {
      *result = *v3;
      if ( (v8 & 2) != 0 )
        *(_WORD *)&result[(unsigned int)v8 - 2] = *(_WORD *)&v3[(unsigned int)v8 - 2];
    }
    goto LABEL_13;
  }
  *(_QWORD *)result = *(_QWORD *)v3;
  *(_QWORD *)&result[(unsigned int)v8 - 8] = *(_QWORD *)&v3[(unsigned int)v8 - 8];
  v12 = (unsigned __int64)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
  result -= v12;
  v13 = v3 - result;
  if ( (((_DWORD)v8 + (_DWORD)result) & 0xFFFFFFF8) < 8 )
  {
LABEL_13:
    a2[2] += v8;
    return result;
  }
  v14 = 0;
  result = (char *)(((_DWORD)v8 + (_DWORD)result) & 0xFFFFFFF8);
  do
  {
    v15 = v14;
    v14 += 8;
    *(_QWORD *)(v12 + v15) = *(_QWORD *)(v13 + v15);
  }
  while ( v14 < (unsigned int)result );
  a2[2] += v8;
  return result;
}
