__int64 __fastcall sub_61B700(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 *a9)
{
  if ( (a7 & 7u) - 3 <= 2 && a9 )
    return sub_61B330(a1, *a9, (__int64)(a9 + 1));
  else
    return 0;
}

