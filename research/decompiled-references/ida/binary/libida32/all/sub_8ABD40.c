__int64 __fastcall sub_8ABD40(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  const char *v4; // rdx
  int v5; // eax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, const char *); // rax
  int v8; // eax
  __int64 result; // rax
  __int64 (__fastcall ***v10)(_QWORD, _QWORD); // rdi
  const char *error_string; // rax
  const char *v12; // r12
  size_t v13; // rax
  size_t v14; // r13
  int v15; // eax
  void *v16; // rdi
  size_t v17; // r14
  __int64 v18; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v1 + 56);
  if ( !*(_DWORD *)(a1 + 192) )
  {
    v4 = haystack;
    if ( *(_QWORD *)(a1 + 128) )
      v4 = *(const char **)(a1 + 120);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const char *))(*(_QWORD *)v3 + 96LL))(*(_QWORD *)(v1 + 56), 0, v4);
    *(_DWORD *)(a1 + 192) = v5;
    if ( !v5 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v7 = *(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v6 + 336LL);
      if ( *(_QWORD *)(a1 + 32) )
      {
        v15 = v7(v6, *(const char **)(a1 + 24));
        *(_DWORD *)(a1 + 192) = v15;
        if ( !v15 )
          goto LABEL_7;
      }
      else
      {
        v8 = v7(v6, haystack);
        *(_DWORD *)(a1 + 192) = v8;
        if ( !v8 )
          goto LABEL_7;
      }
    }
    error_string = (const char *)get_error_string(0);
    v12 = error_string;
    if ( error_string && (v13 = strlen(error_string), (v14 = v13) != 0) )
    {
      v16 = *(void **)(a1 + 200);
      v17 = v13 + 1;
      if ( *(_QWORD *)(a1 + 216) < v13 + 1 )
      {
        v18 = qvector_reserve(a1 + 200, *(_QWORD *)(a1 + 200), v17, 1);
        *(_QWORD *)(a1 + 200) = v18;
        v16 = (void *)v18;
      }
      *(_QWORD *)(a1 + 208) = v17;
      memmove(v16, v12, v14);
      *(_BYTE *)(*(_QWORD *)(a1 + 200) + v14) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 208) = 0;
    }
  }
LABEL_7:
  sub_8AA870(v3, a1 + 96);
  sub_8AA870(v3, a1 + 72);
  result = *(unsigned int *)(a1 + 192);
  if ( (_DWORD)result )
    result = set_error_string();
  v10 = *(__int64 (__fastcall ****)(_QWORD, _QWORD))(a1 + 184);
  if ( v10 )
    return (**v10)(v10, *(unsigned int *)(a1 + 192));
  return result;
}

