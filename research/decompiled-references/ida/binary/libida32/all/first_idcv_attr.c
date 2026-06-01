const char *__fastcall first_idcv_attr(__int64 a1)
{
  const char *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = nullptr;
  if ( a1
    && *(_BYTE *)a1 == 5
    && (v2 = *(_QWORD *)(a1 + 8), v3 = *(_QWORD *)(v2 + 24), v3 != v2 + 8)
    && (v1 = haystack, *(_QWORD *)(v3 + 40)) )
  {
    return *(const char **)(v3 + 32);
  }
  else
  {
    return v1;
  }
}

