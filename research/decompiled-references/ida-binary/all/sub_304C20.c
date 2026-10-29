__int64 __fastcall sub_304C20(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+10h] [rbp-38h] BYREF
  int v5; // [rsp+18h] [rbp-30h]
  unsigned __int64 v6; // [rsp+28h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_3D7160((QT::QFont *)&v4);
  v2 = *a2;
  *a2 = v4;
  v4 = v2;
  LODWORD(v2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = v5;
  v5 = v2;
  QT::QFont::~QFont((QT::QFont *)&v4);
  return 0;
}
