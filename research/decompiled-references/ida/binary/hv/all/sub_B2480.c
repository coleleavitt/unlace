unsigned __int64 __fastcall sub_B2480(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v5; // r13
  unsigned __int64 result; // rax
  _BYTE v7[112]; // [rsp+0h] [rbp-2A8h] BYREF
  _BYTE v8[520]; // [rsp+70h] [rbp-238h] BYREF
  unsigned __int64 v9; // [rsp+278h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v5 = (unsigned int)sub_118C00(a4, a3, a2);
  result = sub_118C80(v7, v5, a1, a3, a2, a3 > 0x7FF);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
    return sub_118B20(v8, 512, v7, a2, (unsigned int)v5);
  return result;
}

