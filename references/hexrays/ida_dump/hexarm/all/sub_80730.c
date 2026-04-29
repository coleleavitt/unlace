unsigned __int64 __fastcall sub_80730(unsigned int *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *a1;
  v8[0] = __readfsqword(0x28u);
  v3 = pack_dd(&v7, v8, v2);
  sub_7F1A0(a2, (__int64)&v7, v3 - (_QWORD)&v7);
  v4 = pack_dd(&v7, v8, a1[1]);
  sub_7F1A0(a2, (__int64)&v7, v4 - (_QWORD)&v7);
  v5 = *a1 & 0xF;
  if ( v5 == 2 )
    return sub_7FD90((__int64)(a1 + 2), a2);
  if ( (*a1 & 0xF) > 2 && v5 != 8 )
  {
    if ( !under_debugger )
      sub_3835A0(52154);
    BUG();
  }
  return v8[0] - __readfsqword(0x28u);
}
