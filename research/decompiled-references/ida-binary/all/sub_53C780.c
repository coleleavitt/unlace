unsigned __int64 __fastcall sub_53C780(__int64 a1)
{
  __int64 v2; // rdi
  __int128 v4; // [rsp+0h] [rbp-28h] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4 = 0;
  v2 = *(_QWORD *)(a1 + 144);
  v5 = 0;
  QT::QMetaMethod::invokeImpl(v2, *(_QWORD *)(a1 + 152), a1, 2, 1, &v4, (char *)&v4 + 8);
  return v6 - __readfsqword(0x28u);
}
