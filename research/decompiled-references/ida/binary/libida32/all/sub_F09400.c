_QWORD *__fastcall sub_F09400(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rax
  _QWORD *result; // rax
  const char *v5; // rsi
  size_t v6; // rax
  void *v7; // rdi
  size_t v8; // r12

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = *(_BYTE **)(v2 + 32);
  if ( *(_BYTE **)(v2 + 24) == v3 )
  {
    v2 = sub_22581D0(*(_QWORD *)(a1 + 1096), " ", 1);
  }
  else
  {
    *v3 = 32;
    ++*(_QWORD *)(v2 + 32);
  }
  result = *(_QWORD **)(a2 + 24);
  v5 = (const char *)(result[2] + 16LL);
  if ( result[2] != -16 )
  {
    v6 = strlen(v5);
    v7 = *(void **)(v2 + 32);
    v8 = v6;
    result = (_QWORD *)(*(_QWORD *)(v2 + 24) - (_QWORD)v7);
    if ( v8 <= (unsigned __int64)result )
    {
      if ( v8 )
      {
        result = memcpy(v7, v5, v8);
        *(_QWORD *)(v2 + 32) += v8;
      }
    }
    else
    {
      return (_QWORD *)sub_22581D0(v2, v5, v8);
    }
  }
  return result;
}

