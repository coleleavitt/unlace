__int64 __fastcall sub_1939C0(__int64 a1)
{
  __int64 *prev_func; // rax
  unsigned int v2; // edx

  prev_func = (__int64 *)get_prev_func(xmmword_8CC810);
  v2 = 1;
  if ( prev_func )
    return (unsigned __int8)sub_192AA0(a1, *prev_func, -1, 1u);
  return v2;
}
