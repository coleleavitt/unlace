__int64 __fastcall sub_A0A20(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // r10
  __int64 result; // rax

  v2 = (_QWORD *)a1;
  if ( a2 >= 16
           * ((unsigned __int64)(*(_QWORD *)(a1 + 120) == 0)
            + ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 88)) >> 3)
            - 1)
           + ((__int64)(v2[10] - v2[8]) >> 5)
           + ((__int64)(v2[12] - v2[13]) >> 5) )
    return (__int64)(v2 + 18);
  result = sub_A0530(a1, a2);
  if ( !result )
    return (__int64)(v2 + 18);
  return result;
}

