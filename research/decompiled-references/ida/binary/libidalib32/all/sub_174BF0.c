void *__fastcall sub_174BF0(TApplication *this, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  struct _Unwind_Exception *v5; // rbp

  TApplication::TApplication(this);
  *((_QWORD *)this + 18) = this;
  *((_QWORD *)this + 17) = &unk_23B298;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 25) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 30) = 0;
  *((_OWORD *)this + 10) = 0;
  *(_OWORD *)((char *)this + 184) = 0;
  *((_OWORD *)this + 14) = 0;
  v2 = qmutex_create();
  *((_QWORD *)this + 25) = v2;
  if ( !v2 )
  {
    if ( !under_debugger )
    {
      v5 = (struct _Unwind_Exception *)interr();
      sub_174BB0((_QWORD *)this + 19);
      TApplication::~TApplication(this);
      _Unwind_Resume(v5);
    }
    BUG();
  }
  v3 = *a2;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 34) = 0;
  *(_QWORD *)this = v3;
  *((_QWORD *)this + 1) = &unk_23B0B8;
  *((_QWORD *)this + 17) = &unk_23B180;
  *((_OWORD *)this + 16) = 0;
  return &unk_23B180;
}

