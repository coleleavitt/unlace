_QWORD *__fastcall sub_18041E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r12

  v4 = (a2 - (__int64)a1) >> 7;
  v5 = a1;
  v6 = (a2 - (__int64)a1) >> 5;
  if ( v4 > 0 )
  {
    v7 = &a1[16 * v4];
    while ( (unsigned __int8)sub_1C253E0(*(_QWORD *)(a3 + 784), *v5, v5[1]) )
    {
      if ( !(unsigned __int8)sub_1C253E0(*(_QWORD *)(a3 + 784), v5[4], v5[5]) )
        return v5 + 4;
      if ( !(unsigned __int8)sub_1C253E0(*(_QWORD *)(a3 + 784), v5[8], v5[9]) )
        return v5 + 8;
      if ( !(unsigned __int8)sub_1C253E0(*(_QWORD *)(a3 + 784), v5[12], v5[13]) )
        return v5 + 12;
      v5 += 16;
      if ( v5 == v7 )
      {
        v6 = (a2 - (__int64)v5) >> 5;
        goto LABEL_10;
      }
    }
    return v5;
  }
LABEL_10:
  switch ( v6 )
  {
    case 2LL:
LABEL_16:
      if ( !(unsigned __int8)sub_1C253E0(*(_QWORD *)(a3 + 784), *v5, v5[1]) )
        return v5;
      v5 += 4;
      goto LABEL_18;
    case 3LL:
      if ( !(unsigned __int8)sub_1C253E0(*(_QWORD *)(a3 + 784), *v5, v5[1]) )
        return v5;
      v5 += 4;
      goto LABEL_16;
    case 1LL:
LABEL_18:
      if ( (unsigned __int8)sub_1C253E0(*(_QWORD *)(a3 + 784), *v5, v5[1]) )
        return (_QWORD *)a2;
      return v5;
  }
  return (_QWORD *)a2;
}
