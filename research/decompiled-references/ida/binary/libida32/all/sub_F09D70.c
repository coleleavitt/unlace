_BYTE *__fastcall sub_F09D70(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  void *v4; // rdx
  __int64 v5; // rdi
  _BYTE *result; // rax

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = *(void **)(v3 + 32);
  if ( *(_QWORD *)(v3 + 24) - (_QWORD)v4 > 0xDu )
  {
    qmemcpy(v4, " (CXXTemporary", 14);
    *(_QWORD *)(v3 + 32) += 14LL;
  }
  else
  {
    sub_22581D0(v3, " (CXXTemporary", 14);
  }
  sub_F05DA0(a1, a2);
  v5 = *(_QWORD *)(a1 + 1096);
  result = *(_BYTE **)(v5 + 32);
  if ( *(_BYTE **)(v5 + 24) == result )
    return (_BYTE *)sub_22581D0(v5, ")", 1);
  *result = 41;
  ++*(_QWORD *)(v5 + 32);
  return result;
}

