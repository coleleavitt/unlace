__int64 __fastcall sub_3F70E0(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  __int64 v9; // r15
  __int64 result; // rax

  if ( a3 != 8 || a2 == 4 )
    return sub_3F6E70(a1, a2, a3, a4, a5, a6, a7, 0, 1);
  v9 = sub_3F6E70(a1, a2, 7u, a4, a5, a6, a7, 0, 1);
  result = sub_3F6E70(a1, a2, 7u, a4 + 8, a5, a6 + 8, a7, 0, 1);
  if ( v9 )
  {
    if ( result )
    {
      *(_DWORD *)(v9 + 4) |= 0x10000u;
      *(_DWORD *)(result + 4) |= 0x10000u;
    }
  }
  return result;
}
