__int64 __fastcall sub_15E1830(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // cl
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  bool v11; // [rsp+1h] [rbp-A9h] BYREF
  _BYTE v12[168]; // [rsp+2h] [rbp-A8h] BYREF

  v4 = *(_BYTE *)(a4 + 28) & 0x7F;
  v5 = (v4 + 110) & 0x7F;
  if ( (unsigned __int8)v5 > 0x39u || (v7 = 0x2000F039FFF000DLL, result = 1, !_bittest64(&v7, v5)) )
  {
    result = 1;
    if ( (v4 & 0x3F) != 0x18 )
    {
      sub_168B9F0(v12, a2 + 8, *(unsigned int *)(a3 + 24), 3241, 0);
      v9 = sub_15DD120((__int64)v12, a3);
      v11 = (*(_BYTE *)(a3 + 35) & 2) != 0;
      v10 = sub_1588420(v9, (unsigned __int8 *)&v11);
      if ( *(_BYTE *)(v10 + 120) )
      {
        sub_15D6400(
          (unsigned __int8 **)(v10 + 32),
          (__int64)"variables, functions, structs, interfaces, and namespaces");
      }
      else if ( *(_BYTE *)(v10 + 132) )
      {
        sub_15DDC70(v10, (__int64)"variables, functions, structs, interfaces, and namespaces");
      }
      sub_15F7200(v12);
      return 0;
    }
  }
  return result;
}
