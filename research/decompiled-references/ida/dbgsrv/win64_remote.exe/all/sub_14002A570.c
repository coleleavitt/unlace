/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002A570
// Address: 0x000000014002A570

//----- (000000014002A570) ----------------------------------------------------
const char *__fastcall sub_14002A570(__int64 a1, const char *a2)
{
  __int64 **v3; // r15
  char *v4; // rbp
  size_t v5; // r14
  size_t v6; // rsi
  char *v7; // rax
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  const char *v10; // rsi
  const char *v11; // rdx
  const char *v12; // rcx
  char *v14; // [rsp+20h] [rbp-38h] BYREF
  size_t v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  v3 = *(__int64 ***)(a1 + 8);
  v4 = nullptr;
  v14 = nullptr;
  v5 = 0;
  v15 = 0;
  v16 = 0;
  if ( a2 )
  {
    v6 = strlen(a2);
    v7 = nullptr;
    if ( v6 != -1 )
    {
      v7 = (char *)sub_14005ABE0((__int64)&v14, nullptr, v6 + 1, 1u);
      v14 = v7;
    }
    v15 = v6 + 1;
    memcpy(v7, a2, v6);
    v14[v6] = 0;
    v5 = v15;
    v4 = v14;
  }
  v8 = *v3;
  v9 = (__int64 *)(*v3)[1];
  v10 = Str1;
  while ( !*((_BYTE *)v9 + 25) )
  {
    v11 = Str1;
    if ( v9[5] )
      v11 = (const char *)v9[4];
    v12 = Str1;
    if ( v5 )
      v12 = v4;
    if ( strcmp(v12, v11) >= 0 )
    {
      v9 = (__int64 *)v9[2];
    }
    else
    {
      v8 = v9;
      v9 = (__int64 *)*v9;
    }
  }
  if ( v4 )
  {
    v15 = 0;
    j_free(v4);
    v14 = nullptr;
    v16 = 0;
  }
  if ( v8 == *v3 )
    return nullptr;
  if ( v8[5] )
    return (const char *)v8[4];
  return v10;
}
