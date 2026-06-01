__int64 __fastcall sub_16CAB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // ebp
  _BYTE v8[88]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v9; // [rsp+88h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 40);
  v9 = __readfsqword(0x28u);
  if ( (unsigned int)sub_F4670(a1, v2) == -1 )
  {
    return 0;
  }
  else if ( sub_F42A0() )
  {
    return (unsigned int)-1;
  }
  else
  {
    sub_168770((__int64)v8, a1, 0, v3, v4, v5);
    generate_disassembly();
    v6 = 0xFFFF;
    sub_16C9F0((__int64)v8);
  }
  return v6;
}

