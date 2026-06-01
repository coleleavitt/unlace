void __fastcall sub_143590(TApplication *this, _QWORD *a2)
{
  __int64 v3; // rdi

  *(_QWORD *)this = *a2;
  *((_QWORD *)this + 1) = &unk_238DD0;
  *((_QWORD *)this + 17) = &unk_238E98;
  *((_QWORD *)this + 35) = &unk_238FB0;
  *((_QWORD *)this + 38) = off_239040;
  if ( *((_QWORD *)this + 41) )
  {
    *((_QWORD *)this + 42) = 0;
    qfree();
  }
  v3 = *((_QWORD *)this + 31);
  *(_QWORD *)this = a2[1];
  *((_QWORD *)this + 1) = &unk_23C0B8;
  *((_QWORD *)this + 17) = &unk_23C180;
  if ( v3 )
  {
    *((_QWORD *)this + 32) = 0;
    qfree();
  }
  sub_1757F0((char *)this + 136);
  TApplication::~TApplication(this);
}

