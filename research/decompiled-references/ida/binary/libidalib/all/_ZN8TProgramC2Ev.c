void __fastcall TProgram::TProgram(TProgram *this, _QWORD *a2)
{
  __int128 v2; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  TSystemInit::TSystemInit(this);
  v2 = 0;
  TGroup::TGroup((char *)this + 8, &v2);
  *(_QWORD *)this = *a2;
  *((_QWORD *)this + 1) = off_23FEC0;
}

