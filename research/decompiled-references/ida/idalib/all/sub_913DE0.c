unsigned __int64 __fastcall sub_913DE0(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v5; // r13d
  unsigned __int64 result; // rax
  _BYTE v7[112]; // [rsp+0h] [rbp-2A8h] BYREF
  _BYTE v8[520]; // [rsp+70h] [rbp-238h] BYREF
  unsigned __int64 v9; // [rsp+278h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v5 = sub_904610(a4, a3, a2);
  result = sub_904690((__int64)v7, v5, a1, a3, a2, a3 > 0x7FF);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
    return sub_904530(v8, 0x200u, (__int64)v7, a2, v5);
  return result;
}
