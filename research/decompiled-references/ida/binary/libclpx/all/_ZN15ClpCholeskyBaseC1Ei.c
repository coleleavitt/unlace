// Alternative name is '_ZN15ClpCholeskyBaseC2Ei'
void __fastcall ClpCholeskyBase::ClpCholeskyBase(ClpCholeskyBase *this, int a2)
{
  unsigned __int64 v3; // rdi

  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 12) = 0;
  *((_QWORD *)this + 3) = 0;
  v3 = (unsigned __int64)this + 180;
  *(_QWORD *)(v3 - 148) = 0;
  *(_QWORD *)(v3 - 140) = 0;
  *(_DWORD *)(v3 - 132) = 0;
  *(_QWORD *)(v3 - 124) = 0;
  *(_QWORD *)(v3 - 180) = &off_4CFFB8;
  *(_QWORD *)(v3 - 116) = 0;
  *(_QWORD *)(v3 - 164) = 0x3FE6666666666666LL;
  *(_QWORD *)(v3 - 108) = 0;
  *(_DWORD *)(v3 - 100) = 0;
  *(_QWORD *)(v3 - 92) = 0;
  *(_QWORD *)(v3 - 84) = 0;
  *(_QWORD *)(v3 - 76) = 0;
  *(_QWORD *)(v3 - 68) = 0;
  *(_QWORD *)(v3 - 60) = 0;
  *(_QWORD *)(v3 - 52) = 0;
  *(_QWORD *)(v3 - 44) = 0;
  *(_QWORD *)(v3 - 36) = 0;
  *(_QWORD *)(v3 - 28) = 0;
  *(_QWORD *)(v3 - 20) = 0;
  *(_DWORD *)(v3 - 12) = 0;
  *(_QWORD *)(v3 + 764) = 0;
  *(_QWORD *)(v3 + 772) = 0;
  *(_QWORD *)(v3 + 780) = 0;
  *(_QWORD *)(v3 + 788) = 0;
  *(_DWORD *)(v3 + 796) = a2;
  *(_QWORD *)(v3 - 8) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  memset((void *)(v3 & 0xFFFFFFFFFFFFFFF8LL), 0, 8 * (((unsigned int)this - (v3 & 0xFFFFFFF8) + 428) >> 3));
  *((_QWORD *)this + 54) = 0;
  *((_QWORD *)this + 117) = 0;
  memset(
    (void *)(((unsigned __int64)this + 440) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)this - (((_DWORD)this + 440) & 0xFFFFFFF8) + 944) >> 3));
}

