__int64 __fastcall sub_2112A0(__int64 a1, __int64 a2, __int64 a3, char a4, double a5, double a6)
{
  __int64 result; // rax
  _BYTE *v9; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  result = sub_1EB040((__int64 *)(a1 + 432), a2);
  if ( result )
  {
    if ( a4 && (*(_WORD *)(result + 24) & 0x180) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
        sub_68620(
          (__int64)"%a: incorrect user-defined mapping for '%s' has been skipped\n",
          a5,
          *(const char **)(a1 + 40));
      return 0;
    }
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 2) & 8) == 0 )
      return 0;
    v9 = nullptr;
    v10 = 0;
    if ( a3 == -1 )
    {
      v9 = (_BYTE *)qvector_reserve(&v9, 0, 2, 1);
      *(_QWORD *)&v10 = 2;
      *v9 = 63;
      v9[1] = 0;
    }
    else
    {
      sub_1C32C0(*(_DWORD **)(a1 + 1504), (__int64 *)&v9, a2, a3);
    }
    sub_68620((__int64)"%a: variable defea=%a at %s could not be found\n", 0.0, a6, *(const char **)(a1 + 40));
    if ( !v9 )
      return 0;
    *(_QWORD *)&v10 = 0;
    qfree(v9);
    return 0;
  }
  return result;
}
