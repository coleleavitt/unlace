/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002A6C0
// Address: 0x000000014002A6C0

//----- (000000014002A6C0) ----------------------------------------------------
const char *__fastcall sub_14002A6C0(__int64 a1, const char *a2)
{
  __int64 **v3; // r13
  char *v4; // rbp
  size_t v5; // r14
  size_t v6; // rdi
  char *v7; // rax
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  const char *v10; // rsi
  __int64 *v11; // r15
  const char *v12; // rdx
  const char *v13; // rcx
  unsigned int v14; // eax
  __int64 *v15; // rcx
  __int64 *i; // rbx
  __int64 *j; // rax
  __int64 v18; // rdi
  const char *v19; // rcx
  char *v21; // [rsp+20h] [rbp-48h] BYREF
  size_t v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+30h] [rbp-38h]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  v3 = *(__int64 ***)(a1 + 8);
  v4 = nullptr;
  v21 = nullptr;
  v5 = 0;
  v22 = 0;
  v23 = 0;
  if ( a2 )
  {
    v6 = strlen(a2);
    v7 = nullptr;
    if ( v6 != -1 )
    {
      v7 = (char *)sub_14005ABE0((__int64)&v21, nullptr, v6 + 1, 1u);
      v21 = v7;
    }
    v22 = v6 + 1;
    memcpy(v7, a2, v6);
    v21[v6] = 0;
    v5 = v22;
    v4 = v21;
  }
  v8 = *v3;
  v9 = (__int64 *)(*v3)[1];
  v10 = Str1;
  if ( !*((_BYTE *)v9 + 25) )
  {
    do
    {
      v11 = v8;
      v12 = Str1;
      if ( v5 )
        v12 = v4;
      v13 = Str1;
      if ( v9[5] )
        v13 = (const char *)v9[4];
      v14 = (unsigned int)strcmp(v13, v12) >> 31;
      v8 = v9;
      if ( (_BYTE)v14 )
        v8 = v11;
      v15 = v9 + 2;
      if ( !(_BYTE)v14 )
        v15 = v9;
      v9 = (__int64 *)*v15;
    }
    while ( !*(_BYTE *)(*v15 + 25) );
  }
  if ( v4 )
  {
    v22 = 0;
    j_free(v4);
    v21 = nullptr;
    v23 = 0;
  }
  if ( v8 == (__int64 *)**v3 )
    return nullptr;
  if ( *((_BYTE *)v8 + 25) )
  {
    i = (__int64 *)v8[2];
  }
  else
  {
    i = (__int64 *)*v8;
    if ( *(_BYTE *)(*v8 + 25) )
    {
      for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
      {
        if ( v8 != (__int64 *)*i )
          break;
        v8 = i;
      }
      if ( *((_BYTE *)v8 + 25) )
        i = v8;
    }
    else
    {
      for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
        i = j;
    }
  }
  v18 = i[5];
  v19 = Str1;
  if ( v18 )
    v19 = (const char *)i[4];
  if ( strcmp(v19, a2) >= 0 )
    return nullptr;
  if ( v18 )
    return (const char *)i[4];
  return v10;
}
