_QWORD *__fastcall dyld4::KernelArgs::findApple(dyld4::KernelArgs *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)((char *)this + 8 * *((_QWORD *)this + 1) + 24);
  while ( *result++ )
    ;
  return result;
}
