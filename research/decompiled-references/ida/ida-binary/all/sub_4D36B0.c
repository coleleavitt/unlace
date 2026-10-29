unsigned __int64 __fastcall sub_4D36B0(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  QT::QDataStream::operator>>(a2, &v5);
  *a3 = v5;
  return v6 - __readfsqword(0x28u);
}
