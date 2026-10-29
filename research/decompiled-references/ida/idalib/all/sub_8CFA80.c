__int64 __fastcall sub_8CFA80(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  const char *v4; // rdx
  int v5; // eax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, const char *); // rax
  int v8; // eax
  __int64 result; // rax
  const char *v10; // rsi
  __int64 (__fastcall ***v11)(_QWORD, _QWORD); // rdi
  const char *error_string; // rax
  const char *v13; // r12
  size_t v14; // rax
  size_t v15; // r13
  int v16; // eax
  void *v17; // rdi
  size_t v18; // r14
  __int64 v19; // rax

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
        v16 = v7(v6, *(const char **)(a1 + 24));
        *(_DWORD *)(a1 + 192) = v16;
        if ( !v16 )
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
    v13 = error_string;
    if ( error_string && (v14 = strlen(error_string), (v15 = v14) != 0) )
    {
      v17 = *(void **)(a1 + 200);
      v18 = v14 + 1;
      if ( *(_QWORD *)(a1 + 216) < v14 + 1 )
      {
        v19 = qvector_reserve(a1 + 200, *(_QWORD *)(a1 + 200), v18, 1);
        *(_QWORD *)(a1 + 200) = v19;
        v17 = (void *)v19;
      }
      *(_QWORD *)(a1 + 208) = v18;
      memmove(v17, v13, v15);
      *(_BYTE *)(*(_QWORD *)(a1 + 200) + v15) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 208) = 0;
    }
  }
LABEL_7:
  sub_8CE5B0(v3, a1 + 96);
  sub_8CE5B0(v3, a1 + 72);
  result = *(unsigned int *)(a1 + 192);
  if ( (_DWORD)result )
  {
    v10 = haystack;
    if ( *(_QWORD *)(a1 + 208) )
      v10 = *(const char **)(a1 + 200);
    result = set_error_string(0, v10);
  }
  v11 = *(__int64 (__fastcall ****)(_QWORD, _QWORD))(a1 + 184);
  if ( v11 )
    return (**v11)(v11, *(unsigned int *)(a1 + 192));
  return result;
}
