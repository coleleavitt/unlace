void __fastcall TApplication::TApplication(TApplication *this, _QWORD *a2)
{
  TProgram::TProgram(this);
  *(_QWORD *)this = *a2;
  *((_QWORD *)this + 1) = off_23F098;
  TProgram::application = this;
}

