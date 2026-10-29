__int64 __fastcall sub_15A17E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // [rsp-10h] [rbp-38h]

  v7 = *(_QWORD *)(a1 + 264);
  v8 = *(_QWORD *)(v7 + 32);
  if ( (unsigned __int8)sub_FD3830(v8, 0x1A8Cu, 0, v7, a5, a6) != 1
    || (result = sub_FD3830(v8, 0x1A8Du, 0, v7, v9, v10), (_BYTE)result != 1) )
  {
    sub_15A1250(a1, 0, 0, 8, nullptr, a2, a3);
    return v12;
  }
  return result;
}
