unsigned __int64 __fastcall sub_3052E0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  unsigned __int8 v4; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 744) = a2;
  if ( QT::QCoreApplication::self )
    sub_4679A0(QT::QCoreApplication::self, a2);
  v4 = a2;
  v2 = sub_5313F0(qword_8C98E8);
  if ( v2 )
    sub_537630(v2, 7, &v4);
  return v5 - __readfsqword(0x28u);
}
