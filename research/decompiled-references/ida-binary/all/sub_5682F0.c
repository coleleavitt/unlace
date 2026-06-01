__int64 __fastcall sub_5682F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 *a9)
{
  __int64 v9; // rdx
  __int64 result; // rax

  v9 = *a9;
  result = 0;
  if ( (*a9 & 1) == 0 )
  {
    result = *(unsigned int *)(v9 + 36);
    if ( (_DWORD)result )
      return *(unsigned int *)(v9 + 48);
  }
  return result;
}
