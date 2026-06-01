void __fastcall TApplication::~TApplication(TApplication *this, _QWORD *a2)
{
  *(_QWORD *)this = *a2;
  *((_QWORD *)this + 1) = off_240098;
  TProgram::~TProgram(this);
}

