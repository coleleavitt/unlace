__int64 __fastcall sub_15E4D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int8 v7; // al
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // [rsp+Fh] [rbp-B9h] BYREF
  _BYTE v11[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 64 <= 2
    || (v4 = a4, sub_B8DC30(a4, 0))
    || (v7 = *(_BYTE *)(v4 + 28) & 0x7F, v7 == 18)
    || (LOBYTE(v4) = v7 != 43 && (unsigned int)v7 - 40 <= 6, (_BYTE)v4) )
  {
    LODWORD(v4) = 1;
  }
  else
  {
    sub_168B9F0(v11, a2 + 8, *(unsigned int *)(a3 + 24), 6599, 0);
    v8 = sub_15DD120((__int64)v11, a3);
    v10 = (*(_BYTE *)(a3 + 35) & 2) != 0;
    v9 = sub_1588420(v8, (unsigned __int8 *)&v10);
    if ( *(_BYTE *)(v9 + 120) )
    {
      sub_15D6400(
        (unsigned __int8 **)(v9 + 32),
        (__int64)"typedefs, functions, function pointers, Objective-C methods, and variables");
    }
    else if ( *(_BYTE *)(v9 + 132) )
    {
      sub_15DDC70(v9, (__int64)"typedefs, functions, function pointers, Objective-C methods, and variables");
    }
    sub_15F7200(v11);
  }
  return (unsigned int)v4;
}
