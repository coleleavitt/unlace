unsigned __int64 __fastcall sub_48FF50(QT::QAbstractItemView *this)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h]
  __int128 v7; // [rsp+18h] [rbp-30h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)this;
  v8 = __readfsqword(0x28u);
  *((_DWORD *)this + 54) = 15;
  if ( *(char *)((*(__int64 (**)(void))(v1 + 808))() + 1680) >= 0 )
  {
    v3 = *(_QWORD *)this;
    v5 = 0;
    v6 = 0;
    v7 = -1;
    v4 = (*(__int64 (__fastcall **)(QT::QAbstractItemView *))(v3 + 808))(this);
    sub_4E4770(v4);
    sub_48FB10(this, nullptr, &v5, 16, 1);
    sub_546850(this, &v5);
    sub_531B30(6, this, 0);
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree(v5, (const char *)this);
    }
  }
  return v8 - __readfsqword(0x28u);
}
