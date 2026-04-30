__int64 __fastcall sub_193980(__int64 a1)
{
  __int64 *next_func; // rax
  unsigned int v2; // edx

  next_func = (__int64 *)get_next_func(xmmword_8CC810);
  v2 = 1;
  if ( next_func )
    return (unsigned __int8)sub_192AA0(a1, *next_func, -1, 1u);
  return v2;
}
