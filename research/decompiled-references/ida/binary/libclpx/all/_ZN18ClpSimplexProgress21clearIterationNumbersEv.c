void __fastcall ClpSimplexProgress::clearIterationNumbers(ClpSimplexProgress *this)
{
  *((_DWORD *)this + 71) = -1;
  *(_OWORD *)((char *)this + 268) = -1;
}

