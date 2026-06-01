/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_error_string
// Address: 0x0000000100074370

//----- (0000000100074370) ----------------------------------------------------
void *__fastcall set_error_string(unsigned int a1, const char *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r14
  size_t v7; // rax
  size_t v8; // r15
  unsigned __int64 v9; // r12
  void *v10; // rax
  void *v11; // rdi
  _BYTE *v12; // rax
  int *v13; // rax
  void *result; // rax

  if ( a1 >= 4 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x1E1u);
    return (void *)get_error_data(0x1E1u);
  }
  else
  {
    off_1000ACFB0();
    v4 = v2;
    v5 = v3;
    v6 = v2 + 24LL * v3 + 32;
    if ( a2 )
    {
      if ( *a2 )
      {
        v7 = strlen(a2);
        if ( v7 )
        {
          v8 = v7;
          v9 = v7 + 1;
          v10 = *(void **)v6;
          if ( *(_QWORD *)(v6 + 16) < v9 )
          {
            v10 = qvector_reserve(v6, *(void **)v6, v9, 1u);
            *(_QWORD *)v6 = v10;
          }
          *(_QWORD *)(v6 + 8) = v9;
          memmove(v10, a2, v8);
          *(_BYTE *)(*(_QWORD *)v6 + v8) = 0;
        }
        else
        {
          *(_QWORD *)(v6 + 8) = 0;
        }
      }
      else
      {
        v12 = *(_BYTE **)v6;
        if ( *(_QWORD *)(v4 + 24LL * v3 + 48) <= 1u )
        {
          v12 = qvector_reserve(v6, *(void **)v6, 2u, 1u);
          *(_QWORD *)v6 = v12;
        }
        *(_QWORD *)(v6 + 8) = 2;
        *v12 = 32;
        *(_BYTE *)(*(_QWORD *)v6 + 1LL) = 0;
        if ( *(_QWORD *)(v6 + 8) )
          v13 = *(int **)v6;
        else
          v13 = &dword_1000AC1CC;
        *(_BYTE *)v13 = 0;
      }
    }
    else
    {
      v11 = *(void **)v6;
      if ( *(_QWORD *)v6 )
      {
        *(_QWORD *)(v2 + 24LL * v3 + 40) = 0;
        qfree(v11);
        *(_QWORD *)v6 = 0;
        *(_QWORD *)(v6 + 16) = 0;
      }
    }
    result = *(void **)v6;
    *(_QWORD *)(v4 + 8 * v5) = *(_QWORD *)v6;
  }
  return result;
}
// 100074392: variable 'v2' is possibly undefined
// 100074395: variable 'v3' is possibly undefined
// 1000AC1CC: using guessed type int dword_1000AC1CC;
// 1000ACFB0: using guessed type void (*off_1000ACFB0)(void);
// 1000AE23D: using guessed type char under_debugger;
