void *__fastcall sub_20D10E0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  void *result; // rax
  size_t v8; // rdx
  size_t v9; // rsi

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v4 == sub_20CEB40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  else
    v4((__int64)a2, v3);
  v5 = a2[2];
  v6 = a2[3];
  result = (void *)a2[1];
  if ( v5 + 1 > v6 )
  {
    v8 = v5 + 993;
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
    result = realloc(result, v9);
    a2[1] = result;
    if ( !result )
      abort();
    v5 = a2[2];
  }
  *((_BYTE *)result + v5) = 32;
  ++a2[2];
  return result;
}
