__int64 __fastcall sub_15E3420(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v6; // al
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // [rsp+Fh] [rbp-A9h] BYREF
  _BYTE v11[168]; // [rsp+10h] [rbp-A8h] BYREF

  if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 34 <= 5 )
  {
    v6 = sub_B81B70(a4);
    if ( !v6 )
      goto LABEL_11;
    if ( v6 > 3u )
    {
      if ( v6 <= 6u )
      {
        result = 1;
        if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 35 > 3 )
          return result;
        goto LABEL_6;
      }
LABEL_11:
      *(_DWORD *)(a4 + 760) = (2 * (*(_DWORD *)(a4 + 760) >> 1) + 2) | *(_DWORD *)(a4 + 760) & 1;
      BUG();
    }
  }
LABEL_6:
  sub_168B9F0(v11, a2 + 8, *(unsigned int *)(a3 + 24), 6599, 0);
  v8 = sub_15DD120((__int64)v11, a3);
  v10 = (*(_BYTE *)(a3 + 35) & 2) != 0;
  v9 = sub_1588420(v8, (unsigned __int8 *)&v10);
  if ( *(_BYTE *)(v9 + 120) )
  {
    sub_15D6400((unsigned __int8 **)(v9 + 32), (__int64)"global functions");
  }
  else if ( *(_BYTE *)(v9 + 132) )
  {
    sub_15DDC70(v9, (__int64)"global functions");
  }
  sub_15F7200(v11);
  return 0;
}
