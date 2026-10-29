_BYTE *__fastcall sub_E47180(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdi
  _BYTE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  _BYTE *result; // rax

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v6 >= *(_QWORD *)(v5 + 24) )
  {
    sub_227BA10(v5, 76);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v6 + 1;
    *v6 = 76;
  }
  sub_E3FB80(a1, a2);
  sub_E38700((_QWORD *)(a1 + 8), a3, v7);
  v8 = *(_QWORD *)(a1 + 8);
  result = *(_BYTE **)(v8 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v8 + 24) )
    return (_BYTE *)sub_227BA10(v8, 69);
  *(_QWORD *)(v8 + 32) = result + 1;
  *result = 69;
  return result;
}
