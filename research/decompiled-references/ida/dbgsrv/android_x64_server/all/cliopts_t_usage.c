/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_usage
// Address: 0x00000000000B3310

//----- (00000000000B3310) ----------------------------------------------------
void __fastcall __noreturn cliopts_t_usage(__int64 *a1, int a2)
{
  __int64 v2; // r15
  unsigned __int64 i; // r12
  __int64 v4; // r13
  const char *v5; // rcx
  size_t v6; // rbx
  char *v7; // rbp
  void *v8; // rax
  const char *v9; // rdx
  const char *v10; // rcx
  size_t v11; // rbx
  char *v12; // rbp
  void *v13; // rax
  const void *v14; // r14
  size_t v15; // rbx
  char *v16; // rbp
  void *v17; // rax
  size_t v18; // rbx
  char *v19; // rbp
  void *v20; // rax
  int (**v21)(const char *, ...); // rbx
  char *v22; // rdi
  const char *v23; // rcx
  const char *v24; // rdx
  void *ptr[2]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v26; // [rsp+10h] [rbp-58h]
  __int64 *v27; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+2Ch] [rbp-3Ch]
  unsigned __int64 v29; // [rsp+30h] [rbp-38h]

  v28 = a2;
  *(_OWORD *)ptr = 0;
  v26 = 0;
  v27 = a1;
  v29 = a1[1];
  if ( v29 )
  {
    v2 = 32;
    for ( i = 0; i < v29; ++i )
    {
      v4 = *v27;
      if ( *(_BYTE *)(*v27 + v2 - 32) )
      {
        v5 = " ...";
        if ( !*(_DWORD *)(v4 + v2) )
          v5 = "    ";
        sub_4E030((__int64)ptr, "  -%c%s", (unsigned int)*(char *)(*v27 + v2 - 32), v5);
      }
      else
      {
        v6 = __strlen_chk("        ", 9);
        v7 = (char *)ptr[1] - 1;
        if ( !ptr[1] )
          v7 = nullptr;
        v8 = ptr[0];
        if ( v26 < (unsigned __int64)&v7[v6 + 1] )
        {
          v8 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)&v7[v6 + 1], 1u);
          ptr[0] = v8;
        }
        ptr[1] = &v7[v6 + 1];
        v7[v6 + (_QWORD)v8] = 0;
        memmove((char *)ptr[0] + (unsigned __int64)v7, "        ", v6);
      }
      v9 = *(const char **)(v4 + v2 - 24);
      if ( v9 )
      {
        v10 = " ...";
        if ( !*(_DWORD *)(v4 + v2) )
          v10 = &byte_EB522;
        sub_4E030((__int64)ptr, "  (--%s%s)", v9, v10);
      }
      v11 = __strlen_chk(" ", 2);
      v12 = (char *)ptr[1] - 1;
      if ( !ptr[1] )
        v12 = nullptr;
      v13 = ptr[0];
      if ( v26 < (unsigned __int64)&v12[v11 + 1] )
      {
        v13 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)&v12[v11 + 1], 1u);
        ptr[0] = v13;
      }
      ptr[1] = &v12[v11 + 1];
      v12[v11 + (_QWORD)v13] = 0;
      memmove((char *)ptr[0] + (unsigned __int64)v12, " ", v11);
      v14 = *(const void **)(v4 + v2 - 16);
      if ( v14 )
      {
        v15 = strlen(*(const char **)(v4 + v2 - 16));
        v16 = (char *)ptr[1] - 1;
        if ( !ptr[1] )
          v16 = nullptr;
        v17 = ptr[0];
        if ( v26 < (unsigned __int64)&v16[v15 + 1] )
        {
          v17 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)&v16[v15 + 1], 1u);
          ptr[0] = v17;
        }
        ptr[1] = &v16[v15 + 1];
        v16[v15 + (_QWORD)v17] = 0;
        memmove((char *)ptr[0] + (unsigned __int64)v16, v14, v15);
      }
      v18 = __strlen_chk("\n", 2);
      v19 = (char *)ptr[1] - 1;
      if ( !ptr[1] )
        v19 = nullptr;
      v20 = ptr[0];
      if ( v26 < (unsigned __int64)&v19[v18 + 1] )
      {
        v20 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)&v19[v18 + 1], 1u);
        ptr[0] = v20;
      }
      ptr[1] = &v19[v18 + 1];
      v19[v18 + (_QWORD)v20] = 0;
      memmove((char *)ptr[0] + (unsigned __int64)v19, "\n", v18);
      v2 += 40;
    }
  }
  v21 = (int (**)(const char *, ...))v27[9];
  if ( !v21 )
    v21 = &printf;
  if ( v27[4] )
    v22 = (char *)v27[3];
  else
    v22 = (char *)s1;
  v23 = qbasename(v22);
  if ( ptr[1] )
    v24 = (const char *)ptr[0];
  else
    v24 = s1;
  ((void (*)(const char *, ...))v21)("Usage: %s [options]\n%s", v23, v24);
  if ( (unsigned __int64)v27[7] >= 2 )
    ((void (*)(const char *, ...))v21)("\n%s\n", (const char *)v27[6]);
  qexit((unsigned __int8)v28);
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
