__int64 __fastcall sub_1588A80(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  unsigned int v8; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v9; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v10[184]; // [rsp+10h] [rbp-B8h] BYREF

  v4 = *(_DWORD *)(a2 + 4);
  v5 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  v9 = 0;
  sub_168B9F0(v10, v5 + 8, v4, 7504, 0);
  result = sub_15F7200(v10);
  if ( a3 )
  {
    sub_168B9F0(v10, *(_QWORD *)(a1 + 8) + 8LL, v4, 6441, 0);
    v7 = sub_1588370((__int64)v10, &v8);
    sub_15884C0(v7, &v9);
    return sub_15F7200(v10);
  }
  return result;
}
