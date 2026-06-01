unsigned __int64 __fastcall sub_1F339D0(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx

  result = *a1;
  if ( (*a1 & 1) != 0 || (result & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v7 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( (result & 0xFFFFFFFFFFFFFFFELL) != 0 && (result & 4) != 0 && (result &= 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      *(_QWORD *)(result + 16) = a2;
      *a1 = v7 | 1;
    }
    else
    {
      *a1 = a2 & 0xFFFFFFFFFFFFFFFALL | 1;
    }
  }
  else
  {
    result = sub_6E2500((_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL), a2, result & 0xFFFFFFFFFFFFFFFCLL, a4, a5, a6) | 1;
    *a1 = result;
  }
  return result;
}
