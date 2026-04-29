__int64 __fastcall dyld4::ProcessConfig::PathOverrides::addPathOverride(
        dyld4::ProcessConfig::PathOverrides *this,
        lsl::Allocator *a2,
        const char *a3,
        const char *a4)
{
  _QWORD *v8; // x20
  __int64 result; // x0
  _QWORD *i; // x8
  _QWORD *v11; // x19
  _QWORD *v12; // t1

  v8 = (_QWORD *)lsl::Allocator::malloc(a2, 0x18u);
  *v8 = 0;
  v8[1] = lsl::Allocator::strdup(a2, a3);
  result = lsl::Allocator::strdup(a2, a4);
  v8[2] = result;
  v12 = *((_QWORD **)this + 16);
  v11 = (_QWORD *)((char *)this + 128);
  for ( i = v12; i; i = (_QWORD *)*i )
    v11 = i;
  *v11 = v8;
  return result;
}
