__int64 __fastcall sub_386290(const char ***a1)
{
  __int64 first_seg; // rax
  unsigned int v2; // ebx
  const char *v4; // rsi

  first_seg = get_first_seg();
  if ( first_seg )
    sub_7348F0(*a1, *(unsigned __int8 *)(first_seg + 23));
  v2 = sub_385DC0();
  if ( !(_BYTE)v2 )
    return v2;
  sub_625F20();
  v4 = haystack;
  if ( (*a1)[1] )
    v4 = **a1;
  sub_375980(5u, v4);
  return v2;
}

