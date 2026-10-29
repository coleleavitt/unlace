__int64 __fastcall sub_164CE90(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __m128 a5, double a6)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // r9
  int v11; // r8d
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx

  if ( a3 - 5904 <= 3 )
    return sub_162DAD0(a1, a3, a4, 0x40u, a5, a6);
  if ( a3 == 5961 )
  {
    if ( !(unsigned __int8)sub_16D5460(*a1, a4, 1, 0, 1, 1) )
    {
      v13 = 1;
      v14 = 0;
      v15 = 2;
      return sub_16D5460(*a1, a4, v15, v14, v13, 1);
    }
    return 1;
  }
  if ( a3 == 5963 || a3 == 5966 )
  {
    v10 = 0;
    v11 = 3;
    return sub_162A330(a1, a3, a4, 0, v11, v10, *(double *)a5.m128_u64);
  }
  v8 = a3 - 5962;
  if ( (unsigned int)v8 <= 5 )
  {
    v9 = 45;
    v10 = 1;
    v11 = 5;
    if ( _bittest64(&v9, v8) )
      return sub_162A330(a1, a3, a4, 0, v11, v10, *(double *)a5.m128_u64);
  }
  if ( (unsigned __int8)sub_1647060(a1, a2, a3, a4) )
    return 1;
  if ( (unsigned __int8)sub_16293D0(a1, a3, a4) )
    return 1;
  result = sub_162C8B0(a1, a2, a3, a4, *(double *)a5.m128_u64);
  if ( (_BYTE)result )
    return 1;
  if ( a3 > 0x1718 )
  {
    if ( a3 != 5949 )
    {
      if ( a3 <= 0x173D )
      {
        if ( a3 > 0x172A )
          return result;
        if ( !(unsigned __int8)sub_16D5460(*a1, a4, 0, 0, 15, 1) )
          return sub_162C590(
                   (__int64)a1,
                   a2,
                   *(_DWORD **)(a4 + 8 * (((*(_BYTE *)(a4 + 2) & 8) != 0) + 1LL) + 32),
                   0,
                   *(double *)a5.m128_u64);
        return 1;
      }
      if ( a3 - 5955 > 5 )
        return result;
    }
    v13 = 15;
    v14 = 0;
    v15 = 0;
    return sub_16D5460(*a1, a4, v15, v14, v13, 1);
  }
  if ( a3 >= 0x1717 )
  {
    v13 = 1;
    v14 = 0;
    goto LABEL_24;
  }
  if ( a3 == 5833 )
  {
    v13 = 31;
    v14 = 0;
    goto LABEL_24;
  }
  if ( a3 <= 0x16C9 )
  {
    v13 = 32;
    if ( a3 != 5832 )
      return result;
LABEL_27:
    v14 = 1;
    goto LABEL_24;
  }
  if ( a3 == 5840 )
  {
    v13 = 16;
    goto LABEL_27;
  }
  if ( a3 == 5841 )
  {
    v13 = 15;
    v14 = 0;
LABEL_24:
    v15 = 1;
    return sub_16D5460(*a1, a4, v15, v14, v13, 1);
  }
  return result;
}
