void __fastcall sub_230EA0(std::exception *a1)
{
  _QWORD *v2; // rdi

  *(_QWORD *)a1 = off_1C63670;
  v2 = *((_QWORD **)a1 + 1);
  if ( v2 != (_QWORD *)((char *)a1 + 24) )
    operator delete(v2, *((_QWORD *)a1 + 3) + 1LL);
  *(_QWORD *)a1 = &off_1C7B9E8;
  std::exception::~exception(a1);
}

