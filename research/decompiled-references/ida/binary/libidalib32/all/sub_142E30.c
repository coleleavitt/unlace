void __fastcall sub_142E30(TApplication *this, _QWORD *a2)
{
  __int64 v3; // rdi

  *(_QWORD *)this = *a2;
  *((_QWORD *)this + 1) = &unk_237DD0;
  *((_QWORD *)this + 17) = &unk_237E98;
  *((_QWORD *)this + 35) = &unk_237FB0;
  *((_QWORD *)this + 38) = off_238040;
  if ( *((_QWORD *)this + 41) )
  {
    *((_QWORD *)this + 42) = 0;
    qfree();
  }
  v3 = *((_QWORD *)this + 31);
  *(_QWORD *)this = a2[1];
  *((_QWORD *)this + 1) = &unk_23B0B8;
  *((_QWORD *)this + 17) = &unk_23B180;
  if ( v3 )
  {
    *((_QWORD *)this + 32) = 0;
    qfree();
  }
  sub_174CF0((char *)this + 136);
  TApplication::~TApplication(this);
}

