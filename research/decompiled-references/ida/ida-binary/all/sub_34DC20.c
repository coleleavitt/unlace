char *__fastcall sub_34DC20(__int64 a1)
{
  unsigned __int64 v2; // rbp
  _BYTE *v3; // rbp
  _BYTE *v4; // r12
  char *result; // rax
  void *v6; // rdi
  const void *v7; // r13
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 > 1 )
  {
    v6 = *(void **)(a1 + 120);
    v7 = *(const void **)(a1 + 96);
    if ( *(_QWORD *)(a1 + 136) < v2 )
    {
      v10 = qvector_reserve(a1 + 120, v6, v2, 1);
      *(_QWORD *)(a1 + 120) = v10;
      v6 = (void *)v10;
    }
    *(_QWORD *)(a1 + 128) = v2;
    memmove(v6, v7, v2 - 1);
    *(_BYTE *)(*(_QWORD *)(a1 + 120) + v2 - 1) = 0;
    v3 = *(_BYTE **)(a1 + 120);
    v4 = v3;
    if ( *(_QWORD *)(a1 + 128) )
    {
      v8 = strchr(*(const char **)(a1 + 120), 45);
      if ( v8 )
      {
        result = (char *)(v8 - v3);
        if ( result != (char *)-1LL )
          return result;
      }
      goto LABEL_4;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 128) = 0;
    v3 = *(_BYTE **)(a1 + 120);
  }
  v4 = v3;
LABEL_4:
  if ( *(_QWORD *)(a1 + 136) <= 1u )
  {
    v9 = qvector_reserve(a1 + 120, v3, 2, 1);
    *(_QWORD *)(a1 + 120) = v9;
    v4 = (_BYTE *)v9;
  }
  *(_QWORD *)(a1 + 128) = 2;
  *v4 = 32;
  result = *(char **)(a1 + 120);
  result[1] = 0;
  return result;
}
