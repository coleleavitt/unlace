unsigned __int64 __fastcall sub_154770(TView *this, __int64 a2, TView ***a3)
{
  const char *v4; // rcx
  const char *v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  TWindowInit::TWindowInit((char *)this + 176, TWindow::initFrame);
  sub_154460((__int64)&v6, (__int64)a3);
  v4 = v6;
  if ( !v7 )
    v4 = s1;
  sub_144880((__int64)this, (__int64 *)&off_235150, a2, (__int64)v4);
  if ( v6 )
  {
    v7 = 0;
    qfree();
  }
  *(_QWORD *)this = &off_23AC00;
  sub_1541B0(a3, this);
  return v8 - __readfsqword(0x28u);
}

