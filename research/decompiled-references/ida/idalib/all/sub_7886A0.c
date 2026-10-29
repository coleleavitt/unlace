unsigned __int64 __fastcall sub_7886A0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rdi
  unsigned int qerrno; // ebp
  __int64 file_line; // rax
  int v10; // ecx
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r13
  const char *v13; // rax
  const char *v14; // rbp
  size_t v15; // rax
  __int64 v16; // r12
  size_t v17; // r13
  size_t v18; // r14
  char *v19; // rsi
  char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+Ch] [rbp-5Ch] BYREF
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
      file_line = lex_get_file_line(a1, &v26, 0, 0);
      v10 = v26;
      if ( v26 != -1 )
      {
        if ( file_line )
        {
          sub_35A790((char **)a3);
          v10 = v26;
        }
        if ( v10 )
        {
          v11 = *(_QWORD *)(a3 + 8);
          if ( v11 > 1 )
          {
            v23 = *(char **)a3;
            if ( *(_QWORD *)(a3 + 16) < v11 + 1 )
            {
              v25 = qvector_reserve(a3, v23, v11 + 1, 1);
              *(_QWORD *)a3 = v25;
              v23 = (char *)v25;
            }
            *(_QWORD *)(a3 + 8) = v11 + 1;
            v23[v11 - 1] = 44;
            *(_BYTE *)(*(_QWORD *)a3 + v11) = 0;
          }
          else
          {
            v26 = v10 - 1;
          }
          sub_35A910((__int64 *)a3);
        }
        v12 = *(_QWORD *)(a3 + 8);
        if ( v12 > 1 )
        {
          v20 = *(char **)a3;
          if ( *(_QWORD *)(a3 + 16) < v12 + 2 )
          {
            v24 = qvector_reserve(a3, v20, v12 + 2, 1);
            *(_QWORD *)a3 = v24;
            v20 = (char *)v24;
          }
          *(_QWORD *)(a3 + 8) = v12 + 2;
          v20[v12 + 1] = 0;
          *(_WORD *)(*(_QWORD *)a3 + v12 - 1) = 8250;
        }
      }
      if ( qerrno == 47 )
      {
        ptr = nullptr;
        v28 = 0;
        v21 = lex_print_token(&ptr, a2);
        set_error_string(0, v21);
        if ( ptr )
        {
          *(_QWORD *)&v28 = 0;
          qfree(ptr);
        }
      }
      v13 = (const char *)qstrerror(qerrno);
      v14 = v13;
      if ( v13 )
      {
        v15 = strlen(v13);
        v16 = *(_QWORD *)(a3 + 8);
        v17 = v15;
        v18 = v15;
        if ( v16 )
        {
          --v16;
          v18 = v15 + v16;
        }
        v19 = *(char **)a3;
        if ( *(_QWORD *)(a3 + 16) < v18 + 1 )
        {
          v22 = qvector_reserve(a3, v19, v18 + 1, 1);
          *(_QWORD *)a3 = v22;
          v19 = (char *)v22;
        }
        *(_QWORD *)(a3 + 8) = v18 + 1;
        v19[v18] = 0;
        memmove((void *)(v16 + *(_QWORD *)a3), v14, v17);
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}
