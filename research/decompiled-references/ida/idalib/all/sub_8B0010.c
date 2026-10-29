__int64 __fastcall sub_8B0010(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v6[0] = 0;
  result = sub_8AFC00(a1, v6, a3);
  if ( (_DWORD)result == 1 )
  {
    if ( v6[0]
      && a4 >= v6[0] - 2592000LL
      && a4 >= v6[0] - 1296000LL
      && a4 >= v6[0]
      && a4 >= v6[0] + 1296000LL
      && a4 >= v6[0] + 2592000LL )
    {
      if ( (debug & 0x200) != 0 )
        sub_3879F0();
      return 2;
    }
    else if ( a2 )
    {
      *a2 = v6[0];
    }
  }
  return result;
}
