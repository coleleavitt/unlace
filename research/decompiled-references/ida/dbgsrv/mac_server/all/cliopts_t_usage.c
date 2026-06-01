/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_usage
// Address: 0x0000000100072660

//----- (0000000100072660) ----------------------------------------------------
void __fastcall __noreturn cliopts_t_usage(__int64 *a1, unsigned __int8 a2)
{
  __int64 *v2; // r14
  __int64 v3; // rax
  int (**v4)(const char *, ...); // rbx
  char *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r14
  const char *v8; // rcx
  __int64 v9; // r12
  _BYTE *v10; // rax
  const char *v11; // rdx
  const char *v12; // rcx
  __int64 v13; // r12
  _BYTE *v14; // rax
  const void *v15; // rbx
  size_t v16; // r12
  __int64 v17; // r13
  _BYTE *v18; // rax
  __int64 v19; // r14
  _BYTE *v20; // rax
  const char *v21; // rax
  const char *v22; // rdx
  char *v23; // rsi
  __int64 v24; // [rsp+8h] [rbp-68h]
  __int128 v26; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+30h] [rbp-40h]

  v2 = a1;
  v26 = 0;
  v27 = 0;
  v3 = a1[1];
  if ( v3 )
  {
    v6 = 32;
    do
    {
      v24 = v3;
      v7 = *v2;
      if ( *(_BYTE *)(v7 + v6 - 32) )
      {
        v8 = " ...";
        if ( !*(_DWORD *)(v7 + v6) )
          v8 = "    ";
        sub_10002DCA0((__int64)&v26, "  -%c%s", (unsigned int)*(char *)(v7 + v6 - 32), v8);
      }
      else
      {
        v9 = *((_QWORD *)&v26 + 1) - 1LL;
        if ( !*((_QWORD *)&v26 + 1) )
          v9 = 0;
        v10 = (_BYTE *)v26;
        if ( v27 < v9 + 9 )
        {
          v10 = qvector_reserve((__int64)&v26, (void *)v26, v9 + 9, 1u);
          *(_QWORD *)&v26 = v10;
        }
        *((_QWORD *)&v26 + 1) = v9 + 9;
        v10[v9 + 8] = 0;
        *(_QWORD *)(v26 + v9) = 0x2020202020202020LL;
      }
      v11 = *(const char **)(v7 + v6 - 24);
      if ( v11 )
      {
        v12 = " ...";
        if ( !*(_DWORD *)(v7 + v6) )
          v12 = &_s;
        sub_10002DCA0((__int64)&v26, "  (--%s%s)", v11, v12);
      }
      v13 = 0;
      if ( *((_QWORD *)&v26 + 1) )
        v13 = *((_QWORD *)&v26 + 1) - 1LL;
      v14 = (_BYTE *)v26;
      if ( v27 < v13 + 2 )
      {
        v14 = qvector_reserve((__int64)&v26, (void *)v26, v13 + 2, 1u);
        *(_QWORD *)&v26 = v14;
      }
      *((_QWORD *)&v26 + 1) = v13 + 2;
      v14[v13 + 1] = 0;
      *(_BYTE *)(v26 + v13) = 32;
      v15 = *(const void **)(v7 + v6 - 16);
      if ( v15 )
      {
        v16 = strlen(*(const char **)(v7 + v6 - 16));
        v17 = 0;
        if ( *((_QWORD *)&v26 + 1) )
          v17 = *((_QWORD *)&v26 + 1) - 1LL;
        v18 = (_BYTE *)v26;
        if ( v27 < v16 + v17 + 1 )
        {
          v18 = qvector_reserve((__int64)&v26, (void *)v26, v16 + v17 + 1, 1u);
          *(_QWORD *)&v26 = v18;
        }
        *((_QWORD *)&v26 + 1) = v16 + v17 + 1;
        v18[v17 + v16] = 0;
        memmove((void *)(v26 + v17), v15, v16);
      }
      v19 = 0;
      if ( *((_QWORD *)&v26 + 1) )
        v19 = *((_QWORD *)&v26 + 1) - 1LL;
      v20 = (_BYTE *)v26;
      if ( v27 < v19 + 2 )
      {
        v20 = qvector_reserve((__int64)&v26, (void *)v26, v19 + 2, 1u);
        *(_QWORD *)&v26 = v20;
      }
      *((_QWORD *)&v26 + 1) = v19 + 2;
      v20[v19 + 1] = 0;
      *(_BYTE *)(v26 + v19) = 10;
      v6 += 40;
      v3 = v24 - 1;
      v2 = a1;
    }
    while ( v24 != 1 );
  }
  v4 = (int (**)(const char *, ...))v2[9];
  if ( !v4 )
    v4 = &_printf;
  if ( v2[4] )
    v5 = (char *)v2[3];
  else
    v5 = (char *)_s1;
  v21 = qbasename(v5);
  if ( *((_QWORD *)&v26 + 1) )
    v22 = (const char *)v26;
  else
    v22 = _s1;
  v23 = (char *)v21;
  ((void (*)(const char *, ...))v4)("Usage: %s [options]\n%s", v21, v22);
  if ( (unsigned __int64)v2[7] >= 2 )
  {
    v23 = (char *)v2[6];
    ((void (*)(const char *, ...))v4)("\n%s\n", v23);
  }
  qexit(a2, (__va_list_tag *)v23);
  BUG();
}
