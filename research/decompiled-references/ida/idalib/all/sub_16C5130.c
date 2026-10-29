unsigned __int64 *__fastcall sub_16C5130(unsigned __int64 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 *result; // rax

  v2 = *a1;
  result = a1;
  if ( (*a1 & 1) != 0 )
    *a1 = 2 * ((v2 >> 58 << 57) | ~(-1LL << (v2 >> 58)) & (~(-1LL << (v2 >> 58)) & (v2 >> 1) | (1LL << a2))) + 1;
  else
    *(_QWORD *)(*(_QWORD *)v2 + 8LL * (a2 >> 6)) |= 1LL << a2;
  return result;
}
