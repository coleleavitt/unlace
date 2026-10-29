void __fastcall ClpDynamicMatrix::switchOffCheck(ClpDynamicMatrix *this)
{
  *((_DWORD *)this + 70) = 0;
  *((_QWORD *)this + 36) = 0;
}

