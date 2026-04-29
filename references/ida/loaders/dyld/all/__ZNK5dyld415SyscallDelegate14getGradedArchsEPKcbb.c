__int64 __fastcall dyld4::SyscallDelegate::getGradedArchs(
        dyld4::SyscallDelegate *this,
        const char *a2,
        dyld3::GradedArchs *a3,
        bool a4)
{
  return dyld3::GradedArchs::forCurrentOS(a3, a4, (bool)a3);
}
