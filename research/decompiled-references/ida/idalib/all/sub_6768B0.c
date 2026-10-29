__int64 __fastcall sub_6768B0(_QWORD *a1, unsigned __int64 a2, __int16 a3)
{
  char v4; // r14
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  unsigned __int64 v9; // rax
  __int16 v10; // [rsp+Ch] [rbp-5Ch]
  __int64 v11; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( (a3 & 0x800) != 0 )
    callui(9, 0, (int)&v11, (int)v12, a3, (int)&callui);
  v10 = a3 & 0xF7FF;
  v4 = a3 & 1;
  while ( 1 )
  {
    a2 = v4 ? sub_5078E0((__int64)(a1 + 213), a2) : sub_507820((__int64)(a1 + 213), a2);
    if ( a2 == -1 )
      break;
    if ( (~((unsigned __int16)sub_3BE900(a1, a2, 4) >> 8) & 6) == 0 )
      return a2;
    v9 = sub_6767A0(a1, a2, v10, v6, v7, v8);
    a2 = v9;
    if ( v9 == -1 )
      break;
    if ( !sub_505D70((__int64)(a1 + 213), v9) )
      return a2;
  }
  return -1;
}
