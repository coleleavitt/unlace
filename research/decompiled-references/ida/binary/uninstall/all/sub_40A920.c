__int64 __fastcall sub_40A920(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char a5)
{
  int v7; // ebx
  int v8; // r8d
  int v9; // r9d
  __int64 result; // rax
  unsigned int v11; // ebx
  _BYTE v12[8]; // [rsp+8h] [rbp-30h] BYREF

  v7 = sub_473560(a1, v12, a4, 0);
  result = 1;
  if ( !v7 )
  {
    v11 = sub_40A770(a1, a2, a3, a5, v8, v9);
    sub_473C00(a1);
    return v11;
  }
  return result;
}

