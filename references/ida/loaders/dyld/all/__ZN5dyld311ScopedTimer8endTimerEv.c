__int64 __fastcall dyld3::ScopedTimer::endTimer(dyld3::ScopedTimer *this)
{
  return dyld3::kdebug_trace_dyld_duration_end(
           *((_QWORD *)this + 13),
           *(unsigned int *)this,
           *((_QWORD *)this + 7),
           *((_QWORD *)this + 8),
           *((_QWORD *)this + 9),
           *((_QWORD *)this + 10),
           *((_QWORD *)this + 11),
           *((_QWORD *)this + 12));
}
