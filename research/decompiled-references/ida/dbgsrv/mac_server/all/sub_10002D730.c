/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D730
// Address: 0x000000010002D730

//----- (000000010002D730) ----------------------------------------------------
__int64 __fastcall sub_10002D730(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // rdi
  unsigned int qerrno; // eax
  unsigned int v7; // r14d
  const char *file_line; // rax
  int v9; // edx
  unsigned __int64 v10; // r13
  int v11; // edx
  char *v12; // rax
  unsigned __int64 v13; // r13
  _BYTE *v14; // rax
  const char *v15; // rsi
  const char *v16; // rax
  const char *v17; // r14
  size_t v18; // r15
  __int64 v19; // rax
  __int64 v20; // r12
  bool v21; // cf
  __int64 v22; // rax
  _BYTE *v23; // rax
  unsigned __int64 v24; // r13
  __int128 v26; // [rsp+0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+10h] [rbp-40h]
  int v28; // [rsp+1Ch] [rbp-34h] BYREF

  if ( a3 )
  {
    v5 = *(char **)a3;
    if ( *(_QWORD *)a3 )
    {
      *(_QWORD *)(a3 + 8) = 0;
      qfree(v5);
      *(_QWORD *)a3 = 0;
      *(_QWORD *)(a3 + 16) = 0;
    }
    qerrno = get_qerrno();
    if ( qerrno )
    {
      v7 = qerrno;
      file_line = (const char *)lex_get_file_line(a1, &v28, nullptr, 0);
      v9 = v28;
      if ( v28 != -1 )
      {
        if ( file_line )
        {
          sub_100002D00(a3, "%s", file_line);
          v9 = v28;
        }
        if ( v9 )
        {
          v10 = *(_QWORD *)(a3 + 8);
          if ( v10 >= 2 )
          {
            v12 = *(char **)a3;
            if ( *(_QWORD *)(a3 + 16) < v10 + 1 )
            {
              v12 = (char *)qvector_reserve(a3, *(void **)a3, v10 + 1, 1u);
              *(_QWORD *)a3 = v12;
            }
            *(_QWORD *)(a3 + 8) = v10 + 1;
            v12[v10 - 1] = 44;
            *(_BYTE *)(*(_QWORD *)a3 + v10) = 0;
            v11 = v28;
          }
          else
          {
            v11 = v9 - 1;
            v28 = v11;
          }
          sub_10002DCA0(a3, "%d", v11);
        }
        v13 = *(_QWORD *)(a3 + 8);
        if ( v13 >= 2 )
        {
          v14 = *(_BYTE **)a3;
          if ( *(_QWORD *)(a3 + 16) < v13 + 2 )
          {
            v14 = qvector_reserve(a3, *(void **)a3, v13 + 2, 1u);
            *(_QWORD *)a3 = v14;
          }
          *(_QWORD *)(a3 + 8) = v13 + 2;
          v14[v13 + 1] = 0;
          *(_WORD *)(*(_QWORD *)a3 + v13 - 1) = 8250;
        }
      }
      if ( v7 == 47 )
      {
        v26 = 0;
        v27 = 0;
        v15 = lex_print_token((__int64)&v26, a2);
        set_error_string(0, v15);
        if ( (_QWORD)v26 )
        {
          *((_QWORD *)&v26 + 1) = 0;
          qfree((void *)v26);
        }
      }
      v16 = (const char *)j__qstrerror(v7);
      v17 = v16;
      if ( v16 )
      {
        v18 = strlen(v16);
        v19 = *(_QWORD *)(a3 + 8);
        v20 = 0;
        v21 = v19 == 0;
        v22 = v19 - 1;
        if ( !v21 )
          v20 = v22;
        v23 = *(_BYTE **)a3;
        v24 = v20 + v18 + 1;
        if ( *(_QWORD *)(a3 + 16) < v24 )
        {
          v23 = qvector_reserve(a3, *(void **)a3, v20 + v18 + 1, 1u);
          *(_QWORD *)a3 = v23;
        }
        *(_QWORD *)(a3 + 8) = v24;
        v23[v20 + v18] = 0;
        memmove((void *)(*(_QWORD *)a3 + v20), v17, v18);
      }
    }
  }
  return __stack_chk_guard;
}
// 100082E2E: using guessed type __int64 __fastcall j__qstrerror(_QWORD);
