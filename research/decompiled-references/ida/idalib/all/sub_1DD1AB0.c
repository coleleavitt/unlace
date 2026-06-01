_QWORD *__fastcall sub_1DD1AB0(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rdi
  _QWORD *v6; // rax
  _QWORD *result; // rax

  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return (_QWORD *)a2;
  v5 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0xB) == 0 )
  {
    sub_18C4110(v5, *(_DWORD *)(a1 + 40), a2);
    return (_QWORD *)a2;
  }
  v6 = sub_A81910(*(_QWORD **)(v5 + 248), a2, *(_DWORD *)(a1 + 40));
  result = sub_1DD1930(a1, (__int64)v6, a3, a4);
  if ( result )
    return (_QWORD *)*result;
  return result;
}
