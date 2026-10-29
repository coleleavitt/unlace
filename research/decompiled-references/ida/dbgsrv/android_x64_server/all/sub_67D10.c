/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67D10
// Address: 0x0000000000067D10

//----- (0000000000067D10) ----------------------------------------------------
unsigned __int64 __fastcall sub_67D10(__int64 a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  char *v7; // rdi
  unsigned int qerrno; // eax
  unsigned int v9; // r12d
  const char *file_line; // rax
  int v11; // edx
  unsigned __int64 v12; // rbp
  int v13; // edx
  char *v14; // rax
  size_t v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbp
  size_t v18; // rcx
  unsigned __int64 v19; // r13
  _BYTE *v20; // rax
  const char *v21; // rax
  const char *v22; // rax
  const char *v23; // r15
  size_t v24; // r14
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned __int64 v27; // r12
  _BYTE *v28; // rax
  void *ptr[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v31; // [rsp+20h] [rbp-48h]
  int v32; // [rsp+2Ch] [rbp-3Ch] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  if ( a3 )
  {
    v7 = *(char **)a3;
    if ( *(_QWORD *)a3 )
    {
      *(_QWORD *)(a3 + 8) = 0;
      qfree(v7);
      *(_QWORD *)a3 = 0;
      *(_QWORD *)(a3 + 16) = 0;
    }
    qerrno = get_qerrno();
    if ( qerrno )
    {
      v9 = qerrno;
      file_line = (const char *)lex_get_file_line(a1, &v32, nullptr, 0);
      v11 = v32;
      if ( v32 != -1 )
      {
        if ( file_line )
        {
          sub_3BBA0(a3, "%s", file_line);
          v11 = v32;
        }
        if ( v11 )
        {
          v12 = *(_QWORD *)(a3 + 8);
          if ( v12 >= 2 )
          {
            if ( *(_QWORD *)(a3 + 16) >= v12 + 1 )
            {
              v14 = *(char **)a3;
            }
            else
            {
              v14 = (char *)qvector_reserve(a3, *(char **)a3, v12 + 1, 1u);
              *(_QWORD *)a3 = v14;
            }
            *(_QWORD *)(a3 + 8) = v12 + 1;
            v14[v12 - 1] = 44;
            *(_BYTE *)(*(_QWORD *)a3 + v12) = 0;
            v13 = v32;
          }
          else
          {
            v13 = v11 - 1;
            v32 = v13;
          }
          sub_4E030(a3, "%d", v13);
        }
        if ( *(_QWORD *)(a3 + 8) >= 2u )
        {
          v15 = __strlen_chk(": ", 3);
          v16 = *(_QWORD *)(a3 + 8);
          v17 = v16 - 1;
          if ( !v16 )
            v17 = 0;
          v18 = v15 + v17;
          v19 = v15 + v17 + 1;
          if ( *(_QWORD *)(a3 + 16) >= v19 )
          {
            v20 = *(_BYTE **)a3;
          }
          else
          {
            v20 = qvector_reserve(a3, *(char **)a3, v15 + v17 + 1, 1u);
            v18 = v15 + v17;
            *(_QWORD *)a3 = v20;
          }
          *(_QWORD *)(a3 + 8) = v19;
          v20[v18] = 0;
          memmove((void *)(*(_QWORD *)a3 + v17), ": ", v15);
        }
      }
      if ( v9 == 47 )
      {
        *(_OWORD *)ptr = 0;
        v31 = 0;
        v21 = lex_print_token((__int64)ptr, a2, 0.0, a5);
        set_error_string(0, v21);
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v31 = 0;
        }
      }
      v22 = qstrerror(v9);
      if ( v22 )
      {
        v23 = v22;
        v24 = strlen(v22);
        v25 = *(_QWORD *)(a3 + 8);
        v26 = v25 - 1;
        if ( !v25 )
          v26 = 0;
        v27 = v24 + v26 + 1;
        if ( *(_QWORD *)(a3 + 16) >= v27 )
        {
          v28 = *(_BYTE **)a3;
        }
        else
        {
          v28 = qvector_reserve(a3, *(char **)a3, v24 + v26 + 1, 1u);
          *(_QWORD *)a3 = v28;
        }
        *(_QWORD *)(a3 + 8) = v27;
        v28[v24 + v26] = 0;
        memmove((void *)(*(_QWORD *)a3 + v26), v23, v24);
      }
    }
  }
  return __readfsqword(0x28u);
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
