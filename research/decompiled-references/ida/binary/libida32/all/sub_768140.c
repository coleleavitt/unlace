unsigned __int64 __fastcall sub_768140(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rdi
  unsigned int qerrno; // ebp
  const char *v9; // rsi
  __int64 file_line; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r13
  const char *v15; // rax
  const char *v16; // rbp
  size_t v17; // rax
  __int64 v18; // r12
  size_t v19; // r13
  size_t v20; // r14
  char *v21; // rsi
  __int64 v22; // rax
  char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // [rsp+Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v28; // [rsp+18h] [rbp-50h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a3 )
  {
    v4 = *(char **)a3;
    if ( *(_QWORD *)a3 )
    {
      *(_QWORD *)(a3 + 8) = 0;
      qfree(v4);
      *(_QWORD *)a3 = 0;
      *(_QWORD *)(a3 + 16) = 0;
    }
    qerrno = get_qerrno();
    if ( qerrno )
    {
      v9 = (const char *)&v26;
      file_line = lex_get_file_line(a1, &v26, 0, 0);
      v12 = v26;
      if ( v26 != -1 )
      {
        if ( file_line )
        {
          v9 = "%s";
          sub_3573A0((char **)a3);
          v12 = v26;
        }
        if ( (_DWORD)v12 )
        {
          v13 = *(_QWORD *)(a3 + 8);
          if ( v13 > 1 )
          {
            v23 = *(char **)a3;
            if ( *(_QWORD *)(a3 + 16) < v13 + 1 )
            {
              v25 = qvector_reserve(a3, v23, v13 + 1, 1);
              *(_QWORD *)a3 = v25;
              v23 = (char *)v25;
            }
            *(_QWORD *)(a3 + 8) = v13 + 1;
            v23[v13 - 1] = 44;
            *(_BYTE *)(*(_QWORD *)a3 + v13) = 0;
          }
          else
          {
            v26 = v12 - 1;
          }
          v9 = "%d";
          sub_357520((__int64 *)a3);
        }
        v14 = *(_QWORD *)(a3 + 8);
        if ( v14 > 1 )
        {
          v9 = *(const char **)a3;
          if ( *(_QWORD *)(a3 + 16) < v14 + 2 )
          {
            v24 = qvector_reserve(a3, v9, v14 + 2, 1);
            *(_QWORD *)a3 = v24;
            v9 = (const char *)v24;
          }
          *(_QWORD *)(a3 + 8) = v14 + 2;
          v11 = 8250;
          v9[v14 + 1] = 0;
          *(_WORD *)(*(_QWORD *)a3 + v14 - 1) = 8250;
        }
      }
      if ( qerrno == 47 )
      {
        ptr = nullptr;
        v28 = 0;
        v9 = (const char *)lex_print_token(&ptr, a2);
        set_error_string();
        if ( ptr )
        {
          *(_QWORD *)&v28 = 0;
          qfree(ptr);
        }
      }
      v15 = (const char *)qstrerror(qerrno, v9, v11, v12);
      v16 = v15;
      if ( v15 )
      {
        v17 = strlen(v15);
        v18 = *(_QWORD *)(a3 + 8);
        v19 = v17;
        v20 = v17;
        if ( v18 )
        {
          --v18;
          v20 = v17 + v18;
        }
        v21 = *(char **)a3;
        if ( *(_QWORD *)(a3 + 16) < v20 + 1 )
        {
          v22 = qvector_reserve(a3, v21, v20 + 1, 1);
          *(_QWORD *)a3 = v22;
          v21 = (char *)v22;
        }
        *(_QWORD *)(a3 + 8) = v20 + 1;
        v21[v20] = 0;
        memmove((void *)(v18 + *(_QWORD *)a3), v16, v19);
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}

