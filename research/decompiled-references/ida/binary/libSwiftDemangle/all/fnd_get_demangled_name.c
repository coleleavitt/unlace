// attributes: thunk
__int64 __fastcall fnd_get_demangled_name(char *a1, char *dest, size_t n, __int64 a4, __int64 a5, __int64 a6)
{
  return swift_demangle_getDemangledName(a1, dest, n, a4, a5, a6);
}

