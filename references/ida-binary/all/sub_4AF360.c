unsigned __int64 __fastcall sub_4AF360(__int64 a1)
{
  QT::QAbstractButton *v1; // rdi
  int v3; // [rsp+0h] [rbp-28h] BYREF
  __int64 v4; // [rsp+4h] [rbp-24h]
  __int16 v5; // [rsp+Ch] [rbp-1Ch]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v1 = *(QT::QAbstractButton **)(a1 + 40);
  v6 = __readfsqword(0x28u);
  v3 = 0;
  v5 = 0;
  v4 = 0xFFFF;
  sub_4AF280(v1, &v3);
  return v6 - __readfsqword(0x28u);
}
