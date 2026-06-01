_QWORD *__fastcall sub_E33A10(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rax
  _QWORD *result; // rax
  _QWORD *v5; // rbp
  __int64 v6; // rsi
  __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v7[0] = a2;
  v3 = sub_EFEE90(v7, 0);
  if ( v3 )
    return sub_E2C5A0((__int64)a1, v3, *(double *)a3.m128_u64, 0, 0);
  v5 = (_QWORD *)sub_EFF230(v7);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) > 0x5Fu )
  {
    result = (_QWORD *)sub_E19FF0(a1, v7[0]);
    if ( !(_BYTE)result )
    {
      if ( (*v5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        sub_E337E0(a1, *v5 & 0xFFFFFFFFFFFFFFF8LL, a3);
LABEL_8:
      v6 = v5[1];
      if ( (unsigned __int64)-v6 > 0x2D )
      {
        if ( v6 )
        {
          sub_E15750(a1[1], v6);
          return sub_E17E00(a1, v7[0]);
        }
      }
      else
      {
        v6 = (unsigned int)-(int)v6;
      }
      sub_E16500(a1 + 1, v6, -1);
      return sub_E17E00(a1, v7[0]);
    }
  }
  else
  {
    if ( (*v5 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      sub_E337E0(a1, *v5 & 0xFFFFFFFFFFFFFFF8LL, a3);
    result = (_QWORD *)sub_E19FF0(a1, v7[0]);
    if ( !(_BYTE)result )
      goto LABEL_8;
  }
  return result;
}

