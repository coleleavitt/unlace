__int64 __fastcall sub_15E5920(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  unsigned int v5; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // [rsp+Fh] [rbp-B9h] BYREF
  _BYTE v11[184]; // [rsp+10h] [rbp-B8h] BYREF

  v4 = *(_BYTE *)(a4 + 28) & 0x7F;
  if ( v4 == 8 )
    return 1;
  if ( v4 == 18 )
    return 1;
  v5 = sub_15D63A0(a4);
  if ( (_BYTE)v5 )
  {
    return 1;
  }
  else
  {
    sub_168B9F0(v11, a2 + 8, *(unsigned int *)(a3 + 24), 6599, 0);
    v8 = sub_15DD120((__int64)v11, a3);
    v10 = (*(_BYTE *)(a3 + 35) & 2) != 0;
    v9 = sub_1588420(v8, (unsigned __int8 *)&v10);
    if ( *(_BYTE *)(v9 + 120) )
    {
      sub_15D6400((unsigned __int8 **)(v9 + 32), (__int64)"Objective-C methods, blocks, and non-K&R-style functions");
    }
    else if ( *(_BYTE *)(v9 + 132) )
    {
      sub_15DDC70(v9, (__int64)"Objective-C methods, blocks, and non-K&R-style functions");
    }
    sub_15F7200(v11);
  }
  return v5;
}
