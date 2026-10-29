void __fastcall TProgram::~TProgram(TProgram *this, _QWORD *a2)
{
  TGroup *v3; // rdi

  v3 = (TProgram *)((char *)this + 8);
  *((_QWORD *)v3 - 1) = *a2;
  *(_QWORD *)v3 = off_23EEC0;
  TGroup::~TGroup(v3);
  TSystemInit::~TSystemInit(this);
}

