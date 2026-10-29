__int64 __fastcall sub_164CC80(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __m128 a5, double a6)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // rdx

  if ( a3 - 11912 <= 3 )
    return sub_162DAD0(a1, a3, a4, 0x80u, a5, a6);
  if ( a3 == 11959 )
  {
    if ( !(unsigned __int8)sub_16D5460(*a1, a4, 1, 0, 1, 1)
      && !(unsigned __int8)sub_16D5460(*a1, a4, 2, 0, 3, 1)
      && !(unsigned __int8)sub_16D5460(*a1, a4, 3, 0, 1, 1) )
    {
      v11 = 1;
      v12 = 4;
      return sub_16D5460(*a1, a4, v12, 0, v11, 1);
    }
    return 1;
  }
  if ( (a3 & 0xFFFFFFFB) - 11961 <= 1 )
    return sub_162A330(a1, a3, a4, 0, 5, 1, *(double *)a5.m128_u64);
  if ( a3 - 11944 <= 5 )
    return sub_162CBE0(a1, a3, a4, *(double *)a5.m128_u64, a6);
  v8 = a3 - 11960;
  if ( (unsigned int)v8 > 7 )
  {
    if ( a3 - 12110 <= 2 )
    {
      v11 = 0x7FFF;
    }
    else
    {
      v11 = 31;
      if ( a3 != 12109 )
      {
        if ( a3 != 12116 && a3 != 12146 )
          goto LABEL_21;
        v11 = 0xFFFF;
      }
    }
LABEL_14:
    v12 = 0;
    return sub_16D5460(*a1, a4, v12, 0, v11, 1);
  }
  v9 = 153;
  if ( _bittest64(&v9, v8) )
    return sub_162A330(a1, a3, a4, 0, 5, 1, *(double *)a5.m128_u64);
LABEL_21:
  if ( (unsigned __int8)sub_1647060(a1, a2, a3, a4) )
    return 1;
  if ( (unsigned __int8)sub_163C540(a1, a3, a4) )
    return 1;
  result = sub_1633F50(a1, a3, a4);
  if ( (_BYTE)result )
    return 1;
  if ( a3 < 0x2EB0 )
    return result;
  if ( a3 <= 0x2EB5 )
  {
    v11 = 15;
    goto LABEL_14;
  }
  v11 = 0xFFFF;
  if ( a3 == 11971 )
    goto LABEL_14;
  return result;
}
