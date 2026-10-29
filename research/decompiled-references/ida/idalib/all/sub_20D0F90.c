char *__fastcall sub_20D0F90(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  char *v7; // rax
  size_t v8; // rdi
  size_t v9; // rsi
  char *result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v4 == sub_20CEB40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  else
    v4((__int64)a2, v3);
  v5 = a2[2];
  v6 = a2[3];
  v7 = (char *)a2[1];
  if ( v5 + 3 > v6 )
  {
    v8 = v5 + 995;
    v9 = 2 * v6;
    if ( v8 > v9 )
    {
      a2[3] = v8;
      v9 = v8;
    }
    else
    {
      a2[3] = v9;
    }
    v7 = (char *)realloc(v7, v9);
    a2[1] = v7;
    if ( !v7 )
      abort();
    v5 = a2[2];
  }
  result = &v7[v5];
  *(_WORD *)result = 11822;
  result[2] = 46;
  a2[2] += 3LL;
  return result;
}
