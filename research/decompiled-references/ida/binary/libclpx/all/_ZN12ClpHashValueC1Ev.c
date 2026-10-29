// Alternative name is '_ZN12ClpHashValueC2Ev'
void __fastcall ClpHashValue::ClpHashValue(ClpHashValue *this)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = -1;
  *(_QWORD *)this = off_4D0A20;
}

