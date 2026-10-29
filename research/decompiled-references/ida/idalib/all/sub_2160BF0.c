void *__fastcall sub_2160BF0(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  void *result; // rax
  __int64 v5; // rdi
  size_t v6; // rdx
  size_t v7; // rbx
  const void *v8; // r12
  size_t v9; // rdx

  result = sub_2160230(a1, *(_WORD *)(a2 + 8));
  v5 = a3[1];
  v7 = v6;
  v8 = result;
  v9 = v5 + v6;
  if ( v9 > a3[2] )
  {
    result = (void *)sub_2236E10(a3, a3 + 3, v9, 1);
    v5 = a3[1];
  }
  if ( v7 )
  {
    result = memcpy((void *)(*a3 + v5), v8, v7);
    v5 = a3[1];
  }
  a3[1] = v5 + v7;
  return result;
}
