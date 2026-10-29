unsigned int *__fastcall sub_67FD20(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int *v4; // rbx
  bool v5; // zf
  __int64 v6; // rax
  unsigned int *result; // rax
  unsigned int *v8; // r13

  v2 = sub_67FB50(
         *(_QWORD *)(a1 + 16),
         *(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24),
         (__int64)a2,
         (unsigned __int8 (__fastcall *)(__int64, __int64))sub_678140);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = (unsigned int *)(v2 - 8);
  v5 = v2 == v3;
  v6 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    v4 = *(unsigned int **)(a1 + 16);
LABEL_3:
  result = (unsigned int *)(v3 + 8 * v6);
  if ( v4 != result )
  {
    do
    {
      result = (unsigned int *)*v4;
      if ( (unsigned int)result >= a2[1] )
        break;
      v8 = v4 + 2;
      if ( (unsigned int)result >= *a2 )
      {
        sub_679FC0(((__int64)v4 - v3) >> 3, v4, nullptr, 0xABu);
        memmove(v4, v4 + 2, *(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - (_QWORD)v4 - 8);
        v3 = *(_QWORD *)(a1 + 16);
        v6 = *(_QWORD *)(a1 + 24) - 1LL;
        *(_QWORD *)(a1 + 24) = v6;
        goto LABEL_3;
      }
      v4 += 2;
      result = (unsigned int *)(v3 + 8LL * *(_QWORD *)(a1 + 24));
    }
    while ( v8 != result );
  }
  return result;
}

