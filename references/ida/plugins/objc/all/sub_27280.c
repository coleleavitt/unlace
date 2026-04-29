__int64 __fastcall sub_27280(_QWORD *a1, __int64 *a2, __int64 a3)
{
  int flags; // eax
  unsigned int v5; // ebx
  int v7; // eax
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  flags = get_flags_ex();
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
    return sub_16A80((__int64)a1, a2);
  v8[0] = 0;
  v5 = sub_10010(a1, v8, a3);
  if ( (_BYTE)v5 )
  {
    if ( !(unsigned int)callui(1004) && (v7 = get_flags_ex(), (v7 & 0x600) == 0x400) && (v7 & 0xF0000000) == 0x50000000 )
      return (unsigned int)sub_16A80((__int64)a1, a2);
    else
      *a2 = v8[0];
  }
  return v5;
}
