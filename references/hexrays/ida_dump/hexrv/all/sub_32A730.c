__int64 __fastcall sub_32A730(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 4 )
    return 8;
  if ( a2 == 3 )
    return 4;
  result = 1;
  if ( (unsigned int)(a2 - 34) <= 4 )
    return get_tinfo_size(0, *(_QWORD *)(a1 + 376), 0);
  return result;
}
