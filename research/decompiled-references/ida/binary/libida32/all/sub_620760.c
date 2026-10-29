__int64 __fastcall sub_620760(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  const void *encoding_name; // rbp
  size_t v6; // r12
  void *v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rax

  *(_QWORD *)a1 = &off_2B0CDB0;
  *(_QWORD *)(a1 + 8) = 0;
  result = 2 * (unsigned int)(a3 == 1);
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = result;
  *(_OWORD *)(a1 + 16) = 0;
  if ( a2 < 0 )
  {
    result = get_outfile_encoding_idx();
    a2 = result;
    if ( !(_DWORD)result )
    {
      result = get_default_encoding_idx(1);
      a2 = result;
    }
  }
  if ( a2 > 0 )
  {
    encoding_name = (const void *)get_encoding_name((unsigned int)a2);
    result = sub_58FED0((__int64)encoding_name);
    *(_DWORD *)(a1 + 32) = result;
    if ( (_DWORD)result != 1 )
    {
      if ( encoding_name && (result = strlen((const char *)encoding_name), (v6 = result) != 0) )
      {
        v7 = *(void **)(a1 + 8);
        v8 = result + 1;
        if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(result + 1) )
        {
          v9 = qvector_reserve(a1 + 8, *(_QWORD *)(a1 + 8), v8, 1);
          *(_QWORD *)(a1 + 8) = v9;
          v7 = (void *)v9;
        }
        *(_QWORD *)(a1 + 16) = v8;
        memmove(v7, encoding_name, v6);
        result = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(result + v6) = 0;
        if ( *(int *)(a1 + 32) > 1 && *(_QWORD *)(a1 + 16) )
        {
          result = (__int64)strstr(*(const char **)(a1 + 8), "BE");
          if ( result )
            *(_DWORD *)(a1 + 36) |= 1u;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 16) = 0;
      }
    }
  }
  return result;
}

