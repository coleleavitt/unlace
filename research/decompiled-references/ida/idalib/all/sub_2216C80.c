__int64 *__fastcall sub_2216C80(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 *result; // rax
  _QWORD *v4; // r12
  const void *v5; // r13
  size_t v6; // rbp
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // eax
  char v11; // dl
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *a1;
  result = (__int64 *)a1[1];
  v4 = (_QWORD *)a1[2];
  v5 = (const void *)*result;
  v6 = result[1];
  if ( !*(_QWORD *)(*a1 + 24) )
  {
    v8 = *result;
    v9 = result[1];
    v16[0] = v2;
    v10 = sub_2244B30(v8, v9);
    result = sub_2216B80(a2 + 128, v5, v6, v10, v16);
    if ( !v11 )
    {
      v12 = sub_227D6D0(a2 + 128, v5);
      v13 = sub_227BF10(v12, *v4, v4[1]);
      v14 = sub_995540(v13, ": CommandLine Error: Option '");
      v15 = sub_9954E0(v14, v5, v6);
      sub_995540(v15, "' registered more than once!\n");
      sub_2221C70("inconsistency in registered CommandLine options", 1);
    }
  }
  return result;
}
