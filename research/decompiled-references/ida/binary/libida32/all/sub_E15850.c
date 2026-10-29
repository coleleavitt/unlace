void *__fastcall sub_E15850(__int64 a1, const void *a2, size_t a3)
{
  _BYTE *v4; // rax
  __int64 v5; // rax
  void *v6; // rdi
  __int64 v7; // rbp
  void *result; // rax

  v4 = *(_BYTE **)(a1 + 32);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 24) )
  {
    a1 = sub_2257CD0(a1, 85);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v4 + 1;
    *v4 = 85;
  }
  v5 = sub_2257BD0(a1, a3);
  v6 = *(void **)(v5 + 32);
  v7 = v5;
  result = (void *)(*(_QWORD *)(v5 + 24) - (_QWORD)v6);
  if ( (unsigned __int64)result < a3 )
    return (void *)sub_22581D0(v7, a2, a3);
  if ( a3 )
  {
    result = memcpy(v6, a2, a3);
    *(_QWORD *)(v7 + 32) += a3;
  }
  return result;
}

