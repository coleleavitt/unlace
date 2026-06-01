__int64 __fastcall sub_15E5070(__int64 a1, __int64 a2, __int64 a3, _WORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // [rsp+1h] [rbp-A9h] BYREF
  _BYTE v9[168]; // [rsp+2h] [rbp-A8h] BYREF

  if ( (*a4 & 0x1FF) == 0x8B )
    return 1;
  sub_168B9F0(v9, a2 + 8, *(unsigned int *)(a3 + 24), 3241, 0);
  v6 = sub_15DD120((__int64)v9, a3);
  v8 = (*(_BYTE *)(a3 + 35) & 2) != 0;
  v7 = sub_1588420(v6, (unsigned __int8 *)&v8);
  if ( *(_BYTE *)(v7 + 120) )
  {
    sub_15D6400((unsigned __int8 **)(v7 + 32), (__int64)"return statements");
  }
  else if ( *(_BYTE *)(v7 + 132) )
  {
    sub_15DDC70(v7, (__int64)"return statements");
  }
  sub_15F7200(v9);
  return 0;
}
