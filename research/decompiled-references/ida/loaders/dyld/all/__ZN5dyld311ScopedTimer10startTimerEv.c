__int64 __fastcall dyld3::ScopedTimer::startTimer(dyld3::ScopedTimer *this)
{
  __int64 result; // x0

  result = dyld3::kdebug_trace_dyld_duration_start(
             *(unsigned int *)this,
             *((_QWORD *)this + 1),
             *((_QWORD *)this + 2),
             *((_QWORD *)this + 3),
             *((_QWORD *)this + 4),
             *((_QWORD *)this + 5),
             *((_QWORD *)this + 6));
  *((_QWORD *)this + 13) = result;
  return result;
}
