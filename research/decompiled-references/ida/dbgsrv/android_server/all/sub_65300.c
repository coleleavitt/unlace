/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65300
// Address: 0x0000000000065300

//----- (0000000000065300) ----------------------------------------------------
const char *__fastcall sub_65300(const char *result, __int64 a2, __int64 a3)
{
  __int64 v3; // x22
  _BYTE *v4; // x0
  unsigned int v7; // w20
  const char *file_line; // x0
  int v9; // w8
  unsigned __int64 v10; // x23
  int v11; // w2
  _BYTE *v12; // x0
  __int64 v13; // x0
  __int64 v14; // x8
  size_t v15; // x22
  __int64 v16; // x25
  __int64 v17; // x26
  unsigned __int64 v18; // x23
  _BYTE *v19; // x0
  char *v20; // x0
  const char *v21; // x20
  size_t v22; // x0
  __int64 v23; // x8
  size_t v24; // x21
  __int64 v25; // x23
  size_t v26; // x25
  unsigned __int64 v27; // x22
  _BYTE *v28; // x0
  void *ptr; // [xsp+8h] [xbp-78h] BYREF
  __int64 v30; // [xsp+10h] [xbp-70h]
  __int64 v31; // [xsp+18h] [xbp-68h]
  int v32; // [xsp+24h] [xbp-5Ch] BYREF
  __int64 v33; // [xsp+28h] [xbp-58h]

  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 )
  {
    v3 = (__int64)result;
    v4 = *(_BYTE **)a3;
    if ( *(_QWORD *)a3 )
    {
      *(_QWORD *)(a3 + 8) = 0;
      qfree(v4);
      *(_QWORD *)a3 = 0;
      *(_QWORD *)(a3 + 16) = 0;
    }
    result = (const char *)get_qerrno();
    if ( (_DWORD)result )
    {
      v7 = (unsigned int)result;
      file_line = (const char *)lex_get_file_line(v3, &v32, nullptr, 0);
      v9 = v32;
      if ( v32 != -1 )
      {
        if ( file_line )
        {
          sub_3C748(a3, "%s", file_line);
          v9 = v32;
        }
        if ( v9 )
        {
          v10 = *(_QWORD *)(a3 + 8);
          if ( v10 >= 2 )
          {
            if ( *(_QWORD *)(a3 + 16) >= v10 + 1 )
            {
              v12 = *(_BYTE **)a3;
            }
            else
            {
              v12 = qvector_reserve((pthread_mutex_t *)a3, *(void **)a3, v10 + 1, 1u);
              *(_QWORD *)a3 = v12;
            }
            *(_QWORD *)(a3 + 8) = v10 + 1;
            v12[v10 - 1] = 44;
            *(_BYTE *)(*(_QWORD *)a3 + v10) = 0;
            v11 = v32;
          }
          else
          {
            v11 = v9 - 1;
            v32 = v9 - 1;
          }
          sub_4C730((pthread_mutex_t *)a3, "%d", v11);
        }
        if ( *(_QWORD *)(a3 + 8) >= 2u )
        {
          v13 = __strlen_chk(": ", 3);
          v14 = *(_QWORD *)(a3 + 8);
          v15 = v13;
          if ( v14 )
            v16 = v14 - 1;
          else
            v16 = 0;
          v17 = v16 + v13;
          v18 = v16 + v13 + 1;
          if ( *(_QWORD *)(a3 + 16) >= v18 )
          {
            v19 = *(_BYTE **)a3;
          }
          else
          {
            v19 = qvector_reserve((pthread_mutex_t *)a3, *(void **)a3, v18, 1u);
            *(_QWORD *)a3 = v19;
          }
          *(_QWORD *)(a3 + 8) = v18;
          v19[v17] = 0;
          memmove((void *)(*(_QWORD *)a3 + v16), ": ", v15);
        }
      }
      if ( v7 == 47 )
      {
        ptr = nullptr;
        v30 = 0;
        v31 = 0;
        v20 = lex_print_token((__int64)&ptr, a2);
        set_error_string(nullptr, v20);
        if ( ptr )
        {
          v30 = 0;
          qfree(ptr);
          ptr = nullptr;
          v31 = 0;
        }
      }
      result = qstrerror(v7);
      if ( result )
      {
        v21 = result;
        v22 = strlen(result);
        v23 = *(_QWORD *)(a3 + 8);
        v24 = v22;
        if ( v23 )
          v25 = v23 - 1;
        else
          v25 = 0;
        v26 = v25 + v22;
        v27 = v25 + v22 + 1;
        if ( *(_QWORD *)(a3 + 16) >= v27 )
        {
          v28 = *(_BYTE **)a3;
        }
        else
        {
          v28 = qvector_reserve((pthread_mutex_t *)a3, *(void **)a3, v27, 1u);
          *(_QWORD *)a3 = v28;
        }
        *(_QWORD *)(a3 + 8) = v27;
        v28[v26] = 0;
        return (const char *)memmove((void *)(*(_QWORD *)a3 + v25), v21, v24);
      }
    }
  }
  return result;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
