__int64 __fastcall sub_15E0250(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v6; // al
  int v7; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  bool v11; // [rsp+Fh] [rbp-A9h] BYREF
  _BYTE v12[168]; // [rsp+10h] [rbp-A8h] BYREF

  v6 = *(_BYTE *)(a4 + 28) & 0x7F;
  v7 = v6;
  if ( (unsigned int)v6 - 40 <= 6 )
  {
    if ( !sub_9B48E0(a4) )
      return 1;
    v6 = *(_BYTE *)(a4 + 28) & 0x7F;
    v7 = v6;
  }
  if ( (unsigned int)(v7 - 34) <= 5 || v6 == 18 )
    return 1;
  sub_168B9F0(v12, a2 + 8, *(unsigned int *)(a3 + 24), 6599, 0);
  v9 = sub_15DD120((__int64)v12, a3);
  v11 = (*(_BYTE *)(a3 + 35) & 2) != 0;
  v10 = sub_1588420(v9, (unsigned __int8 *)&v11);
  if ( *(_BYTE *)(v10 + 120) )
  {
    sub_15D6400(
      (unsigned __int8 **)(v10 + 32),
      (__int64)"variables with non-local storage, functions, and Objective-C methods");
  }
  else if ( *(_BYTE *)(v10 + 132) )
  {
    sub_15DDC70(v10, (__int64)"variables with non-local storage, functions, and Objective-C methods");
  }
  sub_15F7200(v12);
  return 0;
}
