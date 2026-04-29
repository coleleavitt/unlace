__int64 __fastcall dyld4::KernelArgs::findEnvp(dyld4::KernelArgs *this)
{
  return (__int64)this + 8 * *((_QWORD *)this + 1) + 24;
}
