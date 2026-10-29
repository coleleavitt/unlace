void __fastcall ClpSimplexProgress::startCheck(ClpSimplexProgress *this)
{
  *((_QWORD *)this + 28) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_OWORD *)this + 8) = -1;
  *((_OWORD *)this + 9) = -1;
  *((_OWORD *)this + 10) = -1;
  *((_OWORD *)this + 11) = -1;
  *((_OWORD *)this + 12) = -1;
  *((_OWORD *)this + 13) = -1;
}

