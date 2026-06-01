/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002AC58
// Address: 0x000000010002AC58

//----- (000000010002AC58) ----------------------------------------------------
const char *__fastcall sub_10002AC58(const char *result, __int64 a2, __int64 a3)
{
  __int64 v5; // x22
  char *v6; // x0
  int v7; // w20
  __int64 file_line; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  int v15; // w8
  unsigned __int64 v16; // x23
  int v17; // w8
  _QWORD *v18; // x1
  unsigned __int64 v19; // x23
  _QWORD *v20; // x1
  const char *v21; // x20
  size_t v22; // x0
  size_t v23; // x21
  _QWORD *v24; // x1
  __int64 v25; // x8
  bool v26; // cf
  __int64 v27; // x8
  __int64 v28; // x23
  size_t v29; // x24
  unsigned __int64 v30; // x22
  void *v31; // [xsp+8h] [xbp-58h] BYREF
  __int64 v32; // [xsp+10h] [xbp-50h]
  __int64 v33; // [xsp+18h] [xbp-48h]
  int v34; // [xsp+24h] [xbp-3Ch] BYREF
  int8x16x2_t v35; // 0:q0.32

  if ( a3 )
  {
    v5 = (__int64)result;
    v6 = *(char **)a3;
    if ( *(_QWORD *)a3 )
    {
      *(_QWORD *)(a3 + 8) = 0;
      qfree(v6);
      *(_QWORD *)a3 = 0;
      *(_QWORD *)(a3 + 16) = 0;
    }
    result = (const char *)get_qerrno();
    if ( (_DWORD)result )
    {
      v7 = (int)result;
      file_line = lex_get_file_line(v5, &v34, nullptr, 0);
      v15 = v34;
      if ( v34 != -1 )
      {
        if ( file_line )
        {
          sub_10000295C((char **)a3, "%s", v9, v10, v11, v12, v13, v14, file_line);
          v15 = v34;
        }
        if ( v15 )
        {
          v16 = *(_QWORD *)(a3 + 8);
          if ( v16 >= 2 )
          {
            v18 = *(_QWORD **)a3;
            if ( *(_QWORD *)(a3 + 16) < v16 + 1 )
            {
              v18 = qvector_reserve((_QWORD *)a3, v18, v16 + 1, 1u);
              *(_QWORD *)a3 = v18;
            }
            *(_QWORD *)(a3 + 8) = v16 + 1;
            *((_BYTE *)v18 + v16 - 1) = 44;
            *(_BYTE *)(*(_QWORD *)a3 + v16) = 0;
            LOBYTE(v17) = v34;
          }
          else
          {
            v17 = v15 - 1;
            v34 = v17;
          }
          sub_10002B248((char **)a3, "%d", v9, v10, v11, v12, v13, v14, v17);
        }
        v19 = *(_QWORD *)(a3 + 8);
        if ( v19 >= 2 )
        {
          v20 = *(_QWORD **)a3;
          if ( *(_QWORD *)(a3 + 16) < v19 + 2 )
          {
            v20 = qvector_reserve((_QWORD *)a3, v20, v19 + 2, 1u);
            *(_QWORD *)a3 = v20;
          }
          *(_QWORD *)(a3 + 8) = v19 + 2;
          *((_BYTE *)v20 + v19 + 1) = 0;
          *(_WORD *)(*(_QWORD *)a3 + v19 - 1) = 8250;
        }
      }
      if ( v7 == 47 )
      {
        v31 = nullptr;
        v32 = 0;
        v33 = 0;
        lex_print_token((char **)&v31, a2, v9, v10, v11, v12, v13, v14, v35);
        set_error_string(0);
        if ( v31 )
        {
          v32 = 0;
          qfree(v31);
        }
      }
      result = j__qstrerror(v7);
      v21 = result;
      if ( result )
      {
        v22 = strlen(result);
        v23 = v22;
        v24 = *(_QWORD **)a3;
        v25 = *(_QWORD *)(a3 + 8);
        v26 = v25 != 0;
        v27 = v25 - 1;
        if ( v26 )
          v28 = v27;
        else
          v28 = 0;
        v29 = v28 + v22;
        v30 = v28 + v22 + 1;
        if ( *(_QWORD *)(a3 + 16) < v30 )
        {
          v24 = qvector_reserve((_QWORD *)a3, v24, v30, 1u);
          *(_QWORD *)a3 = v24;
        }
        *(_QWORD *)(a3 + 8) = v30;
        *((_BYTE *)v24 + v29) = 0;
        return (const char *)memmove((void *)(*(_QWORD *)a3 + v28), v21, v23);
      }
    }
  }
  return result;
}
// 10002ACEC: variable 'v9' is possibly undefined
// 10002ACEC: variable 'v10' is possibly undefined
// 10002ACEC: variable 'v11' is possibly undefined
// 10002ACEC: variable 'v12' is possibly undefined
// 10002ACEC: variable 'v13' is possibly undefined
// 10002ACEC: variable 'v14' is possibly undefined
// 10002ADDC: variable 'v35' is possibly undefined
