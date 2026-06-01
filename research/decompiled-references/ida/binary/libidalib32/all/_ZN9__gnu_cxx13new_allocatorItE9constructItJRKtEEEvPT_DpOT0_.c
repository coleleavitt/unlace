_WORD *__fastcall __gnu_cxx::new_allocator<unsigned short>::construct<unsigned short,unsigned short const&>(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  __int16 v3; // bx
  _WORD *result; // rax

  v3 = *(_WORD *)std::forward<unsigned short const&>(a3);
  result = (_WORD *)operator new(2u, a2);
  *result = v3;
  return result;
}

