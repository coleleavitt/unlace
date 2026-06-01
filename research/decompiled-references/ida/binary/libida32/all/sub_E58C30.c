_BYTE *__fastcall sub_E58C30(__int64 a1, _BYTE *a2, size_t a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdi
  _BYTE *v9; // rax
  __int64 i; // rbx
  _BYTE *v11; // rsi
  size_t v12; // rdx
  __int64 v13; // rdi
  _BYTE *result; // rax
  size_t v15; // [rsp+8h] [rbp-30h]

  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_BYTE **)(v8 + 32);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(v8 + 24) )
  {
    v15 = a3;
    sub_2257CD0(v8, 85);
    a3 = v15;
  }
  else
  {
    *(_QWORD *)(v8 + 32) = v9 + 1;
    *v9 = 85;
  }
  sub_E58770(a1, a2, a3);
  for ( i = a4 + 16 * a5; a4 != i; i -= 16 )
  {
    v11 = *(_BYTE **)(i - 16);
    v12 = *(_QWORD *)(i - 8);
    sub_E58770(a1, v11, v12);
  }
  v13 = *(_QWORD *)(a1 + 8);
  result = *(_BYTE **)(v13 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v13 + 24) )
    return (_BYTE *)sub_2257CD0(v13, 64);
  *(_QWORD *)(v13 + 32) = result + 1;
  *result = 64;
  return result;
}

