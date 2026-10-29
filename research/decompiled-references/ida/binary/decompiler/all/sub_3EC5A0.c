__int64 __fastcall sub_3EC5A0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  unsigned __int8 v8; // al
  _QWORD v10[13]; // [rsp+0h] [rbp-68h] BYREF

  v10[5] = __readfsqword(0x28u);
  qstrncpy();
  qstrncat();
  v8 = sub_3E3620(a1 + 24);
  if ( v8 <= 1u )
    sub_1D3CC0(a1, v8, 2, a3, a3, 0);
  return sub_3EA510(a1, (__int64)v10, a3, a4, a5);
}
