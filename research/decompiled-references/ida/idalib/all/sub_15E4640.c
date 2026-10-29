__int64 __fastcall sub_15E4640(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // [rsp+Fh] [rbp-A9h] BYREF
  _BYTE v9[168]; // [rsp+10h] [rbp-A8h] BYREF

  if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 35 <= 3 && !sub_B979F0((_QWORD *)a4) )
    return 1;
  sub_168B9F0(v9, a2 + 8, *(unsigned int *)(a3 + 24), 6599, 0);
  v6 = sub_15DD120((__int64)v9, a3);
  v8 = (*(_BYTE *)(a3 + 35) & 2) != 0;
  v7 = sub_1588420(v6, (unsigned __int8 *)&v8);
  if ( *(_BYTE *)(v7 + 120) )
  {
    sub_15D6400((unsigned __int8 **)(v7 + 32), (__int64)"non-static member functions");
    sub_15F7200(v9);
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(v7 + 132) )
      sub_15DDC70(v7, (__int64)"non-static member functions");
    sub_15F7200(v9);
    return 0;
  }
}
