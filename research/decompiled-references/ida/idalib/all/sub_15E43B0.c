__int64 __fastcall sub_15E43B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // [rsp+Fh] [rbp-A9h] BYREF
  _BYTE v13[168]; // [rsp+10h] [rbp-A8h] BYREF

  v4 = *(_BYTE *)(a4 + 28) & 0x7F;
  v5 = (unsigned __int8)v4 - 40;
  LOBYTE(v5) = v5 <= 6;
  v6 = v5;
  LOBYTE(v6) = ((unsigned __int8)v4 != 43) & v5;
  if ( !(_BYTE)v6 )
  {
    if ( (unsigned __int8)v4 <= 0x27u && (v7 = 0xFC00040100LL, _bittest64(&v7, v4)) )
    {
      return 1;
    }
    else
    {
      sub_168B9F0(v13, a2 + 8, *(unsigned int *)(a3 + 24), 6599, 0);
      v10 = sub_15DD120((__int64)v13, a3);
      v12 = (*(_BYTE *)(a3 + 35) & 2) != 0;
      v11 = sub_1588420(v10, (unsigned __int8 *)&v12);
      if ( *(_BYTE *)(v11 + 120) )
      {
        sub_15D6400((unsigned __int8 **)(v11 + 32), (__int64)"variables, functions, blocks, and Objective-C methods");
      }
      else if ( *(_BYTE *)(v11 + 132) )
      {
        sub_15DDC70(v11, (__int64)"variables, functions, blocks, and Objective-C methods");
      }
      sub_15F7200(v13);
    }
  }
  return v6;
}
