__int64 __fastcall clang_disposeCXPlatformAvailability(_QWORD *a1)
{
  clang_disposeString(*a1, a1[1]);
  return clang_disposeString(a1[7], a1[8]);
}

