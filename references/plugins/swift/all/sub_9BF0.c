__int64 __fastcall sub_9BF0(__int64 a1, __int64 *a2, const char *a3, char a4)
{
  __int64 v6; // rdi
  const char *v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v11; // rax
  size_t v12; // rax
  size_t v13; // rbx
  void *v14; // rdi
  size_t v15; // rbp
  __int64 v16; // rax
  char v17[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v18; // [rsp+408h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v6 = a1 + 136;
  v7 = &a3[strncmp(a3, "__T0", 4u) == 0];
  if ( a4 )
  {
    v8 = sub_1BFF0(v6, v7, v17, 1024);
    v9 = 0;
    if ( !v8 )
      return v9;
  }
  else
  {
    v11 = sub_1BFC0(v6, v7, v17, 1024);
    v9 = 0;
    if ( !v11 )
      return v9;
  }
  v12 = strlen(v17);
  v13 = v12;
  if ( v12 )
  {
    v14 = (void *)*a2;
    v15 = v12 + 1;
    if ( a2[2] < v12 + 1 )
    {
      v16 = qvector_reserve(a2, *a2, v12 + 1, 1);
      *a2 = v16;
      v14 = (void *)v16;
    }
    a2[1] = v15;
    memmove(v14, v17, v13);
    *(_BYTE *)(*a2 + v13) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  return 1;
}
