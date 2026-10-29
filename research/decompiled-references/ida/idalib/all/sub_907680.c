unsigned __int64 __fastcall sub_907680(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        char a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r15
  char *v13; // rdi
  unsigned __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-50h]
  char *v16; // [rsp+0h] [rbp-50h]
  unsigned __int64 *v17; // [rsp+8h] [rbp-48h]

  if ( a4 <= 0xB || a2 <= 0x10 )
    return 0;
  v7 = (a4 + 3) >> 2;
  result = sub_906400((unsigned __int64 *)(a1 + 6), a2 - 6, a3, v7, a5, a6);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
  {
    if ( result - 1 > 0xFFFE )
      return 0;
    *(_WORD *)a1 = result;
    v15 = a1 + a2;
    v17 = (unsigned __int64 *)(result + a1 + 6);
    result = sub_906400(v17, a2 - (result + 6), a3 + v7, v7, a5, a6);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      if ( result - 1 > 0xFFFE )
        return 0;
      *(_WORD *)(a1 + 2) = result;
      v13 = (char *)v17 + result;
      result = sub_906400(
                 (unsigned __int64 *)((char *)v17 + result),
                 v15 - ((_QWORD)v17 + result),
                 a3 + v7 + v7,
                 v7,
                 a5,
                 a6);
      if ( result <= 0xFFFFFFFFFFFFFF88LL )
      {
        if ( result - 1 > 0xFFFE )
          return 0;
        *(_WORD *)(a1 + 4) = result;
        v14 = v15 - (_QWORD)&v13[result];
        v16 = &v13[result];
        result = sub_906400((unsigned __int64 *)&v13[result], v14, v7 + a3 + v7 + v7, a4 - 3 * v7, a5, a6);
        if ( result <= 0xFFFFFFFFFFFFFF88LL )
        {
          if ( result - 1 <= 0xFFFE )
            return (unsigned __int64)&v16[result - a1];
          return 0;
        }
      }
    }
  }
  return result;
}
