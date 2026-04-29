unsigned __int64 __fastcall sub_80140(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // eax
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v2 = pack_dd();
  sub_7EA60(a2, (__int64)&v6, v2 - (_QWORD)&v6);
  v3 = pack_dd();
  sub_7EA60(a2, (__int64)&v6, v3 - (_QWORD)&v6);
  v4 = *a1 & 0xF;
  if ( v4 == 2 )
    return sub_7F710((__int64)(a1 + 2), a2);
  if ( (*a1 & 0xFu) > 2 && v4 != 8 )
  {
    if ( !under_debugger )
      sub_37EA20(52154);
    BUG();
  }
  return v7 - __readfsqword(0x28u);
}
