__int64 __fastcall sub_15E07F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  bool v10; // [rsp+1h] [rbp-A9h] BYREF
  _BYTE v11[168]; // [rsp+2h] [rbp-A8h] BYREF

  v4 = (*(_BYTE *)(a4 + 28) + 110) & 0x7F;
  if ( (unsigned __int8)v4 <= 0x3Cu )
  {
    v9 = 0x1003FF079FC08001LL;
    if ( _bittest64(&v9, v4) )
      return 1;
  }
  if ( sub_B8DC30(a4, 0) )
    return 1;
  sub_168B9F0(v11, a2 + 8, *(unsigned int *)(a3 + 24), 6599, 0);
  v7 = sub_15DD120((__int64)v11, a3);
  v10 = (*(_BYTE *)(a3 + 35) & 2) != 0;
  v8 = sub_1588420(v7, (unsigned __int8 *)&v10);
  if ( *(_BYTE *)(v8 + 120) )
  {
    sub_15D6400(
      (unsigned __int8 **)(v8 + 32),
      (__int64)"variables, value declarations, non-static data members, types, enums, enumerators, labels, non-static dat"
               "a members, Objective-C methods, functions, and function pointers");
  }
  else if ( *(_BYTE *)(v8 + 132) )
  {
    sub_15DDC70(
      v8,
      (__int64)"variables, value declarations, non-static data members, types, enums, enumerators, labels, non-static dat"
               "a members, Objective-C methods, functions, and function pointers");
  }
  sub_15F7200(v11);
  return 0;
}
