unsigned __int64 __fastcall sub_175A80(_BYTE *a1)
{
  int _0[4]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]
  unsigned __int64 vars38; // [rsp+38h] [rbp+38h]

  vars38 = __readfsqword(0x28u);
  sub_1E96E0((char *)_0, _0[0], _0[2], vars10);
  if ( !a1[29] )
    (*(void (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL))(a1, 0, 1);
  sub_1E98C0((QT::QObject *)_0);
  return vars38 - __readfsqword(0x28u);
}
