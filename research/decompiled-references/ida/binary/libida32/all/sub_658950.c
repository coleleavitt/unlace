__int64 __fastcall sub_658950(_QWORD *a1, unsigned int a2, __int16 a3)
{
  char v4; // r14
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  unsigned int v9; // eax
  __int16 v10; // [rsp+Ch] [rbp-4Ch]
  int v11; // [rsp+10h] [rbp-48h] BYREF
  int v12; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( (a3 & 0x800) != 0 )
    callui(9, 0, (int)&v11, (int)&v12, a3, (int)&callui);
  v10 = a3 & 0xF7FF;
  v4 = a3 & 1;
  while ( 1 )
  {
    a2 = v4 ? sub_4F02F0((__int64)(a1 + 203), a2) : sub_4F0240((__int64)(a1 + 203), a2);
    if ( a2 == -1 )
      break;
    if ( (~((unsigned __int16)sub_3B9AA0((__int64)a1, a2, 4) >> 8) & 6) == 0 )
      return a2;
    v9 = sub_658850(a1, a2, v10, v6, v7, v8);
    a2 = v9;
    if ( v9 == -1 )
      break;
    if ( !sub_4EE820((__int64)(a1 + 203), v9) )
      return a2;
  }
  return (unsigned int)-1;
}

